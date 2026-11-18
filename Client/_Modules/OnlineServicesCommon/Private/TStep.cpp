// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 81

// operator() @ 14ee29be0

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FAddSessionMember,`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FAddSessionMember>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FAddSessionMember> *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee29c10;
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
    this_00 = *(TOnlineAsyncOp<UE::Online::FAddSessionMember> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)0x0) {
      FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FAddSessionMember>'::__l2::<lambda_1>
      ::operator()((void *)((longlong)this + 0x18),this_00);
      UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>::ExecuteNextStep(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee29c10:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14ee29c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FBatchQueryPresence,UE::Online::FBatchQueryPresenceHelperResult_&,`UE::Online::FPresenceCommon::BatchQueryPresence'::__l2::<lambda_2>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *pTVar1;
  undefined8 *puVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  FOnlineError *pFVar6;
  TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *pTVar7;
  ulonglong uVar8;
  TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *this_00;
  bool bVar9;
  undefined1 auStack_108 [32];
  TSharedRef<UE::Online::FUserPresence_const_,1> *local_e8;
  undefined8 local_e0;
  FOnlineError local_d8;
  TOptional<UE::Online::FOnlineError> local_b0;
  FOnlineError local_80;
  undefined **local_58;
  TSharedRef<UE::Online::FUserPresence_const_,1> *local_50;
  int local_48;
  undefined4 local_44;
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_108;
  pTVar1 = *(TOnlineAsyncOp<UE::Online::FBatchQueryPresence> **)((longlong)this + 0x10);
  pTVar7 = pTVar1;
  this_00 = (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)0x0;
  if (pTVar1 != (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)0x0) {
    aVar4 = *(atomic<int> *)&pTVar1->_padding_;
    do {
      pTVar7 = (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)0x0;
      this_00 = (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_14ee29cb5;
      LOCK();
      aVar5 = *(atomic<int> *)&pTVar1->_padding_;
      bVar9 = aVar4 == aVar5;
      if (bVar9) {
        *(atomic<int> *)&pTVar1->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar9);
    pTVar7 = pTVar1;
    this_00 = *(TOnlineAsyncOp<UE::Online::FBatchQueryPresence> **)((longlong)this + 8);
  }
LAB_14ee29cb5:
  if (this_00 != (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)0x0) {
    puVar2 = *(undefined8 **)((longlong)this + 0x18);
    local_b0.bIsSet = false;
    local_e8 = (TSharedRef<UE::Online::FUserPresence_const_,1> *)*puVar2;
    *puVar2 = 0;
    local_e0 = puVar2[1];
    puVar2[1] = 0;
    local_d8.Details.Object = (IOnlineErrorDetails *)puVar2[2];
    local_d8.Details.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)puVar2[3];
    local_d8.Inner.Object = (FOnlineError *)puVar2[4];
    puVar2[3] = 0;
    puVar2[2] = 0;
    local_d8.Inner.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)puVar2[5];
    puVar2[5] = 0;
    puVar2[4] = 0;
    local_d8.ErrorCode = puVar2[6];
    pFVar6 = UE::Online::Errors::Success(&local_80,&local_b0);
    bVar9 = UE::Online::operator==(&local_d8,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.Details.SharedReferenceCount.ReferenceController);
    if (local_b0.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b0.TypedValue.Details.SharedReferenceCount.ReferenceController);
    }
    if (bVar9) {
      if (((this_00->SharedState).Object)->State < Complete) {
        local_50 = local_e8;
        local_48 = (int)local_e0;
        local_44 = local_e0._4_4_;
        local_58 = &___7__TOnlineResult_UFBatchQueryPresence_Online_UE___Online_UE__6B_;
        local_e8 = (TSharedRef<UE::Online::FUserPresence_const_,1> *)0x0;
        local_e0 = 0;
        local_28 = 0;
        UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::SetResultAndState
                  (this_00,(TOnlineResult<UE::Online::FBatchQueryPresence> *)&local_58,Complete);
        uVar8 = (ulonglong)local_28;
        if ((1 < local_28) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FBatchQueryPresence::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar8] ==
            UE::Core::Private::TDestructorCaller<UE::Online::FBatchQueryPresence::Result>::Destruct)
        {
          DestructItems<TSharedRef<UE::Online::FUserPresence_const_,1>,int>(local_50,local_48);
          if (local_50 != (TSharedRef<UE::Online::FUserPresence_const_,1> *)0x0) {
            FMemory::Free(local_50);
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FBatchQueryPresence::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar8])(&local_50);
        }
      }
    }
    else {
      (**(code **)(this_00->_padding_ + 8))(this_00,&local_d8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.Details.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedRef<UE::Online::FUserPresence_const_,1>,int>(local_e8,(int)local_e0);
    if (local_e8 != (TSharedRef<UE::Online::FUserPresence_const_,1> *)0x0) {
      FMemory::Free(local_e8);
    }
    UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::ExecuteNextStep(this_00);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar7);
  return;
}

// operator() @ 14ee29eb0

void __thiscall
`UE::Online::Private::TStep<UE::Online::FBatchQueryPresenceHelperResult>::
SetExecFunction<UE::Online::FBatchQueryPresence,`UE::Online::FPresenceCommon::BatchQueryPresence'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TFutureBase<UE::Online::FBatchQueryPresenceHelperResult> local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee29ee0;
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
    if (*(longlong *)((longlong)this + 8) != 0) {
      UE::Online::FBatchQueryPresenceHelper::GetPromise
                (*(FBatchQueryPresenceHelper **)((longlong)this + 0x20),
                 (TFuture<UE::Online::FBatchQueryPresenceHelperResult> *)&local_48);
      local_18 = *(longlong *)((longlong)this + 0x10);
      local_28 = *(undefined8 *)this;
      local_20 = *(undefined8 *)((longlong)this + 8);
      if (local_18 != 0) {
        LOCK();
        *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
        UNLOCK();
      }
      TFutureBase<UE::Online::FBatchQueryPresenceHelperResult>::
      Then<_TFutureBase<UE::Online::FBatchQueryPresenceHelperResult>::Next<__UE::Online::Private::TStep<UE::Online::FBatchQueryPresenceHelperResult>::SetExecFunction<UE::Online::FBatchQueryPresence,_UE::Online::FPresenceCommon::BatchQueryPresence_::__l2::<lambda_1>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
                (&local_48,local_38,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.State.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee29ee0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14ee29f70

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FCreateSession,`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FCreateSession>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FCreateSession> *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee29fa0;
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
    this_00 = *(TOnlineAsyncOp<UE::Online::FCreateSession> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FCreateSession> *)0x0) {
      FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FCreateSession>'::__l2::<lambda_1>::
      operator()((void *)((longlong)this + 0x18),this_00);
      UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>::ExecuteNextStep(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee29fa0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14ee29ff0

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFindSessions,`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FFindSessions>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FFindSessions> *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2a020;
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
    this_00 = *(TOnlineAsyncOp<UE::Online::FFindSessions> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFindSessions> *)0x0) {
      FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FFindSessions>'::__l2::<lambda_1>::
      operator()((void *)((longlong)this + 0x18),this_00);
      UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>::ExecuteNextStep(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2a020:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14ee2a070

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FJoinSession,`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FJoinSession>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FJoinSession> *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2a0a0;
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
    this_00 = *(TOnlineAsyncOp<UE::Online::FJoinSession> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FJoinSession> *)0x0) {
      FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FJoinSession>'::__l2::<lambda_1>::
      operator()((void *)((longlong)this + 0x18),this_00);
      UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>::ExecuteNextStep(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2a0a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14ee2a0f0

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FLeaveSession,`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FLeaveSession>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FLeaveSession> *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2a120;
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
    this_00 = *(TOnlineAsyncOp<UE::Online::FLeaveSession> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FLeaveSession> *)0x0) {
      FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FLeaveSession>'::__l2::<lambda_1>::
      operator()((void *)((longlong)this + 0x18),this_00);
      UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>::ExecuteNextStep(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2a120:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14ee2a170

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FRejectSessionInvite,`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRejectSessionInvite>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2a1a0;
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
    this_00 = *(TOnlineAsyncOp<UE::Online::FRejectSessionInvite> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)0x0) {
      FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRejectSessionInvite>'::__l2::
      <lambda_1>::operator()((void *)((longlong)this + 0x18),this_00);
      UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::ExecuteNextStep(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2a1a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14ee2a1f0

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FRemoveSessionMember,`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRemoveSessionMember>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2a220;
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
    this_00 = *(TOnlineAsyncOp<UE::Online::FRemoveSessionMember> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)0x0) {
      FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRemoveSessionMember>'::__l2::
      <lambda_1>::operator()((void *)((longlong)this + 0x18),this_00);
      UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::ExecuteNextStep(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2a220:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14ee2a270

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FSendSessionInvite,`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FSendSessionInvite>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FSendSessionInvite> *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2a2a0;
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
    this_00 = *(TOnlineAsyncOp<UE::Online::FSendSessionInvite> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)0x0) {
      FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FSendSessionInvite>'::__l2::<lambda_1>
      ::operator()((void *)((longlong)this + 0x18),this_00);
      UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>::ExecuteNextStep(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2a2a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14ee2a2f0

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FStartMatchmaking,`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FStartMatchmaking>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FStartMatchmaking> *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2a320;
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
    this_00 = *(TOnlineAsyncOp<UE::Online::FStartMatchmaking> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)0x0) {
      FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FStartMatchmaking>'::__l2::<lambda_1>
      ::operator()((void *)((longlong)this + 0x18),this_00);
      UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>::ExecuteNextStep(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2a320:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14ee2a370

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FUpdateSessionSettings,`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FUpdateSessionSettings>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2a3a0;
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
    this_00 = *(TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)0x0) {
      FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FUpdateSessionSettings>'::__l2::
      <lambda_1>::operator()((void *)((longlong)this + 0x18),this_00);
      UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::ExecuteNextStep(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2a3a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Execute @ 14eecc690

void __thiscall
UE::Online::Private::TStep<UE::Online::FBatchQueryPresenceHelperResult>::Execute
          (TStep<UE::Online::FBatchQueryPresenceHelperResult> *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->ExecFunction == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExecFunction",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                       ,0x1e0,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  Core::Private::Function::CheckCallable(*(void **)&this->ExecFunction);
  plVar1 = *(longlong **)&(this->ExecFunction).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->ExecFunction;
  plVar4 = (longlong *)&(this->ExecFunction).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014eecc6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3);
  return;
}

// Execute @ 14eecc710

void __thiscall UE::Online::Private::TStep<void>::Execute(TStep<void> *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->ExecFunction == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExecFunction",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                       ,0x242,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  Core::Private::Function::CheckCallable(*(void **)&this->ExecFunction);
  plVar1 = *(longlong **)&(this->ExecFunction).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->ExecFunction;
  plVar4 = (longlong *)&(this->ExecFunction).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014eecc77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3);
  return;
}

// GetExecutionPolicy @ 14eedf1f0

FOnlineAsyncExecutionPolicy * __thiscall
UE::Online::Private::TStep<UE::Online::FBatchQueryPresenceHelperResult>::GetExecutionPolicy
          (TStep<UE::Online::FBatchQueryPresenceHelperResult> *this)

{
  return &this->ExecutionPolicy;
}

// GetExecutionPolicy @ 14eedf200

FOnlineAsyncExecutionPolicy * __thiscall
UE::Online::Private::TStep<void>::GetExecutionPolicy(TStep<void> *this)

{
  return &this->ExecutionPolicy;
}

// EmplaceResult<UE::Online::FCreateLobby::Params> @ 14efd8c80

void __thiscall
UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::
EmplaceResult<UE::Online::FCreateLobby::Params>
          (TStep<UE::Online::FCreateLobby::Params> *this,Params *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bResultSet != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bResultSet",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                       ,0x1ee,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(uint *)(this->Result).Pad = (param_1->LocalAccountId).Value;
  *(FName *)((this->Result).Pad + 4) = param_1->LocalName;
  *(FName *)((this->Result).Pad + 0xc) = param_1->SchemaId;
  (this->Result).Pad[0x14] = param_1->bPresenceEnabled;
  *(int *)((this->Result).Pad + 0x18) = param_1->MaxMembers;
  (this->Result).Pad[0x1c] = param_1->JoinPolicy;
  TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              *)((this->Result).Pad + 0x20),
             (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              *)&param_1->Attributes);
  TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              *)((this->Result).Pad + 0x70),
             (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              *)&param_1->UserAttributes);
  this->bResultSet = true;
  return;
}

// EmplaceResult<UE::Online::FJoinLobby::Params> @ 14efd8d20

void __thiscall
UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::
EmplaceResult<UE::Online::FJoinLobby::Params>
          (TStep<UE::Online::FJoinLobby::Params> *this,Params *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bResultSet != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bResultSet",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                       ,0x1ee,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(uint *)(this->Result).Pad = (param_1->LocalAccountId).Value;
  *(FName *)((this->Result).Pad + 4) = param_1->LocalName;
  *(uint *)((this->Result).Pad + 0xc) = (param_1->LobbyId).Value;
  (this->Result).Pad[0x10] = param_1->bPresenceEnabled;
  TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              *)((this->Result).Pad + 0x18),
             (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              *)&param_1->UserAttributes);
  this->bResultSet = true;
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_> @ 14efdb270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>
          (TStep<void> *this,TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,
          Params *param_2,
          TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>
          *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_d8 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_b8;
  TStep<void> *local_a8;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *local_a0;
  TReferenceControllerBase<1> *local_98;
  Params *local_90;
  longlong local_88;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  code *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pTVar10 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_b8);
  local_98 = (pTVar10->SharedReferenceCount).ReferenceController;
  local_a0 = pTVar10->Object;
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_98->WeakReferenceCount = (atomic<int>)((int)local_98->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_60 = *(longlong **)&param_3->field_0x28;
  local_88 = *(longlong *)param_3;
  *(undefined8 *)&param_3->field_0x28 = 0;
  local_68 = *(undefined8 *)&param_3->field_0x20;
  local_78 = *(longlong *)&param_3->field_0x10;
  uStack_70 = *(undefined8 *)&param_3->field_0x18;
  if (local_88 != 0) {
    *(undefined8 *)param_3 = 0;
  }
  local_58 = (code *)0x0;
  local_a8 = this;
  local_90 = param_2;
  puVar11 = FMemory::Malloc(0x60,0x10);
  *puVar11 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__AEAUParams_FCreateLobby_23_V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FCreateLobby_34__Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEAUParams_FCreateLobby_45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FCreateLobby_34__Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puVar11[2] = local_a8;
  puVar11[3] = local_a0;
  puVar11[4] = local_98;
  local_98 = (TReferenceControllerBase<1> *)0x0;
  local_a0 = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  puVar11[5] = local_90;
  puVar11[6] = local_88;
  puVar11[0xb] = local_60;
  local_60 = (longlong *)0x0;
  puVar11[8] = local_78;
  puVar11[9] = uStack_70;
  puVar11[10] = local_68;
  if (puVar11[6] != 0) {
    local_88 = 0;
  }
  lVar8 = *(longlong *)&this->ExecFunction;
  uVar9 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar13 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar11 + 2 != (undefined8 *)0x0) {
    local_58 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_58;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_50;
  uStack_30._0_4_ = SUB84(puVar11,0);
  uStack_30._4_4_ = (undefined4)((ulonglong)puVar11 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_48;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_44;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_40;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_30._4_4_;
  local_58 = (code *)lVar8;
  uStack_50 = uVar9;
  local_48 = uVar3;
  uStack_44 = uVar4;
  uStack_40 = uVar5;
  uStack_3c = uVar6;
  local_38 = uVar7;
  uStack_30 = plVar13;
  if (lVar8 != 0) {
    plVar12 = (longlong *)&local_48;
    if (plVar13 != (longlong *)0x0) {
      plVar12 = plVar13;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_88 != 0) {
    plVar13 = &local_78;
    if (local_60 != (longlong *)0x0) {
      plVar13 = local_60;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(local_98->_padding_ + 8))(local_98,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_> @ 14efdb450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>
          (TStep<void> *this,TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,
          Params *param_2,
          TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>
          *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_d8 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_b8;
  TStep<void> *local_a8;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *local_a0;
  TReferenceControllerBase<1> *local_98;
  Params *local_90;
  longlong local_88;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  code *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pTVar10 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_b8);
  local_98 = (pTVar10->SharedReferenceCount).ReferenceController;
  local_a0 = pTVar10->Object;
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_98->WeakReferenceCount = (atomic<int>)((int)local_98->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_60 = *(longlong **)&param_3->field_0x28;
  local_88 = *(longlong *)param_3;
  *(undefined8 *)&param_3->field_0x28 = 0;
  local_68 = *(undefined8 *)&param_3->field_0x20;
  local_78 = *(longlong *)&param_3->field_0x10;
  uStack_70 = *(undefined8 *)&param_3->field_0x18;
  if (local_88 != 0) {
    *(undefined8 *)param_3 = 0;
  }
  local_58 = (code *)0x0;
  local_a8 = this;
  local_90 = param_2;
  puVar11 = FMemory::Malloc(0x60,0x10);
  *puVar11 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__AEAUParams_FFindLobbies_23_V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FFindLobbies_34__Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEAUParams_FFindLobbies_45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FFindLobbies_34__Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puVar11[2] = local_a8;
  puVar11[3] = local_a0;
  puVar11[4] = local_98;
  local_98 = (TReferenceControllerBase<1> *)0x0;
  local_a0 = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  puVar11[5] = local_90;
  puVar11[6] = local_88;
  puVar11[0xb] = local_60;
  local_60 = (longlong *)0x0;
  puVar11[8] = local_78;
  puVar11[9] = uStack_70;
  puVar11[10] = local_68;
  if (puVar11[6] != 0) {
    local_88 = 0;
  }
  lVar8 = *(longlong *)&this->ExecFunction;
  uVar9 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar13 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar11 + 2 != (undefined8 *)0x0) {
    local_58 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_58;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_50;
  uStack_30._0_4_ = SUB84(puVar11,0);
  uStack_30._4_4_ = (undefined4)((ulonglong)puVar11 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_48;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_44;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_40;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_30._4_4_;
  local_58 = (code *)lVar8;
  uStack_50 = uVar9;
  local_48 = uVar3;
  uStack_44 = uVar4;
  uStack_40 = uVar5;
  uStack_3c = uVar6;
  local_38 = uVar7;
  uStack_30 = plVar13;
  if (lVar8 != 0) {
    plVar12 = (longlong *)&local_48;
    if (plVar13 != (longlong *)0x0) {
      plVar12 = plVar13;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_88 != 0) {
    plVar13 = &local_78;
    if (local_60 != (longlong *)0x0) {
      plVar13 = local_60;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(local_98->_padding_ + 8))(local_98,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_> @ 14efdb630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>
          (TStep<void> *this,TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,
          Params *param_2,
          TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>
          *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_d8 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_b8;
  TStep<void> *local_a8;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *local_a0;
  TReferenceControllerBase<1> *local_98;
  Params *local_90;
  longlong local_88;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  code *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pTVar10 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_b8);
  local_98 = (pTVar10->SharedReferenceCount).ReferenceController;
  local_a0 = pTVar10->Object;
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_98->WeakReferenceCount = (atomic<int>)((int)local_98->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_60 = *(longlong **)&param_3->field_0x28;
  local_88 = *(longlong *)param_3;
  *(undefined8 *)&param_3->field_0x28 = 0;
  local_68 = *(undefined8 *)&param_3->field_0x20;
  local_78 = *(longlong *)&param_3->field_0x10;
  uStack_70 = *(undefined8 *)&param_3->field_0x18;
  if (local_88 != 0) {
    *(undefined8 *)param_3 = 0;
  }
  local_58 = (code *)0x0;
  local_a8 = this;
  local_90 = param_2;
  puVar11 = FMemory::Malloc(0x60,0x10);
  *puVar11 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__AEAUParams_FInviteLobbyMember_23_V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FInviteLobbyMember_34__Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEAUParams_FInviteLobbyMember_45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FInviteLobbyMember_34__Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puVar11[2] = local_a8;
  puVar11[3] = local_a0;
  puVar11[4] = local_98;
  local_98 = (TReferenceControllerBase<1> *)0x0;
  local_a0 = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  puVar11[5] = local_90;
  puVar11[6] = local_88;
  puVar11[0xb] = local_60;
  local_60 = (longlong *)0x0;
  puVar11[8] = local_78;
  puVar11[9] = uStack_70;
  puVar11[10] = local_68;
  if (puVar11[6] != 0) {
    local_88 = 0;
  }
  lVar8 = *(longlong *)&this->ExecFunction;
  uVar9 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar13 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar11 + 2 != (undefined8 *)0x0) {
    local_58 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_58;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_50;
  uStack_30._0_4_ = SUB84(puVar11,0);
  uStack_30._4_4_ = (undefined4)((ulonglong)puVar11 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_48;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_44;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_40;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_30._4_4_;
  local_58 = (code *)lVar8;
  uStack_50 = uVar9;
  local_48 = uVar3;
  uStack_44 = uVar4;
  uStack_40 = uVar5;
  uStack_3c = uVar6;
  local_38 = uVar7;
  uStack_30 = plVar13;
  if (lVar8 != 0) {
    plVar12 = (longlong *)&local_48;
    if (plVar13 != (longlong *)0x0) {
      plVar12 = plVar13;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_88 != 0) {
    plVar13 = &local_78;
    if (local_60 != (longlong *)0x0) {
      plVar13 = local_60;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(local_98->_padding_ + 8))(local_98,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_> @ 14efdb810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>
          (TStep<void> *this,TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,
          Params *param_2,
          TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>
          *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_d8 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_b8;
  TStep<void> *local_a8;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *local_a0;
  TReferenceControllerBase<1> *local_98;
  Params *local_90;
  longlong local_88;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  code *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pTVar10 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_b8);
  local_98 = (pTVar10->SharedReferenceCount).ReferenceController;
  local_a0 = pTVar10->Object;
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_98->WeakReferenceCount = (atomic<int>)((int)local_98->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_60 = *(longlong **)&param_3->field_0x28;
  local_88 = *(longlong *)param_3;
  *(undefined8 *)&param_3->field_0x28 = 0;
  local_68 = *(undefined8 *)&param_3->field_0x20;
  local_78 = *(longlong *)&param_3->field_0x10;
  uStack_70 = *(undefined8 *)&param_3->field_0x18;
  if (local_88 != 0) {
    *(undefined8 *)param_3 = 0;
  }
  local_58 = (code *)0x0;
  local_a8 = this;
  local_90 = param_2;
  puVar11 = FMemory::Malloc(0x60,0x10);
  *puVar11 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__AEAUParams_FJoinLobby_23_V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FJoinLobby_34__Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEAUParams_FJoinLobby_45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FJoinLobby_34__Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puVar11[2] = local_a8;
  puVar11[3] = local_a0;
  puVar11[4] = local_98;
  local_98 = (TReferenceControllerBase<1> *)0x0;
  local_a0 = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  puVar11[5] = local_90;
  puVar11[6] = local_88;
  puVar11[0xb] = local_60;
  local_60 = (longlong *)0x0;
  puVar11[8] = local_78;
  puVar11[9] = uStack_70;
  puVar11[10] = local_68;
  if (puVar11[6] != 0) {
    local_88 = 0;
  }
  lVar8 = *(longlong *)&this->ExecFunction;
  uVar9 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar13 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar11 + 2 != (undefined8 *)0x0) {
    local_58 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_58;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_50;
  uStack_30._0_4_ = SUB84(puVar11,0);
  uStack_30._4_4_ = (undefined4)((ulonglong)puVar11 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_48;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_44;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_40;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_30._4_4_;
  local_58 = (code *)lVar8;
  uStack_50 = uVar9;
  local_48 = uVar3;
  uStack_44 = uVar4;
  uStack_40 = uVar5;
  uStack_3c = uVar6;
  local_38 = uVar7;
  uStack_30 = plVar13;
  if (lVar8 != 0) {
    plVar12 = (longlong *)&local_48;
    if (plVar13 != (longlong *)0x0) {
      plVar12 = plVar13;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_88 != 0) {
    plVar13 = &local_78;
    if (local_60 != (longlong *)0x0) {
      plVar13 = local_60;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(local_98->_padding_ + 8))(local_98,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_> @ 14efdb9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>
          (TStep<void> *this,TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,
          Params *param_2,
          TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>
          *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_d8 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_b8;
  TStep<void> *local_a8;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *local_a0;
  TReferenceControllerBase<1> *local_98;
  Params *local_90;
  longlong local_88;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  code *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pTVar10 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_b8);
  local_98 = (pTVar10->SharedReferenceCount).ReferenceController;
  local_a0 = pTVar10->Object;
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_98->WeakReferenceCount = (atomic<int>)((int)local_98->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_60 = *(longlong **)&param_3->field_0x28;
  local_88 = *(longlong *)param_3;
  *(undefined8 *)&param_3->field_0x28 = 0;
  local_68 = *(undefined8 *)&param_3->field_0x20;
  local_78 = *(longlong *)&param_3->field_0x10;
  uStack_70 = *(undefined8 *)&param_3->field_0x18;
  if (local_88 != 0) {
    *(undefined8 *)param_3 = 0;
  }
  local_58 = (code *)0x0;
  local_a8 = this;
  local_90 = param_2;
  puVar11 = FMemory::Malloc(0x60,0x10);
  *puVar11 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__AEAUParams_FLeaveLobby_23_V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FLeaveLobby_34__Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEAUParams_FLeaveLobby_45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FLeaveLobby_34__Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puVar11[2] = local_a8;
  puVar11[3] = local_a0;
  puVar11[4] = local_98;
  local_98 = (TReferenceControllerBase<1> *)0x0;
  local_a0 = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  puVar11[5] = local_90;
  puVar11[6] = local_88;
  puVar11[0xb] = local_60;
  local_60 = (longlong *)0x0;
  puVar11[8] = local_78;
  puVar11[9] = uStack_70;
  puVar11[10] = local_68;
  if (puVar11[6] != 0) {
    local_88 = 0;
  }
  lVar8 = *(longlong *)&this->ExecFunction;
  uVar9 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar13 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar11 + 2 != (undefined8 *)0x0) {
    local_58 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_58;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_50;
  uStack_30._0_4_ = SUB84(puVar11,0);
  uStack_30._4_4_ = (undefined4)((ulonglong)puVar11 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_48;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_44;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_40;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_30._4_4_;
  local_58 = (code *)lVar8;
  uStack_50 = uVar9;
  local_48 = uVar3;
  uStack_44 = uVar4;
  uStack_40 = uVar5;
  uStack_3c = uVar6;
  local_38 = uVar7;
  uStack_30 = plVar13;
  if (lVar8 != 0) {
    plVar12 = (longlong *)&local_48;
    if (plVar13 != (longlong *)0x0) {
      plVar12 = plVar13;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_88 != 0) {
    plVar13 = &local_78;
    if (local_60 != (longlong *)0x0) {
      plVar13 = local_60;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(local_98->_padding_ + 8))(local_98,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_> @ 14efdbbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>
          (TStep<void> *this,TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,
          Params *param_2,
          TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>
          *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_d8 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_b8;
  TStep<void> *local_a8;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *local_a0;
  TReferenceControllerBase<1> *local_98;
  Params *local_90;
  longlong local_88;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  code *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pTVar10 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_b8);
  local_98 = (pTVar10->SharedReferenceCount).ReferenceController;
  local_a0 = pTVar10->Object;
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_98->WeakReferenceCount = (atomic<int>)((int)local_98->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_60 = *(longlong **)&param_3->field_0x28;
  local_88 = *(longlong *)param_3;
  *(undefined8 *)&param_3->field_0x28 = 0;
  local_68 = *(undefined8 *)&param_3->field_0x20;
  local_78 = *(longlong *)&param_3->field_0x10;
  uStack_70 = *(undefined8 *)&param_3->field_0x18;
  if (local_88 != 0) {
    *(undefined8 *)param_3 = 0;
  }
  local_58 = (code *)0x0;
  local_a8 = this;
  local_90 = param_2;
  puVar11 = FMemory::Malloc(0x60,0x10);
  *puVar11 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__AEAUParams_FModifyLobbyAttributes_23_V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FModifyLobbyAttributes_34__Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEAUParams_FModifyLobbyAttributes_45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FModifyLobbyAttributes_34__Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puVar11[2] = local_a8;
  puVar11[3] = local_a0;
  puVar11[4] = local_98;
  local_98 = (TReferenceControllerBase<1> *)0x0;
  local_a0 = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  puVar11[5] = local_90;
  puVar11[6] = local_88;
  puVar11[0xb] = local_60;
  local_60 = (longlong *)0x0;
  puVar11[8] = local_78;
  puVar11[9] = uStack_70;
  puVar11[10] = local_68;
  if (puVar11[6] != 0) {
    local_88 = 0;
  }
  lVar8 = *(longlong *)&this->ExecFunction;
  uVar9 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar13 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar11 + 2 != (undefined8 *)0x0) {
    local_58 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_58;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_50;
  uStack_30._0_4_ = SUB84(puVar11,0);
  uStack_30._4_4_ = (undefined4)((ulonglong)puVar11 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_48;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_44;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_40;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_30._4_4_;
  local_58 = (code *)lVar8;
  uStack_50 = uVar9;
  local_48 = uVar3;
  uStack_44 = uVar4;
  uStack_40 = uVar5;
  uStack_3c = uVar6;
  local_38 = uVar7;
  uStack_30 = plVar13;
  if (lVar8 != 0) {
    plVar12 = (longlong *)&local_48;
    if (plVar13 != (longlong *)0x0) {
      plVar12 = plVar13;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_88 != 0) {
    plVar13 = &local_78;
    if (local_60 != (longlong *)0x0) {
      plVar13 = local_60;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(local_98->_padding_ + 8))(local_98,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_> @ 14efdbdb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>
          (TStep<void> *this,TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,
          Params *param_2,
          TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>
          *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_d8 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_b8;
  TStep<void> *local_a8;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *local_a0;
  TReferenceControllerBase<1> *local_98;
  Params *local_90;
  longlong local_88;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  code *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pTVar10 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_b8);
  local_98 = (pTVar10->SharedReferenceCount).ReferenceController;
  local_a0 = pTVar10->Object;
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_98->WeakReferenceCount = (atomic<int>)((int)local_98->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_60 = *(longlong **)&param_3->field_0x28;
  local_88 = *(longlong *)param_3;
  *(undefined8 *)&param_3->field_0x28 = 0;
  local_68 = *(undefined8 *)&param_3->field_0x20;
  local_78 = *(longlong *)&param_3->field_0x10;
  uStack_70 = *(undefined8 *)&param_3->field_0x18;
  if (local_88 != 0) {
    *(undefined8 *)param_3 = 0;
  }
  local_58 = (code *)0x0;
  local_a8 = this;
  local_90 = param_2;
  puVar11 = FMemory::Malloc(0x60,0x10);
  *puVar11 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__AEAUParams_FModifyLobbyMemberAttributes_23_V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FModifyLobbyMemberAttributes_34__Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45_AEAUParams_FModifyLobbyMemberAttributes_45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE____QEAUParams_FModifyLobbyMemberAttributes_34__Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puVar11[2] = local_a8;
  puVar11[3] = local_a0;
  puVar11[4] = local_98;
  local_98 = (TReferenceControllerBase<1> *)0x0;
  local_a0 = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  puVar11[5] = local_90;
  puVar11[6] = local_88;
  puVar11[0xb] = local_60;
  local_60 = (longlong *)0x0;
  puVar11[8] = local_78;
  puVar11[9] = uStack_70;
  puVar11[10] = local_68;
  if (puVar11[6] != 0) {
    local_88 = 0;
  }
  lVar8 = *(longlong *)&this->ExecFunction;
  uVar9 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar13 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar11 + 2 != (undefined8 *)0x0) {
    local_58 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_58;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_50;
  uStack_30._0_4_ = SUB84(puVar11,0);
  uStack_30._4_4_ = (undefined4)((ulonglong)puVar11 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_48;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_44;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_40;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_30._4_4_;
  local_58 = (code *)lVar8;
  uStack_50 = uVar9;
  local_48 = uVar3;
  uStack_44 = uVar4;
  uStack_40 = uVar5;
  uStack_3c = uVar6;
  local_38 = uVar7;
  uStack_30 = plVar13;
  if (lVar8 != 0) {
    plVar12 = (longlong *)&local_48;
    if (plVar13 != (longlong *)0x0) {
      plVar12 = plVar13;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_88 != 0) {
    plVar13 = &local_78;
    if (local_60 != (longlong *)0x0) {
      plVar13 = local_60;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(local_98->_padding_ + 8))(local_98,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return;
}

// SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_> @ 14efdd2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>
          (TStep<void> *this,TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,
          TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>
          *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_d8 [32];
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> local_b8;
  TStep<void> *local_a8;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *local_a0;
  TReferenceControllerBase<1> *local_98;
  longlong local_88;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  code *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pTVar10 = TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::
            AsShared((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
                      *)&param_1->_padding_,&local_b8);
  local_98 = (pTVar10->SharedReferenceCount).ReferenceController;
  local_a0 = pTVar10->Object;
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_98->WeakReferenceCount = (atomic<int>)((int)local_98->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_60 = *(longlong **)&param_2->field_0x28;
  local_88 = *(longlong *)param_2;
  *(undefined8 *)&param_2->field_0x28 = 0;
  local_68 = *(undefined8 *)&param_2->field_0x20;
  local_78 = *(longlong *)&param_2->field_0x10;
  uStack_70 = *(undefined8 *)&param_2->field_0x18;
  if (local_88 != 0) {
    *(undefined8 *)param_2 = 0;
  }
  local_58 = (code *)0x0;
  local_a8 = this;
  puVar11 = FMemory::Malloc(0x60,0x10);
  *puVar11 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____SetExecFunction_UFFunctionalTestLobbies_Online_UE__V__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z_____TStep_X_Private_Online_UE__QEAAXAEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___45___QEAV__TFunction___A6A_AV__TFuture_X__AEAV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puVar11[2] = local_a8;
  puVar11[3] = local_a0;
  puVar11[4] = local_98;
  local_98 = (TReferenceControllerBase<1> *)0x0;
  local_a0 = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  puVar11[6] = local_88;
  puVar11[0xb] = local_60;
  local_60 = (longlong *)0x0;
  puVar11[8] = local_78;
  puVar11[9] = uStack_70;
  puVar11[10] = local_68;
  if (puVar11[6] != 0) {
    local_88 = 0;
  }
  lVar8 = *(longlong *)&this->ExecFunction;
  uVar9 = *(undefined8 *)&(this->ExecFunction).field_0x8;
  uVar3 = *(undefined4 *)&(this->ExecFunction).field_0x10;
  uVar4 = *(undefined4 *)&(this->ExecFunction).field_0x14;
  uVar5 = *(undefined4 *)&(this->ExecFunction).field_0x18;
  uVar6 = *(undefined4 *)&(this->ExecFunction).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ExecFunction).field_0x20;
  plVar13 = *(longlong **)&(this->ExecFunction).field_0x28;
  if (puVar11 + 2 != (undefined8 *)0x0) {
    local_58 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->ExecFunction = local_58;
  *(undefined8 *)&(this->ExecFunction).field_0x8 = uStack_50;
  uStack_30._0_4_ = SUB84(puVar11,0);
  uStack_30._4_4_ = (undefined4)((ulonglong)puVar11 >> 0x20);
  *(undefined4 *)&(this->ExecFunction).field_0x10 = local_48;
  *(undefined4 *)&(this->ExecFunction).field_0x14 = uStack_44;
  *(undefined4 *)&(this->ExecFunction).field_0x18 = uStack_40;
  *(undefined4 *)&(this->ExecFunction).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->ExecFunction).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->ExecFunction).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->ExecFunction).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->ExecFunction).field_0x2c = uStack_30._4_4_;
  local_58 = (code *)lVar8;
  uStack_50 = uVar9;
  local_48 = uVar3;
  uStack_44 = uVar4;
  uStack_40 = uVar5;
  uStack_3c = uVar6;
  local_38 = uVar7;
  uStack_30 = plVar13;
  if (lVar8 != 0) {
    plVar12 = (longlong *)&local_48;
    if (plVar13 != (longlong *)0x0) {
      plVar12 = plVar13;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_88 != 0) {
    plVar13 = &local_78;
    if (local_60 != (longlong *)0x0) {
      plVar13 = local_60;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(local_98->_padding_ + 8))(local_98,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 14efe9bf0

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  undefined8 uVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  TFutureBase<void> local_48;
  undefined1 local_38 [16];
  <lambda_1> local_28;
  
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar8->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efe9c23;
      }
      LOCK();
      aVar5 = pTVar8->SharedReferenceCount;
      bVar9 = aVar4 == aVar5;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar9);
    lVar1 = *(longlong *)((longlong)this + 8);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)((longlong)this + 0x18);
      UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
      pcVar3 = *(code **)((longlong)this + 0x20);
      plVar7 = (longlong *)((longlong)this + 0x30);
      if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
        plVar7 = *(longlong **)((longlong)this + 0x48);
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(&local_48,uVar6,lVar1,uVar2);
      local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
      local_28.Continuation.__this = *(TStep<void> **)this;
      local_28.Continuation.WeakOperation.Object =
           *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
      if (local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
        WeakReferenceCount =
             (atomic<int>)
             ((int)(local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
                   WeakReferenceCount + 1);
        UNLOCK();
      }
      TFutureBase<void>::
      Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
                (&local_48,(TFuture<void> *)local_38,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_38._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.State.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14efe9c23:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// operator() @ 14efe9cf0

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  undefined8 uVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  TFutureBase<void> local_48;
  undefined1 local_38 [16];
  <lambda_1> local_28;
  
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar8->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efe9d23;
      }
      LOCK();
      aVar5 = pTVar8->SharedReferenceCount;
      bVar9 = aVar4 == aVar5;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar9);
    lVar1 = *(longlong *)((longlong)this + 8);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)((longlong)this + 0x18);
      UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
      pcVar3 = *(code **)((longlong)this + 0x20);
      plVar7 = (longlong *)((longlong)this + 0x30);
      if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
        plVar7 = *(longlong **)((longlong)this + 0x48);
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(&local_48,uVar6,lVar1,uVar2);
      local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
      local_28.Continuation.__this = *(TStep<void> **)this;
      local_28.Continuation.WeakOperation.Object =
           *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
      if (local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
        WeakReferenceCount =
             (atomic<int>)
             ((int)(local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
                   WeakReferenceCount + 1);
        UNLOCK();
      }
      TFutureBase<void>::
      Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
                (&local_48,(TFuture<void> *)local_38,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_38._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.State.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14efe9d23:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// operator() @ 14efe9df0

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  undefined8 uVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  TFutureBase<void> local_48;
  undefined1 local_38 [16];
  <lambda_1> local_28;
  
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar8->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efe9e23;
      }
      LOCK();
      aVar5 = pTVar8->SharedReferenceCount;
      bVar9 = aVar4 == aVar5;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar9);
    lVar1 = *(longlong *)((longlong)this + 8);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)((longlong)this + 0x18);
      UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
      pcVar3 = *(code **)((longlong)this + 0x20);
      plVar7 = (longlong *)((longlong)this + 0x30);
      if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
        plVar7 = *(longlong **)((longlong)this + 0x48);
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(&local_48,uVar6,lVar1,uVar2);
      local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
      local_28.Continuation.__this = *(TStep<void> **)this;
      local_28.Continuation.WeakOperation.Object =
           *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
      if (local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
        WeakReferenceCount =
             (atomic<int>)
             ((int)(local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
                   WeakReferenceCount + 1);
        UNLOCK();
      }
      TFutureBase<void>::
      Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
                (&local_48,(TFuture<void> *)local_38,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_38._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.State.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14efe9e23:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// operator() @ 14efe9ef0

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  undefined8 uVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  TFutureBase<void> local_48;
  undefined1 local_38 [16];
  <lambda_1> local_28;
  
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar8->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efe9f23;
      }
      LOCK();
      aVar5 = pTVar8->SharedReferenceCount;
      bVar9 = aVar4 == aVar5;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar9);
    lVar1 = *(longlong *)((longlong)this + 8);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)((longlong)this + 0x18);
      UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
      pcVar3 = *(code **)((longlong)this + 0x20);
      plVar7 = (longlong *)((longlong)this + 0x30);
      if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
        plVar7 = *(longlong **)((longlong)this + 0x48);
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(&local_48,uVar6,lVar1,uVar2);
      local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
      local_28.Continuation.__this = *(TStep<void> **)this;
      local_28.Continuation.WeakOperation.Object =
           *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
      if (local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
        WeakReferenceCount =
             (atomic<int>)
             ((int)(local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
                   WeakReferenceCount + 1);
        UNLOCK();
      }
      TFutureBase<void>::
      Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
                (&local_48,(TFuture<void> *)local_38,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_38._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.State.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14efe9f23:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// operator() @ 14efe9ff0

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  undefined8 uVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  TFutureBase<void> local_48;
  undefined1 local_38 [16];
  <lambda_1> local_28;
  
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar8->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efea023;
      }
      LOCK();
      aVar5 = pTVar8->SharedReferenceCount;
      bVar9 = aVar4 == aVar5;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar9);
    lVar1 = *(longlong *)((longlong)this + 8);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)((longlong)this + 0x18);
      UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
      pcVar3 = *(code **)((longlong)this + 0x20);
      plVar7 = (longlong *)((longlong)this + 0x30);
      if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
        plVar7 = *(longlong **)((longlong)this + 0x48);
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(&local_48,uVar6,lVar1,uVar2);
      local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
      local_28.Continuation.__this = *(TStep<void> **)this;
      local_28.Continuation.WeakOperation.Object =
           *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
      if (local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
        WeakReferenceCount =
             (atomic<int>)
             ((int)(local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
                   WeakReferenceCount + 1);
        UNLOCK();
      }
      TFutureBase<void>::
      Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
                (&local_48,(TFuture<void> *)local_38,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_38._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.State.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14efea023:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// operator() @ 14efea0f0

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  undefined8 uVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  TFutureBase<void> local_48;
  undefined1 local_38 [16];
  <lambda_1> local_28;
  
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar8->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efea123;
      }
      LOCK();
      aVar5 = pTVar8->SharedReferenceCount;
      bVar9 = aVar4 == aVar5;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar9);
    lVar1 = *(longlong *)((longlong)this + 8);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)((longlong)this + 0x18);
      UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
      pcVar3 = *(code **)((longlong)this + 0x20);
      plVar7 = (longlong *)((longlong)this + 0x30);
      if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
        plVar7 = *(longlong **)((longlong)this + 0x48);
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(&local_48,uVar6,lVar1,uVar2);
      local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
      local_28.Continuation.__this = *(TStep<void> **)this;
      local_28.Continuation.WeakOperation.Object =
           *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
      if (local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
        WeakReferenceCount =
             (atomic<int>)
             ((int)(local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
                   WeakReferenceCount + 1);
        UNLOCK();
      }
      TFutureBase<void>::
      Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
                (&local_48,(TFuture<void> *)local_38,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_38._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.State.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14efea123:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// operator() @ 14efea1f0

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  undefined8 uVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  TFutureBase<void> local_48;
  undefined1 local_38 [16];
  <lambda_1> local_28;
  
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar8->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efea223;
      }
      LOCK();
      aVar5 = pTVar8->SharedReferenceCount;
      bVar9 = aVar4 == aVar5;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar9);
    lVar1 = *(longlong *)((longlong)this + 8);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)((longlong)this + 0x18);
      UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
      pcVar3 = *(code **)((longlong)this + 0x20);
      plVar7 = (longlong *)((longlong)this + 0x30);
      if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
        plVar7 = *(longlong **)((longlong)this + 0x48);
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(&local_48,uVar6,lVar1,uVar2);
      local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
      local_28.Continuation.__this = *(TStep<void> **)this;
      local_28.Continuation.WeakOperation.Object =
           *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
      if (local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
        WeakReferenceCount =
             (atomic<int>)
             ((int)(local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
                   WeakReferenceCount + 1);
        UNLOCK();
      }
      TFutureBase<void>::
      Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
                (&local_48,(TFuture<void> *)local_38,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_38._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.State.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14efea223:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// operator() @ 14efea2f0

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_&,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_13>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  byte bVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  FOnlineError *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FOnlineError local_78;
  TOptional<UE::Online::FOnlineError> local_50;
  
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efea320;
      }
      LOCK();
      aVar5 = pTVar7->SharedReferenceCount;
      bVar8 = aVar4 == aVar5;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar8);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar2 = *(longlong *)((longlong)this + 0x18);
      bVar1 = *(byte *)(lVar2 + 0x30);
      if ((1 < (ulonglong)bVar1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + (ulonglong)bVar1) != '\0') {
        bVar1 = *(byte *)(lVar2 + 0x30);
        pcVar3 = *(code **)(this_00->_padding_ + 8);
        if ((1 < (ulonglong)bVar1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((*(char *)((longlong)
                       &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                        ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsError()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                               ,0x8c,
                               L"It is an error to call GetErrorValue() on a TResult that does not hold an error value. Please either check IsError() or use TryGetErrorValue"
                              ), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((*(char *)(lVar2 + 0x30) != '\x01') &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_50.TypedValue.Details.Object = *(IOnlineErrorDetails **)(lVar2 + 8);
        local_50.TypedValue.Details.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(lVar2 + 0x10);
        if (local_50.TypedValue.Details.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_50.TypedValue.Details.SharedReferenceCount.ReferenceController)->
          SharedReferenceCount =
               (atomic<int>)
               ((int)(local_50.TypedValue.Details.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_50.TypedValue.Inner.Object = *(FOnlineError **)(lVar2 + 0x18);
        local_50.TypedValue.Inner.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(lVar2 + 0x20);
        if (local_50.TypedValue.Inner.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_50.TypedValue.Inner.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_50.TypedValue.Inner.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        local_50.TypedValue.ErrorCode = *(ulong64 *)(lVar2 + 0x28);
        local_50.bIsSet = true;
        pFVar6 = UE::Online::Errors::Cancelled(&local_78,&local_50);
        (*pcVar3)(this_00,pFVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.Details.SharedReferenceCount.ReferenceController);
        if (local_50.bIsSet != false) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_50.TypedValue.Inner.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_50.TypedValue.Details.SharedReferenceCount.ReferenceController);
        }
      }
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
    }
  }
LAB_14efea320:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// operator() @ 14efea4e0

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_10>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  FLobbyEventCapture *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar5;
  FOnlineError *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar7->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efea510;
      }
      LOCK();
      aVar4 = pTVar7->SharedReferenceCount;
      bVar8 = aVar3 == aVar4;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar8);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      pTVar5 = UE::Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this_00,&LobbyEventCaptureKeyName);
      pFVar1 = pTVar5->Object;
      if ((((pFVar1->TotalNotificationsReceived != 2) || ((pFVar1->LobbyJoined).ArrayNum != 1)) ||
          ((pFVar1->LobbyMemberJoined).ArrayNum != 1)) ||
         (*(int *)((pFVar1->LobbyMemberJoined).AllocatorInstance.Data + 0x20) <
          *(int *)((pFVar1->LobbyJoined).AllocatorInstance.Data + 0x10))) {
        local_40.bIsSet = false;
        pcVar2 = *(code **)(this_00->_padding_ + 8);
        pFVar6 = UE::Online::Errors::Cancelled(&local_68,&local_40);
        (*pcVar2)(this_00,pFVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.Details.SharedReferenceCount.ReferenceController);
        if (local_40.bIsSet != false) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
        }
      }
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
    }
  }
LAB_14efea510:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// operator() @ 14efea5e0

void __thiscall
`UE::Online::Private::TStep<UE::Online::FInviteLobbyMember::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_11>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  longlong lVar4;
  code *pcVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar8;
  Result *pRVar9;
  Result *pRVar10;
  Result *pRVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  
  pTVar12 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar12->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efea610;
      }
      LOCK();
      aVar7 = pTVar12->SharedReferenceCount;
      bVar13 = aVar6 == aVar7;
      if (bVar13) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar13);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar4 = *(longlong *)this;
      pTVar8 = UE::Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this_00,&LobbyEventCaptureKeyName);
      UE::Online::FLobbyEventCapture::Empty(pTVar8->Object);
      pRVar9 = UE::Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (this_00,&User1KeyName);
      pRVar10 = UE::Online::
                GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                          (this_00,&User2KeyName);
      pRVar11 = UE::Online::
                GetOpDataChecked<UE::Online::FCreateLobby::Result,UE::Online::FFunctionalTestLobbies>
                          (this_00,&CreateLobbyKeyName);
      if (((pRVar9->AccountInfo).Object == (FAccountInfo *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar1 = (((pRVar9->AccountInfo).Object)->AccountId).Value;
      if (((pRVar11->Lobby).Object == (FLobby *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar2 = (((pRVar11->Lobby).Object)->LobbyId).Value;
      if (((pRVar10->AccountInfo).Object == (FAccountInfo *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar3 = (((pRVar10->AccountInfo).Object)->AccountId).Value;
      if ((*(char *)(lVar4 + 0x4c) != '\0') &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bResultSet",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                              ,0x1ee,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(ulonglong *)(lVar4 + 0x40) = CONCAT44(uVar2,uVar1);
      *(uint *)(lVar4 + 0x48) = uVar3;
      *(undefined1 *)(lVar4 + 0x4c) = 1;
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
      return;
    }
  }
LAB_14efea610:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// operator() @ 14efea7a0

void __thiscall
`UE::Online::Private::
TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_12>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  float fVar1;
  TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> TVar2;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  Result *pRVar7;
  Result *pRVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
  local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  
  pTVar9 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar9->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efea7d5;
      }
      LOCK();
      aVar6 = pTVar9->SharedReferenceCount;
      bVar10 = aVar5 == aVar6;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar10);
    pTVar3 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (pTVar3 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      pRVar7 = UE::Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (pTVar3,&User2KeyName);
      pRVar8 = UE::Online::
               GetOpDataChecked<UE::Online::FCreateLobby::Result,UE::Online::FFunctionalTestLobbies>
                         (pTVar3,&CreateLobbyKeyName);
      fVar1 = *(float *)(*(longlong *)((longlong)this + 0x18) + 0x60);
      if (((pRVar8->Lobby).Object == (FLobby *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TVar2.Value = (((pRVar8->Lobby).Object)->LobbyId).Value;
      if (((pRVar7->AccountInfo).Object == (FAccountInfo *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UE::Online::Private::AwaitInvitation
                ((TFuture<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
                  *)&local_58,*(FLobbyEvents **)((longlong)this + 0x28),
                 (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>)
                 (((pRVar7->AccountInfo).Object)->AccountId).Value,TVar2,fVar1);
      local_28 = *(longlong *)((longlong)this + 0x10);
      local_38 = *(undefined8 *)this;
      local_30 = *(undefined8 *)((longlong)this + 8);
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
        UNLOCK();
      }
      TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
      ::
      Then<_TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Next<__UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_12>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
                (&local_58,local_48,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.State.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14efea7d5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// operator() @ 14efea920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_14>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  TStep<UE::Online::FJoinLobby::Params> *this_01;
  code *pcVar1;
  int iVar2;
  atomic<int> aVar3;
  uint uVar4;
  atomic<int> aVar5;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar6;
  Result *pRVar7;
  Result *pRVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [24];
  undefined1 local_90 [32];
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pTVar9 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efea97a;
      }
      LOCK();
      aVar5 = pTVar9->SharedReferenceCount;
      bVar10 = aVar3 == aVar5;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar10);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      this_01 = *(TStep<UE::Online::FJoinLobby::Params> **)this;
      pTVar6 = UE::Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this_00,&LobbyEventCaptureKeyName);
      UE::Online::FLobbyEventCapture::Empty(pTVar6->Object);
      pRVar7 = UE::Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (this_00,&User2KeyName);
      pRVar8 = UE::Online::
               GetOpDataChecked<UE::Online::FCreateLobby::Result,UE::Online::FFunctionalTestLobbies>
                         (this_00,&CreateLobbyKeyName);
      local_68 = ___xmm_00000000ffffffff0000008000000000;
      uStack_60 = _UNK_150631d98;
      local_a8[0x10] = false;
      local_90._0_8_ = (FScriptContainerElement *)0x0;
      local_90._8_8_ = 0;
      local_70 = (void *)0x0;
      local_50 = (void *)0x0;
      local_48 = 0;
      if (((pRVar7->AccountInfo).Object == (FAccountInfo *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_a8._0_4_ = (((pRVar7->AccountInfo).Object)->AccountId).Value;
      local_a8._4_4_ = LocalLobbyName.ComparisonIndex.Value;
      local_a8._8_4_ = LocalLobbyName.Number;
      if (((pRVar8->Lobby).Object == (FLobby *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_a8._12_4_ = (((pRVar8->Lobby).Object)->LobbyId).Value;
      UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::
      EmplaceResult<UE::Online::FJoinLobby::Params>(this_01,(Params *)local_a8);
      local_48 = 0;
      if (local_50 != (void *)0x0) {
        FMemory::Free(local_50);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_90,0,local_90._8_4_);
      iVar2 = SUB84(local_90._8_8_,4);
      local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
      }
      uVar4 = local_68._4_4_;
      uStack_60 = 0xffffffff;
      local_68 = (ulonglong)local_68._4_4_ << 0x20;
      if (0x80 < uVar4) {
        local_68 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
      }
      if (local_70 != (void *)0x0) {
        FMemory::Free(local_70);
      }
      if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_90._0_8_);
      }
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
    }
  }
LAB_14efea97a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// operator() @ 14efeab60

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_15>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar4;
  FOnlineError *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efeab90;
      }
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      pTVar4 = UE::Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this_00,&LobbyEventCaptureKeyName);
      if ((pTVar4->Object->TotalNotificationsReceived != 1) ||
         ((pTVar4->Object->LobbyMemberJoined).ArrayNum != 1)) {
        local_40.bIsSet = false;
        pcVar1 = *(code **)(this_00->_padding_ + 8);
        pFVar5 = UE::Online::Errors::Cancelled(&local_68,&local_40);
        (*pcVar1)(this_00,pFVar5);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.Details.SharedReferenceCount.ReferenceController);
        if (local_40.bIsSet != false) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
        }
      }
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
    }
  }
LAB_14efeab90:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// operator() @ 14efeac50

void __thiscall
`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_16>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  uint uVar2;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar7;
  Result *pRVar8;
  Result *pRVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar10->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efeac80;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar3 = *(longlong *)this;
      pTVar7 = UE::Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this_00,&LobbyEventCaptureKeyName);
      UE::Online::FLobbyEventCapture::Empty(pTVar7->Object);
      pRVar8 = UE::Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (this_00,&User2KeyName);
      pRVar9 = UE::Online::
               GetOpDataChecked<UE::Online::FCreateLobby::Result,UE::Online::FFunctionalTestLobbies>
                         (this_00,&CreateLobbyKeyName);
      if (((pRVar8->AccountInfo).Object == (FAccountInfo *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar1 = (((pRVar8->AccountInfo).Object)->AccountId).Value;
      if (((pRVar9->Lobby).Object == (FLobby *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar2 = (((pRVar9->Lobby).Object)->LobbyId).Value;
      if ((*(char *)(lVar3 + 0x48) != '\0') &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bResultSet",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                              ,0x1ee,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(ulonglong *)(lVar3 + 0x40) = CONCAT44(uVar2,uVar1);
      *(undefined1 *)(lVar3 + 0x48) = 1;
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      return;
    }
  }
LAB_14efeac80:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// operator() @ 14efeadb0

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_17>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar4;
  FOnlineError *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efeade0;
      }
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      pTVar4 = UE::Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this_00,&LobbyEventCaptureKeyName);
      if ((pTVar4->Object->TotalNotificationsReceived != 1) ||
         ((pTVar4->Object->LobbyMemberLeft).ArrayNum != 1)) {
        local_40.bIsSet = false;
        pcVar1 = *(code **)(this_00->_padding_ + 8);
        pFVar5 = UE::Online::Errors::Cancelled(&local_68,&local_40);
        (*pcVar1)(this_00,pFVar5);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.Details.SharedReferenceCount.ReferenceController);
        if (local_40.bIsSet != false) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
        }
      }
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
    }
  }
LAB_14efeade0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// operator() @ 14efeaea0

void __thiscall
`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_18>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  uint uVar2;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar7;
  Result *pRVar8;
  Result *pRVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar10->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efeaed0;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar3 = *(longlong *)this;
      pTVar7 = UE::Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this_00,&LobbyEventCaptureKeyName);
      UE::Online::FLobbyEventCapture::Empty(pTVar7->Object);
      pRVar8 = UE::Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (this_00,&User1KeyName);
      pRVar9 = UE::Online::
               GetOpDataChecked<UE::Online::FCreateLobby::Result,UE::Online::FFunctionalTestLobbies>
                         (this_00,&CreateLobbyKeyName);
      if (((pRVar8->AccountInfo).Object == (FAccountInfo *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar1 = (((pRVar8->AccountInfo).Object)->AccountId).Value;
      if (((pRVar9->Lobby).Object == (FLobby *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar2 = (((pRVar9->Lobby).Object)->LobbyId).Value;
      if ((*(char *)(lVar3 + 0x48) != '\0') &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bResultSet",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                              ,0x1ee,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(ulonglong *)(lVar3 + 0x40) = CONCAT44(uVar2,uVar1);
      *(undefined1 *)(lVar3 + 0x48) = 1;
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      return;
    }
  }
LAB_14efeaed0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// operator() @ 14efeb000

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_19>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  FLobbyEventCapture *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar6;
  FOnlineError *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_14efeb030;
  aVar4 = pTVar8->SharedReferenceCount;
  do {
    if (aVar4 == (atomic<int>)0x0) {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      goto LAB_14efeb030;
    }
    LOCK();
    aVar5 = pTVar8->SharedReferenceCount;
    bVar9 = aVar4 == aVar5;
    if (bVar9) {
      pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
      aVar5 = aVar4;
    }
    UNLOCK();
    aVar4 = aVar5;
  } while (!bVar9);
  this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
  if (this_00 == (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) goto LAB_14efeb030;
  pTVar6 = UE::Online::
           GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                     (this_00,&LobbyEventCaptureKeyName);
  pFVar1 = pTVar6->Object;
  if (((pFVar1->TotalNotificationsReceived == 2) && ((pFVar1->LobbyLeft).ArrayNum == 1)) &&
     ((pFVar1->LobbyMemberLeft).ArrayNum == 1)) {
    pFVar2 = (pFVar1->LobbyMemberLeft).AllocatorInstance.Data;
    if (((pFVar1->LobbyLeft).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(int *)((pFVar1->LobbyLeft).AllocatorInstance.Data + 0x10) < *(int *)(pFVar2 + 0x28))
    goto LAB_14efeb0dc;
  }
  else {
LAB_14efeb0dc:
    local_40.bIsSet = false;
    pcVar3 = *(code **)(this_00->_padding_ + 8);
    pFVar7 = UE::Online::Errors::Cancelled(&local_68,&local_40);
    (*pcVar3)(this_00,pFVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Details.SharedReferenceCount.ReferenceController);
    if (local_40.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
    }
  }
  UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
LAB_14efeb030:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// operator() @ 14efeb150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  TStep<UE::Online::FCreateLobby::Params> *this_01;
  code *pcVar1;
  int iVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar5;
  Result *pRVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [8];
  FName *local_110;
  FSchemaVariant *local_108;
  FName *local_100;
  FSchemaVariant *local_f8;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  ForElementType<FSetElementId> local_88;
  int local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar7->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efeb1aa;
      }
      LOCK();
      aVar4 = pTVar7->SharedReferenceCount;
      bVar8 = aVar3 == aVar4;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar8);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      this_01 = *(TStep<UE::Online::FCreateLobby::Params> **)this;
      pTVar5 = UE::Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this_00,&LobbyEventCaptureKeyName);
      UE::Online::FLobbyEventCapture::Empty(pTVar5->Object);
      pRVar6 = UE::Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (this_00,&User1KeyName);
      local_e8[0x14] = false;
      local_c8._0_8_ = (FScriptContainerElement *)0x0;
      local_c8._8_8_ = 0;
      local_a8 = (void *)0x0;
      local_a0 = 0;
      local_9c = 0x80;
      local_98 = 0xffffffff;
      local_94 = 0;
      local_88 = (ForElementType<FSetElementId>)0x0;
      local_80 = 0;
      local_78._0_8_ = (FScriptContainerElement *)0x0;
      local_78._8_8_ = 0;
      local_58 = (void *)0x0;
      local_50 = 0;
      local_4c = 0x80;
      local_48 = 0xffffffff;
      local_44 = 0;
      local_38 = (ForElementType<FSetElementId>)0x0;
      local_30 = 0;
      if (((pRVar6->AccountInfo).Object == (FAccountInfo *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_e8._0_4_ = (((pRVar6->AccountInfo).Object)->AccountId).Value;
      local_e8._4_4_ = LocalLobbyName.ComparisonIndex.Value;
      local_e8._8_4_ = LocalLobbyName.Number;
      local_e8._12_4_ = LobbySchemaId.ComparisonIndex.Value;
      local_e8._16_4_ = LobbySchemaId.Number;
      local_110 = &LobbyAttributeId1;
      local_108 = &LobbyAttribute1Value1;
      local_e8._24_4_ = 2;
      local_e8[0x1c] = InvitationOnly;
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,UE::Online::FSchemaVariant_const_&>_>
                ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)local_c8,
                 (TPairInitializer<FName_const_&,UE::Online::FSchemaVariant_const_&> *)local_118,
                 (bool *)&local_110);
      local_100 = &LobbyMemberAttributeId1;
      local_f8 = &LobbyMemberAttribute1Value1;
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,UE::Online::FSchemaVariant_const_&>_>
                ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)local_78,
                 (TPairInitializer<FName_const_&,UE::Online::FSchemaVariant_const_&> *)
                 (local_118 + 4),(bool *)&local_100);
      UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::
      EmplaceResult<UE::Online::FCreateLobby::Params>(this_01,(Params *)local_e8);
      local_30 = 0;
      if (local_38 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_38);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_78,0,local_78._8_4_);
      iVar2 = SUB84(local_78._8_8_,4);
      local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
      }
      local_48 = 0xffffffff;
      local_44 = 0;
      local_50 = 0;
      if (0x80 < local_4c) {
        local_4c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
      }
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_78._0_8_);
      }
      local_80 = 0;
      if (local_88 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_c8,0,local_c8._8_4_);
      iVar2 = SUB84(local_c8._8_8_,4);
      local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
      }
      local_98 = 0xffffffff;
      local_94 = 0;
      local_a0 = 0;
      if (0x80 < local_9c) {
        local_9c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
      }
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
      if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_c8._0_8_);
      }
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
    }
  }
LAB_14efeb1aa:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// operator() @ 14efeb470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_20>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  TStep<UE::Online::FCreateLobby::Params> *this_01;
  atomic<int> aVar1;
  atomic<int> aVar2;
  Params *pPVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [96];
  void *local_78;
  undefined4 local_70;
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_68;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efeb4b2;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      this_01 = *(TStep<UE::Online::FCreateLobby::Params> **)this;
      pPVar3 = RunLobbyFunctionalTest'::__l2::<lambda_20>::operator()
                         ((void *)((longlong)this + 0x18),(Params *)local_d8,this_00);
      UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::
      EmplaceResult<UE::Online::FCreateLobby::Params>(this_01,pPVar3);
      local_20 = 0;
      if (local_28 != (void *)0x0) {
        FMemory::Free(local_28);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_68);
      local_70 = 0;
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_d8 + 0x20));
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
    }
  }
LAB_14efeb4b2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14efeb580

void __thiscall
`UE::Online::Private::TStep<int>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_21>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar2;
  FLobbyEventCapture *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar7;
  FOnlineError *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  TFutureBase<int> local_88;
  FOnlineError local_78;
  undefined1 local_50 [8];
  TReferenceControllerBase<1> *local_48;
  TOptional<UE::Online::FOnlineError> local_40;
  
  pTVar9 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar9->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efeb5b6;
      }
      LOCK();
      aVar6 = pTVar9->SharedReferenceCount;
      bVar10 = aVar5 == aVar6;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar10);
    pTVar2 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (pTVar2 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      pTVar7 = UE::Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (pTVar2,&LobbyEventCaptureKeyName);
      pFVar3 = pTVar7->Object;
      if ((((pFVar3->TotalNotificationsReceived != 2) || ((pFVar3->LobbyJoined).ArrayNum != 1)) ||
          ((pFVar3->LobbyMemberJoined).ArrayNum != 1)) ||
         (*(int *)((pFVar3->LobbyMemberJoined).AllocatorInstance.Data + 0x20) <
          *(int *)((pFVar3->LobbyJoined).AllocatorInstance.Data + 0x10))) {
        local_40.bIsSet = false;
        pcVar4 = *(code **)(pTVar2->_padding_ + 8);
        pFVar8 = UE::Online::Errors::Cancelled(&local_78,&local_40);
        (*pcVar4)(pTVar2,pFVar8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.Details.SharedReferenceCount.ReferenceController);
        if (local_40.bIsSet != false) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
        }
      }
      UE::Online::Private::AwaitSleepFor
                ((TFuture<int> *)&local_88,
                 (double)*(float *)(*(longlong *)((longlong)this + 0x18) + 100));
      local_78.Inner.Object = *(FOnlineError **)((longlong)this + 0x10);
      local_78.Details.Object = *(IOnlineErrorDetails **)this;
      local_78.Details.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)this + 8);
      if (local_78.Inner.Object != (FOnlineError *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)
                         &((local_78.Inner.Object)->Details).SharedReferenceCount.
                          ReferenceController + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      TFutureBase<int>::
      Then<_TFutureBase<int>::Next<__UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_21>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
                (&local_88,local_50,&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.State.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14efeb5b6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// operator() @ 14efeb6f0

void __thiscall
`UE::Online::Private::TStep<UE::Online::FFindLobbies::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_23>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  Params *pPVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  Params local_38;
  
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efeb722;
      }
      LOCK();
      aVar5 = pTVar7->SharedReferenceCount;
      bVar8 = aVar4 == aVar5;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar8);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar2 = *(longlong *)this;
      pPVar6 = RunLobbyFunctionalTest'::__l2::<lambda_23>::operator()
                         ((void *)((longlong)this + 0x18),&local_38,this_00);
      if ((*(char *)(lVar2 + 0x68) != '\0') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bResultSet",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                             ,0x1ee,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)(lVar2 + 0x40) = (pPVar6->LocalAccountId).Value;
      uVar1 = pPVar6->MaxResults;
      *(undefined8 *)(lVar2 + 0x48) = 0;
      *(uint *)(lVar2 + 0x44) = uVar1;
      *(FScriptContainerElement **)(lVar2 + 0x48) = (pPVar6->Filters).AllocatorInstance.Data;
      (pPVar6->Filters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(lVar2 + 0x50) = (pPVar6->Filters).ArrayNum;
      *(int *)(lVar2 + 0x54) = (pPVar6->Filters).ArrayMax;
      (pPVar6->Filters).ArrayNum = 0;
      (pPVar6->Filters).ArrayMax = 0;
      *(undefined1 *)(lVar2 + 0x5c) = 0;
      bVar8 = (pPVar6->TargetUser).bIsSet;
      *(bool *)(lVar2 + 0x5c) = bVar8;
      if (bVar8 != false) {
        *(uint *)(lVar2 + 0x58) = (pPVar6->TargetUser).TypedValue.Value;
      }
      *(undefined1 *)(lVar2 + 100) = 0;
      bVar8 = (pPVar6->LobbyId).bIsSet;
      *(bool *)(lVar2 + 100) = bVar8;
      if (bVar8 != false) {
        *(uint *)(lVar2 + 0x60) = (pPVar6->LobbyId).TypedValue.Value;
      }
      *(undefined1 *)(lVar2 + 0x68) = 1;
      DestructItems<UE::Online::FFindLobbySearchFilter,int>
                ((FFindLobbySearchFilter *)local_38.Filters.AllocatorInstance.Data,
                 local_38.Filters.ArrayNum);
      if ((FFindLobbySearchFilter *)local_38.Filters.AllocatorInstance.Data !=
          (FFindLobbySearchFilter *)0x0) {
        FMemory::Free(local_38.Filters.AllocatorInstance.Data);
      }
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      return;
    }
  }
LAB_14efeb722:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// operator() @ 14efeb830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_24>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  TStep<UE::Online::FJoinLobby::Params> *this_01;
  atomic<int> aVar1;
  atomic<int> aVar2;
  Params *pPVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [88];
  void *local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efeb872;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      this_01 = *(TStep<UE::Online::FJoinLobby::Params> **)this;
      pPVar3 = RunLobbyFunctionalTest'::__l2::<lambda_24>::operator()
                         ((void *)((longlong)this + 0x18),(Params *)local_88,this_00);
      UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::
      EmplaceResult<UE::Online::FJoinLobby::Params>(this_01,pPVar3);
      local_28 = 0;
      if (local_30 != (void *)0x0) {
        FMemory::Free(local_30);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_88 + 0x18));
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
    }
  }
LAB_14efeb872:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14efeb910

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_25>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar4;
  FOnlineError *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efeb940;
      }
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      pTVar4 = UE::Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this_00,&LobbyEventCaptureKeyName);
      if ((pTVar4->Object->TotalNotificationsReceived != 1) ||
         ((pTVar4->Object->LobbyMemberJoined).ArrayNum != 1)) {
        local_40.bIsSet = false;
        pcVar1 = *(code **)(this_00->_padding_ + 8);
        pFVar5 = UE::Online::Errors::Cancelled(&local_68,&local_40);
        (*pcVar1)(this_00,pFVar5);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.Details.SharedReferenceCount.ReferenceController);
        if (local_40.bIsSet != false) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
        }
      }
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
    }
  }
LAB_14efeb940:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// operator() @ 14efeba00

void __thiscall
`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_26>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  uint uVar2;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar7;
  Result *pRVar8;
  Result *pRVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar10->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efeba30;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar3 = *(longlong *)this;
      pTVar7 = UE::Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this_00,&LobbyEventCaptureKeyName);
      UE::Online::FLobbyEventCapture::Empty(pTVar7->Object);
      pRVar8 = UE::Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (this_00,&User2KeyName);
      pRVar9 = UE::Online::
               GetOpDataChecked<UE::Online::FCreateLobby::Result,UE::Online::FFunctionalTestLobbies>
                         (this_00,&CreateLobbyKeyName);
      if (((pRVar8->AccountInfo).Object == (FAccountInfo *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar1 = (((pRVar8->AccountInfo).Object)->AccountId).Value;
      if (((pRVar9->Lobby).Object == (FLobby *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar2 = (((pRVar9->Lobby).Object)->LobbyId).Value;
      if ((*(char *)(lVar3 + 0x48) != '\0') &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bResultSet",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                              ,0x1ee,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(ulonglong *)(lVar3 + 0x40) = CONCAT44(uVar2,uVar1);
      *(undefined1 *)(lVar3 + 0x48) = 1;
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      return;
    }
  }
LAB_14efeba30:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// operator() @ 14efebb60

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_27>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar4;
  FOnlineError *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efebb90;
      }
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      pTVar4 = UE::Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this_00,&LobbyEventCaptureKeyName);
      if ((pTVar4->Object->TotalNotificationsReceived != 1) ||
         ((pTVar4->Object->LobbyMemberLeft).ArrayNum != 1)) {
        local_40.bIsSet = false;
        pcVar1 = *(code **)(this_00->_padding_ + 8);
        pFVar5 = UE::Online::Errors::Cancelled(&local_68,&local_40);
        (*pcVar1)(this_00,pFVar5);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.Details.SharedReferenceCount.ReferenceController);
        if (local_40.bIsSet != false) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
        }
      }
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
    }
  }
LAB_14efebb90:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// operator() @ 14efebc50

void __thiscall
`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_28>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  uint uVar2;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar7;
  Result *pRVar8;
  Result *pRVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar10->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efebc80;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar3 = *(longlong *)this;
      pTVar7 = UE::Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this_00,&LobbyEventCaptureKeyName);
      UE::Online::FLobbyEventCapture::Empty(pTVar7->Object);
      pRVar8 = UE::Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (this_00,&User1KeyName);
      pRVar9 = UE::Online::
               GetOpDataChecked<UE::Online::FCreateLobby::Result,UE::Online::FFunctionalTestLobbies>
                         (this_00,&CreateLobbyKeyName);
      if (((pRVar8->AccountInfo).Object == (FAccountInfo *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar1 = (((pRVar8->AccountInfo).Object)->AccountId).Value;
      if (((pRVar9->Lobby).Object == (FLobby *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar2 = (((pRVar9->Lobby).Object)->LobbyId).Value;
      if ((*(char *)(lVar3 + 0x48) != '\0') &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bResultSet",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                              ,0x1ee,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(ulonglong *)(lVar3 + 0x40) = CONCAT44(uVar2,uVar1);
      *(undefined1 *)(lVar3 + 0x48) = 1;
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      return;
    }
  }
LAB_14efebc80:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// operator() @ 14efebdb0

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_29>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  FLobbyEventCapture *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar6;
  FOnlineError *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_14efebde0;
  aVar4 = pTVar8->SharedReferenceCount;
  do {
    if (aVar4 == (atomic<int>)0x0) {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      goto LAB_14efebde0;
    }
    LOCK();
    aVar5 = pTVar8->SharedReferenceCount;
    bVar9 = aVar4 == aVar5;
    if (bVar9) {
      pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
      aVar5 = aVar4;
    }
    UNLOCK();
    aVar4 = aVar5;
  } while (!bVar9);
  this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
  if (this_00 == (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) goto LAB_14efebde0;
  pTVar6 = UE::Online::
           GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                     (this_00,&LobbyEventCaptureKeyName);
  pFVar1 = pTVar6->Object;
  if (((pFVar1->TotalNotificationsReceived == 2) && ((pFVar1->LobbyLeft).ArrayNum == 1)) &&
     ((pFVar1->LobbyMemberLeft).ArrayNum == 1)) {
    pFVar2 = (pFVar1->LobbyMemberLeft).AllocatorInstance.Data;
    if (((pFVar1->LobbyLeft).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(int *)((pFVar1->LobbyLeft).AllocatorInstance.Data + 0x10) < *(int *)(pFVar2 + 0x28))
    goto LAB_14efebe8c;
  }
  else {
LAB_14efebe8c:
    local_40.bIsSet = false;
    pcVar3 = *(code **)(this_00->_padding_ + 8);
    pFVar7 = UE::Online::Errors::Cancelled(&local_68,&local_40);
    (*pcVar3)(this_00,pFVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Details.SharedReferenceCount.ReferenceController);
    if (local_40.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
    }
  }
  UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
LAB_14efebde0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// operator() @ 14efebf00

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_2>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efebf30;
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
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      RunLobbyFunctionalTest'::__l2::<lambda_2>::operator()((void *)((longlong)this + 0x18),this_00)
      ;
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14efebf30:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14efebf80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_30>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  undefined **local_48;
  undefined1 local_40 [40];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efebfc0;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      if (((this_00->SharedState).Object)->State < Complete) {
        local_48 = &___7__TOnlineResult_UFFunctionalTestLobbies_Online_UE___Online_UE__6B_;
        local_18 = 0;
        UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::SetResultAndState
                  (this_00,(TOnlineResult<UE::Online::FFunctionalTestLobbies> *)&local_48,Complete);
        uVar5 = (ulonglong)local_18;
        if ((1 < local_18) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FFunctionalTestLobbies::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar5] !=
            UE::Core::Private::TDestructorCaller<UE::Online::FFunctionalTestLobbies::Result>::
            Destruct) {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FFunctionalTestLobbies::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar5])(local_40);
        }
      }
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
    }
  }
LAB_14efebfc0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14efec080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::Online::Private::TStep<UE::Online::FModifyLobbyAttributes::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_3>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  atomic<int> aVar4;
  uint uVar5;
  atomic<int> aVar6;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar7;
  Result *pRVar8;
  Result *pRVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  undefined1 auStackY_148 [32];
  TPairInitializer<FName_const_&,UE::Online::FSchemaVariant_const_&> local_118;
  FName *local_108;
  FSchemaVariant *pFStack_100;
  FName *local_f8;
  FSchemaVariant *pFStack_f0;
  uint local_e8;
  uint local_e4;
  undefined1 local_e0 [32];
  void *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ForElementType<FSetElementId> local_a0;
  int local_98;
  undefined1 local_90 [32];
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ForElementType<FSetElementId> local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar10->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efec0da;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar11 = aVar4 == aVar6;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar11);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar1 = *(longlong *)this;
      pTVar7 = UE::Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this_00,&LobbyEventCaptureKeyName);
      UE::Online::FLobbyEventCapture::Empty(pTVar7->Object);
      pRVar8 = UE::Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (this_00,&User1KeyName);
      pRVar9 = UE::Online::
               GetOpDataChecked<UE::Online::FCreateLobby::Result,UE::Online::FFunctionalTestLobbies>
                         (this_00,&CreateLobbyKeyName);
      local_b8 = ___xmm_00000000ffffffff0000008000000000;
      uStack_b0 = _UNK_150631d98;
      local_68 = ___xmm_00000000ffffffff0000008000000000;
      uStack_60 = _UNK_150631d98;
      local_e0._0_8_ = (FScriptContainerElement *)0x0;
      local_e0._8_8_ = 0;
      local_c0 = (void *)0x0;
      local_a0 = (ForElementType<FSetElementId>)0x0;
      local_98 = 0;
      local_90._0_8_ = (FScriptContainerElement *)0x0;
      local_90._8_8_ = 0;
      local_70 = (void *)0x0;
      local_50 = (ForElementType<FSetElementId>)0x0;
      local_48 = 0;
      if (((pRVar8->AccountInfo).Object == (FAccountInfo *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_e8 = (((pRVar8->AccountInfo).Object)->AccountId).Value;
      if (((pRVar9->Lobby).Object == (FLobby *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_e4 = (((pRVar9->Lobby).Object)->LobbyId).Value;
      local_108 = &LobbyAttributeId1;
      pFStack_100 = &LobbyAttribute1Value2;
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
      ::Empty((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
               *)local_e0,1);
      local_f8 = local_108;
      pFStack_f0 = pFStack_100;
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,UE::Online::FSchemaVariant_const_&>_>
                ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)local_e0,&local_118,(bool *)&local_f8);
      if ((*(char *)(lVar1 + 0xe8) != '\0') &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bResultSet",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                              ,0x1ee,L""), bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(uint *)(lVar1 + 0x40) = local_e8;
      *(uint *)(lVar1 + 0x44) = local_e4;
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
      ::
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)(lVar1 + 0x48),
                 (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)local_e0);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(lVar1 + 0x98),
                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_90);
      *(undefined1 *)(lVar1 + 0xe8) = 1;
      local_48 = 0;
      if (local_50 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_50);
      }
      iVar3 = SUB84(local_90._8_8_,4);
      local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
      }
      uVar5 = local_68._4_4_;
      uStack_60 = 0xffffffff;
      local_68 = (ulonglong)local_68._4_4_ << 0x20;
      if (0x80 < uVar5) {
        local_68 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
      }
      if (local_70 != (void *)0x0) {
        FMemory::Free(local_70);
      }
      if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_90._0_8_);
      }
      local_98 = 0;
      if (local_a0 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a0);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_e0,0,local_e0._8_4_);
      iVar3 = SUB84(local_e0._8_8_,4);
      local_e0._8_8_ = local_e0._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)local_e0,0,(int *)(local_e0 + 0xc));
      }
      uVar5 = local_b8._4_4_;
      uStack_b0 = 0xffffffff;
      local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
      if (0x80 < uVar5) {
        local_b8 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_e0 + 0x10),0);
      }
      if (local_c0 != (void *)0x0) {
        FMemory::Free(local_c0);
      }
      if ((FScriptContainerElement *)local_e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e0._0_8_);
      }
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
    }
  }
LAB_14efec0da:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// operator() @ 14efec3e0

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_4>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efec410;
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
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      RunLobbyFunctionalTest'::__l2::<lambda_4>::operator()((void *)((longlong)this + 0x18),this_00)
      ;
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14efec410:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14efec460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::Online::Private::TStep<UE::Online::FModifyLobbyMemberAttributes::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_5>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  atomic<int> aVar4;
  uint uVar5;
  atomic<int> aVar6;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar7;
  Result *pRVar8;
  Result *pRVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  undefined1 auStackY_148 [32];
  TPairInitializer<FName_const_&,UE::Online::FSchemaVariant_const_&> local_118;
  FName *local_108;
  FSchemaVariant *pFStack_100;
  FName *local_f8;
  FSchemaVariant *pFStack_f0;
  uint local_e8;
  uint local_e4;
  undefined1 local_e0 [32];
  void *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ForElementType<FSetElementId> local_a0;
  int local_98;
  undefined1 local_90 [32];
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ForElementType<FSetElementId> local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar10->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efec4ba;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar11 = aVar4 == aVar6;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar11);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar1 = *(longlong *)this;
      pTVar7 = UE::Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this_00,&LobbyEventCaptureKeyName);
      UE::Online::FLobbyEventCapture::Empty(pTVar7->Object);
      pRVar8 = UE::Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (this_00,&User1KeyName);
      pRVar9 = UE::Online::
               GetOpDataChecked<UE::Online::FCreateLobby::Result,UE::Online::FFunctionalTestLobbies>
                         (this_00,&CreateLobbyKeyName);
      local_b8 = ___xmm_00000000ffffffff0000008000000000;
      uStack_b0 = _UNK_150631d98;
      local_68 = ___xmm_00000000ffffffff0000008000000000;
      uStack_60 = _UNK_150631d98;
      local_e0._0_8_ = (FScriptContainerElement *)0x0;
      local_e0._8_8_ = 0;
      local_c0 = (void *)0x0;
      local_a0 = (ForElementType<FSetElementId>)0x0;
      local_98 = 0;
      local_90._0_8_ = (FScriptContainerElement *)0x0;
      local_90._8_8_ = 0;
      local_70 = (void *)0x0;
      local_50 = (ForElementType<FSetElementId>)0x0;
      local_48 = 0;
      if (((pRVar8->AccountInfo).Object == (FAccountInfo *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_e8 = (((pRVar8->AccountInfo).Object)->AccountId).Value;
      if (((pRVar9->Lobby).Object == (FLobby *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_e4 = (((pRVar9->Lobby).Object)->LobbyId).Value;
      local_108 = &LobbyMemberAttributeId1;
      pFStack_100 = &LobbyMemberAttribute1Value2;
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
      ::Empty((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
               *)local_e0,1);
      local_f8 = local_108;
      pFStack_f0 = pFStack_100;
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,UE::Online::FSchemaVariant_const_&>_>
                ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)local_e0,&local_118,(bool *)&local_f8);
      if ((*(char *)(lVar1 + 0xe8) != '\0') &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bResultSet",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                              ,0x1ee,L""), bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(uint *)(lVar1 + 0x40) = local_e8;
      *(uint *)(lVar1 + 0x44) = local_e4;
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
      ::
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)(lVar1 + 0x48),
                 (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)local_e0);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(lVar1 + 0x98),
                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_90);
      *(undefined1 *)(lVar1 + 0xe8) = 1;
      local_48 = 0;
      if (local_50 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_50);
      }
      iVar3 = SUB84(local_90._8_8_,4);
      local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
      }
      uVar5 = local_68._4_4_;
      uStack_60 = 0xffffffff;
      local_68 = (ulonglong)local_68._4_4_ << 0x20;
      if (0x80 < uVar5) {
        local_68 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
      }
      if (local_70 != (void *)0x0) {
        FMemory::Free(local_70);
      }
      if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_90._0_8_);
      }
      local_98 = 0;
      if (local_a0 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a0);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_e0,0,local_e0._8_4_);
      iVar3 = SUB84(local_e0._8_8_,4);
      local_e0._8_8_ = local_e0._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)local_e0,0,(int *)(local_e0 + 0xc));
      }
      uVar5 = local_b8._4_4_;
      uStack_b0 = 0xffffffff;
      local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
      if (0x80 < uVar5) {
        local_b8 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_e0 + 0x10),0);
      }
      if (local_c0 != (void *)0x0) {
        FMemory::Free(local_c0);
      }
      if ((FScriptContainerElement *)local_e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e0._0_8_);
      }
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
    }
  }
LAB_14efec4ba:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// operator() @ 14efec7c0

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_6>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efec7f0;
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
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      RunLobbyFunctionalTest'::__l2::<lambda_6>::operator()((void *)((longlong)this + 0x18),this_00)
      ;
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14efec7f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14efec840

void __thiscall
`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_7>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  uint uVar2;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar7;
  Result *pRVar8;
  Result *pRVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar10->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efec870;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar3 = *(longlong *)this;
      pTVar7 = UE::Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this_00,&LobbyEventCaptureKeyName);
      UE::Online::FLobbyEventCapture::Empty(pTVar7->Object);
      pRVar8 = UE::Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (this_00,&User1KeyName);
      pRVar9 = UE::Online::
               GetOpDataChecked<UE::Online::FCreateLobby::Result,UE::Online::FFunctionalTestLobbies>
                         (this_00,&CreateLobbyKeyName);
      if (((pRVar8->AccountInfo).Object == (FAccountInfo *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar1 = (((pRVar8->AccountInfo).Object)->AccountId).Value;
      if (((pRVar9->Lobby).Object == (FLobby *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar2 = (((pRVar9->Lobby).Object)->LobbyId).Value;
      if ((*(char *)(lVar3 + 0x48) != '\0') &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bResultSet",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                              ,0x1ee,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(ulonglong *)(lVar3 + 0x40) = CONCAT44(uVar2,uVar1);
      *(undefined1 *)(lVar3 + 0x48) = 1;
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      return;
    }
  }
LAB_14efec870:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// operator() @ 14efec9a0

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_8>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  FLobbyEventCapture *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar6;
  FOnlineError *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_14efec9d0;
  aVar4 = pTVar8->SharedReferenceCount;
  do {
    if (aVar4 == (atomic<int>)0x0) {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      goto LAB_14efec9d0;
    }
    LOCK();
    aVar5 = pTVar8->SharedReferenceCount;
    bVar9 = aVar4 == aVar5;
    if (bVar9) {
      pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
      aVar5 = aVar4;
    }
    UNLOCK();
    aVar4 = aVar5;
  } while (!bVar9);
  this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
  if (this_00 == (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) goto LAB_14efec9d0;
  pTVar6 = UE::Online::
           GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                     (this_00,&LobbyEventCaptureKeyName);
  pFVar1 = pTVar6->Object;
  if (((pFVar1->TotalNotificationsReceived == 2) && ((pFVar1->LobbyLeft).ArrayNum == 1)) &&
     ((pFVar1->LobbyMemberLeft).ArrayNum == 1)) {
    pFVar2 = (pFVar1->LobbyMemberLeft).AllocatorInstance.Data;
    if (((pFVar1->LobbyLeft).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(int *)((pFVar1->LobbyLeft).AllocatorInstance.Data + 0x10) < *(int *)(pFVar2 + 0x28))
    goto LAB_14efeca7c;
  }
  else {
LAB_14efeca7c:
    local_40.bIsSet = false;
    pcVar3 = *(code **)(this_00->_padding_ + 8);
    pFVar7 = UE::Online::Errors::Cancelled(&local_68,&local_40);
    (*pcVar3)(this_00,pFVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Details.SharedReferenceCount.ReferenceController);
    if (local_40.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
    }
  }
  UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
LAB_14efec9d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// operator() @ 14efecaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_9>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  TStep<UE::Online::FCreateLobby::Params> *this_01;
  code *pcVar1;
  int iVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar5;
  Result *pRVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  void *local_88;
  undefined4 local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar7->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efecb4a;
      }
      LOCK();
      aVar4 = pTVar7->SharedReferenceCount;
      bVar8 = aVar3 == aVar4;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar8);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      this_01 = *(TStep<UE::Online::FCreateLobby::Params> **)this;
      pTVar5 = UE::Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this_00,&LobbyEventCaptureKeyName);
      UE::Online::FLobbyEventCapture::Empty(pTVar5->Object);
      pRVar6 = UE::Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (this_00,&User1KeyName);
      local_e8[0x14] = false;
      local_c8._0_8_ = (FScriptContainerElement *)0x0;
      local_c8._8_8_ = 0;
      local_a8 = (void *)0x0;
      local_a0 = 0;
      local_9c = 0x80;
      local_98 = 0xffffffff;
      local_94 = 0;
      local_88 = (void *)0x0;
      local_80 = 0;
      local_78._0_8_ = (FScriptContainerElement *)0x0;
      local_78._8_8_ = 0;
      local_58 = (void *)0x0;
      local_50 = 0;
      local_4c = 0x80;
      local_48 = 0xffffffff;
      local_44 = 0;
      local_38 = (void *)0x0;
      local_30 = 0;
      if (((pRVar6->AccountInfo).Object == (FAccountInfo *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_e8._0_4_ = (((pRVar6->AccountInfo).Object)->AccountId).Value;
      local_e8._4_4_ = LocalLobbyName.ComparisonIndex.Value;
      local_e8._8_4_ = LocalLobbyName.Number;
      local_e8._12_4_ = LobbySchemaId.ComparisonIndex.Value;
      local_e8._16_4_ = LobbySchemaId.Number;
      local_e8._24_4_ = 2;
      local_e8[0x1c] = InvitationOnly;
      UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::
      EmplaceResult<UE::Online::FCreateLobby::Params>(this_01,(Params *)local_e8);
      local_30 = 0;
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_78,0,local_78._8_4_);
      iVar2 = SUB84(local_78._8_8_,4);
      local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
      }
      local_48 = 0xffffffff;
      local_44 = 0;
      local_50 = 0;
      if (0x80 < local_4c) {
        local_4c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
      }
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_78._0_8_);
      }
      local_80 = 0;
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_c8,0,local_c8._8_4_);
      iVar2 = SUB84(local_c8._8_8_,4);
      local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
      }
      local_98 = 0xffffffff;
      local_94 = 0;
      local_a0 = 0;
      if (0x80 < local_9c) {
        local_9c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
      }
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
      if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_c8._0_8_);
      }
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
    }
  }
LAB_14efecb4a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// operator() @ 14efecdb0

void __thiscall
`UE::Online::Private::TStep<void>::
SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  undefined8 uVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  TFutureBase<void> local_48;
  undefined1 local_38 [16];
  <lambda_1> local_28;
  
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar7->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efecde2;
      }
      LOCK();
      aVar4 = pTVar7->SharedReferenceCount;
      bVar8 = aVar3 == aVar4;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar8);
    lVar1 = *(longlong *)((longlong)this + 8);
    if (lVar1 != 0) {
      UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
      pcVar2 = *(code **)((longlong)this + 0x20);
      plVar6 = (longlong *)((longlong)this + 0x30);
      if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
        plVar6 = *(longlong **)((longlong)this + 0x48);
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar2)(&local_48,uVar5,lVar1);
      local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
      local_28.Continuation.__this = *(TStep<void> **)this;
      local_28.Continuation.WeakOperation.Object =
           *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
      if (local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
        WeakReferenceCount =
             (atomic<int>)
             ((int)(local_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
                   WeakReferenceCount + 1);
        UNLOCK();
      }
      TFutureBase<void>::
      Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
                (&local_48,(TFuture<void> *)local_38,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_38._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.State.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14efecde2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Execute @ 14effc400

void __thiscall UE::Online::Private::TStep<int>::Execute(TStep<int> *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->ExecFunction == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExecFunction",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                       ,0x1e0,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  Core::Private::Function::CheckCallable(*(void **)&this->ExecFunction);
  plVar1 = *(longlong **)&(this->ExecFunction).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->ExecFunction;
  plVar4 = (longlong *)&(this->ExecFunction).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014effc46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3);
  return;
}

// Execute @ 14effc480

void __thiscall
UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::Execute
          (TStep<UE::Online::FCreateLobby::Params> *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->ExecFunction == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExecFunction",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                       ,0x1e0,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  Core::Private::Function::CheckCallable(*(void **)&this->ExecFunction);
  plVar1 = *(longlong **)&(this->ExecFunction).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->ExecFunction;
  plVar4 = (longlong *)&(this->ExecFunction).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014effc4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3);
  return;
}

// Execute @ 14effc500

void __thiscall
UE::Online::Private::TStep<UE::Online::FFindLobbies::Params>::Execute
          (TStep<UE::Online::FFindLobbies::Params> *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->ExecFunction == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExecFunction",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                       ,0x1e0,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  Core::Private::Function::CheckCallable(*(void **)&this->ExecFunction);
  plVar1 = *(longlong **)&(this->ExecFunction).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->ExecFunction;
  plVar4 = (longlong *)&(this->ExecFunction).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014effc56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3);
  return;
}

// Execute @ 14effc580

void __thiscall
UE::Online::Private::TStep<UE::Online::FInviteLobbyMember::Params>::Execute
          (TStep<UE::Online::FInviteLobbyMember::Params> *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->ExecFunction == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExecFunction",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                       ,0x1e0,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  Core::Private::Function::CheckCallable(*(void **)&this->ExecFunction);
  plVar1 = *(longlong **)&(this->ExecFunction).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->ExecFunction;
  plVar4 = (longlong *)&(this->ExecFunction).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014effc5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3);
  return;
}

// Execute @ 14effc600

void __thiscall
UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::Execute
          (TStep<UE::Online::FJoinLobby::Params> *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->ExecFunction == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExecFunction",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                       ,0x1e0,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  Core::Private::Function::CheckCallable(*(void **)&this->ExecFunction);
  plVar1 = *(longlong **)&(this->ExecFunction).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->ExecFunction;
  plVar4 = (longlong *)&(this->ExecFunction).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014effc66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3);
  return;
}

// Execute @ 14effc680

void __thiscall
UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::Execute
          (TStep<UE::Online::FLeaveLobby::Params> *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->ExecFunction == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExecFunction",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                       ,0x1e0,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  Core::Private::Function::CheckCallable(*(void **)&this->ExecFunction);
  plVar1 = *(longlong **)&(this->ExecFunction).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->ExecFunction;
  plVar4 = (longlong *)&(this->ExecFunction).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014effc6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3);
  return;
}

// Execute @ 14effc700

void __thiscall
UE::Online::Private::TStep<UE::Online::FModifyLobbyAttributes::Params>::Execute
          (TStep<UE::Online::FModifyLobbyAttributes::Params> *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->ExecFunction == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExecFunction",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                       ,0x1e0,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  Core::Private::Function::CheckCallable(*(void **)&this->ExecFunction);
  plVar1 = *(longlong **)&(this->ExecFunction).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->ExecFunction;
  plVar4 = (longlong *)&(this->ExecFunction).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014effc76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3);
  return;
}

// Execute @ 14effc780

void __thiscall
UE::Online::Private::TStep<UE::Online::FModifyLobbyMemberAttributes::Params>::Execute
          (TStep<UE::Online::FModifyLobbyMemberAttributes::Params> *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->ExecFunction == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExecFunction",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                       ,0x1e0,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  Core::Private::Function::CheckCallable(*(void **)&this->ExecFunction);
  plVar1 = *(longlong **)&(this->ExecFunction).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->ExecFunction;
  plVar4 = (longlong *)&(this->ExecFunction).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014effc7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3);
  return;
}

// Execute @ 14effc800

void __thiscall
UE::Online::Private::
TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
::Execute(TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
          *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->ExecFunction == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExecFunction",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                       ,0x1e0,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  Core::Private::Function::CheckCallable(*(void **)&this->ExecFunction);
  plVar1 = *(longlong **)&(this->ExecFunction).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->ExecFunction;
  plVar4 = (longlong *)&(this->ExecFunction).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014effc86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3);
  return;
}

// GetExecutionPolicy @ 14effec90

FOnlineAsyncExecutionPolicy * __thiscall
UE::Online::Private::TStep<int>::GetExecutionPolicy(TStep<int> *this)

{
  return &this->ExecutionPolicy;
}

// GetExecutionPolicy @ 14effeca0

FOnlineAsyncExecutionPolicy * __thiscall
UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::GetExecutionPolicy
          (TStep<UE::Online::FCreateLobby::Params> *this)

{
  return &this->ExecutionPolicy;
}

// GetExecutionPolicy @ 14effecb0

FOnlineAsyncExecutionPolicy * __thiscall
UE::Online::Private::TStep<UE::Online::FFindLobbies::Params>::GetExecutionPolicy
          (TStep<UE::Online::FFindLobbies::Params> *this)

{
  return &this->ExecutionPolicy;
}

// GetExecutionPolicy @ 14effecc0

FOnlineAsyncExecutionPolicy * __thiscall
UE::Online::Private::TStep<UE::Online::FInviteLobbyMember::Params>::GetExecutionPolicy
          (TStep<UE::Online::FInviteLobbyMember::Params> *this)

{
  return &this->ExecutionPolicy;
}

// GetExecutionPolicy @ 14effecd0

FOnlineAsyncExecutionPolicy * __thiscall
UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::GetExecutionPolicy
          (TStep<UE::Online::FJoinLobby::Params> *this)

{
  return &this->ExecutionPolicy;
}

// GetExecutionPolicy @ 14effece0

FOnlineAsyncExecutionPolicy * __thiscall
UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::GetExecutionPolicy
          (TStep<UE::Online::FLeaveLobby::Params> *this)

{
  return &this->ExecutionPolicy;
}

// GetExecutionPolicy @ 14effecf0

FOnlineAsyncExecutionPolicy * __thiscall
UE::Online::Private::TStep<UE::Online::FModifyLobbyAttributes::Params>::GetExecutionPolicy
          (TStep<UE::Online::FModifyLobbyAttributes::Params> *this)

{
  return &this->ExecutionPolicy;
}

// GetExecutionPolicy @ 14effed00

FOnlineAsyncExecutionPolicy * __thiscall
UE::Online::Private::TStep<UE::Online::FModifyLobbyMemberAttributes::Params>::GetExecutionPolicy
          (TStep<UE::Online::FModifyLobbyMemberAttributes::Params> *this)

{
  return &this->ExecutionPolicy;
}

// GetExecutionPolicy @ 14effed10

FOnlineAsyncExecutionPolicy * __thiscall
UE::Online::Private::
TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
::GetExecutionPolicy
          (TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
           *this)

{
  return &this->ExecutionPolicy;
}


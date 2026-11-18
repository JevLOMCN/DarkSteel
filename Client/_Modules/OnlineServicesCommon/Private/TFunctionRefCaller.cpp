// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 461

// Call @ 14ee5d890

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(TSharedRef<UE::Online::FAccountInfo,1>_const_&),bool,TSharedRef<UE::Online::FAccountInfo,1>_const_&>
::Call(void *param_1,TSharedRef<UE::Online::FAccountInfo,1> *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ee5d896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2);
  return (bool)uVar1;
}

// Call @ 14ee5d8a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FUpdateStats::Params_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee25f12;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee25f12:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5d8b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee25fb2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee25fb2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5d8c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthBeginVerifiedAuthSession>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee26052;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee26052:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5d8d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthCancelVerifiedAuthTicket>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee260f2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee260f2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5d8e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthCreateAccount>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee26192;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee26192:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5d8f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthEndVerifiedAuthSession>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee26232;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee26232:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5d900

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthLinkAccount>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee262d2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee262d2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5d910

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee26372;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee26372:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5d920

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthLogout>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee26412;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee26412:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5d930

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthModifyAccountAttributes>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee264b2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee264b2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5d940

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthQueryExternalAuthToken>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee26552;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee26552:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5d950

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthQueryExternalServerAuthTicket>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee265f2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee265f2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5d960

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthQueryVerifiedAuthTicket>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee26692;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee26692:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5d970

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryPresence>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee26732;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee26732:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5d980

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceCheckout>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee267d2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee267d2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5d990

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceQueryEntitlements>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee26872;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee26872:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5d9a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceQueryOffers>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee26912;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee26912:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5d9b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceQueryOffersById>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee269b2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee269b2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5d9c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceQueryTransactionEntitlements>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee26a52;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee26a52:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5d9d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceRedeemEntitlement>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee26af2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee26af2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5d9e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceRetrieveS2SToken>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee26b92;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee26b92:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5d9f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceShowStoreUI>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee26c32;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee26c32:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5da00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateLobby>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee26cd2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee26cd2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5da10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateSession>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee26d72;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee26d72:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5da20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>_const_&,UE::Online::TOnlineResult<UE::Online::FDeclineLobbyInvitation>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee26e12;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee26e12:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5da30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>_const_&,UE::Online::TOnlineResult<UE::Online::FExternalUIShowFriendsUI>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee26eb2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee26eb2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5da40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>_const_&,UE::Online::TOnlineResult<UE::Online::FExternalUIShowLoginUI>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee26f52;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee26f52:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5da50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFindLobbies>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee26ff2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee26ff2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5da60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&,UE::Online::TOnlineResult<UE::Online::FFindSessions>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee27092;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee27092:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5da70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFunctionalTestLobbies>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee27132;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee27132:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5da80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>_const_&,UE::Online::TOnlineResult<UE::Online::FInviteLobbyMember>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee271d2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee271d2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5da90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinLobby>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee27272;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee27272:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5daa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinSession>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee27312;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee27312:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5dab0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>_const_&,UE::Online::TOnlineResult<UE::Online::FKickLobbyMember>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee273b2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee273b2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5dac0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveLobby>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee27452;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee27452:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5dad0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveSession>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee274f2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee274f2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5dae0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>_const_&,UE::Online::TOnlineResult<UE::Online::FModifyLobbyAttributes>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee27592;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee27592:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5daf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>_const_&,UE::Online::TOnlineResult<UE::Online::FModifyLobbyJoinPolicy>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee27632;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee27632:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5db00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>_const_&,UE::Online::TOnlineResult<UE::Online::FModifyLobbyMemberAttributes>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee276d2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee276d2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5db10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>_const_&,UE::Online::TOnlineResult<UE::Online::FModifyLobbySchema>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee27772;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee27772:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5db20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>_const_&,UE::Online::TOnlineResult<UE::Online::FPartialUpdatePresence>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee27812;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee27812:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5db30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>_const_&,UE::Online::TOnlineResult<UE::Online::FPromoteLobbyMember>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee278b2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee278b2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5db40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryAchievementDefinitions>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee27952;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee27952:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5db50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryAchievementStates>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee279f2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee279f2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5db60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryPresence>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee27a92;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee27a92:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5db70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryUserPrivilege>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee27b32;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee27b32:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5db80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>_const_&,UE::Online::TOnlineResult<UE::Online::FReadEntriesAroundRank>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee27bd2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee27bd2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5db90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>_const_&,UE::Online::TOnlineResult<UE::Online::FReadEntriesAroundUser>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee27c72;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee27c72:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5dba0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>_const_&,UE::Online::TOnlineResult<UE::Online::FReadEntriesForUsers>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee27d12;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee27d12:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5dbb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee27db2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee27db2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5dbc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee27e52;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee27e52:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5dbd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FRestoreLobbies>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee27ef2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee27ef2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5dbe0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee27f92;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee27f92:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5dbf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&,UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee28032;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee28032:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5dc00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>_const_&,UE::Online::TOnlineResult<UE::Online::FUnlockAchievements>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee280d2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee280d2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5dc10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdatePresence>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee28172;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee28172:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5dc20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee28212;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee28212:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5dc30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>_const_&,UE::Online::TOnlineResult<UE::Online::FWriteLeaderboardScores>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee282b2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee282b2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5dc40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(void)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee28352;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ee28352:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ee5dc50

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>::ExecuteNextStep'::__l8::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5dc70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::ExecuteNextStep'::__l8::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5dc90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>::ExecuteNextStep'::__l8::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5dcb0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>::ExecuteNextStep'::__l8::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5dcd0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>::ExecuteNextStep'::__l8::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5dcf0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>::ExecuteNextStep'::__l8::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5dd10

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::ExecuteNextStep'::__l8::<lambda_1>
  ::operator()(param_1);
  return false;
}

// Call @ 14ee5dd30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::ExecuteNextStep'::__l8::<lambda_1>
  ::operator()(param_1);
  return false;
}

// Call @ 14ee5dd50

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>::ExecuteNextStep'::__l8::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5dd70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>::ExecuteNextStep'::__l8::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5dd90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::ExecuteNextStep'::__l8::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5ddb0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>::SetResultAndState'::__l27::<lambda_1>
  ::operator()(param_1);
  return false;
}

// Call @ 14ee5ddd0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>::SetResultAndState'::__l27
  ::<lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5ddf0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>::SetResultAndState'::__l27
  ::<lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5de10

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>::SetResultAndState'::__l27::<lambda_1>
  ::operator()(param_1);
  return false;
}

// Call @ 14ee5de30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5de50

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5de70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5de90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5deb0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5ded0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5def0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>::SetResultAndState'::
  __l27::<lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5df10

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5df30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5df50

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>::SetResultAndState'::__l27::<lambda_1>
  ::operator()(param_1);
  return false;
}

// Call @ 14ee5df70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5df90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5dfb0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5dfd0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>::SetResultAndState'
  ::__l27::<lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5dff0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e010

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e030

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e050

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5e070

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5e090

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e0b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e0d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e0f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5e110

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5e130

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e150

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>::SetResultAndState'::__l27::<lambda_1>
  ::operator()(param_1);
  return false;
}

// Call @ 14ee5e170

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5e190

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5e1b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5e1d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5e1f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5e210

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e230

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e250

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e270

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>::SetResultAndState'::__l27::<lambda_1>
  ::operator()(param_1);
  return false;
}

// Call @ 14ee5e290

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e2b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e2d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e2f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e310

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5e330

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e350

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e370

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e390

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e3b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e3d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e3f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5e410

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>::SetResultAndState'::__l27::<lambda_1>
  ::operator()(param_1);
  return false;
}

// Call @ 14ee5e430

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>::SetResultAndState'::__l27::<lambda_1>
  ::operator()(param_1);
  return false;
}

// Call @ 14ee5e450

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e470

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ee5e490

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e4b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ee5e4d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FAddSessionMember,`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FAddSessionMember>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FAddSessionMember> *this;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FAddSessionMember> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)0x0) {
      `UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FAddSessionMember>'::__l2
      ::<lambda_1>::operator()((void *)((longlong)param_1 + 0x18),this);
      Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>::ExecuteNextStep(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee29c10:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5e4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FBatchQueryPresence,UE::Online::FBatchQueryPresenceHelperResult_&,`UE::Online::FPresenceCommon::BatchQueryPresence'::__l2::<lambda_2>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *pTVar1;
  undefined8 *puVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  FOnlineError *pFVar6;
  TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *pTVar7;
  ulonglong uVar8;
  TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *this;
  bool bVar9;
  undefined1 auStack_108 [32];
  TSharedRef<UE::Online::FUserPresence_const_,1> *pTStack_e8;
  undefined8 uStack_e0;
  FOnlineError FStack_d8;
  TOptional<UE::Online::FOnlineError> TStack_b0;
  FOnlineError FStack_80;
  undefined **ppuStack_58;
  TSharedRef<UE::Online::FUserPresence_const_,1> *pTStack_50;
  int iStack_48;
  undefined4 uStack_44;
  byte bStack_28;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStack_108;
  pTVar1 = *(TOnlineAsyncOp<UE::Online::FBatchQueryPresence> **)((longlong)param_1 + 0x10);
  pTVar7 = pTVar1;
  this = (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)0x0;
  if (pTVar1 != (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)0x0) {
    aVar4 = *(atomic<int> *)&pTVar1->_padding_;
    do {
      pTVar7 = (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)0x0;
      this = (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)0x0;
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
    this = *(TOnlineAsyncOp<UE::Online::FBatchQueryPresence> **)((longlong)param_1 + 8);
  }
LAB_14ee29cb5:
  if (this != (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)0x0) {
    puVar2 = *(undefined8 **)((longlong)param_1 + 0x18);
    TStack_b0.bIsSet = false;
    pTStack_e8 = (TSharedRef<UE::Online::FUserPresence_const_,1> *)*puVar2;
    *puVar2 = 0;
    uStack_e0 = puVar2[1];
    puVar2[1] = 0;
    FStack_d8.Details.Object = (IOnlineErrorDetails *)puVar2[2];
    FStack_d8.Details.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)puVar2[3];
    FStack_d8.Inner.Object = (FOnlineError *)puVar2[4];
    puVar2[3] = 0;
    puVar2[2] = 0;
    FStack_d8.Inner.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)puVar2[5];
    puVar2[5] = 0;
    puVar2[4] = 0;
    FStack_d8.ErrorCode = puVar2[6];
    pFVar6 = Online::Errors::Success(&FStack_80,&TStack_b0);
    bVar9 = Online::operator==(&FStack_d8,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_80.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_80.Details.SharedReferenceCount.ReferenceController);
    if (TStack_b0.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_b0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_b0.TypedValue.Details.SharedReferenceCount.ReferenceController);
    }
    if (bVar9) {
      if (((this->SharedState).Object)->State < Complete) {
        pTStack_50 = pTStack_e8;
        iStack_48 = (int)uStack_e0;
        uStack_44 = uStack_e0._4_4_;
        ppuStack_58 = &___7__TOnlineResult_UFBatchQueryPresence_Online_UE___Online_UE__6B_;
        pTStack_e8 = (TSharedRef<UE::Online::FUserPresence_const_,1> *)0x0;
        uStack_e0 = 0;
        bStack_28 = 0;
        Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::SetResultAndState
                  (this,(TOnlineResult<UE::Online::FBatchQueryPresence> *)&ppuStack_58,Complete);
        uVar8 = (ulonglong)bStack_28;
        if ((1 < bStack_28) &&
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
            TDestructorCaller<UE::Online::FBatchQueryPresence::Result>::Destruct) {
          DestructItems<TSharedRef<UE::Online::FUserPresence_const_,1>,int>(pTStack_50,iStack_48);
          if (pTStack_50 != (TSharedRef<UE::Online::FUserPresence_const_,1> *)0x0) {
            FMemory::Free(pTStack_50);
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FBatchQueryPresence::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar8])(&pTStack_50);
        }
      }
    }
    else {
      (**(code **)(this->_padding_ + 8))(this,&FStack_d8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_d8.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_d8.Details.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedRef<UE::Online::FUserPresence_const_,1>,int>(pTStack_e8,(int)uStack_e0);
    if (pTStack_e8 != (TSharedRef<UE::Online::FUserPresence_const_,1> *)0x0) {
      FMemory::Free(pTStack_e8);
    }
    Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::ExecuteNextStep(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar7);
  return;
}

// Call @ 14ee5e4f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FBatchQueryPresenceHelperResult>::SetExecFunction<UE::Online::FBatchQueryPresence,`UE::Online::FPresenceCommon::BatchQueryPresence'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TFutureBase<UE::Online::FBatchQueryPresenceHelperResult> TStack_48;
  undefined1 auStack_38 [8];
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  longlong lStack_18;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    if (*(longlong *)((longlong)param_1 + 8) != 0) {
      Online::FBatchQueryPresenceHelper::GetPromise
                (*(FBatchQueryPresenceHelper **)((longlong)param_1 + 0x20),
                 (TFuture<UE::Online::FBatchQueryPresenceHelperResult> *)&TStack_48);
      lStack_18 = *(longlong *)((longlong)param_1 + 0x10);
      uStack_28 = *(undefined8 *)param_1;
      uStack_20 = *(undefined8 *)((longlong)param_1 + 8);
      if (lStack_18 != 0) {
        LOCK();
        *(int *)(lStack_18 + 0xc) = *(int *)(lStack_18 + 0xc) + 1;
        UNLOCK();
      }
      TFutureBase<UE::Online::FBatchQueryPresenceHelperResult>::
      Then<_TFutureBase<UE::Online::FBatchQueryPresenceHelperResult>::Next<__UE::Online::Private::TStep<UE::Online::FBatchQueryPresenceHelperResult>::SetExecFunction<UE::Online::FBatchQueryPresence,_UE::Online::FPresenceCommon::BatchQueryPresence_::__l2::<lambda_1>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
                (&TStack_48,auStack_38,&uStack_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_48.State.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee29ee0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5e500

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FCreateSession,`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FCreateSession>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FCreateSession> *this;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FCreateSession> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FCreateSession> *)0x0) {
      `UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FCreateSession>'::__l2::
      <lambda_1>::operator()((void *)((longlong)param_1 + 0x18),this);
      Online::TOnlineAsyncOp<UE::Online::FCreateSession>::ExecuteNextStep(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee29fa0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5e510

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFindSessions,`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FFindSessions>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FFindSessions> *this;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFindSessions> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFindSessions> *)0x0) {
      `UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FFindSessions>'::__l2::
      <lambda_1>::operator()((void *)((longlong)param_1 + 0x18),this);
      Online::TOnlineAsyncOp<UE::Online::FFindSessions>::ExecuteNextStep(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2a020:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5e520

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FJoinSession,`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FJoinSession>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FJoinSession> *this;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FJoinSession> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FJoinSession> *)0x0) {
      `UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FJoinSession>'::__l2::
      <lambda_1>::operator()((void *)((longlong)param_1 + 0x18),this);
      Online::TOnlineAsyncOp<UE::Online::FJoinSession>::ExecuteNextStep(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2a0a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5e530

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FLeaveSession,`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FLeaveSession>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FLeaveSession> *this;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FLeaveSession> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FLeaveSession> *)0x0) {
      `UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FLeaveSession>'::__l2::
      <lambda_1>::operator()((void *)((longlong)param_1 + 0x18),this);
      Online::TOnlineAsyncOp<UE::Online::FLeaveSession>::ExecuteNextStep(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2a120:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5e540

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FRejectSessionInvite,`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRejectSessionInvite>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *this;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FRejectSessionInvite> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)0x0) {
      `UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRejectSessionInvite>'::
      __l2::<lambda_1>::operator()((void *)((longlong)param_1 + 0x18),this);
      Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::ExecuteNextStep(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2a1a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5e550

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FRemoveSessionMember,`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRemoveSessionMember>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *this;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FRemoveSessionMember> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)0x0) {
      `UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRemoveSessionMember>'::
      __l2::<lambda_1>::operator()((void *)((longlong)param_1 + 0x18),this);
      Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::ExecuteNextStep(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2a220:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5e560

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FSendSessionInvite,`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FSendSessionInvite>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FSendSessionInvite> *this;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FSendSessionInvite> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)0x0) {
      `UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FSendSessionInvite>'::
      __l2::<lambda_1>::operator()((void *)((longlong)param_1 + 0x18),this);
      Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>::ExecuteNextStep(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2a2a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5e570

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FStartMatchmaking,`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FStartMatchmaking>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FStartMatchmaking> *this;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FStartMatchmaking> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)0x0) {
      `UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FStartMatchmaking>'::__l2
      ::<lambda_1>::operator()((void *)((longlong)param_1 + 0x18),this);
      Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>::ExecuteNextStep(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2a320:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5e580

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FUpdateSessionSettings,`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FUpdateSessionSettings>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *this;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)0x0) {
      `UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FUpdateSessionSettings>'
      ::__l2::<lambda_1>::operator()((void *)((longlong)param_1 + 0x18),this);
      Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::ExecuteNextStep(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2a3a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5e590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_>::Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FAddSessionMember>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined **ppuStack_48;
  TVariant<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError> TStack_40;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)((longlong)param_1 + 0x28);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
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
  ppuStack_48 = &___7__TResult_UResult_FAddSessionMember_Online_UE__VFOnlineError_34__Online_UE__6B_
  ;
  TVariant<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError>::
  TVariant<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError>
            (&TStack_40,
             (TVariant<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError> *)
             (lVar1 + 0x78));
  ppuStack_48 = &___7__TOnlineResult_UFAddSessionMember_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  ``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FAddSessionMember>'::__l2::
  <lambda_1>::operator()'::__l5::<lambda_1>::operator()
            ((void *)((longlong)param_1 + 0x18),
             (TOnlineResult<UE::Online::FAddSessionMember> *)&ppuStack_48);
  if (1 < TStack_40.TypeIndex) {
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
              ::__l2::Destructors)[TStack_40.TypeIndex])();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Call @ 14ee5e5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FCreateSession>_>::Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FCreateSession>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FCreateSession>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined **ppuStack_48;
  TVariant<UE::Online::FCreateSession::Result,UE::Online::FOnlineError> TStack_40;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)((longlong)param_1 + 0x28);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
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
  ppuStack_48 = &___7__TResult_UResult_FCreateSession_Online_UE__VFOnlineError_34__Online_UE__6B_;
  TVariant<UE::Online::FCreateSession::Result,UE::Online::FOnlineError>::
  TVariant<UE::Online::FCreateSession::Result,UE::Online::FOnlineError>
            (&TStack_40,
             (TVariant<UE::Online::FCreateSession::Result,UE::Online::FOnlineError> *)(lVar1 + 0x78)
            );
  ppuStack_48 = &___7__TOnlineResult_UFCreateSession_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  ``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FCreateSession>'::__l2::
  <lambda_1>::operator()'::__l5::<lambda_1>::operator()
            ((void *)((longlong)param_1 + 0x18),
             (TOnlineResult<UE::Online::FCreateSession> *)&ppuStack_48);
  if (1 < TStack_40.TypeIndex) {
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
              ::__l2::Destructors)[TStack_40.TypeIndex])();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Call @ 14ee5e5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>::Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FFindSessions>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined **ppuStack_48;
  TVariant<UE::Online::FFindSessions::Result,UE::Online::FOnlineError> TStack_40;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)((longlong)param_1 + 0x28);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
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
  ppuStack_48 = &___7__TResult_UResult_FFindSessions_Online_UE__VFOnlineError_34__Online_UE__6B_;
  TVariant<UE::Online::FFindSessions::Result,UE::Online::FOnlineError>::
  TVariant<UE::Online::FFindSessions::Result,UE::Online::FOnlineError>
            (&TStack_40,
             (TVariant<UE::Online::FFindSessions::Result,UE::Online::FOnlineError> *)(lVar1 + 0x78))
  ;
  ppuStack_48 = &___7__TOnlineResult_UFFindSessions_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  ``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FFindSessions>'::__l2::
  <lambda_1>::operator()'::__l5::<lambda_1>::operator()
            ((void *)((longlong)param_1 + 0x18),
             (TOnlineResult<UE::Online::FFindSessions> *)&ppuStack_48);
  if (1 < TStack_40.TypeIndex) {
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
              ::__l2::Destructors)[TStack_40.TypeIndex])();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Call @ 14ee5e5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FJoinSession>_>::Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FJoinSession>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FJoinSession>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined **ppuStack_48;
  TVariant<UE::Online::FJoinSession::Result,UE::Online::FOnlineError> TStack_40;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)((longlong)param_1 + 0x28);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
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
  ppuStack_48 = &___7__TResult_UResult_FJoinSession_Online_UE__VFOnlineError_34__Online_UE__6B_;
  TVariant<UE::Online::FJoinSession::Result,UE::Online::FOnlineError>::
  TVariant<UE::Online::FJoinSession::Result,UE::Online::FOnlineError>
            (&TStack_40,
             (TVariant<UE::Online::FJoinSession::Result,UE::Online::FOnlineError> *)(lVar1 + 0x78));
  ppuStack_48 = &___7__TOnlineResult_UFJoinSession_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  ``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FJoinSession>'::__l2::
  <lambda_1>::operator()'::__l5::<lambda_1>::operator()
            ((void *)((longlong)param_1 + 0x18),
             (TOnlineResult<UE::Online::FJoinSession> *)&ppuStack_48);
  if (1 < TStack_40.TypeIndex) {
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
              ::__l2::Destructors)[TStack_40.TypeIndex])();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Call @ 14ee5e5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_>::Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FLeaveSession>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined **ppuStack_48;
  TVariant<UE::Online::FLeaveSession::Result,UE::Online::FOnlineError> TStack_40;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)((longlong)param_1 + 0x28);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
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
  ppuStack_48 = &___7__TResult_UResult_FLeaveSession_Online_UE__VFOnlineError_34__Online_UE__6B_;
  TVariant<UE::Online::FLeaveSession::Result,UE::Online::FOnlineError>::
  TVariant<UE::Online::FLeaveSession::Result,UE::Online::FOnlineError>
            (&TStack_40,
             (TVariant<UE::Online::FLeaveSession::Result,UE::Online::FOnlineError> *)(lVar1 + 0x78))
  ;
  ppuStack_48 = &___7__TOnlineResult_UFLeaveSession_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  ``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FLeaveSession>'::__l2::
  <lambda_1>::operator()'::__l5::<lambda_1>::operator()
            ((void *)((longlong)param_1 + 0x18),
             (TOnlineResult<UE::Online::FLeaveSession> *)&ppuStack_48);
  if (1 < TStack_40.TypeIndex) {
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
              ::__l2::Destructors)[TStack_40.TypeIndex])();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Call @ 14ee5e5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_>::Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRejectSessionInvite>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined **ppuStack_48;
  TVariant<UE::Online::FRejectSessionInvite::Result,UE::Online::FOnlineError> TStack_40;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)((longlong)param_1 + 0x28);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
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
  ppuStack_48 = &
                ___7__TResult_UResult_FRejectSessionInvite_Online_UE__VFOnlineError_34__Online_UE__6B_
  ;
  TVariant<UE::Online::FRejectSessionInvite::Result,UE::Online::FOnlineError>::
  TVariant<UE::Online::FRejectSessionInvite::Result,UE::Online::FOnlineError>
            (&TStack_40,
             (TVariant<UE::Online::FRejectSessionInvite::Result,UE::Online::FOnlineError> *)
             (lVar1 + 0x78));
  ppuStack_48 = &___7__TOnlineResult_UFRejectSessionInvite_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  ``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRejectSessionInvite>'::__l2
  ::<lambda_1>::operator()'::__l5::<lambda_1>::operator()
            ((void *)((longlong)param_1 + 0x18),
             (TOnlineResult<UE::Online::FRejectSessionInvite> *)&ppuStack_48);
  if (1 < TStack_40.TypeIndex) {
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
              ::__l2::Destructors)[TStack_40.TypeIndex])();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Call @ 14ee5e5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_>::Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRemoveSessionMember>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined **ppuStack_48;
  TVariant<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError> TStack_40;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)((longlong)param_1 + 0x28);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
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
  ppuStack_48 = &
                ___7__TResult_UResult_FRemoveSessionMember_Online_UE__VFOnlineError_34__Online_UE__6B_
  ;
  TVariant<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError>::
  TVariant<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError>
            (&TStack_40,
             (TVariant<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError> *)
             (lVar1 + 0x78));
  ppuStack_48 = &___7__TOnlineResult_UFRemoveSessionMember_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  ``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRemoveSessionMember>'::__l2
  ::<lambda_1>::operator()'::__l5::<lambda_1>::operator()
            ((void *)((longlong)param_1 + 0x18),
             (TOnlineResult<UE::Online::FRemoveSessionMember> *)&ppuStack_48);
  if (1 < TStack_40.TypeIndex) {
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
              ::__l2::Destructors)[TStack_40.TypeIndex])();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Call @ 14ee5e600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_>::Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FSendSessionInvite>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined **ppuStack_48;
  TVariant<UE::Online::FSendSessionInvite::Result,UE::Online::FOnlineError> TStack_40;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)((longlong)param_1 + 0x28);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
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
  ppuStack_48 = &
                ___7__TResult_UResult_FSendSessionInvite_Online_UE__VFOnlineError_34__Online_UE__6B_
  ;
  TVariant<UE::Online::FSendSessionInvite::Result,UE::Online::FOnlineError>::
  TVariant<UE::Online::FSendSessionInvite::Result,UE::Online::FOnlineError>
            (&TStack_40,
             (TVariant<UE::Online::FSendSessionInvite::Result,UE::Online::FOnlineError> *)
             (lVar1 + 0x78));
  ppuStack_48 = &___7__TOnlineResult_UFSendSessionInvite_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  ``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FSendSessionInvite>'::__l2::
  <lambda_1>::operator()'::__l5::<lambda_1>::operator()
            ((void *)((longlong)param_1 + 0x18),
             (TOnlineResult<UE::Online::FSendSessionInvite> *)&ppuStack_48);
  if (1 < TStack_40.TypeIndex) {
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
              ::__l2::Destructors)[TStack_40.TypeIndex])();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Call @ 14ee5e610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_>::Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FStartMatchmaking>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined **ppuStack_48;
  TVariant<UE::Online::FStartMatchmaking::Result,UE::Online::FOnlineError> TStack_40;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)((longlong)param_1 + 0x28);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
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
  ppuStack_48 = &___7__TResult_UResult_FStartMatchmaking_Online_UE__VFOnlineError_34__Online_UE__6B_
  ;
  TVariant<UE::Online::FStartMatchmaking::Result,UE::Online::FOnlineError>::
  TVariant<UE::Online::FStartMatchmaking::Result,UE::Online::FOnlineError>
            (&TStack_40,
             (TVariant<UE::Online::FStartMatchmaking::Result,UE::Online::FOnlineError> *)
             (lVar1 + 0x78));
  ppuStack_48 = &___7__TOnlineResult_UFStartMatchmaking_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  ``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FStartMatchmaking>'::__l2::
  <lambda_1>::operator()'::__l5::<lambda_1>::operator()
            ((void *)((longlong)param_1 + 0x18),
             (TOnlineResult<UE::Online::FStartMatchmaking> *)&ppuStack_48);
  if (1 < TStack_40.TypeIndex) {
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
              ::__l2::Destructors)[TStack_40.TypeIndex])();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Call @ 14ee5e620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_>::Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FUpdateSessionSettings>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined **ppuStack_48;
  TVariant<UE::Online::FUpdateSessionSettings::Result,UE::Online::FOnlineError> TStack_40;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)((longlong)param_1 + 0x28);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
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
  ppuStack_48 = &
                ___7__TResult_UResult_FUpdateSessionSettings_Online_UE__VFOnlineError_34__Online_UE__6B_
  ;
  TVariant<UE::Online::FUpdateSessionSettings::Result,UE::Online::FOnlineError>::
  TVariant<UE::Online::FUpdateSessionSettings::Result,UE::Online::FOnlineError>
            (&TStack_40,
             (TVariant<UE::Online::FUpdateSessionSettings::Result,UE::Online::FOnlineError> *)
             (lVar1 + 0x78));
  ppuStack_48 = &___7__TOnlineResult_UFUpdateSessionSettings_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  ``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FUpdateSessionSettings>'::
  __l2::<lambda_1>::operator()'::__l5::<lambda_1>::operator()
            ((void *)((longlong)param_1 + 0x18),
             (TOnlineResult<UE::Online::FUpdateSessionSettings> *)&ppuStack_48);
  if (1 < TStack_40.TypeIndex) {
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
              ::__l2::Destructors)[TStack_40.TypeIndex])();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Call @ 14ee5e630

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<UE::Online::FBatchQueryPresenceHelperResult>::Then<`TFutureBase<UE::Online::FBatchQueryPresenceHelperResult>::Next<``UE::Online::Private::TStep<UE::Online::FBatchQueryPresenceHelperResult>::SetExecFunction<UE::Online::FBatchQueryPresence,`UE::Online::FPresenceCommon::BatchQueryPresence'::__l2::<lambda_1>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TFuture<UE::Online::FBatchQueryPresenceHelperResult> local_18;
  
  local_18._0_8_ = *(undefined8 *)((longlong)param_1 + 0x30);
  local_18._8_8_ = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  `TFutureBase<UE::Online::FBatchQueryPresenceHelperResult>::
  Next<``UE::Online::Private::TStep<UE::Online::FBatchQueryPresenceHelperResult>::SetExecFunction<UE::Online::FBatchQueryPresence,`UE::Online::FPresenceCommon::BatchQueryPresence'::__l2::<lambda_1>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)param_1 + 0x18),&local_18);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Call @ 14ee5e680

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineServicesCommon::Init'::__l2::<lambda_1>,bool,UE::Online::FOperationConfig_&,TArray<FString,TSizedDefaultAllocator<32>_>_const_&>
::Call(void *param_1,FOperationConfig *param_2,TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  FOnlineServicesCommon *this;
  bool bVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  this = *(FOnlineServicesCommon **)param_1;
  pTVar2 = Online::FOnlineServicesCommon::GetConfigSectionHeirarchyWithOverrides
                     (this,&local_18,param_3);
  bVar1 = Online::LoadConfig<UE::Online::FOperationConfig>
                    ((this->ConfigProvider).Ptr,pTVar2,param_2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// Call @ 14ee5e6f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5e740

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5e790

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5e7e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5e830

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5e880

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5e8d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5e920

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5e970

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5e9c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5ea10

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5ea60

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5eab0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5eb00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5eb50

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5eba0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5ebf0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5ec40

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5ec90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5ece0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5ed30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5ed80

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5edd0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5ee20

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5ee70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5eec0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5ef10

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5ef60

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5efb0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f000

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f050

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f0a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f0f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f140

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f190

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f1e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f230

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f280

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f2d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f320

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f370

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f3c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f410

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f460

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f4b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f500

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f550

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f5a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f5f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f640

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f690

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f6e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f730

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f780

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f7d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f820

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f870

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f8c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f910

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f960

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5f9b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5fa00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5fa50

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5faa0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5faf0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5fb40

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5fb90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5fbe0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14ee5fc30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>::ExecuteNextStep'::__l8::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2d6b2;
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
    if (*(longlong *)((longlong)param_1 + 0x10) != 0) {
      lVar2 = *(longlong *)param_1;
      uVar1 = *(uint *)((longlong)param_1 + 8);
      uVar6 = 0;
      if ((int)uVar1 < *(int *)(lVar2 + 0xa0)) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 0x98) + (longlong)(int)uVar1 * 8) + 0x10))
                ();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      return;
    }
  }
LAB_14ee2d6b2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Call @ 14ee5fc40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::ExecuteNextStep'::__l8::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2d782;
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
    if (*(longlong *)((longlong)param_1 + 0x10) != 0) {
      lVar2 = *(longlong *)param_1;
      uVar1 = *(uint *)((longlong)param_1 + 8);
      uVar6 = 0;
      if ((int)uVar1 < *(int *)(lVar2 + 0xa0)) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 0x98) + (longlong)(int)uVar1 * 8) + 0x10))
                ();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      return;
    }
  }
LAB_14ee2d782:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Call @ 14ee5fc50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>::ExecuteNextStep'::__l8::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2d852;
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
    if (*(longlong *)((longlong)param_1 + 0x10) != 0) {
      lVar2 = *(longlong *)param_1;
      uVar1 = *(uint *)((longlong)param_1 + 8);
      uVar6 = 0;
      if ((int)uVar1 < *(int *)(lVar2 + 0xa0)) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 0x98) + (longlong)(int)uVar1 * 8) + 0x10))
                ();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      return;
    }
  }
LAB_14ee2d852:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Call @ 14ee5fc60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>::ExecuteNextStep'::__l8::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2d922;
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
    if (*(longlong *)((longlong)param_1 + 0x10) != 0) {
      lVar2 = *(longlong *)param_1;
      uVar1 = *(uint *)((longlong)param_1 + 8);
      uVar6 = 0;
      if ((int)uVar1 < *(int *)(lVar2 + 0xa0)) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 0x98) + (longlong)(int)uVar1 * 8) + 0x10))
                ();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      return;
    }
  }
LAB_14ee2d922:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Call @ 14ee5fc70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>::ExecuteNextStep'::__l8::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2d9f2;
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
    if (*(longlong *)((longlong)param_1 + 0x10) != 0) {
      lVar2 = *(longlong *)param_1;
      uVar1 = *(uint *)((longlong)param_1 + 8);
      uVar6 = 0;
      if ((int)uVar1 < *(int *)(lVar2 + 0xa0)) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 0x98) + (longlong)(int)uVar1 * 8) + 0x10))
                ();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      return;
    }
  }
LAB_14ee2d9f2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Call @ 14ee5fc80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>::ExecuteNextStep'::__l8::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2dac2;
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
    if (*(longlong *)((longlong)param_1 + 0x10) != 0) {
      lVar2 = *(longlong *)param_1;
      uVar1 = *(uint *)((longlong)param_1 + 8);
      uVar6 = 0;
      if ((int)uVar1 < *(int *)(lVar2 + 0xa0)) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 0x98) + (longlong)(int)uVar1 * 8) + 0x10))
                ();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      return;
    }
  }
LAB_14ee2dac2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Call @ 14ee5fc90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::ExecuteNextStep'::__l8::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2db92;
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
    if (*(longlong *)((longlong)param_1 + 0x10) != 0) {
      lVar2 = *(longlong *)param_1;
      uVar1 = *(uint *)((longlong)param_1 + 8);
      uVar6 = 0;
      if ((int)uVar1 < *(int *)(lVar2 + 0xa0)) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 0x98) + (longlong)(int)uVar1 * 8) + 0x10))
                ();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      return;
    }
  }
LAB_14ee2db92:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Call @ 14ee5fca0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::ExecuteNextStep'::__l8::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2dc62;
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
    if (*(longlong *)((longlong)param_1 + 0x10) != 0) {
      lVar2 = *(longlong *)param_1;
      uVar1 = *(uint *)((longlong)param_1 + 8);
      uVar6 = 0;
      if ((int)uVar1 < *(int *)(lVar2 + 0xa0)) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 0x98) + (longlong)(int)uVar1 * 8) + 0x10))
                ();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      return;
    }
  }
LAB_14ee2dc62:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Call @ 14ee5fcb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>::ExecuteNextStep'::__l8::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2dd32;
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
    if (*(longlong *)((longlong)param_1 + 0x10) != 0) {
      lVar2 = *(longlong *)param_1;
      uVar1 = *(uint *)((longlong)param_1 + 8);
      uVar6 = 0;
      if ((int)uVar1 < *(int *)(lVar2 + 0xa0)) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 0x98) + (longlong)(int)uVar1 * 8) + 0x10))
                ();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      return;
    }
  }
LAB_14ee2dd32:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Call @ 14ee5fcc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>::ExecuteNextStep'::__l8::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2de02;
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
    if (*(longlong *)((longlong)param_1 + 0x10) != 0) {
      lVar2 = *(longlong *)param_1;
      uVar1 = *(uint *)((longlong)param_1 + 8);
      uVar6 = 0;
      if ((int)uVar1 < *(int *)(lVar2 + 0xa0)) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 0x98) + (longlong)(int)uVar1 * 8) + 0x10))
                ();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      return;
    }
  }
LAB_14ee2de02:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Call @ 14ee5fcd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::ExecuteNextStep'::__l8::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2ded2;
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
    if (*(longlong *)((longlong)param_1 + 0x10) != 0) {
      lVar2 = *(longlong *)param_1;
      uVar1 = *(uint *)((longlong)param_1 + 8);
      uVar6 = 0;
      if ((int)uVar1 < *(int *)(lVar2 + 0xa0)) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 0x98) + (longlong)(int)uVar1 * 8) + 0x10))
                ();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      return;
    }
  }
LAB_14ee2ded2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Call @ 14ee5fce0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2e300;
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
    if (*(TOnlineAsyncOp<UE::Online::FAddSessionMember> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FAddSessionMember> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FAddSessionMember> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2e300:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fcf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2e370;
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
    if (*(TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession> **)
                  ((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FAuthBeginVerifiedAuthSession> *)((longlong)param_1 + 8)
                 ,*(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2e370:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fd00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2e3e0;
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
    if (*(TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket> **)
                  ((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FAuthCancelVerifiedAuthTicket> *)((longlong)param_1 + 8)
                 ,*(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2e3e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fd10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2e450;
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
    if (*(TOnlineAsyncOp<UE::Online::FAuthCreateAccount> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FAuthCreateAccount> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FAuthCreateAccount> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FAuthCreateAccount> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2e450:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fd20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2e4c0;
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
    if (*(TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession> **)
                  ((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FAuthEndVerifiedAuthSession> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2e4c0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fd30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2e530;
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
    if (*(TOnlineAsyncOp<UE::Online::FAuthLinkAccount> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FAuthLinkAccount> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FAuthLinkAccount> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FAuthLinkAccount> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2e530:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fd40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2e5a0;
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
    if (*(TOnlineAsyncOp<UE::Online::FAuthLogin> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FAuthLogin> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FAuthLogin>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FAuthLogin> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FAuthLogin> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2e5a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fd50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2e610;
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
    if (*(TOnlineAsyncOp<UE::Online::FAuthLogout> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FAuthLogout> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FAuthLogout>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FAuthLogout> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FAuthLogout> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2e610:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fd60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2e680;
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
    if (*(TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes> **)
                  ((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FAuthModifyAccountAttributes> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2e680:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fd70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2e6f0;
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
    if (*(TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken> **)
                  ((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FAuthQueryExternalAuthToken> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2e6f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fd80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2e760;
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
    if (*(TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket> **)
         ((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket> **)
                  ((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FAuthQueryExternalServerAuthTicket> *)
                 ((longlong)param_1 + 8),*(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2e760:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fd90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2e7d0;
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
    if (*(TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket> **)
                  ((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FAuthQueryVerifiedAuthTicket> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2e7d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fda0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2e840;
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
    if (*(TOnlineAsyncOp<UE::Online::FBatchQueryPresence> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FBatchQueryPresence> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FBatchQueryPresence> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2e840:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fdb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2e8b0;
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
    if (*(TOnlineAsyncOp<UE::Online::FCommerceCheckout> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FCommerceCheckout> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FCommerceCheckout> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FCommerceCheckout> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2e8b0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fdc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2e920;
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
    if (*(TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements> **)
                  ((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FCommerceQueryEntitlements> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2e920:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fdd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2e990;
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
    if (*(TOnlineAsyncOp<UE::Online::FCommerceQueryOffers> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FCommerceQueryOffers> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FCommerceQueryOffers> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FCommerceQueryOffers> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2e990:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fde0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2ea00;
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
    if (*(TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById> **)
                  ((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FCommerceQueryOffersById> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2ea00:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fdf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2ea70;
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
    if (*(TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements> **)
         ((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements> **)
                  ((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FCommerceQueryTransactionEntitlements> *)
                 ((longlong)param_1 + 8),*(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2ea70:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fe00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2eae0;
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
    if (*(TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement> **)
                  ((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FCommerceRedeemEntitlement> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2eae0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fe10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2eb50;
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
    if (*(TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken> **)
                  ((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FCommerceRetrieveS2SToken> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2eb50:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fe20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2ebc0;
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
    if (*(TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FCommerceShowStoreUI> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2ebc0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fe30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2ec30;
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
    if (*(TOnlineAsyncOp<UE::Online::FCreateLobby> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FCreateLobby> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FCreateLobby>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FCreateLobby> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FCreateLobby> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2ec30:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fe40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2eca0;
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
    if (*(TOnlineAsyncOp<UE::Online::FCreateSession> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FCreateSession> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FCreateSession>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FCreateSession> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FCreateSession> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2eca0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fe50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2ed10;
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
    if (*(TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation> **)((longlong)param_1 + 0x40)
                 ,(TOnlineResult<UE::Online::FDeclineLobbyInvitation> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2ed10:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fe60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2ed80;
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
    if (*(TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI> **)
                  ((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FExternalUIShowFriendsUI> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2ed80:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fe70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2edf0;
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
    if (*(TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FExternalUIShowLoginUI> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2edf0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fe80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2ee60;
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
    if (*(TOnlineAsyncOp<UE::Online::FFindLobbies> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FFindLobbies> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FFindLobbies>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FFindLobbies> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FFindLobbies> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2ee60:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fe90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2eed0;
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
    if (*(TOnlineAsyncOp<UE::Online::FFindSessions> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FFindSessions> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FFindSessions>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FFindSessions> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FFindSessions> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2eed0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fea0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2ef40;
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
    if (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FFunctionalTestLobbies> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2ef40:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5feb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2efb0;
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
    if (*(TOnlineAsyncOp<UE::Online::FInviteLobbyMember> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FInviteLobbyMember> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FInviteLobbyMember> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FInviteLobbyMember> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2efb0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fec0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f020;
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
    if (*(TOnlineAsyncOp<UE::Online::FJoinLobby> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FJoinLobby> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FJoinLobby>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FJoinLobby> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FJoinLobby> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f020:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fed0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f090;
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
    if (*(TOnlineAsyncOp<UE::Online::FJoinSession> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FJoinSession> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FJoinSession>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FJoinSession> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FJoinSession> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f090:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fee0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f100;
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
    if (*(TOnlineAsyncOp<UE::Online::FKickLobbyMember> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FKickLobbyMember> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FKickLobbyMember> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FKickLobbyMember> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f100:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fef0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f170;
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
    if (*(TOnlineAsyncOp<UE::Online::FLeaveLobby> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FLeaveLobby> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FLeaveLobby> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FLeaveLobby> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f170:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5ff00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f1e0;
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
    if (*(TOnlineAsyncOp<UE::Online::FLeaveSession> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FLeaveSession> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FLeaveSession>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FLeaveSession> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FLeaveSession> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f1e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5ff10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f250;
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
    if (*(TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FModifyLobbyAttributes> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f250:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5ff20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f2c0;
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
    if (*(TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FModifyLobbyJoinPolicy> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f2c0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5ff30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f330;
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
    if (*(TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes> **)
                  ((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FModifyLobbyMemberAttributes> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f330:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5ff40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f3a0;
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
    if (*(TOnlineAsyncOp<UE::Online::FModifyLobbySchema> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FModifyLobbySchema> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FModifyLobbySchema> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FModifyLobbySchema> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f3a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5ff50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f410;
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
    if (*(TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FPartialUpdatePresence> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f410:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5ff60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f480;
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
    if (*(TOnlineAsyncOp<UE::Online::FPromoteLobbyMember> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FPromoteLobbyMember> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FPromoteLobbyMember> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FPromoteLobbyMember> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f480:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5ff70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f4f0;
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
    if (*(TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions> **)
                  ((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FQueryAchievementDefinitions> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f4f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5ff80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f560;
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
    if (*(TOnlineAsyncOp<UE::Online::FQueryAchievementStates> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FQueryAchievementStates> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FQueryAchievementStates> **)((longlong)param_1 + 0x40)
                 ,(TOnlineResult<UE::Online::FQueryAchievementStates> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f560:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5ff90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f5d0;
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
    if (*(TOnlineAsyncOp<UE::Online::FQueryPresence> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FQueryPresence> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FQueryPresence>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FQueryPresence> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FQueryPresence> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f5d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5ffa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f640;
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
    if (*(TOnlineAsyncOp<UE::Online::FQueryUserPrivilege> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FQueryUserPrivilege> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FQueryUserPrivilege> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FQueryUserPrivilege> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f640:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5ffb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f6b0;
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
    if (*(TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FReadEntriesAroundRank> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f6b0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5ffc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f720;
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
    if (*(TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FReadEntriesAroundUser> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f720:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5ffd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f790;
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
    if (*(TOnlineAsyncOp<UE::Online::FReadEntriesForUsers> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FReadEntriesForUsers> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FReadEntriesForUsers> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FReadEntriesForUsers> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f790:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5ffe0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f800;
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
    if (*(TOnlineAsyncOp<UE::Online::FRejectSessionInvite> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FRejectSessionInvite> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FRejectSessionInvite> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f800:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee5fff0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f870;
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
    if (*(TOnlineAsyncOp<UE::Online::FRemoveSessionMember> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FRemoveSessionMember> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FRemoveSessionMember> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f870:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee60000

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f8e0;
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
    if (*(TOnlineAsyncOp<UE::Online::FRestoreLobbies> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FRestoreLobbies> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FRestoreLobbies> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FRestoreLobbies> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f8e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee60010

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f950;
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
    if (*(TOnlineAsyncOp<UE::Online::FSendSessionInvite> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FSendSessionInvite> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FSendSessionInvite> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f950:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee60020

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2f9c0;
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
    if (*(TOnlineAsyncOp<UE::Online::FStartMatchmaking> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FStartMatchmaking> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FStartMatchmaking> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2f9c0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee60030

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2fa30;
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
    if (*(TOnlineAsyncOp<UE::Online::FUnlockAchievements> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FUnlockAchievements> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FUnlockAchievements> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FUnlockAchievements> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2fa30:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee60040

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2faa0;
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
    if (*(TOnlineAsyncOp<UE::Online::FUpdatePresence> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FUpdatePresence> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FUpdatePresence> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FUpdatePresence> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2faa0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee60050

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2fb10;
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
    if (*(TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FUpdateSessionSettings> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2fb10:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee60060

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee2fb80;
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
    if (*(TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores> **)((longlong)param_1 + 0x40)
                 ,(TOnlineResult<UE::Online::FWriteLeaderboardScores> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ee2fb80:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ee60070

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FAddSessionMember>::Start'::__l8::<lambda_2>,bool,float>
::Call(void *param_1,float *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee600a0;
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
    if (*(TOnlineAsyncOp<UE::Online::FAddSessionMember> **)param_1 !=
        (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>::Start
                (*(TOnlineAsyncOp<UE::Online::FAddSessionMember> **)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return false;
    }
  }
LAB_14ee600a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return false;
}

// Call @ 14ee600e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FBatchQueryPresence>::Start'::__l8::<lambda_2>,bool,float>
::Call(void *param_1,float *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee60110;
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
    if (*(TOnlineAsyncOp<UE::Online::FBatchQueryPresence> **)param_1 !=
        (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::Start
                (*(TOnlineAsyncOp<UE::Online::FBatchQueryPresence> **)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return false;
    }
  }
LAB_14ee60110:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return false;
}

// Call @ 14ee60150

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FCreateSession>::Start'::__l8::<lambda_2>,bool,float>
::Call(void *param_1,float *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee60180;
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
    if (*(TOnlineAsyncOp<UE::Online::FCreateSession> **)param_1 !=
        (TOnlineAsyncOp<UE::Online::FCreateSession> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FCreateSession>::Start
                (*(TOnlineAsyncOp<UE::Online::FCreateSession> **)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return false;
    }
  }
LAB_14ee60180:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return false;
}

// Call @ 14ee601c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFindSessions>::Start'::__l8::<lambda_2>,bool,float>
::Call(void *param_1,float *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee601f0;
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
    if (*(TOnlineAsyncOp<UE::Online::FFindSessions> **)param_1 !=
        (TOnlineAsyncOp<UE::Online::FFindSessions> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FFindSessions>::Start
                (*(TOnlineAsyncOp<UE::Online::FFindSessions> **)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return false;
    }
  }
LAB_14ee601f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return false;
}

// Call @ 14ee60230

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FJoinSession>::Start'::__l8::<lambda_2>,bool,float>
::Call(void *param_1,float *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee60260;
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
    if (*(TOnlineAsyncOp<UE::Online::FJoinSession> **)param_1 !=
        (TOnlineAsyncOp<UE::Online::FJoinSession> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FJoinSession>::Start
                (*(TOnlineAsyncOp<UE::Online::FJoinSession> **)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return false;
    }
  }
LAB_14ee60260:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return false;
}

// Call @ 14ee602a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FLeaveSession>::Start'::__l8::<lambda_2>,bool,float>
::Call(void *param_1,float *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee602d0;
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
    if (*(TOnlineAsyncOp<UE::Online::FLeaveSession> **)param_1 !=
        (TOnlineAsyncOp<UE::Online::FLeaveSession> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FLeaveSession>::Start
                (*(TOnlineAsyncOp<UE::Online::FLeaveSession> **)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return false;
    }
  }
LAB_14ee602d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return false;
}

// Call @ 14ee60310

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FRejectSessionInvite>::Start'::__l8::<lambda_2>,bool,float>
::Call(void *param_1,float *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee60340;
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
    if (*(TOnlineAsyncOp<UE::Online::FRejectSessionInvite> **)param_1 !=
        (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::Start
                (*(TOnlineAsyncOp<UE::Online::FRejectSessionInvite> **)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return false;
    }
  }
LAB_14ee60340:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return false;
}

// Call @ 14ee60380

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FRemoveSessionMember>::Start'::__l8::<lambda_2>,bool,float>
::Call(void *param_1,float *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee603b0;
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
    if (*(TOnlineAsyncOp<UE::Online::FRemoveSessionMember> **)param_1 !=
        (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::Start
                (*(TOnlineAsyncOp<UE::Online::FRemoveSessionMember> **)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return false;
    }
  }
LAB_14ee603b0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return false;
}

// Call @ 14ee603f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FSendSessionInvite>::Start'::__l8::<lambda_2>,bool,float>
::Call(void *param_1,float *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee60420;
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
    if (*(TOnlineAsyncOp<UE::Online::FSendSessionInvite> **)param_1 !=
        (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>::Start
                (*(TOnlineAsyncOp<UE::Online::FSendSessionInvite> **)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return false;
    }
  }
LAB_14ee60420:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return false;
}

// Call @ 14ee60460

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FStartMatchmaking>::Start'::__l8::<lambda_2>,bool,float>
::Call(void *param_1,float *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee60490;
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
    if (*(TOnlineAsyncOp<UE::Online::FStartMatchmaking> **)param_1 !=
        (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>::Start
                (*(TOnlineAsyncOp<UE::Online::FStartMatchmaking> **)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return false;
    }
  }
LAB_14ee60490:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return false;
}

// Call @ 14ee604d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FUpdateSessionSettings>::Start'::__l8::<lambda_2>,bool,float>
::Call(void *param_1,float *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee60500;
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
    if (*(TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> **)param_1 !=
        (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::Start
                (*(TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> **)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return false;
    }
  }
LAB_14ee60500:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return false;
}

// Call @ 14ef87000

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FAcceptFriendInvite>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef77142;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ef77142:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ef87010

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryStats>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef771e2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ef771e2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ef87020

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>_const_&,UE::Online::TOnlineResult<UE::Online::FBlockUser>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef77282;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ef77282:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ef87030

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryBlockedUsers>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef77322;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ef77322:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ef87040

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryFriends>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef773c2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ef773c2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ef87050

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryStats>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef77462;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ef77462:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ef87060

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryUserAvatar>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef77502;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ef77502:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ef87070

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryUserInfo>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef775a2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ef775a2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ef87080

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectFriendInvite>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef77642;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ef77642:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ef87090

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>_const_&,UE::Online::TOnlineResult<UE::Online::FResetStats>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef776e2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ef776e2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ef870a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendFriendInvite>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef77782;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ef77782:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ef870b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>_const_&,UE::Online::TOnlineResult<UE::Online::FShowUserProfile>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef77822;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ef77822:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ef870c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>_const_&,UE::Online::TOnlineResult<UE::Online::FTitleFileEnumerateFiles>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef778c2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ef778c2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ef870d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>_const_&,UE::Online::TOnlineResult<UE::Online::FTitleFileReadFile>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef77962;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ef77962:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ef870e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>_const_&,UE::Online::TOnlineResult<UE::Online::FTriggerEvent>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef77a02;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ef77a02:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ef870f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateStats>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef77aa2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ef77aa2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ef87100

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileCopyFile>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef77b42;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ef77b42:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ef87110

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileDeleteFile>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef77be2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ef77be2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ef87120

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileEnumerateFiles>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef77c82;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ef77c82:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ef87130

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileReadFile>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef77d22;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ef77d22:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ef87140

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileWriteFile>_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef77dc2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14ef77dc2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14ef87150

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ef87170

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ef87190

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ef871b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>::SetResultAndState'::__l27::<lambda_1>
  ::operator()(param_1);
  return false;
}

// Call @ 14ef871d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ef871f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ef87210

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ef87230

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ef87250

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ef87270

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ef87290

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>::SetResultAndState'::__l27::<lambda_1>
  ::operator()(param_1);
  return false;
}

// Call @ 14ef872b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ef872d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ef872f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>::SetResultAndState'::__l27::<lambda_1>
  ::operator()(param_1);
  return false;
}

// Call @ 14ef87310

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ef87330

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>::SetResultAndState'::__l27::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14ef87350

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>::SetResultAndState'::__l27::<lambda_1>
  ::operator()(param_1);
  return false;
}

// Call @ 14ef87370

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ef87390

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>::SetResultAndState'::__l27::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14ef873b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>::SetResultAndState'::__l27::<lambda_1>
  ::operator()(param_1);
  return false;
}

// Call @ 14ef873d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>::SetResultAndState'::__l27::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>::SetResultAndState'::__l27::<lambda_1>
  ::operator()(param_1);
  return false;
}

// Call @ 14ef873f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ef87410

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ef87430

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ef87450

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ef87470

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ef87490

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ef874b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ef874d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ef874f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ef87510

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ef87530

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ef87550

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ef87570

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ef87590

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ef875b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ef875d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ef875f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ef87610

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ef87630

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ef87650

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ef87670

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>::SetResultAndState'::__l27::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14ef87690

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef78240;
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
    if (*(TOnlineAsyncOp<UE::Online::FAcceptFriendInvite> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FAcceptFriendInvite> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FAcceptFriendInvite> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FAcceptFriendInvite> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ef78240:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ef876a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef782b0;
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
    if (*(TOnlineAsyncOp<UE::Online::FBatchQueryStats> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FBatchQueryStats> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FBatchQueryStats> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FBatchQueryStats> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ef782b0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ef876b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef78320;
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
    if (*(TOnlineAsyncOp<UE::Online::FBlockUser> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FBlockUser> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FBlockUser>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FBlockUser> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FBlockUser> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ef78320:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ef876c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef78390;
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
    if (*(TOnlineAsyncOp<UE::Online::FQueryBlockedUsers> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FQueryBlockedUsers> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FQueryBlockedUsers> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FQueryBlockedUsers> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ef78390:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ef876d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef78400;
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
    if (*(TOnlineAsyncOp<UE::Online::FQueryFriends> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FQueryFriends> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FQueryFriends>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FQueryFriends> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FQueryFriends> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ef78400:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ef876e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x70);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef78470;
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
    if (*(TOnlineAsyncOp<UE::Online::FQueryStats> **)((longlong)param_1 + 0x68) !=
        (TOnlineAsyncOp<UE::Online::FQueryStats> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FQueryStats>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FQueryStats> **)((longlong)param_1 + 0x68),
                 (TOnlineResult<UE::Online::FQueryStats> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ef78470:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ef876f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef784e0;
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
    if (*(TOnlineAsyncOp<UE::Online::FQueryUserAvatar> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FQueryUserAvatar> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FQueryUserAvatar> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FQueryUserAvatar> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ef784e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ef87700

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef78550;
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
    if (*(TOnlineAsyncOp<UE::Online::FQueryUserInfo> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FQueryUserInfo> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FQueryUserInfo> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FQueryUserInfo> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ef78550:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ef87710

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef785c0;
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
    if (*(TOnlineAsyncOp<UE::Online::FRejectFriendInvite> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FRejectFriendInvite> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FRejectFriendInvite> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FRejectFriendInvite> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ef785c0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ef87720

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef78630;
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
    if (*(TOnlineAsyncOp<UE::Online::FResetStats> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FResetStats> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FResetStats>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FResetStats> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FResetStats> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ef78630:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ef87730

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef786a0;
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
    if (*(TOnlineAsyncOp<UE::Online::FSendFriendInvite> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FSendFriendInvite> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FSendFriendInvite> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FSendFriendInvite> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ef786a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ef87740

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef78710;
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
    if (*(TOnlineAsyncOp<UE::Online::FShowUserProfile> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FShowUserProfile> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FShowUserProfile> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FShowUserProfile> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ef78710:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ef87750

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef78780;
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
    if (*(TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles> **)
                  ((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FTitleFileEnumerateFiles> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ef78780:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ef87760

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef787f0;
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
    if (*(TOnlineAsyncOp<UE::Online::FTitleFileReadFile> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FTitleFileReadFile> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FTitleFileReadFile> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FTitleFileReadFile> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ef787f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ef87770

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef78860;
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
    if (*(TOnlineAsyncOp<UE::Online::FTriggerEvent> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FTriggerEvent> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FTriggerEvent> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FTriggerEvent> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ef78860:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ef87780

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef788d0;
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
    if (*(TOnlineAsyncOp<UE::Online::FUpdateStats> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FUpdateStats> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FUpdateStats>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FUpdateStats> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FUpdateStats> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ef788d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ef87790

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef78940;
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
    if (*(TOnlineAsyncOp<UE::Online::FUserFileCopyFile> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FUserFileCopyFile> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FUserFileCopyFile> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FUserFileCopyFile> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ef78940:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ef877a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef789b0;
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
    if (*(TOnlineAsyncOp<UE::Online::FUserFileDeleteFile> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FUserFileDeleteFile> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FUserFileDeleteFile> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FUserFileDeleteFile> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ef789b0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ef877b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef78a20;
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
    if (*(TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles> **)((longlong)param_1 + 0x40)
                 ,(TOnlineResult<UE::Online::FUserFileEnumerateFiles> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ef78a20:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ef877c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef78a90;
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
    if (*(TOnlineAsyncOp<UE::Online::FUserFileReadFile> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FUserFileReadFile> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FUserFileReadFile> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FUserFileReadFile> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ef78a90:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14ef877d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>::SetResultAndState'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ef78b00;
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
    if (*(TOnlineAsyncOp<UE::Online::FUserFileWriteFile> **)((longlong)param_1 + 0x40) !=
        (TOnlineAsyncOp<UE::Online::FUserFileWriteFile> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>::SetResultAndState
                (*(TOnlineAsyncOp<UE::Online::FUserFileWriteFile> **)((longlong)param_1 + 0x40),
                 (TOnlineResult<UE::Online::FUserFileWriteFile> *)((longlong)param_1 + 8),
                 *(EAsyncOpState *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ef78b00:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14eff67a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efe7c42;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14efe7c42:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14eff67b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efe7ce2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14efe7ce2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14eff67c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efe7d82;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14efe7d82:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14eff67d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyJoined_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efe7e22;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14efe7e22:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14eff67e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efe7ec2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14efe7ec2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14eff67f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyLeft_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efe7f62;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14efe7f62:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14eff6800

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efe8002;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14efe8002:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14eff6810

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyMemberJoined_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efe80a2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14efe80a2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14eff6820

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyMemberLeft_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efe8142;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14efe8142:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14eff6830

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbySchemaChanged_const_&)>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efe81e2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)param_1 + 8);
    if (this != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)param_1 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this,(FDelegateHandle)*(ulong64 *)param_1);
      }
    }
  }
LAB_14efe81e2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14eff6840

TFuture<void> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::CaptureOperationStepResult<UE::Online::FCreateLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>_>'::__l2::<lambda_1>,TFuture<void>,UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&>
::Call(TFuture<void> *__return_storage_ptr__,void *param_1,
      TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_2,Params *param_3)

{
  `UE::Online::Private::
  CaptureOperationStepResult<UE::Online::FCreateLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3);
  return __return_storage_ptr__;
}

// Call @ 14eff6870

TFuture<void> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::CaptureOperationStepResult<UE::Online::FFindLobbies,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>_>'::__l2::<lambda_1>,TFuture<void>,UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&>
::Call(TFuture<void> *__return_storage_ptr__,void *param_1,
      TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_2,Params *param_3)

{
  `UE::Online::Private::
  CaptureOperationStepResult<UE::Online::FFindLobbies,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FFindLobbies>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3);
  return __return_storage_ptr__;
}

// Call @ 14eff68a0

TFuture<void> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>'::__l2::<lambda_1>,TFuture<void>,UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&>
::Call(TFuture<void> *__return_storage_ptr__,void *param_1,
      TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_2)

{
  `UE::Online::Private::
  CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 14eff68d0

TFuture<void> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::ConsumeOperationStepResult<UE::Online::FInviteLobbyMember,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FInviteLobbyMember>_>'::__l2::<lambda_1>,TFuture<void>,UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&>
::Call(TFuture<void> *__return_storage_ptr__,void *param_1,
      TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_2,Params *param_3)

{
  `UE::Online::Private::
  ConsumeOperationStepResult<UE::Online::FInviteLobbyMember,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FInviteLobbyMember>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3);
  return __return_storage_ptr__;
}

// Call @ 14eff6900

TFuture<void> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::ConsumeOperationStepResult<UE::Online::FJoinLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FJoinLobby>_>'::__l2::<lambda_1>,TFuture<void>,UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&>
::Call(TFuture<void> *__return_storage_ptr__,void *param_1,
      TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_2,Params *param_3)

{
  `UE::Online::Private::
  ConsumeOperationStepResult<UE::Online::FJoinLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FJoinLobby>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3);
  return __return_storage_ptr__;
}

// Call @ 14eff6930

TFuture<void> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::ConsumeOperationStepResult<UE::Online::FLeaveLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FLeaveLobby>_>'::__l2::<lambda_1>,TFuture<void>,UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&>
::Call(TFuture<void> *__return_storage_ptr__,void *param_1,
      TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_2,Params *param_3)

{
  `UE::Online::Private::
  ConsumeOperationStepResult<UE::Online::FLeaveLobby,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FLeaveLobby>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3);
  return __return_storage_ptr__;
}

// Call @ 14eff6960

TFuture<void> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::ConsumeOperationStepResult<UE::Online::FModifyLobbyAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyAttributes>_>'::__l2::<lambda_1>,TFuture<void>,UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&>
::Call(TFuture<void> *__return_storage_ptr__,void *param_1,
      TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_2,Params *param_3)

{
  `UE::Online::Private::
  ConsumeOperationStepResult<UE::Online::FModifyLobbyAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyAttributes>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3);
  return __return_storage_ptr__;
}

// Call @ 14eff6990

TFuture<void> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::ConsumeOperationStepResult<UE::Online::FModifyLobbyMemberAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyMemberAttributes>_>'::__l2::<lambda_1>,TFuture<void>,UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&>
::Call(TFuture<void> *__return_storage_ptr__,void *param_1,
      TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_2,Params *param_3)

{
  `UE::Online::Private::
  ConsumeOperationStepResult<UE::Online::FModifyLobbyMemberAttributes,UE::Online::FFunctionalTestLobbies,UE::Online::Private::FBindOperation<UE::Online::FModifyLobbyMemberAttributes>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2,param_3);
  return __return_storage_ptr__;
}

// Call @ 14eff69c0

TFuture<void> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params_&&)>'::__l2::<lambda_1>,TFuture<void>,UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&>
::Call(TFuture<void> *__return_storage_ptr__,void *param_1,
      TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_2)

{
  `UE::Online::Private::
  ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params_&&)>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 14eff69f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::
  <lambda_1>::operator()(param_1);
  return false;
}

// Call @ 14eff6a10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,int_&,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_22>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14eff6a40;
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
    if (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8) !=
        (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep
                (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14eff6a40:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14eff6a70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

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
  TFutureBase<void> TStack_48;
  undefined1 auStack_38 [16];
  <lambda_1> <Stack_28;
  
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    lVar1 = *(longlong *)((longlong)param_1 + 8);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)((longlong)param_1 + 0x18);
      CheckCallable(*(void **)((longlong)param_1 + 0x20));
      pcVar3 = *(code **)((longlong)param_1 + 0x20);
      plVar7 = (longlong *)((longlong)param_1 + 0x30);
      if (*(longlong **)((longlong)param_1 + 0x48) != (longlong *)0x0) {
        plVar7 = *(longlong **)((longlong)param_1 + 0x48);
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(&TStack_48,uVar6,lVar1,uVar2);
      <Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
      <Stack_28.Continuation.__this = *(TStep<void> **)param_1;
      <Stack_28.Continuation.WeakOperation.Object =
           *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
      if (<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
        WeakReferenceCount =
             (atomic<int>)
             ((int)(<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
                   WeakReferenceCount + 1);
        UNLOCK();
      }
      TFutureBase<void>::
      Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
                (&TStack_48,(TFuture<void> *)auStack_38,&<Stack_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)auStack_38._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_48.State.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14efe9c23:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// Call @ 14eff6a80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

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
  TFutureBase<void> TStack_48;
  undefined1 auStack_38 [16];
  <lambda_1> <Stack_28;
  
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    lVar1 = *(longlong *)((longlong)param_1 + 8);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)((longlong)param_1 + 0x18);
      CheckCallable(*(void **)((longlong)param_1 + 0x20));
      pcVar3 = *(code **)((longlong)param_1 + 0x20);
      plVar7 = (longlong *)((longlong)param_1 + 0x30);
      if (*(longlong **)((longlong)param_1 + 0x48) != (longlong *)0x0) {
        plVar7 = *(longlong **)((longlong)param_1 + 0x48);
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(&TStack_48,uVar6,lVar1,uVar2);
      <Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
      <Stack_28.Continuation.__this = *(TStep<void> **)param_1;
      <Stack_28.Continuation.WeakOperation.Object =
           *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
      if (<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
        WeakReferenceCount =
             (atomic<int>)
             ((int)(<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
                   WeakReferenceCount + 1);
        UNLOCK();
      }
      TFutureBase<void>::
      Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
                (&TStack_48,(TFuture<void> *)auStack_38,&<Stack_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)auStack_38._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_48.State.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14efe9d23:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// Call @ 14eff6a90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

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
  TFutureBase<void> TStack_48;
  undefined1 auStack_38 [16];
  <lambda_1> <Stack_28;
  
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    lVar1 = *(longlong *)((longlong)param_1 + 8);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)((longlong)param_1 + 0x18);
      CheckCallable(*(void **)((longlong)param_1 + 0x20));
      pcVar3 = *(code **)((longlong)param_1 + 0x20);
      plVar7 = (longlong *)((longlong)param_1 + 0x30);
      if (*(longlong **)((longlong)param_1 + 0x48) != (longlong *)0x0) {
        plVar7 = *(longlong **)((longlong)param_1 + 0x48);
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(&TStack_48,uVar6,lVar1,uVar2);
      <Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
      <Stack_28.Continuation.__this = *(TStep<void> **)param_1;
      <Stack_28.Continuation.WeakOperation.Object =
           *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
      if (<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
        WeakReferenceCount =
             (atomic<int>)
             ((int)(<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
                   WeakReferenceCount + 1);
        UNLOCK();
      }
      TFutureBase<void>::
      Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
                (&TStack_48,(TFuture<void> *)auStack_38,&<Stack_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)auStack_38._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_48.State.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14efe9e23:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// Call @ 14eff6aa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

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
  TFutureBase<void> TStack_48;
  undefined1 auStack_38 [16];
  <lambda_1> <Stack_28;
  
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    lVar1 = *(longlong *)((longlong)param_1 + 8);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)((longlong)param_1 + 0x18);
      CheckCallable(*(void **)((longlong)param_1 + 0x20));
      pcVar3 = *(code **)((longlong)param_1 + 0x20);
      plVar7 = (longlong *)((longlong)param_1 + 0x30);
      if (*(longlong **)((longlong)param_1 + 0x48) != (longlong *)0x0) {
        plVar7 = *(longlong **)((longlong)param_1 + 0x48);
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(&TStack_48,uVar6,lVar1,uVar2);
      <Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
      <Stack_28.Continuation.__this = *(TStep<void> **)param_1;
      <Stack_28.Continuation.WeakOperation.Object =
           *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
      if (<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
        WeakReferenceCount =
             (atomic<int>)
             ((int)(<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
                   WeakReferenceCount + 1);
        UNLOCK();
      }
      TFutureBase<void>::
      Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
                (&TStack_48,(TFuture<void> *)auStack_38,&<Stack_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)auStack_38._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_48.State.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14efe9f23:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// Call @ 14eff6ab0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

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
  TFutureBase<void> TStack_48;
  undefined1 auStack_38 [16];
  <lambda_1> <Stack_28;
  
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    lVar1 = *(longlong *)((longlong)param_1 + 8);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)((longlong)param_1 + 0x18);
      CheckCallable(*(void **)((longlong)param_1 + 0x20));
      pcVar3 = *(code **)((longlong)param_1 + 0x20);
      plVar7 = (longlong *)((longlong)param_1 + 0x30);
      if (*(longlong **)((longlong)param_1 + 0x48) != (longlong *)0x0) {
        plVar7 = *(longlong **)((longlong)param_1 + 0x48);
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(&TStack_48,uVar6,lVar1,uVar2);
      <Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
      <Stack_28.Continuation.__this = *(TStep<void> **)param_1;
      <Stack_28.Continuation.WeakOperation.Object =
           *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
      if (<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
        WeakReferenceCount =
             (atomic<int>)
             ((int)(<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
                   WeakReferenceCount + 1);
        UNLOCK();
      }
      TFutureBase<void>::
      Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
                (&TStack_48,(TFuture<void> *)auStack_38,&<Stack_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)auStack_38._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_48.State.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14efea023:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// Call @ 14eff6ac0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

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
  TFutureBase<void> TStack_48;
  undefined1 auStack_38 [16];
  <lambda_1> <Stack_28;
  
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    lVar1 = *(longlong *)((longlong)param_1 + 8);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)((longlong)param_1 + 0x18);
      CheckCallable(*(void **)((longlong)param_1 + 0x20));
      pcVar3 = *(code **)((longlong)param_1 + 0x20);
      plVar7 = (longlong *)((longlong)param_1 + 0x30);
      if (*(longlong **)((longlong)param_1 + 0x48) != (longlong *)0x0) {
        plVar7 = *(longlong **)((longlong)param_1 + 0x48);
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(&TStack_48,uVar6,lVar1,uVar2);
      <Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
      <Stack_28.Continuation.__this = *(TStep<void> **)param_1;
      <Stack_28.Continuation.WeakOperation.Object =
           *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
      if (<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
        WeakReferenceCount =
             (atomic<int>)
             ((int)(<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
                   WeakReferenceCount + 1);
        UNLOCK();
      }
      TFutureBase<void>::
      Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
                (&TStack_48,(TFuture<void> *)auStack_38,&<Stack_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)auStack_38._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_48.State.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14efea123:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// Call @ 14eff6ad0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

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
  TFutureBase<void> TStack_48;
  undefined1 auStack_38 [16];
  <lambda_1> <Stack_28;
  
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    lVar1 = *(longlong *)((longlong)param_1 + 8);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)((longlong)param_1 + 0x18);
      CheckCallable(*(void **)((longlong)param_1 + 0x20));
      pcVar3 = *(code **)((longlong)param_1 + 0x20);
      plVar7 = (longlong *)((longlong)param_1 + 0x30);
      if (*(longlong **)((longlong)param_1 + 0x48) != (longlong *)0x0) {
        plVar7 = *(longlong **)((longlong)param_1 + 0x48);
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(&TStack_48,uVar6,lVar1,uVar2);
      <Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
      <Stack_28.Continuation.__this = *(TStep<void> **)param_1;
      <Stack_28.Continuation.WeakOperation.Object =
           *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
      if (<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
        WeakReferenceCount =
             (atomic<int>)
             ((int)(<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
                   WeakReferenceCount + 1);
        UNLOCK();
      }
      TFutureBase<void>::
      Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
                (&TStack_48,(TFuture<void> *)auStack_38,&<Stack_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)auStack_38._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_48.State.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14efea223:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// Call @ 14eff6ae0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_&,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_13>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  byte bVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  FOnlineError *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FOnlineError FStack_78;
  TOptional<UE::Online::FOnlineError> TStack_50;
  
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar2 = *(longlong *)((longlong)param_1 + 0x18);
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
        pcVar3 = *(code **)(this->_padding_ + 8);
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
        TStack_50.TypedValue.Details.Object = *(IOnlineErrorDetails **)(lVar2 + 8);
        TStack_50.TypedValue.Details.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(lVar2 + 0x10);
        if (TStack_50.TypedValue.Details.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (TStack_50.TypedValue.Details.SharedReferenceCount.ReferenceController)->
          SharedReferenceCount =
               (atomic<int>)
               ((int)(TStack_50.TypedValue.Details.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        TStack_50.TypedValue.Inner.Object = *(FOnlineError **)(lVar2 + 0x18);
        TStack_50.TypedValue.Inner.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(lVar2 + 0x20);
        if (TStack_50.TypedValue.Inner.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (TStack_50.TypedValue.Inner.SharedReferenceCount.ReferenceController)->
          SharedReferenceCount =
               (atomic<int>)
               ((int)(TStack_50.TypedValue.Inner.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        TStack_50.TypedValue.ErrorCode = *(ulong64 *)(lVar2 + 0x28);
        TStack_50.bIsSet = true;
        pFVar6 = Online::Errors::Cancelled(&FStack_78,&TStack_50);
        (*pcVar3)(this,pFVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_78.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_78.Details.SharedReferenceCount.ReferenceController);
        if (TStack_50.bIsSet != false) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_50.TypedValue.Inner.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_50.TypedValue.Details.SharedReferenceCount.ReferenceController);
        }
      }
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
    }
  }
LAB_14efea320:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Call @ 14eff6af0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_10>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  FLobbyEventCapture *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar5;
  FOnlineError *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FOnlineError FStack_68;
  TOptional<UE::Online::FOnlineError> TStack_40;
  
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      pTVar5 = Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this,&LobbyEventCaptureKeyName);
      pFVar1 = pTVar5->Object;
      if ((((pFVar1->TotalNotificationsReceived != 2) || ((pFVar1->LobbyJoined).ArrayNum != 1)) ||
          ((pFVar1->LobbyMemberJoined).ArrayNum != 1)) ||
         (*(int *)((pFVar1->LobbyMemberJoined).AllocatorInstance.Data + 0x20) <
          *(int *)((pFVar1->LobbyJoined).AllocatorInstance.Data + 0x10))) {
        TStack_40.bIsSet = false;
        pcVar2 = *(code **)(this->_padding_ + 8);
        pFVar6 = Online::Errors::Cancelled(&FStack_68,&TStack_40);
        (*pcVar2)(this,pFVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_68.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_68.Details.SharedReferenceCount.ReferenceController);
        if (TStack_40.bIsSet != false) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
        }
      }
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
    }
  }
LAB_14efea510:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Call @ 14eff6b00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FInviteLobbyMember::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_11>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
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
  
  pTVar12 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar4 = *(longlong *)param_1;
      pTVar8 = Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this,&LobbyEventCaptureKeyName);
      Online::FLobbyEventCapture::Empty(pTVar8->Object);
      pRVar9 = Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (this,&User1KeyName);
      pRVar10 = Online::
                GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                          (this,&User2KeyName);
      pRVar11 = Online::
                GetOpDataChecked<UE::Online::FCreateLobby::Result,UE::Online::FFunctionalTestLobbies>
                          (this,&CreateLobbyKeyName);
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
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
      return;
    }
  }
LAB_14efea610:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// Call @ 14eff6b10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_12>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

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
  TStack_58;
  undefined1 auStack_48 [8];
  TReferenceControllerBase<1> *pTStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  longlong lStack_28;
  
  pTVar9 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    pTVar3 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (pTVar3 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      pRVar7 = Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (pTVar3,&User2KeyName);
      pRVar8 = Online::
               GetOpDataChecked<UE::Online::FCreateLobby::Result,UE::Online::FFunctionalTestLobbies>
                         (pTVar3,&CreateLobbyKeyName);
      fVar1 = *(float *)(*(longlong *)((longlong)param_1 + 0x18) + 0x60);
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
      Online::Private::AwaitInvitation
                ((TFuture<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
                  *)&TStack_58,*(FLobbyEvents **)((longlong)param_1 + 0x28),
                 (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>)
                 (((pRVar7->AccountInfo).Object)->AccountId).Value,TVar2,fVar1);
      lStack_28 = *(longlong *)((longlong)param_1 + 0x10);
      uStack_38 = *(undefined8 *)param_1;
      uStack_30 = *(undefined8 *)((longlong)param_1 + 8);
      if (lStack_28 != 0) {
        LOCK();
        *(int *)(lStack_28 + 0xc) = *(int *)(lStack_28 + 0xc) + 1;
        UNLOCK();
      }
      TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
      ::
      Then<_TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Next<__UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_12>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
                (&TStack_58,auStack_48,&uStack_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_58.State.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14efea7d5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// Call @ 14eff6b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_14>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  TStep<UE::Online::FJoinLobby::Params> *this_00;
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
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  void *pvStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  void *pvStack_50;
  undefined4 uStack_48;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pTVar9 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      this_00 = *(TStep<UE::Online::FJoinLobby::Params> **)param_1;
      pTVar6 = Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this,&LobbyEventCaptureKeyName);
      Online::FLobbyEventCapture::Empty(pTVar6->Object);
      pRVar7 = Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (this,&User2KeyName);
      pRVar8 = Online::
               GetOpDataChecked<UE::Online::FCreateLobby::Result,UE::Online::FFunctionalTestLobbies>
                         (this,&CreateLobbyKeyName);
      uStack_68 = ___xmm_00000000ffffffff0000008000000000;
      uStack_60 = _UNK_150631d98;
      auStack_a8[0x10] = false;
      auStack_90._0_8_ = (FScriptContainerElement *)0x0;
      auStack_90._8_8_ = 0;
      pvStack_70 = (void *)0x0;
      pvStack_50 = (void *)0x0;
      uStack_48 = 0;
      if (((pRVar7->AccountInfo).Object == (FAccountInfo *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      auStack_a8._0_4_ = (((pRVar7->AccountInfo).Object)->AccountId).Value;
      auStack_a8._4_4_ = LocalLobbyName.ComparisonIndex.Value;
      auStack_a8._8_4_ = LocalLobbyName.Number;
      if (((pRVar8->Lobby).Object == (FLobby *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      auStack_a8._12_4_ = (((pRVar8->Lobby).Object)->LobbyId).Value;
      Online::Private::TStep<UE::Online::FJoinLobby::Params>::
      EmplaceResult<UE::Online::FJoinLobby::Params>(this_00,(Params *)auStack_a8);
      uStack_48 = 0;
      if (pvStack_50 != (void *)0x0) {
        FMemory::Free(pvStack_50);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)auStack_90,0,auStack_90._8_4_);
      iVar2 = SUB84(auStack_90._8_8_,4);
      auStack_90._8_8_ = auStack_90._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)auStack_90,0,(int *)(auStack_90 + 0xc));
      }
      uVar4 = uStack_68._4_4_;
      uStack_60 = 0xffffffff;
      uStack_68 = (ulonglong)uStack_68._4_4_ << 0x20;
      if (0x80 < uVar4) {
        uStack_68 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_90 + 0x10),0);
      }
      if (pvStack_70 != (void *)0x0) {
        FMemory::Free(pvStack_70);
      }
      if ((FScriptContainerElement *)auStack_90._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)auStack_90._0_8_);
      }
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
    }
  }
LAB_14efea97a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// Call @ 14eff6b30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_15>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar4;
  FOnlineError *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FOnlineError FStack_68;
  TOptional<UE::Online::FOnlineError> TStack_40;
  
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      pTVar4 = Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this,&LobbyEventCaptureKeyName);
      if ((pTVar4->Object->TotalNotificationsReceived != 1) ||
         ((pTVar4->Object->LobbyMemberJoined).ArrayNum != 1)) {
        TStack_40.bIsSet = false;
        pcVar1 = *(code **)(this->_padding_ + 8);
        pFVar5 = Online::Errors::Cancelled(&FStack_68,&TStack_40);
        (*pcVar1)(this,pFVar5);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_68.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_68.Details.SharedReferenceCount.ReferenceController);
        if (TStack_40.bIsSet != false) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
        }
      }
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
    }
  }
LAB_14efeab90:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Call @ 14eff6b40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_16>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  uint uVar2;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar7;
  Result *pRVar8;
  Result *pRVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar3 = *(longlong *)param_1;
      pTVar7 = Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this,&LobbyEventCaptureKeyName);
      Online::FLobbyEventCapture::Empty(pTVar7->Object);
      pRVar8 = Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (this,&User2KeyName);
      pRVar9 = Online::
               GetOpDataChecked<UE::Online::FCreateLobby::Result,UE::Online::FFunctionalTestLobbies>
                         (this,&CreateLobbyKeyName);
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
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      return;
    }
  }
LAB_14efeac80:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// Call @ 14eff6b50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_17>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar4;
  FOnlineError *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FOnlineError FStack_68;
  TOptional<UE::Online::FOnlineError> TStack_40;
  
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      pTVar4 = Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this,&LobbyEventCaptureKeyName);
      if ((pTVar4->Object->TotalNotificationsReceived != 1) ||
         ((pTVar4->Object->LobbyMemberLeft).ArrayNum != 1)) {
        TStack_40.bIsSet = false;
        pcVar1 = *(code **)(this->_padding_ + 8);
        pFVar5 = Online::Errors::Cancelled(&FStack_68,&TStack_40);
        (*pcVar1)(this,pFVar5);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_68.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_68.Details.SharedReferenceCount.ReferenceController);
        if (TStack_40.bIsSet != false) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
        }
      }
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
    }
  }
LAB_14efeade0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Call @ 14eff6b60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_18>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  uint uVar2;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar7;
  Result *pRVar8;
  Result *pRVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar3 = *(longlong *)param_1;
      pTVar7 = Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this,&LobbyEventCaptureKeyName);
      Online::FLobbyEventCapture::Empty(pTVar7->Object);
      pRVar8 = Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (this,&User1KeyName);
      pRVar9 = Online::
               GetOpDataChecked<UE::Online::FCreateLobby::Result,UE::Online::FFunctionalTestLobbies>
                         (this,&CreateLobbyKeyName);
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
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      return;
    }
  }
LAB_14efeaed0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// Call @ 14eff6b70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_19>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  FLobbyEventCapture *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar6;
  FOnlineError *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  FOnlineError FStack_68;
  TOptional<UE::Online::FOnlineError> TStack_40;
  
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
  this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
  if (this == (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) goto LAB_14efeb030;
  pTVar6 = Online::
           GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                     (this,&LobbyEventCaptureKeyName);
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
    TStack_40.bIsSet = false;
    pcVar3 = *(code **)(this->_padding_ + 8);
    pFVar7 = Online::Errors::Cancelled(&FStack_68,&TStack_40);
    (*pcVar3)(this,pFVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_68.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_68.Details.SharedReferenceCount.ReferenceController);
    if (TStack_40.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
    }
  }
  Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
LAB_14efeb030:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// Call @ 14eff6b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  TStep<UE::Online::FCreateLobby::Params> *this_00;
  code *pcVar1;
  int iVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar5;
  Result *pRVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined1 auStackY_148 [32];
  undefined1 auStack_118 [8];
  FName *pFStack_110;
  FSchemaVariant *pFStack_108;
  FName *pFStack_100;
  FSchemaVariant *pFStack_f8;
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  void *pvStack_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ForElementType<FSetElementId> FStack_88;
  int iStack_80;
  undefined1 auStack_78 [32];
  void *pvStack_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ForElementType<FSetElementId> FStack_38;
  int iStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      this_00 = *(TStep<UE::Online::FCreateLobby::Params> **)param_1;
      pTVar5 = Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this,&LobbyEventCaptureKeyName);
      Online::FLobbyEventCapture::Empty(pTVar5->Object);
      pRVar6 = Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (this,&User1KeyName);
      auStack_e8[0x14] = false;
      auStack_c8._0_8_ = (FScriptContainerElement *)0x0;
      auStack_c8._8_8_ = 0;
      pvStack_a8 = (void *)0x0;
      uStack_a0 = 0;
      uStack_9c = 0x80;
      uStack_98 = 0xffffffff;
      uStack_94 = 0;
      FStack_88 = (ForElementType<FSetElementId>)0x0;
      iStack_80 = 0;
      auStack_78._0_8_ = (FScriptContainerElement *)0x0;
      auStack_78._8_8_ = 0;
      pvStack_58 = (void *)0x0;
      uStack_50 = 0;
      uStack_4c = 0x80;
      uStack_48 = 0xffffffff;
      uStack_44 = 0;
      FStack_38 = (ForElementType<FSetElementId>)0x0;
      iStack_30 = 0;
      if (((pRVar6->AccountInfo).Object == (FAccountInfo *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      auStack_e8._0_4_ = (((pRVar6->AccountInfo).Object)->AccountId).Value;
      auStack_e8._4_4_ = LocalLobbyName.ComparisonIndex.Value;
      auStack_e8._8_4_ = LocalLobbyName.Number;
      auStack_e8._12_4_ = LobbySchemaId.ComparisonIndex.Value;
      auStack_e8._16_4_ = LobbySchemaId.Number;
      pFStack_110 = &LobbyAttributeId1;
      pFStack_108 = &LobbyAttribute1Value1;
      auStack_e8._24_4_ = 2;
      auStack_e8[0x1c] = InvitationOnly;
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,UE::Online::FSchemaVariant_const_&>_>
                ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)auStack_c8,
                 (TPairInitializer<FName_const_&,UE::Online::FSchemaVariant_const_&> *)auStack_118,
                 (bool *)&pFStack_110);
      pFStack_100 = &LobbyMemberAttributeId1;
      pFStack_f8 = &LobbyMemberAttribute1Value1;
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,UE::Online::FSchemaVariant_const_&>_>
                ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)auStack_78,
                 (TPairInitializer<FName_const_&,UE::Online::FSchemaVariant_const_&> *)
                 (auStack_118 + 4),(bool *)&pFStack_100);
      Online::Private::TStep<UE::Online::FCreateLobby::Params>::
      EmplaceResult<UE::Online::FCreateLobby::Params>(this_00,(Params *)auStack_e8);
      iStack_30 = 0;
      if (FStack_38 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_38);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)auStack_78,0,auStack_78._8_4_);
      iVar2 = SUB84(auStack_78._8_8_,4);
      auStack_78._8_8_ = auStack_78._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)auStack_78,0,(int *)(auStack_78 + 0xc));
      }
      uStack_48 = 0xffffffff;
      uStack_44 = 0;
      uStack_50 = 0;
      if (0x80 < uStack_4c) {
        uStack_4c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_78 + 0x10),0);
      }
      if (pvStack_58 != (void *)0x0) {
        FMemory::Free(pvStack_58);
      }
      if ((FScriptContainerElement *)auStack_78._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)auStack_78._0_8_);
      }
      iStack_80 = 0;
      if (FStack_88 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_88);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)auStack_c8,0,auStack_c8._8_4_);
      iVar2 = SUB84(auStack_c8._8_8_,4);
      auStack_c8._8_8_ = auStack_c8._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)auStack_c8,0,(int *)(auStack_c8 + 0xc));
      }
      uStack_98 = 0xffffffff;
      uStack_94 = 0;
      uStack_a0 = 0;
      if (0x80 < uStack_9c) {
        uStack_9c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10),0);
      }
      if (pvStack_a8 != (void *)0x0) {
        FMemory::Free(pvStack_a8);
      }
      if ((FScriptContainerElement *)auStack_c8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)auStack_c8._0_8_);
      }
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
    }
  }
LAB_14efeb1aa:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Call @ 14eff6b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_20>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  TStep<UE::Online::FCreateLobby::Params> *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  Params *pPVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [96];
  void *pvStack_78;
  undefined4 uStack_70;
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  TStack_68;
  void *pvStack_28;
  undefined4 uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      this_00 = *(TStep<UE::Online::FCreateLobby::Params> **)param_1;
      pPVar3 = `UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_20>::operator()
                         ((void *)((longlong)param_1 + 0x18),(Params *)auStack_d8,this);
      Online::Private::TStep<UE::Online::FCreateLobby::Params>::
      EmplaceResult<UE::Online::FCreateLobby::Params>(this_00,pPVar3);
      uStack_20 = 0;
      if (pvStack_28 != (void *)0x0) {
        FMemory::Free(pvStack_28);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&TStack_68);
      uStack_70 = 0;
      if (pvStack_78 != (void *)0x0) {
        FMemory::Free(pvStack_78);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(auStack_d8 + 0x20));
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
    }
  }
LAB_14efeb4b2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14eff6ba0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_21>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

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
  TFutureBase<int> TStack_88;
  FOnlineError FStack_78;
  undefined1 auStack_50 [8];
  TReferenceControllerBase<1> *pTStack_48;
  TOptional<UE::Online::FOnlineError> TStack_40;
  
  pTVar9 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    pTVar2 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (pTVar2 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      pTVar7 = Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (pTVar2,&LobbyEventCaptureKeyName);
      pFVar3 = pTVar7->Object;
      if ((((pFVar3->TotalNotificationsReceived != 2) || ((pFVar3->LobbyJoined).ArrayNum != 1)) ||
          ((pFVar3->LobbyMemberJoined).ArrayNum != 1)) ||
         (*(int *)((pFVar3->LobbyMemberJoined).AllocatorInstance.Data + 0x20) <
          *(int *)((pFVar3->LobbyJoined).AllocatorInstance.Data + 0x10))) {
        TStack_40.bIsSet = false;
        pcVar4 = *(code **)(pTVar2->_padding_ + 8);
        pFVar8 = Online::Errors::Cancelled(&FStack_78,&TStack_40);
        (*pcVar4)(pTVar2,pFVar8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_78.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_78.Details.SharedReferenceCount.ReferenceController);
        if (TStack_40.bIsSet != false) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
        }
      }
      Online::Private::AwaitSleepFor
                ((TFuture<int> *)&TStack_88,
                 (double)*(float *)(*(longlong *)((longlong)param_1 + 0x18) + 100));
      FStack_78.Inner.Object = *(FOnlineError **)((longlong)param_1 + 0x10);
      FStack_78.Details.Object = *(IOnlineErrorDetails **)param_1;
      FStack_78.Details.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
      if (FStack_78.Inner.Object != (FOnlineError *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)
                         &((FStack_78.Inner.Object)->Details).SharedReferenceCount.
                          ReferenceController + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      TFutureBase<int>::
      Then<_TFutureBase<int>::Next<__UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,_UE::Online::RunLobbyFunctionalTest_::__l2::<lambda_21>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
                (&TStack_88,auStack_50,&FStack_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_88.State.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14efeb5b6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// Call @ 14eff6bb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FFindLobbies::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_23>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  Params *pPVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  Params PStack_38;
  
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar2 = *(longlong *)param_1;
      pPVar6 = `UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_23>::operator()
                         ((void *)((longlong)param_1 + 0x18),&PStack_38,this);
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
                ((FFindLobbySearchFilter *)PStack_38.Filters.AllocatorInstance.Data,
                 PStack_38.Filters.ArrayNum);
      if ((FFindLobbySearchFilter *)PStack_38.Filters.AllocatorInstance.Data !=
          (FFindLobbySearchFilter *)0x0) {
        FMemory::Free(PStack_38.Filters.AllocatorInstance.Data);
      }
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      return;
    }
  }
LAB_14efeb722:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Call @ 14eff6bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FJoinLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_24>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  TStep<UE::Online::FJoinLobby::Params> *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  Params *pPVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [88];
  void *pvStack_30;
  undefined4 uStack_28;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      this_00 = *(TStep<UE::Online::FJoinLobby::Params> **)param_1;
      pPVar3 = `UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_24>::operator()
                         ((void *)((longlong)param_1 + 0x18),(Params *)auStack_88,this);
      Online::Private::TStep<UE::Online::FJoinLobby::Params>::
      EmplaceResult<UE::Online::FJoinLobby::Params>(this_00,pPVar3);
      uStack_28 = 0;
      if (pvStack_30 != (void *)0x0) {
        FMemory::Free(pvStack_30);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(auStack_88 + 0x18));
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
    }
  }
LAB_14efeb872:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14eff6bd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_25>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar4;
  FOnlineError *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FOnlineError FStack_68;
  TOptional<UE::Online::FOnlineError> TStack_40;
  
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      pTVar4 = Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this,&LobbyEventCaptureKeyName);
      if ((pTVar4->Object->TotalNotificationsReceived != 1) ||
         ((pTVar4->Object->LobbyMemberJoined).ArrayNum != 1)) {
        TStack_40.bIsSet = false;
        pcVar1 = *(code **)(this->_padding_ + 8);
        pFVar5 = Online::Errors::Cancelled(&FStack_68,&TStack_40);
        (*pcVar1)(this,pFVar5);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_68.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_68.Details.SharedReferenceCount.ReferenceController);
        if (TStack_40.bIsSet != false) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
        }
      }
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
    }
  }
LAB_14efeb940:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Call @ 14eff6be0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_26>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  uint uVar2;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar7;
  Result *pRVar8;
  Result *pRVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar3 = *(longlong *)param_1;
      pTVar7 = Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this,&LobbyEventCaptureKeyName);
      Online::FLobbyEventCapture::Empty(pTVar7->Object);
      pRVar8 = Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (this,&User2KeyName);
      pRVar9 = Online::
               GetOpDataChecked<UE::Online::FCreateLobby::Result,UE::Online::FFunctionalTestLobbies>
                         (this,&CreateLobbyKeyName);
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
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      return;
    }
  }
LAB_14efeba30:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// Call @ 14eff6bf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_27>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar4;
  FOnlineError *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FOnlineError FStack_68;
  TOptional<UE::Online::FOnlineError> TStack_40;
  
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      pTVar4 = Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this,&LobbyEventCaptureKeyName);
      if ((pTVar4->Object->TotalNotificationsReceived != 1) ||
         ((pTVar4->Object->LobbyMemberLeft).ArrayNum != 1)) {
        TStack_40.bIsSet = false;
        pcVar1 = *(code **)(this->_padding_ + 8);
        pFVar5 = Online::Errors::Cancelled(&FStack_68,&TStack_40);
        (*pcVar1)(this,pFVar5);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_68.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_68.Details.SharedReferenceCount.ReferenceController);
        if (TStack_40.bIsSet != false) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
        }
      }
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
    }
  }
LAB_14efebb90:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Call @ 14eff6c00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_28>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  uint uVar2;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar7;
  Result *pRVar8;
  Result *pRVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar3 = *(longlong *)param_1;
      pTVar7 = Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this,&LobbyEventCaptureKeyName);
      Online::FLobbyEventCapture::Empty(pTVar7->Object);
      pRVar8 = Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (this,&User1KeyName);
      pRVar9 = Online::
               GetOpDataChecked<UE::Online::FCreateLobby::Result,UE::Online::FFunctionalTestLobbies>
                         (this,&CreateLobbyKeyName);
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
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      return;
    }
  }
LAB_14efebc80:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// Call @ 14eff6c10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_29>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  FLobbyEventCapture *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar6;
  FOnlineError *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  FOnlineError FStack_68;
  TOptional<UE::Online::FOnlineError> TStack_40;
  
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
  this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
  if (this == (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) goto LAB_14efebde0;
  pTVar6 = Online::
           GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                     (this,&LobbyEventCaptureKeyName);
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
    TStack_40.bIsSet = false;
    pcVar3 = *(code **)(this->_padding_ + 8);
    pFVar7 = Online::Errors::Cancelled(&FStack_68,&TStack_40);
    (*pcVar3)(this,pFVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_68.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_68.Details.SharedReferenceCount.ReferenceController);
    if (TStack_40.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
    }
  }
  Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
LAB_14efebde0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// Call @ 14eff6c20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_2>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      `UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_2>::operator()
                ((void *)((longlong)param_1 + 0x18),this);
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14efebf30:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14eff6c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_30>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  undefined **ppuStack_48;
  undefined1 auStack_40 [40];
  byte bStack_18;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      if (((this->SharedState).Object)->State < Complete) {
        ppuStack_48 = &___7__TOnlineResult_UFFunctionalTestLobbies_Online_UE___Online_UE__6B_;
        bStack_18 = 0;
        Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::SetResultAndState
                  (this,(TOnlineResult<UE::Online::FFunctionalTestLobbies> *)&ppuStack_48,Complete);
        uVar5 = (ulonglong)bStack_18;
        if ((1 < bStack_18) &&
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
            TDestructorCaller<UE::Online::FFunctionalTestLobbies::Result>::Destruct) {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FFunctionalTestLobbies::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar5])(auStack_40);
        }
      }
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
    }
  }
LAB_14efebfc0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14eff6c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FModifyLobbyAttributes::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_3>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
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
  TPairInitializer<FName_const_&,UE::Online::FSchemaVariant_const_&> TStack_118;
  FName *pFStack_108;
  FSchemaVariant *pFStack_100;
  FName *pFStack_f8;
  FSchemaVariant *pFStack_f0;
  uint uStack_e8;
  uint uStack_e4;
  undefined1 auStack_e0 [32];
  void *pvStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ForElementType<FSetElementId> FStack_a0;
  int iStack_98;
  undefined1 auStack_90 [32];
  void *pvStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ForElementType<FSetElementId> FStack_50;
  int iStack_48;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar1 = *(longlong *)param_1;
      pTVar7 = Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this,&LobbyEventCaptureKeyName);
      Online::FLobbyEventCapture::Empty(pTVar7->Object);
      pRVar8 = Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (this,&User1KeyName);
      pRVar9 = Online::
               GetOpDataChecked<UE::Online::FCreateLobby::Result,UE::Online::FFunctionalTestLobbies>
                         (this,&CreateLobbyKeyName);
      uStack_b8 = ___xmm_00000000ffffffff0000008000000000;
      uStack_b0 = _UNK_150631d98;
      uStack_68 = ___xmm_00000000ffffffff0000008000000000;
      uStack_60 = _UNK_150631d98;
      auStack_e0._0_8_ = (FScriptContainerElement *)0x0;
      auStack_e0._8_8_ = 0;
      pvStack_c0 = (void *)0x0;
      FStack_a0 = (ForElementType<FSetElementId>)0x0;
      iStack_98 = 0;
      auStack_90._0_8_ = (FScriptContainerElement *)0x0;
      auStack_90._8_8_ = 0;
      pvStack_70 = (void *)0x0;
      FStack_50 = (ForElementType<FSetElementId>)0x0;
      iStack_48 = 0;
      if (((pRVar8->AccountInfo).Object == (FAccountInfo *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uStack_e8 = (((pRVar8->AccountInfo).Object)->AccountId).Value;
      if (((pRVar9->Lobby).Object == (FLobby *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uStack_e4 = (((pRVar9->Lobby).Object)->LobbyId).Value;
      pFStack_108 = &LobbyAttributeId1;
      pFStack_100 = &LobbyAttribute1Value2;
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
      ::Empty((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
               *)auStack_e0,1);
      pFStack_f8 = pFStack_108;
      pFStack_f0 = pFStack_100;
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,UE::Online::FSchemaVariant_const_&>_>
                ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)auStack_e0,&TStack_118,(bool *)&pFStack_f8);
      if ((*(char *)(lVar1 + 0xe8) != '\0') &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bResultSet",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                              ,0x1ee,L""), bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(uint *)(lVar1 + 0x40) = uStack_e8;
      *(uint *)(lVar1 + 0x44) = uStack_e4;
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
      ::
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)(lVar1 + 0x48),
                 (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)auStack_e0);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(lVar1 + 0x98),
                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)auStack_90);
      *(undefined1 *)(lVar1 + 0xe8) = 1;
      iStack_48 = 0;
      if (FStack_50 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_50);
      }
      iVar3 = SUB84(auStack_90._8_8_,4);
      auStack_90._8_8_ = auStack_90._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)auStack_90,0,(int *)(auStack_90 + 0xc));
      }
      uVar5 = uStack_68._4_4_;
      uStack_60 = 0xffffffff;
      uStack_68 = (ulonglong)uStack_68._4_4_ << 0x20;
      if (0x80 < uVar5) {
        uStack_68 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_90 + 0x10),0);
      }
      if (pvStack_70 != (void *)0x0) {
        FMemory::Free(pvStack_70);
      }
      if ((FScriptContainerElement *)auStack_90._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)auStack_90._0_8_);
      }
      iStack_98 = 0;
      if (FStack_a0 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_a0);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)auStack_e0,0,auStack_e0._8_4_);
      iVar3 = SUB84(auStack_e0._8_8_,4);
      auStack_e0._8_8_ = auStack_e0._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)auStack_e0,0,(int *)(auStack_e0 + 0xc));
      }
      uVar5 = uStack_b8._4_4_;
      uStack_b0 = 0xffffffff;
      uStack_b8 = (ulonglong)uStack_b8._4_4_ << 0x20;
      if (0x80 < uVar5) {
        uStack_b8 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_e0 + 0x10),0);
      }
      if (pvStack_c0 != (void *)0x0) {
        FMemory::Free(pvStack_c0);
      }
      if ((FScriptContainerElement *)auStack_e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)auStack_e0._0_8_);
      }
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
    }
  }
LAB_14efec0da:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// Call @ 14eff6c50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_4>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      `UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_4>::operator()
                ((void *)((longlong)param_1 + 0x18),this);
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14efec410:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14eff6c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FModifyLobbyMemberAttributes::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_5>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
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
  TPairInitializer<FName_const_&,UE::Online::FSchemaVariant_const_&> TStack_118;
  FName *pFStack_108;
  FSchemaVariant *pFStack_100;
  FName *pFStack_f8;
  FSchemaVariant *pFStack_f0;
  uint uStack_e8;
  uint uStack_e4;
  undefined1 auStack_e0 [32];
  void *pvStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ForElementType<FSetElementId> FStack_a0;
  int iStack_98;
  undefined1 auStack_90 [32];
  void *pvStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ForElementType<FSetElementId> FStack_50;
  int iStack_48;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar1 = *(longlong *)param_1;
      pTVar7 = Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this,&LobbyEventCaptureKeyName);
      Online::FLobbyEventCapture::Empty(pTVar7->Object);
      pRVar8 = Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (this,&User1KeyName);
      pRVar9 = Online::
               GetOpDataChecked<UE::Online::FCreateLobby::Result,UE::Online::FFunctionalTestLobbies>
                         (this,&CreateLobbyKeyName);
      uStack_b8 = ___xmm_00000000ffffffff0000008000000000;
      uStack_b0 = _UNK_150631d98;
      uStack_68 = ___xmm_00000000ffffffff0000008000000000;
      uStack_60 = _UNK_150631d98;
      auStack_e0._0_8_ = (FScriptContainerElement *)0x0;
      auStack_e0._8_8_ = 0;
      pvStack_c0 = (void *)0x0;
      FStack_a0 = (ForElementType<FSetElementId>)0x0;
      iStack_98 = 0;
      auStack_90._0_8_ = (FScriptContainerElement *)0x0;
      auStack_90._8_8_ = 0;
      pvStack_70 = (void *)0x0;
      FStack_50 = (ForElementType<FSetElementId>)0x0;
      iStack_48 = 0;
      if (((pRVar8->AccountInfo).Object == (FAccountInfo *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uStack_e8 = (((pRVar8->AccountInfo).Object)->AccountId).Value;
      if (((pRVar9->Lobby).Object == (FLobby *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uStack_e4 = (((pRVar9->Lobby).Object)->LobbyId).Value;
      pFStack_108 = &LobbyMemberAttributeId1;
      pFStack_100 = &LobbyMemberAttribute1Value2;
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
      ::Empty((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
               *)auStack_e0,1);
      pFStack_f8 = pFStack_108;
      pFStack_f0 = pFStack_100;
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,UE::Online::FSchemaVariant_const_&>_>
                ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)auStack_e0,&TStack_118,(bool *)&pFStack_f8);
      if ((*(char *)(lVar1 + 0xe8) != '\0') &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bResultSet",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                              ,0x1ee,L""), bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(uint *)(lVar1 + 0x40) = uStack_e8;
      *(uint *)(lVar1 + 0x44) = uStack_e4;
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
      ::
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)(lVar1 + 0x48),
                 (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                  *)auStack_e0);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(lVar1 + 0x98),
                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)auStack_90);
      *(undefined1 *)(lVar1 + 0xe8) = 1;
      iStack_48 = 0;
      if (FStack_50 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_50);
      }
      iVar3 = SUB84(auStack_90._8_8_,4);
      auStack_90._8_8_ = auStack_90._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)auStack_90,0,(int *)(auStack_90 + 0xc));
      }
      uVar5 = uStack_68._4_4_;
      uStack_60 = 0xffffffff;
      uStack_68 = (ulonglong)uStack_68._4_4_ << 0x20;
      if (0x80 < uVar5) {
        uStack_68 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_90 + 0x10),0);
      }
      if (pvStack_70 != (void *)0x0) {
        FMemory::Free(pvStack_70);
      }
      if ((FScriptContainerElement *)auStack_90._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)auStack_90._0_8_);
      }
      iStack_98 = 0;
      if (FStack_a0 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_a0);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)auStack_e0,0,auStack_e0._8_4_);
      iVar3 = SUB84(auStack_e0._8_8_,4);
      auStack_e0._8_8_ = auStack_e0._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)auStack_e0,0,(int *)(auStack_e0 + 0xc));
      }
      uVar5 = uStack_b8._4_4_;
      uStack_b0 = 0xffffffff;
      uStack_b8 = (ulonglong)uStack_b8._4_4_ << 0x20;
      if (0x80 < uVar5) {
        uStack_b8 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_e0 + 0x10),0);
      }
      if (pvStack_c0 != (void *)0x0) {
        FMemory::Free(pvStack_c0);
      }
      if ((FScriptContainerElement *)auStack_e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)auStack_e0._0_8_);
      }
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
    }
  }
LAB_14efec4ba:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// Call @ 14eff6c70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_6>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      `UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_6>::operator()
                ((void *)((longlong)param_1 + 0x18),this);
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14efec7f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14eff6c80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FLeaveLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_7>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  uint uVar2;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar7;
  Result *pRVar8;
  Result *pRVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar3 = *(longlong *)param_1;
      pTVar7 = Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this,&LobbyEventCaptureKeyName);
      Online::FLobbyEventCapture::Empty(pTVar7->Object);
      pRVar8 = Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (this,&User1KeyName);
      pRVar9 = Online::
               GetOpDataChecked<UE::Online::FCreateLobby::Result,UE::Online::FFunctionalTestLobbies>
                         (this,&CreateLobbyKeyName);
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
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      return;
    }
  }
LAB_14efec870:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// Call @ 14eff6c90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_8>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  FLobbyEventCapture *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar6;
  FOnlineError *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  FOnlineError FStack_68;
  TOptional<UE::Online::FOnlineError> TStack_40;
  
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
  this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
  if (this == (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) goto LAB_14efec9d0;
  pTVar6 = Online::
           GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                     (this,&LobbyEventCaptureKeyName);
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
    TStack_40.bIsSet = false;
    pcVar3 = *(code **)(this->_padding_ + 8);
    pFVar7 = Online::Errors::Cancelled(&FStack_68,&TStack_40);
    (*pcVar3)(this,pFVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_68.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_68.Details.SharedReferenceCount.ReferenceController);
    if (TStack_40.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
    }
  }
  Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
LAB_14efec9d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// Call @ 14eff6ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<UE::Online::FCreateLobby::Params>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_9>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  TStep<UE::Online::FCreateLobby::Params> *this_00;
  code *pcVar1;
  int iVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TSharedRef<UE::Online::FLobbyEventCapture,1> *pTVar5;
  Result *pRVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined1 auStackY_118 [32];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  void *pvStack_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  undefined1 auStack_78 [32];
  void *pvStack_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *pvStack_38;
  undefined4 uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      this_00 = *(TStep<UE::Online::FCreateLobby::Params> **)param_1;
      pTVar5 = Online::
               GetOpDataChecked<TSharedRef<UE::Online::FLobbyEventCapture,1>,UE::Online::FFunctionalTestLobbies>
                         (this,&LobbyEventCaptureKeyName);
      Online::FLobbyEventCapture::Empty(pTVar5->Object);
      pRVar6 = Online::
               GetOpDataChecked<UE::Online::Private::FFunctionalTestLoginUser::Result,UE::Online::FFunctionalTestLobbies>
                         (this,&User1KeyName);
      auStack_e8[0x14] = false;
      auStack_c8._0_8_ = (FScriptContainerElement *)0x0;
      auStack_c8._8_8_ = 0;
      pvStack_a8 = (void *)0x0;
      uStack_a0 = 0;
      uStack_9c = 0x80;
      uStack_98 = 0xffffffff;
      uStack_94 = 0;
      pvStack_88 = (void *)0x0;
      uStack_80 = 0;
      auStack_78._0_8_ = (FScriptContainerElement *)0x0;
      auStack_78._8_8_ = 0;
      pvStack_58 = (void *)0x0;
      uStack_50 = 0;
      uStack_4c = 0x80;
      uStack_48 = 0xffffffff;
      uStack_44 = 0;
      pvStack_38 = (void *)0x0;
      uStack_30 = 0;
      if (((pRVar6->AccountInfo).Object == (FAccountInfo *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      auStack_e8._0_4_ = (((pRVar6->AccountInfo).Object)->AccountId).Value;
      auStack_e8._4_4_ = LocalLobbyName.ComparisonIndex.Value;
      auStack_e8._8_4_ = LocalLobbyName.Number;
      auStack_e8._12_4_ = LobbySchemaId.ComparisonIndex.Value;
      auStack_e8._16_4_ = LobbySchemaId.Number;
      auStack_e8._24_4_ = 2;
      auStack_e8[0x1c] = InvitationOnly;
      Online::Private::TStep<UE::Online::FCreateLobby::Params>::
      EmplaceResult<UE::Online::FCreateLobby::Params>(this_00,(Params *)auStack_e8);
      uStack_30 = 0;
      if (pvStack_38 != (void *)0x0) {
        FMemory::Free(pvStack_38);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)auStack_78,0,auStack_78._8_4_);
      iVar2 = SUB84(auStack_78._8_8_,4);
      auStack_78._8_8_ = auStack_78._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)auStack_78,0,(int *)(auStack_78 + 0xc));
      }
      uStack_48 = 0xffffffff;
      uStack_44 = 0;
      uStack_50 = 0;
      if (0x80 < uStack_4c) {
        uStack_4c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_78 + 0x10),0);
      }
      if (pvStack_58 != (void *)0x0) {
        FMemory::Free(pvStack_58);
      }
      if ((FScriptContainerElement *)auStack_78._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)auStack_78._0_8_);
      }
      uStack_80 = 0;
      if (pvStack_88 != (void *)0x0) {
        FMemory::Free(pvStack_88);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)auStack_c8,0,auStack_c8._8_4_);
      iVar2 = SUB84(auStack_c8._8_8_,4);
      auStack_c8._8_8_ = auStack_c8._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)auStack_c8,0,(int *)(auStack_c8 + 0xc));
      }
      uStack_98 = 0xffffffff;
      uStack_94 = 0;
      uStack_a0 = 0;
      if (0x80 < uStack_9c) {
        uStack_9c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10),0);
      }
      if (pvStack_a8 != (void *)0x0) {
        FMemory::Free(pvStack_a8);
      }
      if ((FScriptContainerElement *)auStack_c8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)auStack_c8._0_8_);
      }
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
    }
  }
LAB_14efecb4a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Call @ 14eff6cb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  undefined8 uVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  TFutureBase<void> TStack_48;
  undefined1 auStack_38 [16];
  <lambda_1> <Stack_28;
  
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
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
    lVar1 = *(longlong *)((longlong)param_1 + 8);
    if (lVar1 != 0) {
      CheckCallable(*(void **)((longlong)param_1 + 0x20));
      pcVar2 = *(code **)((longlong)param_1 + 0x20);
      plVar6 = (longlong *)((longlong)param_1 + 0x30);
      if (*(longlong **)((longlong)param_1 + 0x48) != (longlong *)0x0) {
        plVar6 = *(longlong **)((longlong)param_1 + 0x48);
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar2)(&TStack_48,uVar5,lVar1);
      <Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
      <Stack_28.Continuation.__this = *(TStep<void> **)param_1;
      <Stack_28.Continuation.WeakOperation.Object =
           *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 8);
      if (<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
        WeakReferenceCount =
             (atomic<int>)
             ((int)(<Stack_28.Continuation.WeakOperation.WeakReferenceCount.ReferenceController)->
                   WeakReferenceCount + 1);
        UNLOCK();
      }
      TFutureBase<void>::
      Then<_TFutureBase<void>::Next<__UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>_::__l2::<lambda_1>_>
                (&TStack_48,(TFuture<void> *)auStack_38,&<Stack_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)auStack_38._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_48.State.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14efecde2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Call @ 14eff6cc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 auStack_18 [16];
  
  auStack_18._0_8_ = *(undefined8 *)((longlong)param_1 + 0x30);
  auStack_18._8_8_ = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  TFuture<void>::Consume((TFuture<void> *)auStack_18);
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x28);
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
    if (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 0x20) !=
        (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep
                (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 0x20))
      ;
    }
  }
LAB_14efecf00:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)auStack_18._8_8_);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Call @ 14eff6cd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 auStack_18 [16];
  
  auStack_18._0_8_ = *(undefined8 *)((longlong)param_1 + 0x30);
  auStack_18._8_8_ = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  TFuture<void>::Consume((TFuture<void> *)auStack_18);
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x28);
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
    if (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 0x20) !=
        (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep
                (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 0x20))
      ;
    }
  }
LAB_14efecfb0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)auStack_18._8_8_);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Call @ 14eff6ce0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 auStack_18 [16];
  
  auStack_18._0_8_ = *(undefined8 *)((longlong)param_1 + 0x30);
  auStack_18._8_8_ = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  TFuture<void>::Consume((TFuture<void> *)auStack_18);
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x28);
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
    if (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 0x20) !=
        (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep
                (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 0x20))
      ;
    }
  }
LAB_14efed060:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)auStack_18._8_8_);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Call @ 14eff6cf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 auStack_18 [16];
  
  auStack_18._0_8_ = *(undefined8 *)((longlong)param_1 + 0x30);
  auStack_18._8_8_ = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  TFuture<void>::Consume((TFuture<void> *)auStack_18);
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x28);
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
    if (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 0x20) !=
        (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep
                (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 0x20))
      ;
    }
  }
LAB_14efed110:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)auStack_18._8_8_);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Call @ 14eff6d00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 auStack_18 [16];
  
  auStack_18._0_8_ = *(undefined8 *)((longlong)param_1 + 0x30);
  auStack_18._8_8_ = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  TFuture<void>::Consume((TFuture<void> *)auStack_18);
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x28);
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
    if (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 0x20) !=
        (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep
                (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 0x20))
      ;
    }
  }
LAB_14efed1c0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)auStack_18._8_8_);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Call @ 14eff6d10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 auStack_18 [16];
  
  auStack_18._0_8_ = *(undefined8 *)((longlong)param_1 + 0x30);
  auStack_18._8_8_ = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  TFuture<void>::Consume((TFuture<void> *)auStack_18);
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x28);
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
    if (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 0x20) !=
        (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep
                (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 0x20))
      ;
    }
  }
LAB_14efed270:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)auStack_18._8_8_);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Call @ 14eff6d20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 auStack_18 [16];
  
  auStack_18._0_8_ = *(undefined8 *)((longlong)param_1 + 0x30);
  auStack_18._8_8_ = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  TFuture<void>::Consume((TFuture<void> *)auStack_18);
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x28);
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
    if (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 0x20) !=
        (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep
                (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 0x20))
      ;
    }
  }
LAB_14efed320:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)auStack_18._8_8_);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Call @ 14eff6d30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Then<`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Next<``UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_12>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TFuture<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
  local_18;
  
  local_18._0_8_ = *(undefined8 *)((longlong)param_1 + 0x30);
  local_18._8_8_ = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  `TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
  ::
  Next<``UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_12>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)param_1 + 0x18),&local_18);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Call @ 14eff6d80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<int>::Then<`TFutureBase<int>::Next<``UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_21>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  lVar2 = *(longlong *)((longlong)param_1 + 0x30);
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
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
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x28);
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
    this = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 0x20);
    pTVar8 = pTVar3;
    if (this != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar2 = *(longlong *)((longlong)param_1 + 0x18);
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
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this);
    }
  }
LAB_14efed441:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Call @ 14eff6d90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<void>::Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 auStack_18 [16];
  
  auStack_18._0_8_ = *(undefined8 *)((longlong)param_1 + 0x30);
  auStack_18._8_8_ = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  TFuture<void>::Consume((TFuture<void> *)auStack_18);
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x28);
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
    if (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 0x20) !=
        (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep
                (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)param_1 + 0x20))
      ;
    }
  }
LAB_14efed530:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)auStack_18._8_8_);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Call @ 14eff6da0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>::Then<``UE::Online::Private::CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  undefined1 local_18 [16];
  
  local_18._0_8_ = *(undefined8 *)((longlong)param_1 + 0x50);
  local_18._8_8_ = *(undefined8 *)((longlong)param_1 + 0x58);
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  ``UE::Online::Private::
  CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>'
  ::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
            ((void *)((longlong)param_1 + 0x18),
             (TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> *)
             local_18);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18._8_8_);
  return;
}

// Call @ 14eff6df0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>::Then<``UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params_&&)>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  undefined1 local_18 [24];
  
  local_18._0_8_ = *(undefined8 *)((longlong)param_1 + 0x40);
  local_18._8_8_ = *(undefined8 *)((longlong)param_1 + 0x48);
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  FutureDetail::
  SetPromiseValue<__UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params_&&)>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
            (param_1,(<lambda_1> *)((longlong)param_1 + 0x18),
             (TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
              *)local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18._8_8_);
  return;
}

// Call @ 14eff6e40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>::Then<`UE::Online::Private::FunctionalTestLogoutAllUsers'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  undefined1 local_18 [16];
  
  local_18._0_8_ = *(undefined8 *)((longlong)param_1 + 0x28);
  local_18._8_8_ = *(undefined8 *)((longlong)param_1 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  `UE::Online::Private::FunctionalTestLogoutAllUsers'::__l2::<lambda_1>::operator()
            ((void *)((longlong)param_1 + 0x18),
             (TFuture<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
              *)local_18);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18._8_8_);
  return;
}

// Call @ 14eff6e90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<int>::Then<``UE::Online::Private::AwaitInvitation'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  FFutureState *this;
  code *pcVar3;
  bool bVar4;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  plVar2 = *(longlong **)((longlong)param_1 + 0x18);
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
  this = (FFutureState *)*plVar2;
  if (this->bComplete != (TAtomic<bool>)0x0) {
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
  this[1].Mutex.CriticalSection.Opaque1[0] =
       &
       ___7__TResult_V__TOnlineId_UFLobby_OnlineIdHandleTags_Online_UE___Online_UE__VFOnlineError_23__Online_UE__6B_
  ;
  this[1].Mutex.CriticalSection.Opaque2[0] = *(long *)((longlong)param_1 + 0x28);
  *(undefined1 *)&this[1].CompletionCallback = 0;
  this[1].Mutex.CriticalSection.Opaque1[0] =
       &
       ___7__TDefaultErrorResultInternal_V__TOnlineId_UFLobby_OnlineIdHandleTags_Online_UE___Online_UE___Online_UE__6B_
  ;
  FFutureState::MarkComplete(this);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// Call @ 14eff6ea0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>::Then<`UE::Online::WhenAll<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>'::__l11::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  undefined1 local_18 [16];
  
  local_18._0_8_ = *(undefined8 *)((longlong)param_1 + 0x28);
  local_18._8_8_ = *(undefined8 *)((longlong)param_1 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  `UE::Online::WhenAll<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>'
  ::__l11::<lambda_1>::operator()
            ((void *)((longlong)param_1 + 0x18),
             (TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> *)
             local_18);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18._8_8_);
  return;
}

// Call @ 14eff6ef0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::AwaitSleepFor'::__l2::<lambda_1>,bool,float>::Call
          (void *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = `UE::Online::Private::AwaitSleepFor'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14eff6f00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  TPromise<void>::EmplaceValue<>((TPromise<void> *)((longlong)param_1 + 0x30));
  return false;
}

// Call @ 14eff6f50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep'::__l8::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efef542;
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
    if (*(longlong *)((longlong)param_1 + 0x10) != 0) {
      lVar2 = *(longlong *)param_1;
      uVar1 = *(uint *)((longlong)param_1 + 8);
      uVar6 = 0;
      if ((int)uVar1 < *(int *)(lVar2 + 0xa0)) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 0x98) + (longlong)(int)uVar1 * 8) + 0x10))
                ();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      return;
    }
  }
LAB_14efef542:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Call @ 14eff6f60

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Private::AwaitInvitation'::__l2::<lambda_2>,bool,float>::Call
          (void *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = `UE::Online::Private::AwaitInvitation'::__l2::<lambda_2>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14eff6f70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>::Start'::__l8::<lambda_2>,bool,float>
::Call(void *param_1,float *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14eff6fa0;
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
    if (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)param_1 !=
        (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::Start
                (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return false;
    }
  }
LAB_14eff6fa0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return false;
}


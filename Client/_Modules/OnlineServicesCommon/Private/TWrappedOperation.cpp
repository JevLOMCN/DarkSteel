// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 390

// TWrappedOperation<UE::Online::FAddSessionMember><UE::Online::FOnlineServicesCommon_&,UE::Online::FAddSessionMember::Params> @ 14ed34840

TWrappedOperation<UE::Online::FAddSessionMember> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAddSessionMember>::
TWrappedOperation<UE::Online::FAddSessionMember><UE::Online::FOnlineServicesCommon_&,UE::Online::FAddSessionMember::Params>
          (TWrappedOperation<UE::Online::FAddSessionMember> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FAddSessionMember> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFAddSessionMember_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FAddSessionMember>::TOnlineAsyncOp<UE::Online::FAddSessionMember>
              ((TOnlineAsyncOp<UE::Online::FAddSessionMember> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FAddSessionMember> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3494d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3494d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFAddSessionMember_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFAddSessionMember_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthBeginVerifiedAuthSession::Params> @ 14ed349a0

TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession>::
TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthBeginVerifiedAuthSession::Params>
          (TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFAuthBeginVerifiedAuthSession_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>::
    TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>
              ((TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed34aad;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed34aad:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFAuthBeginVerifiedAuthSession_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFAuthBeginVerifiedAuthSession_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthCancelVerifiedAuthTicket::Params> @ 14ed34b00

TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket>::
TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthCancelVerifiedAuthTicket::Params>
          (TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFAuthCancelVerifiedAuthTicket_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>::
    TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>
              ((TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed34c0d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed34c0d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFAuthCancelVerifiedAuthTicket_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFAuthCancelVerifiedAuthTicket_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FAuthCreateAccount><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthCreateAccount::Params> @ 14ed34c60

TWrappedOperation<UE::Online::FAuthCreateAccount> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthCreateAccount>::
TWrappedOperation<UE::Online::FAuthCreateAccount><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthCreateAccount::Params>
          (TWrappedOperation<UE::Online::FAuthCreateAccount> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FAuthCreateAccount> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFAuthCreateAccount_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FAuthCreateAccount>::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>
              ((TOnlineAsyncOp<UE::Online::FAuthCreateAccount> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FAuthCreateAccount> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed34d6d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed34d6d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFAuthCreateAccount_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFAuthCreateAccount_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthEndVerifiedAuthSession::Params> @ 14ed34dc0

TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession>::
TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthEndVerifiedAuthSession::Params>
          (TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFAuthEndVerifiedAuthSession_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>::
    TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>
              ((TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed34ecd;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed34ecd:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFAuthEndVerifiedAuthSession_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFAuthEndVerifiedAuthSession_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FAuthLinkAccount><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthLinkAccount::Params> @ 14ed34f20

TWrappedOperation<UE::Online::FAuthLinkAccount> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthLinkAccount>::
TWrappedOperation<UE::Online::FAuthLinkAccount><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthLinkAccount::Params>
          (TWrappedOperation<UE::Online::FAuthLinkAccount> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FAuthLinkAccount> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFAuthLinkAccount_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FAuthLinkAccount>::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>
              ((TOnlineAsyncOp<UE::Online::FAuthLinkAccount> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FAuthLinkAccount> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3502d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3502d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFAuthLinkAccount_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFAuthLinkAccount_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FAuthLogin><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthLogin::Params> @ 14ed35080

TWrappedOperation<UE::Online::FAuthLogin> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthLogin>::
TWrappedOperation<UE::Online::FAuthLogin><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthLogin::Params>
          (TWrappedOperation<UE::Online::FAuthLogin> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FAuthLogin> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFAuthLogin_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FAuthLogin>::TOnlineAsyncOp<UE::Online::FAuthLogin>
              ((TOnlineAsyncOp<UE::Online::FAuthLogin> *)(pTVar6 + 1),(IOnlineServices *)param_1,
               param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FAuthLogin> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3518d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3518d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFAuthLogin_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFAuthLogin_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FAuthLogout><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthLogout::Params> @ 14ed351e0

TWrappedOperation<UE::Online::FAuthLogout> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthLogout>::
TWrappedOperation<UE::Online::FAuthLogout><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthLogout::Params>
          (TWrappedOperation<UE::Online::FAuthLogout> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FAuthLogout> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFAuthLogout_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FAuthLogout>::TOnlineAsyncOp<UE::Online::FAuthLogout>
              ((TOnlineAsyncOp<UE::Online::FAuthLogout> *)(pTVar6 + 1),(IOnlineServices *)param_1,
               param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FAuthLogout> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed352ed;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed352ed:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFAuthLogout_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFAuthLogout_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FAuthModifyAccountAttributes><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthModifyAccountAttributes::Params> @ 14ed35340

TWrappedOperation<UE::Online::FAuthModifyAccountAttributes> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthModifyAccountAttributes>::
TWrappedOperation<UE::Online::FAuthModifyAccountAttributes><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthModifyAccountAttributes::Params>
          (TWrappedOperation<UE::Online::FAuthModifyAccountAttributes> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FAuthModifyAccountAttributes> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFAuthModifyAccountAttributes_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>::
    TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>
              ((TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FAuthModifyAccountAttributes> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3544d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3544d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFAuthModifyAccountAttributes_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFAuthModifyAccountAttributes_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthQueryExternalAuthToken::Params> @ 14ed354a0

TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken>::
TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthQueryExternalAuthToken::Params>
          (TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFAuthQueryExternalAuthToken_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>::
    TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>
              ((TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed355ad;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed355ad:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFAuthQueryExternalAuthToken_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFAuthQueryExternalAuthToken_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthQueryExternalServerAuthTicket::Params> @ 14ed35600

TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket>::
TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthQueryExternalServerAuthTicket::Params>
          (TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFAuthQueryExternalServerAuthTicket_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>::
    TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>
              ((TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3570d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3570d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFAuthQueryExternalServerAuthTicket_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFAuthQueryExternalServerAuthTicket_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthQueryVerifiedAuthTicket::Params> @ 14ed35760

TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket>::
TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket><UE::Online::FOnlineServicesCommon_&,UE::Online::FAuthQueryVerifiedAuthTicket::Params>
          (TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFAuthQueryVerifiedAuthTicket_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>::
    TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>
              ((TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3586d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3586d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFAuthQueryVerifiedAuthTicket_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFAuthQueryVerifiedAuthTicket_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FBatchQueryPresence><UE::Online::FOnlineServicesCommon_&,UE::Online::FBatchQueryPresence::Params> @ 14ed358c0

TWrappedOperation<UE::Online::FBatchQueryPresence> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FBatchQueryPresence>::
TWrappedOperation<UE::Online::FBatchQueryPresence><UE::Online::FOnlineServicesCommon_&,UE::Online::FBatchQueryPresence::Params>
          (TWrappedOperation<UE::Online::FBatchQueryPresence> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FBatchQueryPresence> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFBatchQueryPresence_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>
              ((TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FBatchQueryPresence> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed359cd;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed359cd:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFBatchQueryPresence_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFBatchQueryPresence_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FCommerceCheckout><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceCheckout::Params> @ 14ed35a20

TWrappedOperation<UE::Online::FCommerceCheckout> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceCheckout>::
TWrappedOperation<UE::Online::FCommerceCheckout><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceCheckout::Params>
          (TWrappedOperation<UE::Online::FCommerceCheckout> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FCommerceCheckout> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFCommerceCheckout_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FCommerceCheckout>::TOnlineAsyncOp<UE::Online::FCommerceCheckout>
              ((TOnlineAsyncOp<UE::Online::FCommerceCheckout> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FCommerceCheckout> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed35b2d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed35b2d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFCommerceCheckout_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFCommerceCheckout_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FCommerceQueryEntitlements><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceQueryEntitlements::Params> @ 14ed35b80

TWrappedOperation<UE::Online::FCommerceQueryEntitlements> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceQueryEntitlements>::
TWrappedOperation<UE::Online::FCommerceQueryEntitlements><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceQueryEntitlements::Params>
          (TWrappedOperation<UE::Online::FCommerceQueryEntitlements> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FCommerceQueryEntitlements> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFCommerceQueryEntitlements_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>::
    TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>
              ((TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FCommerceQueryEntitlements> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed35c8d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed35c8d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFCommerceQueryEntitlements_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFCommerceQueryEntitlements_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FCommerceQueryOffers><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceQueryOffers::Params> @ 14ed35ce0

TWrappedOperation<UE::Online::FCommerceQueryOffers> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceQueryOffers>::
TWrappedOperation<UE::Online::FCommerceQueryOffers><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceQueryOffers::Params>
          (TWrappedOperation<UE::Online::FCommerceQueryOffers> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FCommerceQueryOffers> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFCommerceQueryOffers_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>::
    TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>
              ((TOnlineAsyncOp<UE::Online::FCommerceQueryOffers> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FCommerceQueryOffers> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed35ded;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed35ded:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFCommerceQueryOffers_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFCommerceQueryOffers_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FCommerceQueryOffersById><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceQueryOffersById::Params> @ 14ed35e40

TWrappedOperation<UE::Online::FCommerceQueryOffersById> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceQueryOffersById>::
TWrappedOperation<UE::Online::FCommerceQueryOffersById><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceQueryOffersById::Params>
          (TWrappedOperation<UE::Online::FCommerceQueryOffersById> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FCommerceQueryOffersById> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFCommerceQueryOffersById_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>::
    TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>
              ((TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FCommerceQueryOffersById> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed35f4d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed35f4d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFCommerceQueryOffersById_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFCommerceQueryOffersById_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceQueryTransactionEntitlements::Params> @ 14ed35fa0

TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements> * __thiscall
UE::Online::FOnlineAsyncOpCache::
TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements>::
TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceQueryTransactionEntitlements::Params>
          (TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFCommerceQueryTransactionEntitlements_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>::
    TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>
              ((TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements> *)(*pcVar4)()
        ;
        return pTVar7;
      }
      goto LAB_14ed360ad;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed360ad:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFCommerceQueryTransactionEntitlements_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFCommerceQueryTransactionEntitlements_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FCommerceRedeemEntitlement><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceRedeemEntitlement::Params> @ 14ed36100

TWrappedOperation<UE::Online::FCommerceRedeemEntitlement> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceRedeemEntitlement>::
TWrappedOperation<UE::Online::FCommerceRedeemEntitlement><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceRedeemEntitlement::Params>
          (TWrappedOperation<UE::Online::FCommerceRedeemEntitlement> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FCommerceRedeemEntitlement> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFCommerceRedeemEntitlement_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>::
    TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>
              ((TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FCommerceRedeemEntitlement> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3620d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3620d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFCommerceRedeemEntitlement_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFCommerceRedeemEntitlement_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceRetrieveS2SToken::Params> @ 14ed36260

TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken>::
TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceRetrieveS2SToken::Params>
          (TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFCommerceRetrieveS2SToken_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>::
    TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>
              ((TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3636d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3636d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFCommerceRetrieveS2SToken_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFCommerceRetrieveS2SToken_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FCommerceShowStoreUI><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceShowStoreUI::Params> @ 14ed363c0

TWrappedOperation<UE::Online::FCommerceShowStoreUI> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceShowStoreUI>::
TWrappedOperation<UE::Online::FCommerceShowStoreUI><UE::Online::FOnlineServicesCommon_&,UE::Online::FCommerceShowStoreUI::Params>
          (TWrappedOperation<UE::Online::FCommerceShowStoreUI> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FCommerceShowStoreUI> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFCommerceShowStoreUI_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>::
    TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>
              ((TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FCommerceShowStoreUI> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed364cd;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed364cd:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFCommerceShowStoreUI_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFCommerceShowStoreUI_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FCreateLobby><UE::Online::FOnlineServicesCommon_&,UE::Online::FCreateLobby::Params> @ 14ed36520

TWrappedOperation<UE::Online::FCreateLobby> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCreateLobby>::
TWrappedOperation<UE::Online::FCreateLobby><UE::Online::FOnlineServicesCommon_&,UE::Online::FCreateLobby::Params>
          (TWrappedOperation<UE::Online::FCreateLobby> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FCreateLobby> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFCreateLobby_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FCreateLobby>::TOnlineAsyncOp<UE::Online::FCreateLobby>
              ((TOnlineAsyncOp<UE::Online::FCreateLobby> *)(pTVar6 + 1),(IOnlineServices *)param_1,
               param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FCreateLobby> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3662d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3662d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFCreateLobby_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFCreateLobby_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FCreateSession><UE::Online::FOnlineServicesCommon_&,UE::Online::FCreateSession::Params> @ 14ed36680

TWrappedOperation<UE::Online::FCreateSession> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCreateSession>::
TWrappedOperation<UE::Online::FCreateSession><UE::Online::FOnlineServicesCommon_&,UE::Online::FCreateSession::Params>
          (TWrappedOperation<UE::Online::FCreateSession> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FCreateSession> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFCreateSession_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FCreateSession>::TOnlineAsyncOp<UE::Online::FCreateSession>
              ((TOnlineAsyncOp<UE::Online::FCreateSession> *)(pTVar6 + 1),(IOnlineServices *)param_1
               ,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FCreateSession> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3678d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3678d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFCreateSession_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFCreateSession_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FDeclineLobbyInvitation><UE::Online::FOnlineServicesCommon_&,UE::Online::FDeclineLobbyInvitation::Params> @ 14ed367e0

TWrappedOperation<UE::Online::FDeclineLobbyInvitation> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FDeclineLobbyInvitation>::
TWrappedOperation<UE::Online::FDeclineLobbyInvitation><UE::Online::FOnlineServicesCommon_&,UE::Online::FDeclineLobbyInvitation::Params>
          (TWrappedOperation<UE::Online::FDeclineLobbyInvitation> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FDeclineLobbyInvitation> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFDeclineLobbyInvitation_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>::
    TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>
              ((TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FDeclineLobbyInvitation> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed368ed;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed368ed:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFDeclineLobbyInvitation_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFDeclineLobbyInvitation_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FExternalUIShowFriendsUI><UE::Online::FOnlineServicesCommon_&,UE::Online::FExternalUIShowFriendsUI::Params> @ 14ed36940

TWrappedOperation<UE::Online::FExternalUIShowFriendsUI> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FExternalUIShowFriendsUI>::
TWrappedOperation<UE::Online::FExternalUIShowFriendsUI><UE::Online::FOnlineServicesCommon_&,UE::Online::FExternalUIShowFriendsUI::Params>
          (TWrappedOperation<UE::Online::FExternalUIShowFriendsUI> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FExternalUIShowFriendsUI> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFExternalUIShowFriendsUI_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>::
    TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>
              ((TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FExternalUIShowFriendsUI> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed36a4d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed36a4d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFExternalUIShowFriendsUI_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFExternalUIShowFriendsUI_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FExternalUIShowLoginUI><UE::Online::FOnlineServicesCommon_&,UE::Online::FExternalUIShowLoginUI::Params> @ 14ed36aa0

TWrappedOperation<UE::Online::FExternalUIShowLoginUI> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FExternalUIShowLoginUI>::
TWrappedOperation<UE::Online::FExternalUIShowLoginUI><UE::Online::FOnlineServicesCommon_&,UE::Online::FExternalUIShowLoginUI::Params>
          (TWrappedOperation<UE::Online::FExternalUIShowLoginUI> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FExternalUIShowLoginUI> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFExternalUIShowLoginUI_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>::
    TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>
              ((TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FExternalUIShowLoginUI> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed36bad;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed36bad:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFExternalUIShowLoginUI_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFExternalUIShowLoginUI_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FFindLobbies><UE::Online::FOnlineServicesCommon_&,UE::Online::FFindLobbies::Params> @ 14ed36c00

TWrappedOperation<UE::Online::FFindLobbies> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FFindLobbies>::
TWrappedOperation<UE::Online::FFindLobbies><UE::Online::FOnlineServicesCommon_&,UE::Online::FFindLobbies::Params>
          (TWrappedOperation<UE::Online::FFindLobbies> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FFindLobbies> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFFindLobbies_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FFindLobbies>::TOnlineAsyncOp<UE::Online::FFindLobbies>
              ((TOnlineAsyncOp<UE::Online::FFindLobbies> *)(pTVar6 + 1),(IOnlineServices *)param_1,
               param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FFindLobbies> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed36d0d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed36d0d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFFindLobbies_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFFindLobbies_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FFindSessions><UE::Online::FOnlineServicesCommon_&,UE::Online::FFindSessions::Params> @ 14ed36d60

TWrappedOperation<UE::Online::FFindSessions> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FFindSessions>::
TWrappedOperation<UE::Online::FFindSessions><UE::Online::FOnlineServicesCommon_&,UE::Online::FFindSessions::Params>
          (TWrappedOperation<UE::Online::FFindSessions> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FFindSessions> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFFindSessions_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FFindSessions>::TOnlineAsyncOp<UE::Online::FFindSessions>
              ((TOnlineAsyncOp<UE::Online::FFindSessions> *)(pTVar6 + 1),(IOnlineServices *)param_1,
               param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FFindSessions> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed36e6d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed36e6d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFFindSessions_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFFindSessions_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FFunctionalTestLobbies><UE::Online::FOnlineServicesCommon_&,UE::Online::FFunctionalTestLobbies::Params> @ 14ed36ec0

TWrappedOperation<UE::Online::FFunctionalTestLobbies> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FFunctionalTestLobbies>::
TWrappedOperation<UE::Online::FFunctionalTestLobbies><UE::Online::FOnlineServicesCommon_&,UE::Online::FFunctionalTestLobbies::Params>
          (TWrappedOperation<UE::Online::FFunctionalTestLobbies> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FFunctionalTestLobbies> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::
    TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>
              ((TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FFunctionalTestLobbies> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed36fcd;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed36fcd:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFFunctionalTestLobbies_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FInviteLobbyMember><UE::Online::FOnlineServicesCommon_&,UE::Online::FInviteLobbyMember::Params> @ 14ed37020

TWrappedOperation<UE::Online::FInviteLobbyMember> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FInviteLobbyMember>::
TWrappedOperation<UE::Online::FInviteLobbyMember><UE::Online::FOnlineServicesCommon_&,UE::Online::FInviteLobbyMember::Params>
          (TWrappedOperation<UE::Online::FInviteLobbyMember> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FInviteLobbyMember> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFInviteLobbyMember_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FInviteLobbyMember>::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>
              ((TOnlineAsyncOp<UE::Online::FInviteLobbyMember> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FInviteLobbyMember> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3712d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3712d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFInviteLobbyMember_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFInviteLobbyMember_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FJoinLobby><UE::Online::FOnlineServicesCommon_&,UE::Online::FJoinLobby::Params> @ 14ed37180

TWrappedOperation<UE::Online::FJoinLobby> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FJoinLobby>::
TWrappedOperation<UE::Online::FJoinLobby><UE::Online::FOnlineServicesCommon_&,UE::Online::FJoinLobby::Params>
          (TWrappedOperation<UE::Online::FJoinLobby> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FJoinLobby> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFJoinLobby_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FJoinLobby>::TOnlineAsyncOp<UE::Online::FJoinLobby>
              ((TOnlineAsyncOp<UE::Online::FJoinLobby> *)(pTVar6 + 1),(IOnlineServices *)param_1,
               param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FJoinLobby> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3728d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3728d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFJoinLobby_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFJoinLobby_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FJoinSession><UE::Online::FOnlineServicesCommon_&,UE::Online::FJoinSession::Params> @ 14ed372e0

TWrappedOperation<UE::Online::FJoinSession> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FJoinSession>::
TWrappedOperation<UE::Online::FJoinSession><UE::Online::FOnlineServicesCommon_&,UE::Online::FJoinSession::Params>
          (TWrappedOperation<UE::Online::FJoinSession> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FJoinSession> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFJoinSession_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FJoinSession>::TOnlineAsyncOp<UE::Online::FJoinSession>
              ((TOnlineAsyncOp<UE::Online::FJoinSession> *)(pTVar6 + 1),(IOnlineServices *)param_1,
               param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FJoinSession> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed373ed;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed373ed:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFJoinSession_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFJoinSession_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FKickLobbyMember><UE::Online::FOnlineServicesCommon_&,UE::Online::FKickLobbyMember::Params> @ 14ed37440

TWrappedOperation<UE::Online::FKickLobbyMember> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FKickLobbyMember>::
TWrappedOperation<UE::Online::FKickLobbyMember><UE::Online::FOnlineServicesCommon_&,UE::Online::FKickLobbyMember::Params>
          (TWrappedOperation<UE::Online::FKickLobbyMember> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FKickLobbyMember> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFKickLobbyMember_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FKickLobbyMember>::TOnlineAsyncOp<UE::Online::FKickLobbyMember>
              ((TOnlineAsyncOp<UE::Online::FKickLobbyMember> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FKickLobbyMember> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3754d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3754d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFKickLobbyMember_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFKickLobbyMember_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FLeaveLobby><UE::Online::FOnlineServicesCommon_&,UE::Online::FLeaveLobby::Params> @ 14ed375a0

TWrappedOperation<UE::Online::FLeaveLobby> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FLeaveLobby>::
TWrappedOperation<UE::Online::FLeaveLobby><UE::Online::FOnlineServicesCommon_&,UE::Online::FLeaveLobby::Params>
          (TWrappedOperation<UE::Online::FLeaveLobby> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FLeaveLobby> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFLeaveLobby_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FLeaveLobby>::TOnlineAsyncOp<UE::Online::FLeaveLobby>
              ((TOnlineAsyncOp<UE::Online::FLeaveLobby> *)(pTVar6 + 1),(IOnlineServices *)param_1,
               param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FLeaveLobby> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed376ad;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed376ad:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFLeaveLobby_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFLeaveLobby_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FLeaveSession><UE::Online::FOnlineServicesCommon_&,UE::Online::FLeaveSession::Params> @ 14ed37700

TWrappedOperation<UE::Online::FLeaveSession> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FLeaveSession>::
TWrappedOperation<UE::Online::FLeaveSession><UE::Online::FOnlineServicesCommon_&,UE::Online::FLeaveSession::Params>
          (TWrappedOperation<UE::Online::FLeaveSession> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FLeaveSession> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFLeaveSession_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FLeaveSession>::TOnlineAsyncOp<UE::Online::FLeaveSession>
              ((TOnlineAsyncOp<UE::Online::FLeaveSession> *)(pTVar6 + 1),(IOnlineServices *)param_1,
               param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FLeaveSession> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3780d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3780d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFLeaveSession_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFLeaveSession_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FModifyLobbyAttributes><UE::Online::FOnlineServicesCommon_&,UE::Online::FModifyLobbyAttributes::Params> @ 14ed37860

TWrappedOperation<UE::Online::FModifyLobbyAttributes> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FModifyLobbyAttributes>::
TWrappedOperation<UE::Online::FModifyLobbyAttributes><UE::Online::FOnlineServicesCommon_&,UE::Online::FModifyLobbyAttributes::Params>
          (TWrappedOperation<UE::Online::FModifyLobbyAttributes> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FModifyLobbyAttributes> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFModifyLobbyAttributes_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>::
    TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>
              ((TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FModifyLobbyAttributes> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3796d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3796d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFModifyLobbyAttributes_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFModifyLobbyAttributes_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy><UE::Online::FOnlineServicesCommon_&,UE::Online::FModifyLobbyJoinPolicy::Params> @ 14ed379c0

TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy>::
TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy><UE::Online::FOnlineServicesCommon_&,UE::Online::FModifyLobbyJoinPolicy::Params>
          (TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFModifyLobbyJoinPolicy_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>::
    TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>
              ((TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed37acd;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed37acd:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFModifyLobbyJoinPolicy_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFModifyLobbyJoinPolicy_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes><UE::Online::FOnlineServicesCommon_&,UE::Online::FModifyLobbyMemberAttributes::Params> @ 14ed37b20

TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes>::
TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes><UE::Online::FOnlineServicesCommon_&,UE::Online::FModifyLobbyMemberAttributes::Params>
          (TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFModifyLobbyMemberAttributes_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>::
    TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>
              ((TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed37c2d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed37c2d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFModifyLobbyMemberAttributes_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFModifyLobbyMemberAttributes_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FModifyLobbySchema><UE::Online::FOnlineServicesCommon_&,UE::Online::FModifyLobbySchema::Params> @ 14ed37c80

TWrappedOperation<UE::Online::FModifyLobbySchema> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FModifyLobbySchema>::
TWrappedOperation<UE::Online::FModifyLobbySchema><UE::Online::FOnlineServicesCommon_&,UE::Online::FModifyLobbySchema::Params>
          (TWrappedOperation<UE::Online::FModifyLobbySchema> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FModifyLobbySchema> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFModifyLobbySchema_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FModifyLobbySchema>::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>
              ((TOnlineAsyncOp<UE::Online::FModifyLobbySchema> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FModifyLobbySchema> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed37d8d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed37d8d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFModifyLobbySchema_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFModifyLobbySchema_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FPartialUpdatePresence><UE::Online::FOnlineServicesCommon_&,UE::Online::FPartialUpdatePresence::Params> @ 14ed37de0

TWrappedOperation<UE::Online::FPartialUpdatePresence> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FPartialUpdatePresence>::
TWrappedOperation<UE::Online::FPartialUpdatePresence><UE::Online::FOnlineServicesCommon_&,UE::Online::FPartialUpdatePresence::Params>
          (TWrappedOperation<UE::Online::FPartialUpdatePresence> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FPartialUpdatePresence> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFPartialUpdatePresence_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>::
    TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>
              ((TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FPartialUpdatePresence> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed37eed;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed37eed:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFPartialUpdatePresence_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFPartialUpdatePresence_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FPromoteLobbyMember><UE::Online::FOnlineServicesCommon_&,UE::Online::FPromoteLobbyMember::Params> @ 14ed37f40

TWrappedOperation<UE::Online::FPromoteLobbyMember> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FPromoteLobbyMember>::
TWrappedOperation<UE::Online::FPromoteLobbyMember><UE::Online::FOnlineServicesCommon_&,UE::Online::FPromoteLobbyMember::Params>
          (TWrappedOperation<UE::Online::FPromoteLobbyMember> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FPromoteLobbyMember> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFPromoteLobbyMember_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>
              ((TOnlineAsyncOp<UE::Online::FPromoteLobbyMember> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FPromoteLobbyMember> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3804d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3804d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFPromoteLobbyMember_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFPromoteLobbyMember_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FQueryAchievementDefinitions><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryAchievementDefinitions::Params> @ 14ed380a0

TWrappedOperation<UE::Online::FQueryAchievementDefinitions> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryAchievementDefinitions>::
TWrappedOperation<UE::Online::FQueryAchievementDefinitions><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryAchievementDefinitions::Params>
          (TWrappedOperation<UE::Online::FQueryAchievementDefinitions> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FQueryAchievementDefinitions> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFQueryAchievementDefinitions_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>::
    TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>
              ((TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FQueryAchievementDefinitions> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed381ad;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed381ad:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFQueryAchievementDefinitions_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFQueryAchievementDefinitions_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FQueryAchievementStates><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryAchievementStates::Params> @ 14ed38200

TWrappedOperation<UE::Online::FQueryAchievementStates> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryAchievementStates>::
TWrappedOperation<UE::Online::FQueryAchievementStates><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryAchievementStates::Params>
          (TWrappedOperation<UE::Online::FQueryAchievementStates> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FQueryAchievementStates> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFQueryAchievementStates_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FQueryAchievementStates>::
    TOnlineAsyncOp<UE::Online::FQueryAchievementStates>
              ((TOnlineAsyncOp<UE::Online::FQueryAchievementStates> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FQueryAchievementStates> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3830d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3830d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFQueryAchievementStates_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFQueryAchievementStates_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FQueryPresence><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryPresence::Params> @ 14ed38360

TWrappedOperation<UE::Online::FQueryPresence> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryPresence>::
TWrappedOperation<UE::Online::FQueryPresence><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryPresence::Params>
          (TWrappedOperation<UE::Online::FQueryPresence> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FQueryPresence> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFQueryPresence_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FQueryPresence>::TOnlineAsyncOp<UE::Online::FQueryPresence>
              ((TOnlineAsyncOp<UE::Online::FQueryPresence> *)(pTVar6 + 1),(IOnlineServices *)param_1
               ,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FQueryPresence> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3846d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3846d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFQueryPresence_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFQueryPresence_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FQueryUserPrivilege><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryUserPrivilege::Params> @ 14ed384c0

TWrappedOperation<UE::Online::FQueryUserPrivilege> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryUserPrivilege>::
TWrappedOperation<UE::Online::FQueryUserPrivilege><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryUserPrivilege::Params>
          (TWrappedOperation<UE::Online::FQueryUserPrivilege> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FQueryUserPrivilege> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFQueryUserPrivilege_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>
              ((TOnlineAsyncOp<UE::Online::FQueryUserPrivilege> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FQueryUserPrivilege> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed385cd;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed385cd:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFQueryUserPrivilege_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFQueryUserPrivilege_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FReadEntriesAroundRank><UE::Online::FOnlineServicesCommon_&,UE::Online::FReadEntriesAroundRank::Params> @ 14ed38620

TWrappedOperation<UE::Online::FReadEntriesAroundRank> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FReadEntriesAroundRank>::
TWrappedOperation<UE::Online::FReadEntriesAroundRank><UE::Online::FOnlineServicesCommon_&,UE::Online::FReadEntriesAroundRank::Params>
          (TWrappedOperation<UE::Online::FReadEntriesAroundRank> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FReadEntriesAroundRank> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFReadEntriesAroundRank_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>::
    TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>
              ((TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FReadEntriesAroundRank> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3872d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3872d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFReadEntriesAroundRank_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFReadEntriesAroundRank_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FReadEntriesAroundUser><UE::Online::FOnlineServicesCommon_&,UE::Online::FReadEntriesAroundUser::Params> @ 14ed38780

TWrappedOperation<UE::Online::FReadEntriesAroundUser> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FReadEntriesAroundUser>::
TWrappedOperation<UE::Online::FReadEntriesAroundUser><UE::Online::FOnlineServicesCommon_&,UE::Online::FReadEntriesAroundUser::Params>
          (TWrappedOperation<UE::Online::FReadEntriesAroundUser> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FReadEntriesAroundUser> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFReadEntriesAroundUser_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>::
    TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>
              ((TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FReadEntriesAroundUser> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3888d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3888d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFReadEntriesAroundUser_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFReadEntriesAroundUser_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FReadEntriesForUsers><UE::Online::FOnlineServicesCommon_&,UE::Online::FReadEntriesForUsers::Params> @ 14ed388e0

TWrappedOperation<UE::Online::FReadEntriesForUsers> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FReadEntriesForUsers>::
TWrappedOperation<UE::Online::FReadEntriesForUsers><UE::Online::FOnlineServicesCommon_&,UE::Online::FReadEntriesForUsers::Params>
          (TWrappedOperation<UE::Online::FReadEntriesForUsers> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FReadEntriesForUsers> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFReadEntriesForUsers_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>::
    TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>
              ((TOnlineAsyncOp<UE::Online::FReadEntriesForUsers> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FReadEntriesForUsers> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed389ed;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed389ed:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFReadEntriesForUsers_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFReadEntriesForUsers_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FRejectSessionInvite><UE::Online::FOnlineServicesCommon_&,UE::Online::FRejectSessionInvite::Params> @ 14ed38a40

TWrappedOperation<UE::Online::FRejectSessionInvite> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FRejectSessionInvite>::
TWrappedOperation<UE::Online::FRejectSessionInvite><UE::Online::FOnlineServicesCommon_&,UE::Online::FRejectSessionInvite::Params>
          (TWrappedOperation<UE::Online::FRejectSessionInvite> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FRejectSessionInvite> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFRejectSessionInvite_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::
    TOnlineAsyncOp<UE::Online::FRejectSessionInvite>
              ((TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FRejectSessionInvite> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed38b4d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed38b4d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFRejectSessionInvite_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFRejectSessionInvite_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FRemoveSessionMember><UE::Online::FOnlineServicesCommon_&,UE::Online::FRemoveSessionMember::Params> @ 14ed38ba0

TWrappedOperation<UE::Online::FRemoveSessionMember> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FRemoveSessionMember>::
TWrappedOperation<UE::Online::FRemoveSessionMember><UE::Online::FOnlineServicesCommon_&,UE::Online::FRemoveSessionMember::Params>
          (TWrappedOperation<UE::Online::FRemoveSessionMember> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FRemoveSessionMember> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFRemoveSessionMember_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::
    TOnlineAsyncOp<UE::Online::FRemoveSessionMember>
              ((TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FRemoveSessionMember> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed38cad;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed38cad:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFRemoveSessionMember_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFRemoveSessionMember_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FRestoreLobbies><UE::Online::FOnlineServicesCommon_&,UE::Online::FRestoreLobbies::Params> @ 14ed38d00

TWrappedOperation<UE::Online::FRestoreLobbies> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FRestoreLobbies>::
TWrappedOperation<UE::Online::FRestoreLobbies><UE::Online::FOnlineServicesCommon_&,UE::Online::FRestoreLobbies::Params>
          (TWrappedOperation<UE::Online::FRestoreLobbies> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FRestoreLobbies> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFRestoreLobbies_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FRestoreLobbies>::TOnlineAsyncOp<UE::Online::FRestoreLobbies>
              ((TOnlineAsyncOp<UE::Online::FRestoreLobbies> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FRestoreLobbies> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed38e0d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed38e0d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFRestoreLobbies_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFRestoreLobbies_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FSendSessionInvite><UE::Online::FOnlineServicesCommon_&,UE::Online::FSendSessionInvite::Params> @ 14ed38e60

TWrappedOperation<UE::Online::FSendSessionInvite> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FSendSessionInvite>::
TWrappedOperation<UE::Online::FSendSessionInvite><UE::Online::FOnlineServicesCommon_&,UE::Online::FSendSessionInvite::Params>
          (TWrappedOperation<UE::Online::FSendSessionInvite> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FSendSessionInvite> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFSendSessionInvite_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FSendSessionInvite>::TOnlineAsyncOp<UE::Online::FSendSessionInvite>
              ((TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FSendSessionInvite> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed38f6d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed38f6d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFSendSessionInvite_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFSendSessionInvite_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FStartMatchmaking><UE::Online::FOnlineServicesCommon_&,UE::Online::FStartMatchmaking::Params> @ 14ed38fc0

TWrappedOperation<UE::Online::FStartMatchmaking> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FStartMatchmaking>::
TWrappedOperation<UE::Online::FStartMatchmaking><UE::Online::FOnlineServicesCommon_&,UE::Online::FStartMatchmaking::Params>
          (TWrappedOperation<UE::Online::FStartMatchmaking> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FStartMatchmaking> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFStartMatchmaking_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FStartMatchmaking>::TOnlineAsyncOp<UE::Online::FStartMatchmaking>
              ((TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FStartMatchmaking> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed390cd;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed390cd:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFStartMatchmaking_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFStartMatchmaking_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FUnlockAchievements><UE::Online::FOnlineServicesCommon_&,UE::Online::FUnlockAchievements::Params> @ 14ed39120

TWrappedOperation<UE::Online::FUnlockAchievements> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUnlockAchievements>::
TWrappedOperation<UE::Online::FUnlockAchievements><UE::Online::FOnlineServicesCommon_&,UE::Online::FUnlockAchievements::Params>
          (TWrappedOperation<UE::Online::FUnlockAchievements> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FUnlockAchievements> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFUnlockAchievements_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FUnlockAchievements>::TOnlineAsyncOp<UE::Online::FUnlockAchievements>
              ((TOnlineAsyncOp<UE::Online::FUnlockAchievements> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FUnlockAchievements> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3922d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3922d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFUnlockAchievements_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFUnlockAchievements_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FUpdatePresence><UE::Online::FOnlineServicesCommon_&,UE::Online::FUpdatePresence::Params> @ 14ed39280

TWrappedOperation<UE::Online::FUpdatePresence> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUpdatePresence>::
TWrappedOperation<UE::Online::FUpdatePresence><UE::Online::FOnlineServicesCommon_&,UE::Online::FUpdatePresence::Params>
          (TWrappedOperation<UE::Online::FUpdatePresence> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FUpdatePresence> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFUpdatePresence_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FUpdatePresence>::TOnlineAsyncOp<UE::Online::FUpdatePresence>
              ((TOnlineAsyncOp<UE::Online::FUpdatePresence> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FUpdatePresence> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3938d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3938d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFUpdatePresence_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFUpdatePresence_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FUpdateSessionSettings><UE::Online::FOnlineServicesCommon_&,UE::Online::FUpdateSessionSettings::Params> @ 14ed393e0

TWrappedOperation<UE::Online::FUpdateSessionSettings> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUpdateSessionSettings>::
TWrappedOperation<UE::Online::FUpdateSessionSettings><UE::Online::FOnlineServicesCommon_&,UE::Online::FUpdateSessionSettings::Params>
          (TWrappedOperation<UE::Online::FUpdateSessionSettings> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FUpdateSessionSettings> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFUpdateSessionSettings_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::
    TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>
              ((TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FUpdateSessionSettings> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed394ed;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed394ed:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFUpdateSessionSettings_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFUpdateSessionSettings_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FWriteLeaderboardScores><UE::Online::FOnlineServicesCommon_&,UE::Online::FWriteLeaderboardScores::Params> @ 14ed39540

TWrappedOperation<UE::Online::FWriteLeaderboardScores> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FWriteLeaderboardScores>::
TWrappedOperation<UE::Online::FWriteLeaderboardScores><UE::Online::FOnlineServicesCommon_&,UE::Online::FWriteLeaderboardScores::Params>
          (TWrappedOperation<UE::Online::FWriteLeaderboardScores> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FWriteLeaderboardScores> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFWriteLeaderboardScores_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>::
    TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>
              ((TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FWriteLeaderboardScores> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ed3964d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ed3964d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFWriteLeaderboardScores_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFWriteLeaderboardScores_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// Cancel @ 14ee64a30

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAddSessionMember>::Cancel
          (TWrappedOperation<UE::Online::FAddSessionMember> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee64ab0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession>::
Cancel(TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee64b30

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket>::
Cancel(TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee64bb0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthCreateAccount>::Cancel
          (TWrappedOperation<UE::Online::FAuthCreateAccount> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee64c30

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession>::Cancel
          (TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee64cb0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthLinkAccount>::Cancel
          (TWrappedOperation<UE::Online::FAuthLinkAccount> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee64d30

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthLogin>::Cancel
          (TWrappedOperation<UE::Online::FAuthLogin> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee64db0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthLogout>::Cancel
          (TWrappedOperation<UE::Online::FAuthLogout> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee64e30

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthModifyAccountAttributes>::Cancel
          (TWrappedOperation<UE::Online::FAuthModifyAccountAttributes> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee64eb0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken>::Cancel
          (TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee64f30

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket>::
Cancel(TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee64fb0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket>::Cancel
          (TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee65030

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FBatchQueryPresence>::Cancel
          (TWrappedOperation<UE::Online::FBatchQueryPresence> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee650b0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceCheckout>::Cancel
          (TWrappedOperation<UE::Online::FCommerceCheckout> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee65130

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceQueryEntitlements>::Cancel
          (TWrappedOperation<UE::Online::FCommerceQueryEntitlements> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee651b0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceQueryOffers>::Cancel
          (TWrappedOperation<UE::Online::FCommerceQueryOffers> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee65230

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceQueryOffersById>::Cancel
          (TWrappedOperation<UE::Online::FCommerceQueryOffersById> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee652b0

void __thiscall
UE::Online::FOnlineAsyncOpCache::
TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements>::Cancel
          (TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee65330

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceRedeemEntitlement>::Cancel
          (TWrappedOperation<UE::Online::FCommerceRedeemEntitlement> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee653b0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken>::Cancel
          (TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee65430

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceShowStoreUI>::Cancel
          (TWrappedOperation<UE::Online::FCommerceShowStoreUI> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee654b0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCreateLobby>::Cancel
          (TWrappedOperation<UE::Online::FCreateLobby> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee65530

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCreateSession>::Cancel
          (TWrappedOperation<UE::Online::FCreateSession> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee655b0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FDeclineLobbyInvitation>::Cancel
          (TWrappedOperation<UE::Online::FDeclineLobbyInvitation> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee65630

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FExternalUIShowFriendsUI>::Cancel
          (TWrappedOperation<UE::Online::FExternalUIShowFriendsUI> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee656b0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FExternalUIShowLoginUI>::Cancel
          (TWrappedOperation<UE::Online::FExternalUIShowLoginUI> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee65730

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FFindLobbies>::Cancel
          (TWrappedOperation<UE::Online::FFindLobbies> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee657b0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FFindSessions>::Cancel
          (TWrappedOperation<UE::Online::FFindSessions> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee65830

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FFunctionalTestLobbies>::Cancel
          (TWrappedOperation<UE::Online::FFunctionalTestLobbies> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee658b0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FInviteLobbyMember>::Cancel
          (TWrappedOperation<UE::Online::FInviteLobbyMember> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee65930

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FJoinLobby>::Cancel
          (TWrappedOperation<UE::Online::FJoinLobby> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee659b0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FJoinSession>::Cancel
          (TWrappedOperation<UE::Online::FJoinSession> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee65a30

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FKickLobbyMember>::Cancel
          (TWrappedOperation<UE::Online::FKickLobbyMember> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee65ab0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FLeaveLobby>::Cancel
          (TWrappedOperation<UE::Online::FLeaveLobby> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee65b30

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FLeaveSession>::Cancel
          (TWrappedOperation<UE::Online::FLeaveSession> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee65bb0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FModifyLobbyAttributes>::Cancel
          (TWrappedOperation<UE::Online::FModifyLobbyAttributes> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee65c30

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy>::Cancel
          (TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee65cb0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes>::Cancel
          (TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee65d30

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FModifyLobbySchema>::Cancel
          (TWrappedOperation<UE::Online::FModifyLobbySchema> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee65db0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FPartialUpdatePresence>::Cancel
          (TWrappedOperation<UE::Online::FPartialUpdatePresence> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee65e30

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FPromoteLobbyMember>::Cancel
          (TWrappedOperation<UE::Online::FPromoteLobbyMember> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee65eb0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryAchievementDefinitions>::Cancel
          (TWrappedOperation<UE::Online::FQueryAchievementDefinitions> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee65f30

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryAchievementStates>::Cancel
          (TWrappedOperation<UE::Online::FQueryAchievementStates> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee65fb0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryPresence>::Cancel
          (TWrappedOperation<UE::Online::FQueryPresence> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee66030

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryUserPrivilege>::Cancel
          (TWrappedOperation<UE::Online::FQueryUserPrivilege> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee660b0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FReadEntriesAroundRank>::Cancel
          (TWrappedOperation<UE::Online::FReadEntriesAroundRank> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee66130

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FReadEntriesAroundUser>::Cancel
          (TWrappedOperation<UE::Online::FReadEntriesAroundUser> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee661b0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FReadEntriesForUsers>::Cancel
          (TWrappedOperation<UE::Online::FReadEntriesForUsers> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee66230

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FRejectSessionInvite>::Cancel
          (TWrappedOperation<UE::Online::FRejectSessionInvite> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee662b0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FRemoveSessionMember>::Cancel
          (TWrappedOperation<UE::Online::FRemoveSessionMember> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee66330

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FRestoreLobbies>::Cancel
          (TWrappedOperation<UE::Online::FRestoreLobbies> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee663b0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FSendSessionInvite>::Cancel
          (TWrappedOperation<UE::Online::FSendSessionInvite> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee66430

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FStartMatchmaking>::Cancel
          (TWrappedOperation<UE::Online::FStartMatchmaking> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee664b0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUnlockAchievements>::Cancel
          (TWrappedOperation<UE::Online::FUnlockAchievements> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee66530

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUpdatePresence>::Cancel
          (TWrappedOperation<UE::Online::FUpdatePresence> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee665b0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUpdateSessionSettings>::Cancel
          (TWrappedOperation<UE::Online::FUpdateSessionSettings> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ee66630

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FWriteLeaderboardScores>::Cancel
          (TWrappedOperation<UE::Online::FWriteLeaderboardScores> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// ClearCallback @ 14ee7b4b0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAddSessionMember>::ClearCallback
          (TWrappedOperation<UE::Online::FAddSessionMember> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b4b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b4d0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession>::
ClearCallback(TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b4d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b4f0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket>::
ClearCallback(TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b4f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b510

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthCreateAccount>::ClearCallback
          (TWrappedOperation<UE::Online::FAuthCreateAccount> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b517. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b530

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession>::
ClearCallback(TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b537. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b550

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthLinkAccount>::ClearCallback
          (TWrappedOperation<UE::Online::FAuthLinkAccount> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b557. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b570

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthLogin>::ClearCallback
          (TWrappedOperation<UE::Online::FAuthLogin> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b577. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b590

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthLogout>::ClearCallback
          (TWrappedOperation<UE::Online::FAuthLogout> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b597. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b5b0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthModifyAccountAttributes>::
ClearCallback(TWrappedOperation<UE::Online::FAuthModifyAccountAttributes> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b5b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b5d0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken>::
ClearCallback(TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b5d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b5f0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket>::
ClearCallback(TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b5f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b610

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket>::
ClearCallback(TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b617. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b630

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FBatchQueryPresence>::ClearCallback
          (TWrappedOperation<UE::Online::FBatchQueryPresence> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b650

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceCheckout>::ClearCallback
          (TWrappedOperation<UE::Online::FCommerceCheckout> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b657. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b670

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceQueryEntitlements>::
ClearCallback(TWrappedOperation<UE::Online::FCommerceQueryEntitlements> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b677. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b690

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceQueryOffers>::ClearCallback
          (TWrappedOperation<UE::Online::FCommerceQueryOffers> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b697. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b6b0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceQueryOffersById>::
ClearCallback(TWrappedOperation<UE::Online::FCommerceQueryOffersById> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b6b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b6d0

void __thiscall
UE::Online::FOnlineAsyncOpCache::
TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements>::ClearCallback
          (TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b6d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b6f0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceRedeemEntitlement>::
ClearCallback(TWrappedOperation<UE::Online::FCommerceRedeemEntitlement> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b6f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b710

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken>::
ClearCallback(TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b717. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b730

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceShowStoreUI>::ClearCallback
          (TWrappedOperation<UE::Online::FCommerceShowStoreUI> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b737. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b750

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCreateLobby>::ClearCallback
          (TWrappedOperation<UE::Online::FCreateLobby> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b757. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b770

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCreateSession>::ClearCallback
          (TWrappedOperation<UE::Online::FCreateSession> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b777. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b790

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FDeclineLobbyInvitation>::
ClearCallback(TWrappedOperation<UE::Online::FDeclineLobbyInvitation> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b7b0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FExternalUIShowFriendsUI>::
ClearCallback(TWrappedOperation<UE::Online::FExternalUIShowFriendsUI> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b7b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b7d0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FExternalUIShowLoginUI>::
ClearCallback(TWrappedOperation<UE::Online::FExternalUIShowLoginUI> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b7d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b7f0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FFindLobbies>::ClearCallback
          (TWrappedOperation<UE::Online::FFindLobbies> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b7f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b810

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FFindSessions>::ClearCallback
          (TWrappedOperation<UE::Online::FFindSessions> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b817. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b830

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FFunctionalTestLobbies>::
ClearCallback(TWrappedOperation<UE::Online::FFunctionalTestLobbies> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b850

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FInviteLobbyMember>::ClearCallback
          (TWrappedOperation<UE::Online::FInviteLobbyMember> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b857. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b870

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FJoinLobby>::ClearCallback
          (TWrappedOperation<UE::Online::FJoinLobby> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b890

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FJoinSession>::ClearCallback
          (TWrappedOperation<UE::Online::FJoinSession> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b8b0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FKickLobbyMember>::ClearCallback
          (TWrappedOperation<UE::Online::FKickLobbyMember> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b8b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b8d0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FLeaveLobby>::ClearCallback
          (TWrappedOperation<UE::Online::FLeaveLobby> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b8d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b8f0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FLeaveSession>::ClearCallback
          (TWrappedOperation<UE::Online::FLeaveSession> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b8f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b910

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FModifyLobbyAttributes>::
ClearCallback(TWrappedOperation<UE::Online::FModifyLobbyAttributes> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b917. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b930

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy>::
ClearCallback(TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b937. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b950

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes>::
ClearCallback(TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b970

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FModifyLobbySchema>::ClearCallback
          (TWrappedOperation<UE::Online::FModifyLobbySchema> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b990

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FPartialUpdatePresence>::
ClearCallback(TWrappedOperation<UE::Online::FPartialUpdatePresence> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b997. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b9b0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FPromoteLobbyMember>::ClearCallback
          (TWrappedOperation<UE::Online::FPromoteLobbyMember> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b9b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b9d0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryAchievementDefinitions>::
ClearCallback(TWrappedOperation<UE::Online::FQueryAchievementDefinitions> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b9d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7b9f0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryAchievementStates>::
ClearCallback(TWrappedOperation<UE::Online::FQueryAchievementStates> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7b9f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7ba10

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryPresence>::ClearCallback
          (TWrappedOperation<UE::Online::FQueryPresence> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7ba17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7ba30

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryUserPrivilege>::ClearCallback
          (TWrappedOperation<UE::Online::FQueryUserPrivilege> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7ba37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7ba50

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FReadEntriesAroundRank>::
ClearCallback(TWrappedOperation<UE::Online::FReadEntriesAroundRank> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7ba57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7ba70

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FReadEntriesAroundUser>::
ClearCallback(TWrappedOperation<UE::Online::FReadEntriesAroundUser> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7ba77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7ba90

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FReadEntriesForUsers>::ClearCallback
          (TWrappedOperation<UE::Online::FReadEntriesForUsers> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7ba97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7bab0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FRejectSessionInvite>::ClearCallback
          (TWrappedOperation<UE::Online::FRejectSessionInvite> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7bab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7bad0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FRemoveSessionMember>::ClearCallback
          (TWrappedOperation<UE::Online::FRemoveSessionMember> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7bad7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7baf0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FRestoreLobbies>::ClearCallback
          (TWrappedOperation<UE::Online::FRestoreLobbies> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7baf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7bb10

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FSendSessionInvite>::ClearCallback
          (TWrappedOperation<UE::Online::FSendSessionInvite> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7bb17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7bb30

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FStartMatchmaking>::ClearCallback
          (TWrappedOperation<UE::Online::FStartMatchmaking> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7bb37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7bb50

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUnlockAchievements>::ClearCallback
          (TWrappedOperation<UE::Online::FUnlockAchievements> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7bb57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7bb70

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUpdatePresence>::ClearCallback
          (TWrappedOperation<UE::Online::FUpdatePresence> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7bb77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7bb90

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUpdateSessionSettings>::
ClearCallback(TWrappedOperation<UE::Online::FUpdateSessionSettings> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7bb97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ee7bbb0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FWriteLeaderboardScores>::
ClearCallback(TWrappedOperation<UE::Online::FWriteLeaderboardScores> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ee7bbb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// GetAsyncOpState @ 14eed7740

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAddSessionMember>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FAddSessionMember> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x48);
}

// GetAsyncOpState @ 14eed7760

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession>::
GetAsyncOpState(TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x58);
}

// GetAsyncOpState @ 14eed7780

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket>::
GetAsyncOpState(TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14eed77a0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthCreateAccount>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FAuthCreateAccount> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14eed77c0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession>::
GetAsyncOpState(TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14eed77e0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthLinkAccount>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FAuthLinkAccount> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50);
}

// GetAsyncOpState @ 14eed7800

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthLogin>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FAuthLogin> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x88);
}

// GetAsyncOpState @ 14eed7820

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthLogout>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FAuthLogout> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14eed7840

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthModifyAccountAttributes>::
GetAsyncOpState(TWrappedOperation<UE::Online::FAuthModifyAccountAttributes> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0xe0);
}

// GetAsyncOpState @ 14eed7860

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken>::
GetAsyncOpState(TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50);
}

// GetAsyncOpState @ 14eed7880

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket>::
GetAsyncOpState(TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14eed78a0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket>::
GetAsyncOpState(TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14eed78c0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FBatchQueryPresence>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FBatchQueryPresence> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x58);
}

// GetAsyncOpState @ 14eed78e0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceCheckout>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FCommerceCheckout> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50);
}

// GetAsyncOpState @ 14eed7900

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceQueryEntitlements>::
GetAsyncOpState(TWrappedOperation<UE::Online::FCommerceQueryEntitlements> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14eed7920

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceQueryOffers>::
GetAsyncOpState(TWrappedOperation<UE::Online::FCommerceQueryOffers> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50);
}

// GetAsyncOpState @ 14eed7940

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceQueryOffersById>::
GetAsyncOpState(TWrappedOperation<UE::Online::FCommerceQueryOffersById> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50);
}

// GetAsyncOpState @ 14eed7960

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::
TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50);
}

// GetAsyncOpState @ 14eed7980

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceRedeemEntitlement>::
GetAsyncOpState(TWrappedOperation<UE::Online::FCommerceRedeemEntitlement> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x58);
}

// GetAsyncOpState @ 14eed79a0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken>::
GetAsyncOpState(TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50);
}

// GetAsyncOpState @ 14eed79c0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceShowStoreUI>::
GetAsyncOpState(TWrappedOperation<UE::Online::FCommerceShowStoreUI> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14eed79e0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCreateLobby>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FCreateLobby> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0xf8);
}

// GetAsyncOpState @ 14eed7a00

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCreateSession>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FCreateSession> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0xc0);
}

// GetAsyncOpState @ 14eed7a20

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FDeclineLobbyInvitation>::
GetAsyncOpState(TWrappedOperation<UE::Online::FDeclineLobbyInvitation> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14eed7a40

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FExternalUIShowFriendsUI>::
GetAsyncOpState(TWrappedOperation<UE::Online::FExternalUIShowFriendsUI> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14eed7a60

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FExternalUIShowLoginUI>::
GetAsyncOpState(TWrappedOperation<UE::Online::FExternalUIShowLoginUI> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50);
}

// GetAsyncOpState @ 14eed7a80

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FFindLobbies>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FFindLobbies> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x60);
}

// GetAsyncOpState @ 14eed7aa0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FFindSessions>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FFindSessions> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x68);
}

// GetAsyncOpState @ 14eed7ac0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FFunctionalTestLobbies>::
GetAsyncOpState(TWrappedOperation<UE::Online::FFunctionalTestLobbies> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14eed7ae0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FInviteLobbyMember>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FInviteLobbyMember> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x48);
}

// GetAsyncOpState @ 14eed7b00

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FJoinLobby>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FJoinLobby> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0xa0);
}

// GetAsyncOpState @ 14eed7b20

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FJoinSession>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FJoinSession> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50);
}

// GetAsyncOpState @ 14eed7b40

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FKickLobbyMember>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FKickLobbyMember> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x48);
}

// GetAsyncOpState @ 14eed7b60

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FLeaveLobby>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FLeaveLobby> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14eed7b80

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FLeaveSession>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FLeaveSession> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x48);
}

// GetAsyncOpState @ 14eed7ba0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FModifyLobbyAttributes>::
GetAsyncOpState(TWrappedOperation<UE::Online::FModifyLobbyAttributes> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0xe0);
}

// GetAsyncOpState @ 14eed7bc0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy>::
GetAsyncOpState(TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x48);
}

// GetAsyncOpState @ 14eed7be0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes>::
GetAsyncOpState(TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0xe0);
}

// GetAsyncOpState @ 14eed7c00

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FModifyLobbySchema>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FModifyLobbySchema> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14eed7c20

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FPartialUpdatePresence>::
GetAsyncOpState(TWrappedOperation<UE::Online::FPartialUpdatePresence> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0xd8);
}

// GetAsyncOpState @ 14eed7c40

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FPromoteLobbyMember>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FPromoteLobbyMember> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x48);
}

// GetAsyncOpState @ 14eed7c60

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryAchievementDefinitions>::
GetAsyncOpState(TWrappedOperation<UE::Online::FQueryAchievementDefinitions> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14eed7c80

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryAchievementStates>::
GetAsyncOpState(TWrappedOperation<UE::Online::FQueryAchievementStates> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14eed7ca0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryPresence>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FQueryPresence> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x48);
}

// GetAsyncOpState @ 14eed7cc0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryUserPrivilege>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FQueryUserPrivilege> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14eed7ce0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FReadEntriesAroundRank>::
GetAsyncOpState(TWrappedOperation<UE::Online::FReadEntriesAroundRank> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x58);
}

// GetAsyncOpState @ 14eed7d00

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FReadEntriesAroundUser>::
GetAsyncOpState(TWrappedOperation<UE::Online::FReadEntriesAroundUser> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x58);
}

// GetAsyncOpState @ 14eed7d20

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FReadEntriesForUsers>::
GetAsyncOpState(TWrappedOperation<UE::Online::FReadEntriesForUsers> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x60);
}

// GetAsyncOpState @ 14eed7d40

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FRejectSessionInvite>::
GetAsyncOpState(TWrappedOperation<UE::Online::FRejectSessionInvite> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14eed7d60

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FRemoveSessionMember>::
GetAsyncOpState(TWrappedOperation<UE::Online::FRemoveSessionMember> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x48);
}

// GetAsyncOpState @ 14eed7d80

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FRestoreLobbies>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FRestoreLobbies> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14eed7da0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FSendSessionInvite>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FSendSessionInvite> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x58);
}

// GetAsyncOpState @ 14eed7dc0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FStartMatchmaking>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FStartMatchmaking> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0xd0);
}

// GetAsyncOpState @ 14eed7de0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUnlockAchievements>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FUnlockAchievements> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50);
}

// GetAsyncOpState @ 14eed7e00

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUpdatePresence>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FUpdatePresence> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50);
}

// GetAsyncOpState @ 14eed7e20

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUpdateSessionSettings>::
GetAsyncOpState(TWrappedOperation<UE::Online::FUpdateSessionSettings> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0xc0);
}

// GetAsyncOpState @ 14eed7e40

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FWriteLeaderboardScores>::
GetAsyncOpState(TWrappedOperation<UE::Online::FWriteLeaderboardScores> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x58);
}

// IsExpired @ 14eeee580

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAddSessionMember>::IsExpired
          (TWrappedOperation<UE::Online::FAddSessionMember> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x48) == '\x05';
}

// IsExpired @ 14eeee5a0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession>::
IsExpired(TWrappedOperation<UE::Online::FAuthBeginVerifiedAuthSession> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x58) == '\x05';
}

// IsExpired @ 14eeee5c0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket>::
IsExpired(TWrappedOperation<UE::Online::FAuthCancelVerifiedAuthTicket> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14eeee5e0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthCreateAccount>::IsExpired
          (TWrappedOperation<UE::Online::FAuthCreateAccount> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14eeee600

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession>::
IsExpired(TWrappedOperation<UE::Online::FAuthEndVerifiedAuthSession> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14eeee620

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthLinkAccount>::IsExpired
          (TWrappedOperation<UE::Online::FAuthLinkAccount> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50) == '\x05';
}

// IsExpired @ 14eeee640

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthLogin>::IsExpired
          (TWrappedOperation<UE::Online::FAuthLogin> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x88) == '\x05';
}

// IsExpired @ 14eeee660

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthLogout>::IsExpired
          (TWrappedOperation<UE::Online::FAuthLogout> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14eeee680

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthModifyAccountAttributes>::
IsExpired(TWrappedOperation<UE::Online::FAuthModifyAccountAttributes> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0xe0) == '\x05';
}

// IsExpired @ 14eeee6a0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken>::
IsExpired(TWrappedOperation<UE::Online::FAuthQueryExternalAuthToken> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50) == '\x05';
}

// IsExpired @ 14eeee6c0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket>::
IsExpired(TWrappedOperation<UE::Online::FAuthQueryExternalServerAuthTicket> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14eeee6e0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket>::
IsExpired(TWrappedOperation<UE::Online::FAuthQueryVerifiedAuthTicket> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14eeee700

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FBatchQueryPresence>::IsExpired
          (TWrappedOperation<UE::Online::FBatchQueryPresence> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x58) == '\x05';
}

// IsExpired @ 14eeee720

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceCheckout>::IsExpired
          (TWrappedOperation<UE::Online::FCommerceCheckout> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50) == '\x05';
}

// IsExpired @ 14eeee740

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceQueryEntitlements>::
IsExpired(TWrappedOperation<UE::Online::FCommerceQueryEntitlements> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14eeee760

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceQueryOffers>::IsExpired
          (TWrappedOperation<UE::Online::FCommerceQueryOffers> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50) == '\x05';
}

// IsExpired @ 14eeee780

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceQueryOffersById>::IsExpired
          (TWrappedOperation<UE::Online::FCommerceQueryOffersById> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50) == '\x05';
}

// IsExpired @ 14eeee7a0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::
TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements>::IsExpired
          (TWrappedOperation<UE::Online::FCommerceQueryTransactionEntitlements> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50) == '\x05';
}

// IsExpired @ 14eeee7c0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceRedeemEntitlement>::
IsExpired(TWrappedOperation<UE::Online::FCommerceRedeemEntitlement> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x58) == '\x05';
}

// IsExpired @ 14eeee7e0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken>::IsExpired
          (TWrappedOperation<UE::Online::FCommerceRetrieveS2SToken> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50) == '\x05';
}

// IsExpired @ 14eeee800

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCommerceShowStoreUI>::IsExpired
          (TWrappedOperation<UE::Online::FCommerceShowStoreUI> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14eeee820

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCreateLobby>::IsExpired
          (TWrappedOperation<UE::Online::FCreateLobby> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0xf8) == '\x05';
}

// IsExpired @ 14eeee840

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FCreateSession>::IsExpired
          (TWrappedOperation<UE::Online::FCreateSession> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0xc0) == '\x05';
}

// IsExpired @ 14eeee860

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FDeclineLobbyInvitation>::IsExpired
          (TWrappedOperation<UE::Online::FDeclineLobbyInvitation> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14eeee880

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FExternalUIShowFriendsUI>::IsExpired
          (TWrappedOperation<UE::Online::FExternalUIShowFriendsUI> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14eeee8a0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FExternalUIShowLoginUI>::IsExpired
          (TWrappedOperation<UE::Online::FExternalUIShowLoginUI> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50) == '\x05';
}

// IsExpired @ 14eeee8c0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FFindLobbies>::IsExpired
          (TWrappedOperation<UE::Online::FFindLobbies> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x60) == '\x05';
}

// IsExpired @ 14eeee8e0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FFindSessions>::IsExpired
          (TWrappedOperation<UE::Online::FFindSessions> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x68) == '\x05';
}

// IsExpired @ 14eeee900

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FFunctionalTestLobbies>::IsExpired
          (TWrappedOperation<UE::Online::FFunctionalTestLobbies> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14eeee920

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FInviteLobbyMember>::IsExpired
          (TWrappedOperation<UE::Online::FInviteLobbyMember> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x48) == '\x05';
}

// IsExpired @ 14eeee940

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FJoinLobby>::IsExpired
          (TWrappedOperation<UE::Online::FJoinLobby> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0xa0) == '\x05';
}

// IsExpired @ 14eeee960

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FJoinSession>::IsExpired
          (TWrappedOperation<UE::Online::FJoinSession> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50) == '\x05';
}

// IsExpired @ 14eeee980

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FKickLobbyMember>::IsExpired
          (TWrappedOperation<UE::Online::FKickLobbyMember> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x48) == '\x05';
}

// IsExpired @ 14eeee9a0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FLeaveLobby>::IsExpired
          (TWrappedOperation<UE::Online::FLeaveLobby> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14eeee9c0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FLeaveSession>::IsExpired
          (TWrappedOperation<UE::Online::FLeaveSession> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x48) == '\x05';
}

// IsExpired @ 14eeee9e0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FModifyLobbyAttributes>::IsExpired
          (TWrappedOperation<UE::Online::FModifyLobbyAttributes> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0xe0) == '\x05';
}

// IsExpired @ 14eeeea00

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy>::IsExpired
          (TWrappedOperation<UE::Online::FModifyLobbyJoinPolicy> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x48) == '\x05';
}

// IsExpired @ 14eeeea20

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes>::
IsExpired(TWrappedOperation<UE::Online::FModifyLobbyMemberAttributes> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0xe0) == '\x05';
}

// IsExpired @ 14eeeea40

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FModifyLobbySchema>::IsExpired
          (TWrappedOperation<UE::Online::FModifyLobbySchema> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14eeeea60

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FPartialUpdatePresence>::IsExpired
          (TWrappedOperation<UE::Online::FPartialUpdatePresence> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0xd8) == '\x05';
}

// IsExpired @ 14eeeea80

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FPromoteLobbyMember>::IsExpired
          (TWrappedOperation<UE::Online::FPromoteLobbyMember> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x48) == '\x05';
}

// IsExpired @ 14eeeeaa0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryAchievementDefinitions>::
IsExpired(TWrappedOperation<UE::Online::FQueryAchievementDefinitions> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14eeeeac0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryAchievementStates>::IsExpired
          (TWrappedOperation<UE::Online::FQueryAchievementStates> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14eeeeae0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryPresence>::IsExpired
          (TWrappedOperation<UE::Online::FQueryPresence> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x48) == '\x05';
}

// IsExpired @ 14eeeeb00

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryUserPrivilege>::IsExpired
          (TWrappedOperation<UE::Online::FQueryUserPrivilege> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14eeeeb20

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FReadEntriesAroundRank>::IsExpired
          (TWrappedOperation<UE::Online::FReadEntriesAroundRank> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x58) == '\x05';
}

// IsExpired @ 14eeeeb40

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FReadEntriesAroundUser>::IsExpired
          (TWrappedOperation<UE::Online::FReadEntriesAroundUser> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x58) == '\x05';
}

// IsExpired @ 14eeeeb60

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FReadEntriesForUsers>::IsExpired
          (TWrappedOperation<UE::Online::FReadEntriesForUsers> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x60) == '\x05';
}

// IsExpired @ 14eeeeb80

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FRejectSessionInvite>::IsExpired
          (TWrappedOperation<UE::Online::FRejectSessionInvite> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14eeeeba0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FRemoveSessionMember>::IsExpired
          (TWrappedOperation<UE::Online::FRemoveSessionMember> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x48) == '\x05';
}

// IsExpired @ 14eeeebc0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FRestoreLobbies>::IsExpired
          (TWrappedOperation<UE::Online::FRestoreLobbies> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14eeeebe0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FSendSessionInvite>::IsExpired
          (TWrappedOperation<UE::Online::FSendSessionInvite> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x58) == '\x05';
}

// IsExpired @ 14eeeec00

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FStartMatchmaking>::IsExpired
          (TWrappedOperation<UE::Online::FStartMatchmaking> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0xd0) == '\x05';
}

// IsExpired @ 14eeeec20

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUnlockAchievements>::IsExpired
          (TWrappedOperation<UE::Online::FUnlockAchievements> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50) == '\x05';
}

// IsExpired @ 14eeeec40

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUpdatePresence>::IsExpired
          (TWrappedOperation<UE::Online::FUpdatePresence> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50) == '\x05';
}

// IsExpired @ 14eeeec60

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUpdateSessionSettings>::IsExpired
          (TWrappedOperation<UE::Online::FUpdateSessionSettings> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0xc0) == '\x05';
}

// IsExpired @ 14eeeec80

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FWriteLeaderboardScores>::IsExpired
          (TWrappedOperation<UE::Online::FWriteLeaderboardScores> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x58) == '\x05';
}

// TWrappedOperation<UE::Online::FAcceptFriendInvite><UE::Online::FOnlineServicesCommon_&,UE::Online::FAcceptFriendInvite::Params> @ 14ef32c30

TWrappedOperation<UE::Online::FAcceptFriendInvite> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAcceptFriendInvite>::
TWrappedOperation<UE::Online::FAcceptFriendInvite><UE::Online::FOnlineServicesCommon_&,UE::Online::FAcceptFriendInvite::Params>
          (TWrappedOperation<UE::Online::FAcceptFriendInvite> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FAcceptFriendInvite> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFAcceptFriendInvite_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>
              ((TOnlineAsyncOp<UE::Online::FAcceptFriendInvite> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FAcceptFriendInvite> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ef32d3d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ef32d3d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFAcceptFriendInvite_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFAcceptFriendInvite_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FBatchQueryStats><UE::Online::FOnlineServicesCommon_&,UE::Online::FBatchQueryStats::Params> @ 14ef32d90

TWrappedOperation<UE::Online::FBatchQueryStats> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FBatchQueryStats>::
TWrappedOperation<UE::Online::FBatchQueryStats><UE::Online::FOnlineServicesCommon_&,UE::Online::FBatchQueryStats::Params>
          (TWrappedOperation<UE::Online::FBatchQueryStats> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FBatchQueryStats> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFBatchQueryStats_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FBatchQueryStats>::TOnlineAsyncOp<UE::Online::FBatchQueryStats>
              ((TOnlineAsyncOp<UE::Online::FBatchQueryStats> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FBatchQueryStats> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ef32e9d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ef32e9d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFBatchQueryStats_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFBatchQueryStats_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FBlockUser><UE::Online::FOnlineServicesCommon_&,UE::Online::FBlockUser::Params> @ 14ef32ef0

TWrappedOperation<UE::Online::FBlockUser> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FBlockUser>::
TWrappedOperation<UE::Online::FBlockUser><UE::Online::FOnlineServicesCommon_&,UE::Online::FBlockUser::Params>
          (TWrappedOperation<UE::Online::FBlockUser> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FBlockUser> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFBlockUser_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FBlockUser>::TOnlineAsyncOp<UE::Online::FBlockUser>
              ((TOnlineAsyncOp<UE::Online::FBlockUser> *)(pTVar6 + 1),(IOnlineServices *)param_1,
               param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FBlockUser> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ef32ffd;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ef32ffd:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFBlockUser_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFBlockUser_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FQueryBlockedUsers><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryBlockedUsers::Params> @ 14ef33050

TWrappedOperation<UE::Online::FQueryBlockedUsers> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryBlockedUsers>::
TWrappedOperation<UE::Online::FQueryBlockedUsers><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryBlockedUsers::Params>
          (TWrappedOperation<UE::Online::FQueryBlockedUsers> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FQueryBlockedUsers> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFQueryBlockedUsers_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>
              ((TOnlineAsyncOp<UE::Online::FQueryBlockedUsers> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FQueryBlockedUsers> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ef3315d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ef3315d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFQueryBlockedUsers_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFQueryBlockedUsers_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FQueryFriends><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryFriends::Params> @ 14ef331b0

TWrappedOperation<UE::Online::FQueryFriends> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryFriends>::
TWrappedOperation<UE::Online::FQueryFriends><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryFriends::Params>
          (TWrappedOperation<UE::Online::FQueryFriends> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FQueryFriends> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFQueryFriends_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FQueryFriends>::TOnlineAsyncOp<UE::Online::FQueryFriends>
              ((TOnlineAsyncOp<UE::Online::FQueryFriends> *)(pTVar6 + 1),(IOnlineServices *)param_1,
               param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FQueryFriends> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ef332bd;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ef332bd:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFQueryFriends_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFQueryFriends_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FQueryStats><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryStats::Params> @ 14ef33310

TWrappedOperation<UE::Online::FQueryStats> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryStats>::
TWrappedOperation<UE::Online::FQueryStats><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryStats::Params>
          (TWrappedOperation<UE::Online::FQueryStats> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FQueryStats> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFQueryStats_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FQueryStats>::TOnlineAsyncOp<UE::Online::FQueryStats>
              ((TOnlineAsyncOp<UE::Online::FQueryStats> *)(pTVar6 + 1),(IOnlineServices *)param_1,
               param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FQueryStats> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ef3341d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ef3341d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFQueryStats_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFQueryStats_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FQueryUserAvatar><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryUserAvatar::Params> @ 14ef33470

TWrappedOperation<UE::Online::FQueryUserAvatar> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryUserAvatar>::
TWrappedOperation<UE::Online::FQueryUserAvatar><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryUserAvatar::Params>
          (TWrappedOperation<UE::Online::FQueryUserAvatar> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FQueryUserAvatar> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFQueryUserAvatar_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FQueryUserAvatar>::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>
              ((TOnlineAsyncOp<UE::Online::FQueryUserAvatar> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FQueryUserAvatar> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ef3357d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ef3357d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFQueryUserAvatar_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFQueryUserAvatar_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FQueryUserInfo><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryUserInfo::Params> @ 14ef335d0

TWrappedOperation<UE::Online::FQueryUserInfo> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryUserInfo>::
TWrappedOperation<UE::Online::FQueryUserInfo><UE::Online::FOnlineServicesCommon_&,UE::Online::FQueryUserInfo::Params>
          (TWrappedOperation<UE::Online::FQueryUserInfo> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FQueryUserInfo> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFQueryUserInfo_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FQueryUserInfo>::TOnlineAsyncOp<UE::Online::FQueryUserInfo>
              ((TOnlineAsyncOp<UE::Online::FQueryUserInfo> *)(pTVar6 + 1),(IOnlineServices *)param_1
               ,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FQueryUserInfo> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ef336dd;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ef336dd:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFQueryUserInfo_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFQueryUserInfo_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FRejectFriendInvite><UE::Online::FOnlineServicesCommon_&,UE::Online::FRejectFriendInvite::Params> @ 14ef33730

TWrappedOperation<UE::Online::FRejectFriendInvite> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FRejectFriendInvite>::
TWrappedOperation<UE::Online::FRejectFriendInvite><UE::Online::FOnlineServicesCommon_&,UE::Online::FRejectFriendInvite::Params>
          (TWrappedOperation<UE::Online::FRejectFriendInvite> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FRejectFriendInvite> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFRejectFriendInvite_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FRejectFriendInvite>::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>
              ((TOnlineAsyncOp<UE::Online::FRejectFriendInvite> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FRejectFriendInvite> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ef3383d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ef3383d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFRejectFriendInvite_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFRejectFriendInvite_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FResetStats><UE::Online::FOnlineServicesCommon_&,UE::Online::FResetStats::Params> @ 14ef33890

TWrappedOperation<UE::Online::FResetStats> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FResetStats>::
TWrappedOperation<UE::Online::FResetStats><UE::Online::FOnlineServicesCommon_&,UE::Online::FResetStats::Params>
          (TWrappedOperation<UE::Online::FResetStats> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FResetStats> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFResetStats_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FResetStats>::TOnlineAsyncOp<UE::Online::FResetStats>
              ((TOnlineAsyncOp<UE::Online::FResetStats> *)(pTVar6 + 1),(IOnlineServices *)param_1,
               param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FResetStats> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ef3399d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ef3399d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFResetStats_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFResetStats_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FSendFriendInvite><UE::Online::FOnlineServicesCommon_&,UE::Online::FSendFriendInvite::Params> @ 14ef339f0

TWrappedOperation<UE::Online::FSendFriendInvite> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FSendFriendInvite>::
TWrappedOperation<UE::Online::FSendFriendInvite><UE::Online::FOnlineServicesCommon_&,UE::Online::FSendFriendInvite::Params>
          (TWrappedOperation<UE::Online::FSendFriendInvite> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FSendFriendInvite> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFSendFriendInvite_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FSendFriendInvite>::TOnlineAsyncOp<UE::Online::FSendFriendInvite>
              ((TOnlineAsyncOp<UE::Online::FSendFriendInvite> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FSendFriendInvite> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ef33afd;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ef33afd:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFSendFriendInvite_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFSendFriendInvite_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FShowUserProfile><UE::Online::FOnlineServicesCommon_&,UE::Online::FShowUserProfile::Params> @ 14ef33b50

TWrappedOperation<UE::Online::FShowUserProfile> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FShowUserProfile>::
TWrappedOperation<UE::Online::FShowUserProfile><UE::Online::FOnlineServicesCommon_&,UE::Online::FShowUserProfile::Params>
          (TWrappedOperation<UE::Online::FShowUserProfile> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FShowUserProfile> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFShowUserProfile_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FShowUserProfile>::TOnlineAsyncOp<UE::Online::FShowUserProfile>
              ((TOnlineAsyncOp<UE::Online::FShowUserProfile> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FShowUserProfile> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ef33c5d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ef33c5d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFShowUserProfile_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFShowUserProfile_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FTitleFileEnumerateFiles><UE::Online::FOnlineServicesCommon_&,UE::Online::FTitleFileEnumerateFiles::Params> @ 14ef33cb0

TWrappedOperation<UE::Online::FTitleFileEnumerateFiles> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FTitleFileEnumerateFiles>::
TWrappedOperation<UE::Online::FTitleFileEnumerateFiles><UE::Online::FOnlineServicesCommon_&,UE::Online::FTitleFileEnumerateFiles::Params>
          (TWrappedOperation<UE::Online::FTitleFileEnumerateFiles> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FTitleFileEnumerateFiles> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFTitleFileEnumerateFiles_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>::
    TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>
              ((TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FTitleFileEnumerateFiles> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ef33dbd;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ef33dbd:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFTitleFileEnumerateFiles_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFTitleFileEnumerateFiles_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FTitleFileReadFile><UE::Online::FOnlineServicesCommon_&,UE::Online::FTitleFileReadFile::Params> @ 14ef33e10

TWrappedOperation<UE::Online::FTitleFileReadFile> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FTitleFileReadFile>::
TWrappedOperation<UE::Online::FTitleFileReadFile><UE::Online::FOnlineServicesCommon_&,UE::Online::FTitleFileReadFile::Params>
          (TWrappedOperation<UE::Online::FTitleFileReadFile> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FTitleFileReadFile> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFTitleFileReadFile_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FTitleFileReadFile>::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>
              ((TOnlineAsyncOp<UE::Online::FTitleFileReadFile> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FTitleFileReadFile> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ef33f1d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ef33f1d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFTitleFileReadFile_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFTitleFileReadFile_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FTriggerEvent><UE::Online::FOnlineServicesCommon_&,UE::Online::FTriggerEvent::Params> @ 14ef33f70

TWrappedOperation<UE::Online::FTriggerEvent> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FTriggerEvent>::
TWrappedOperation<UE::Online::FTriggerEvent><UE::Online::FOnlineServicesCommon_&,UE::Online::FTriggerEvent::Params>
          (TWrappedOperation<UE::Online::FTriggerEvent> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FTriggerEvent> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFTriggerEvent_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FTriggerEvent>::TOnlineAsyncOp<UE::Online::FTriggerEvent>
              ((TOnlineAsyncOp<UE::Online::FTriggerEvent> *)(pTVar6 + 1),(IOnlineServices *)param_1,
               param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FTriggerEvent> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ef3407d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ef3407d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFTriggerEvent_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFTriggerEvent_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FUpdateStats><UE::Online::FOnlineServicesCommon_&,UE::Online::FUpdateStats::Params> @ 14ef340d0

TWrappedOperation<UE::Online::FUpdateStats> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUpdateStats>::
TWrappedOperation<UE::Online::FUpdateStats><UE::Online::FOnlineServicesCommon_&,UE::Online::FUpdateStats::Params>
          (TWrappedOperation<UE::Online::FUpdateStats> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FUpdateStats> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFUpdateStats_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FUpdateStats>::TOnlineAsyncOp<UE::Online::FUpdateStats>
              ((TOnlineAsyncOp<UE::Online::FUpdateStats> *)(pTVar6 + 1),(IOnlineServices *)param_1,
               param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FUpdateStats> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ef341dd;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ef341dd:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFUpdateStats_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFUpdateStats_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FUserFileCopyFile><UE::Online::FOnlineServicesCommon_&,UE::Online::FUserFileCopyFile::Params> @ 14ef34230

TWrappedOperation<UE::Online::FUserFileCopyFile> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileCopyFile>::
TWrappedOperation<UE::Online::FUserFileCopyFile><UE::Online::FOnlineServicesCommon_&,UE::Online::FUserFileCopyFile::Params>
          (TWrappedOperation<UE::Online::FUserFileCopyFile> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FUserFileCopyFile> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFUserFileCopyFile_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FUserFileCopyFile>::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>
              ((TOnlineAsyncOp<UE::Online::FUserFileCopyFile> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FUserFileCopyFile> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ef3433d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ef3433d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFUserFileCopyFile_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFUserFileCopyFile_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FUserFileDeleteFile><UE::Online::FOnlineServicesCommon_&,UE::Online::FUserFileDeleteFile::Params> @ 14ef34390

TWrappedOperation<UE::Online::FUserFileDeleteFile> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileDeleteFile>::
TWrappedOperation<UE::Online::FUserFileDeleteFile><UE::Online::FOnlineServicesCommon_&,UE::Online::FUserFileDeleteFile::Params>
          (TWrappedOperation<UE::Online::FUserFileDeleteFile> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FUserFileDeleteFile> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFUserFileDeleteFile_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>
              ((TOnlineAsyncOp<UE::Online::FUserFileDeleteFile> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FUserFileDeleteFile> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ef3449d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ef3449d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFUserFileDeleteFile_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFUserFileDeleteFile_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FUserFileEnumerateFiles><UE::Online::FOnlineServicesCommon_&,UE::Online::FUserFileEnumerateFiles::Params> @ 14ef344f0

TWrappedOperation<UE::Online::FUserFileEnumerateFiles> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileEnumerateFiles>::
TWrappedOperation<UE::Online::FUserFileEnumerateFiles><UE::Online::FOnlineServicesCommon_&,UE::Online::FUserFileEnumerateFiles::Params>
          (TWrappedOperation<UE::Online::FUserFileEnumerateFiles> *this,
          FOnlineServicesCommon *param_1,Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FUserFileEnumerateFiles> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFUserFileEnumerateFiles_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>::
    TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>
              ((TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FUserFileEnumerateFiles> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ef345fd;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ef345fd:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFUserFileEnumerateFiles_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &
       ___7__TWrappedOperation_UFUserFileEnumerateFiles_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_
  ;
  return this;
}

// TWrappedOperation<UE::Online::FUserFileReadFile><UE::Online::FOnlineServicesCommon_&,UE::Online::FUserFileReadFile::Params> @ 14ef34650

TWrappedOperation<UE::Online::FUserFileReadFile> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileReadFile>::
TWrappedOperation<UE::Online::FUserFileReadFile><UE::Online::FOnlineServicesCommon_&,UE::Online::FUserFileReadFile::Params>
          (TWrappedOperation<UE::Online::FUserFileReadFile> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FUserFileReadFile> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFUserFileReadFile_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FUserFileReadFile>::TOnlineAsyncOp<UE::Online::FUserFileReadFile>
              ((TOnlineAsyncOp<UE::Online::FUserFileReadFile> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FUserFileReadFile> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ef3475d;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ef3475d:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFUserFileReadFile_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFUserFileReadFile_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// TWrappedOperation<UE::Online::FUserFileWriteFile><UE::Online::FOnlineServicesCommon_&,UE::Online::FUserFileWriteFile::Params> @ 14ef347b0

TWrappedOperation<UE::Online::FUserFileWriteFile> * __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileWriteFile>::
TWrappedOperation<UE::Online::FUserFileWriteFile><UE::Online::FOnlineServicesCommon_&,UE::Online::FUserFileWriteFile::Params>
          (TWrappedOperation<UE::Online::FUserFileWriteFile> *this,FOnlineServicesCommon *param_1,
          Params *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWrappedOperation<UE::Online::FUserFileWriteFile> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar6 = ::operator_new(0x130);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TOnlineAsyncOp_UFUserFileWriteFile_Online_UE___Online_UE___00_SharedPointerInternals__6B_
    ;
    TOnlineAsyncOp<UE::Online::FUserFileWriteFile>::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>
              ((TOnlineAsyncOp<UE::Online::FUserFileWriteFile> *)(pTVar6 + 1),
               (IOnlineServices *)param_1,param_2);
    pTVar8 = pTVar6 + 1;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWrappedOperation<UE::Online::FUserFileWriteFile> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ef348bd;
    }
  }
  if (((pTVar8[6]._padding_ == 0) || (*(longlong *)&pTVar8[6].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar8[6].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[6]._padding_ = (longlong)pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8[6].SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar8[6].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14ef348bd:
  *(undefined ***)this =
       &
       ___7__TOnlineAnyData_V__TSharedRef_V__TOnlineAsyncOp_UFUserFileWriteFile_Online_UE___Online_UE___00__VIWrappedOperation_FOnlineAsyncOpCache_Online_UE___Online_UE__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar8;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined ***)this =
       &___7__TWrappedOperation_UFUserFileWriteFile_Online_UE___FOnlineAsyncOpCache_Online_UE__6B_;
  return this;
}

// Cancel @ 14ef88f90

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAcceptFriendInvite>::Cancel
          (TWrappedOperation<UE::Online::FAcceptFriendInvite> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ef89010

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FBatchQueryStats>::Cancel
          (TWrappedOperation<UE::Online::FBatchQueryStats> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ef89090

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FBlockUser>::Cancel
          (TWrappedOperation<UE::Online::FBlockUser> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ef89110

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryBlockedUsers>::Cancel
          (TWrappedOperation<UE::Online::FQueryBlockedUsers> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ef89190

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryFriends>::Cancel
          (TWrappedOperation<UE::Online::FQueryFriends> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ef89210

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryStats>::Cancel
          (TWrappedOperation<UE::Online::FQueryStats> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ef89290

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryUserAvatar>::Cancel
          (TWrappedOperation<UE::Online::FQueryUserAvatar> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ef89310

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryUserInfo>::Cancel
          (TWrappedOperation<UE::Online::FQueryUserInfo> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ef89390

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FRejectFriendInvite>::Cancel
          (TWrappedOperation<UE::Online::FRejectFriendInvite> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ef89410

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FResetStats>::Cancel
          (TWrappedOperation<UE::Online::FResetStats> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ef89490

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FSendFriendInvite>::Cancel
          (TWrappedOperation<UE::Online::FSendFriendInvite> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ef89510

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FShowUserProfile>::Cancel
          (TWrappedOperation<UE::Online::FShowUserProfile> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ef89590

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FTitleFileEnumerateFiles>::Cancel
          (TWrappedOperation<UE::Online::FTitleFileEnumerateFiles> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ef89610

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FTitleFileReadFile>::Cancel
          (TWrappedOperation<UE::Online::FTitleFileReadFile> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ef89690

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FTriggerEvent>::Cancel
          (TWrappedOperation<UE::Online::FTriggerEvent> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ef89710

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUpdateStats>::Cancel
          (TWrappedOperation<UE::Online::FUpdateStats> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ef89790

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileCopyFile>::Cancel
          (TWrappedOperation<UE::Online::FUserFileCopyFile> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ef89810

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileDeleteFile>::Cancel
          (TWrappedOperation<UE::Online::FUserFileDeleteFile> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ef89890

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileEnumerateFiles>::Cancel
          (TWrappedOperation<UE::Online::FUserFileEnumerateFiles> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ef89910

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileReadFile>::Cancel
          (TWrappedOperation<UE::Online::FUserFileReadFile> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// Cancel @ 14ef89990

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileWriteFile>::Cancel
          (TWrappedOperation<UE::Online::FUserFileWriteFile> *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)&this->field_0x8;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_18 = 0x1000000100000010;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (*pcVar2)(plVar1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// ClearCallback @ 14ef8ecc0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAcceptFriendInvite>::ClearCallback
          (TWrappedOperation<UE::Online::FAcceptFriendInvite> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ef8ecc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ef8ece0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FBatchQueryStats>::ClearCallback
          (TWrappedOperation<UE::Online::FBatchQueryStats> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ef8ece7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ef8ed00

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FBlockUser>::ClearCallback
          (TWrappedOperation<UE::Online::FBlockUser> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ef8ed07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ef8ed20

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryBlockedUsers>::ClearCallback
          (TWrappedOperation<UE::Online::FQueryBlockedUsers> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ef8ed27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ef8ed40

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryFriends>::ClearCallback
          (TWrappedOperation<UE::Online::FQueryFriends> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ef8ed47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ef8ed60

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryStats>::ClearCallback
          (TWrappedOperation<UE::Online::FQueryStats> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ef8ed67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ef8ed80

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryUserAvatar>::ClearCallback
          (TWrappedOperation<UE::Online::FQueryUserAvatar> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ef8ed87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ef8eda0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryUserInfo>::ClearCallback
          (TWrappedOperation<UE::Online::FQueryUserInfo> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ef8eda7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ef8edc0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FRejectFriendInvite>::ClearCallback
          (TWrappedOperation<UE::Online::FRejectFriendInvite> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ef8edc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ef8ede0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FResetStats>::ClearCallback
          (TWrappedOperation<UE::Online::FResetStats> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ef8ede7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ef8ee00

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FSendFriendInvite>::ClearCallback
          (TWrappedOperation<UE::Online::FSendFriendInvite> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ef8ee07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ef8ee20

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FShowUserProfile>::ClearCallback
          (TWrappedOperation<UE::Online::FShowUserProfile> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ef8ee27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ef8ee40

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FTitleFileEnumerateFiles>::
ClearCallback(TWrappedOperation<UE::Online::FTitleFileEnumerateFiles> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ef8ee47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ef8ee60

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FTitleFileReadFile>::ClearCallback
          (TWrappedOperation<UE::Online::FTitleFileReadFile> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ef8ee67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ef8ee80

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FTriggerEvent>::ClearCallback
          (TWrappedOperation<UE::Online::FTriggerEvent> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ef8ee87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ef8eea0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUpdateStats>::ClearCallback
          (TWrappedOperation<UE::Online::FUpdateStats> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ef8eea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ef8eec0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileCopyFile>::ClearCallback
          (TWrappedOperation<UE::Online::FUserFileCopyFile> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ef8eec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ef8eee0

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileDeleteFile>::ClearCallback
          (TWrappedOperation<UE::Online::FUserFileDeleteFile> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ef8eee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ef8ef00

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileEnumerateFiles>::
ClearCallback(TWrappedOperation<UE::Online::FUserFileEnumerateFiles> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ef8ef07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ef8ef20

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileReadFile>::ClearCallback
          (TWrappedOperation<UE::Online::FUserFileReadFile> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ef8ef27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// ClearCallback @ 14ef8ef40

void __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileWriteFile>::ClearCallback
          (TWrappedOperation<UE::Online::FUserFileWriteFile> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ef8ef47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x18))();
  return;
}

// GetAsyncOpState @ 14efaa190

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAcceptFriendInvite>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FAcceptFriendInvite> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14efaa1b0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FBatchQueryStats>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FBatchQueryStats> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x60);
}

// GetAsyncOpState @ 14efaa1d0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FBlockUser>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FBlockUser> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14efaa1f0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryBlockedUsers>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FQueryBlockedUsers> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14efaa210

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryFriends>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FQueryFriends> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14efaa230

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryStats>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FQueryStats> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x78);
}

// GetAsyncOpState @ 14efaa250

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryUserAvatar>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FQueryUserAvatar> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50);
}

// GetAsyncOpState @ 14efaa270

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryUserInfo>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FQueryUserInfo> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50);
}

// GetAsyncOpState @ 14efaa290

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FRejectFriendInvite>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FRejectFriendInvite> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14efaa2b0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FResetStats>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FResetStats> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14efaa2d0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FSendFriendInvite>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FSendFriendInvite> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14efaa2f0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FShowUserProfile>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FShowUserProfile> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14efaa310

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FTitleFileEnumerateFiles>::
GetAsyncOpState(TWrappedOperation<UE::Online::FTitleFileEnumerateFiles> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14efaa330

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FTitleFileReadFile>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FTitleFileReadFile> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50);
}

// GetAsyncOpState @ 14efaa350

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FTriggerEvent>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FTriggerEvent> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0xa0);
}

// GetAsyncOpState @ 14efaa370

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUpdateStats>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FUpdateStats> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50);
}

// GetAsyncOpState @ 14efaa390

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileCopyFile>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FUserFileCopyFile> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x60);
}

// GetAsyncOpState @ 14efaa3b0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileDeleteFile>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FUserFileDeleteFile> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50);
}

// GetAsyncOpState @ 14efaa3d0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileEnumerateFiles>::
GetAsyncOpState(TWrappedOperation<UE::Online::FUserFileEnumerateFiles> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40);
}

// GetAsyncOpState @ 14efaa3f0

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileReadFile>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FUserFileReadFile> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50);
}

// GetAsyncOpState @ 14efaa410

EAsyncOpState __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileWriteFile>::GetAsyncOpState
          (TWrappedOperation<UE::Online::FUserFileWriteFile> *this)

{
  return *(EAsyncOpState *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x60);
}

// IsExpired @ 14efb0d00

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FAcceptFriendInvite>::IsExpired
          (TWrappedOperation<UE::Online::FAcceptFriendInvite> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14efb0d20

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FBatchQueryStats>::IsExpired
          (TWrappedOperation<UE::Online::FBatchQueryStats> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x60) == '\x05';
}

// IsExpired @ 14efb0d40

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FBlockUser>::IsExpired
          (TWrappedOperation<UE::Online::FBlockUser> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14efb0d60

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryBlockedUsers>::IsExpired
          (TWrappedOperation<UE::Online::FQueryBlockedUsers> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14efb0d80

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryFriends>::IsExpired
          (TWrappedOperation<UE::Online::FQueryFriends> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14efb0da0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryStats>::IsExpired
          (TWrappedOperation<UE::Online::FQueryStats> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x78) == '\x05';
}

// IsExpired @ 14efb0dc0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryUserAvatar>::IsExpired
          (TWrappedOperation<UE::Online::FQueryUserAvatar> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50) == '\x05';
}

// IsExpired @ 14efb0de0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FQueryUserInfo>::IsExpired
          (TWrappedOperation<UE::Online::FQueryUserInfo> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50) == '\x05';
}

// IsExpired @ 14efb0e00

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FRejectFriendInvite>::IsExpired
          (TWrappedOperation<UE::Online::FRejectFriendInvite> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14efb0e20

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FResetStats>::IsExpired
          (TWrappedOperation<UE::Online::FResetStats> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14efb0e40

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FSendFriendInvite>::IsExpired
          (TWrappedOperation<UE::Online::FSendFriendInvite> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14efb0e60

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FShowUserProfile>::IsExpired
          (TWrappedOperation<UE::Online::FShowUserProfile> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14efb0e80

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FTitleFileEnumerateFiles>::IsExpired
          (TWrappedOperation<UE::Online::FTitleFileEnumerateFiles> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14efb0ea0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FTitleFileReadFile>::IsExpired
          (TWrappedOperation<UE::Online::FTitleFileReadFile> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50) == '\x05';
}

// IsExpired @ 14efb0ec0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FTriggerEvent>::IsExpired
          (TWrappedOperation<UE::Online::FTriggerEvent> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0xa0) == '\x05';
}

// IsExpired @ 14efb0ee0

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUpdateStats>::IsExpired
          (TWrappedOperation<UE::Online::FUpdateStats> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50) == '\x05';
}

// IsExpired @ 14efb0f00

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileCopyFile>::IsExpired
          (TWrappedOperation<UE::Online::FUserFileCopyFile> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x60) == '\x05';
}

// IsExpired @ 14efb0f20

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileDeleteFile>::IsExpired
          (TWrappedOperation<UE::Online::FUserFileDeleteFile> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50) == '\x05';
}

// IsExpired @ 14efb0f40

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileEnumerateFiles>::IsExpired
          (TWrappedOperation<UE::Online::FUserFileEnumerateFiles> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x40) == '\x05';
}

// IsExpired @ 14efb0f60

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileReadFile>::IsExpired
          (TWrappedOperation<UE::Online::FUserFileReadFile> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x50) == '\x05';
}

// IsExpired @ 14efb0f80

bool __thiscall
UE::Online::FOnlineAsyncOpCache::TWrappedOperation<UE::Online::FUserFileWriteFile>::IsExpired
          (TWrappedOperation<UE::Online::FUserFileWriteFile> *this)

{
  return *(char *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x78) + 0x60) == '\x05';
}


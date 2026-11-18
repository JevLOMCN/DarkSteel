// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 61

// ~TWrappedOp<UE::Online::FAddSessionMember> @ 14ee1f880

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FAddSessionMember>::
~TWrappedOp<UE::Online::FAddSessionMember>(TWrappedOp<UE::Online::FAddSessionMember> *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  this->_padding_ =
       (longlong)&___7__TWrappedOp_UFAddSessionMember_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_
  ;
  pTVar5 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  if (*(longlong *)&(this->OnCompleteHandle).DelegateUnbinder != 0) {
    plVar6 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar7 = plVar6;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnCompleteEvent).DelegateRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Op).SharedReferenceCount.ReferenceController);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  this->_padding_ = 0x15309c5b0;
  return;
}

// ~TWrappedOp<UE::Online::FBatchQueryPresence> @ 14ee1f940

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FBatchQueryPresence>::
~TWrappedOp<UE::Online::FBatchQueryPresence>(TWrappedOp<UE::Online::FBatchQueryPresence> *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  this->_padding_ =
       (longlong)
       &___7__TWrappedOp_UFBatchQueryPresence_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_;
  pTVar5 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  if (*(longlong *)&(this->OnCompleteHandle).DelegateUnbinder != 0) {
    plVar6 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar7 = plVar6;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnCompleteEvent).DelegateRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Op).SharedReferenceCount.ReferenceController);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  this->_padding_ = 0x15309c5b0;
  return;
}

// ~TWrappedOp<UE::Online::FCreateSession> @ 14ee1fa00

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FCreateSession>::
~TWrappedOp<UE::Online::FCreateSession>(TWrappedOp<UE::Online::FCreateSession> *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  this->_padding_ =
       (longlong)&___7__TWrappedOp_UFCreateSession_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_;
  pTVar5 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  if (*(longlong *)&(this->OnCompleteHandle).DelegateUnbinder != 0) {
    plVar6 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar7 = plVar6;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnCompleteEvent).DelegateRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Op).SharedReferenceCount.ReferenceController);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  this->_padding_ = 0x15309c5b0;
  return;
}

// ~TWrappedOp<UE::Online::FFindSessions> @ 14ee1fac0

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFindSessions>::
~TWrappedOp<UE::Online::FFindSessions>(TWrappedOp<UE::Online::FFindSessions> *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  this->_padding_ =
       (longlong)&___7__TWrappedOp_UFFindSessions_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_;
  pTVar5 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  if (*(longlong *)&(this->OnCompleteHandle).DelegateUnbinder != 0) {
    plVar6 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar7 = plVar6;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnCompleteEvent).DelegateRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Op).SharedReferenceCount.ReferenceController);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  this->_padding_ = 0x15309c5b0;
  return;
}

// ~TWrappedOp<UE::Online::FJoinSession> @ 14ee1fb80

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FJoinSession>::
~TWrappedOp<UE::Online::FJoinSession>(TWrappedOp<UE::Online::FJoinSession> *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  this->_padding_ =
       (longlong)&___7__TWrappedOp_UFJoinSession_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_;
  pTVar5 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  if (*(longlong *)&(this->OnCompleteHandle).DelegateUnbinder != 0) {
    plVar6 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar7 = plVar6;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnCompleteEvent).DelegateRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Op).SharedReferenceCount.ReferenceController);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  this->_padding_ = 0x15309c5b0;
  return;
}

// ~TWrappedOp<UE::Online::FLeaveSession> @ 14ee1fc40

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FLeaveSession>::
~TWrappedOp<UE::Online::FLeaveSession>(TWrappedOp<UE::Online::FLeaveSession> *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  this->_padding_ =
       (longlong)&___7__TWrappedOp_UFLeaveSession_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_;
  pTVar5 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  if (*(longlong *)&(this->OnCompleteHandle).DelegateUnbinder != 0) {
    plVar6 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar7 = plVar6;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnCompleteEvent).DelegateRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Op).SharedReferenceCount.ReferenceController);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  this->_padding_ = 0x15309c5b0;
  return;
}

// ~TWrappedOp<UE::Online::FRejectSessionInvite> @ 14ee1fd00

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FRejectSessionInvite>::
~TWrappedOp<UE::Online::FRejectSessionInvite>(TWrappedOp<UE::Online::FRejectSessionInvite> *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  this->_padding_ =
       (longlong)
       &___7__TWrappedOp_UFRejectSessionInvite_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_;
  pTVar5 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  if (*(longlong *)&(this->OnCompleteHandle).DelegateUnbinder != 0) {
    plVar6 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar7 = plVar6;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnCompleteEvent).DelegateRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Op).SharedReferenceCount.ReferenceController);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  this->_padding_ = 0x15309c5b0;
  return;
}

// ~TWrappedOp<UE::Online::FRemoveSessionMember> @ 14ee1fdc0

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FRemoveSessionMember>::
~TWrappedOp<UE::Online::FRemoveSessionMember>(TWrappedOp<UE::Online::FRemoveSessionMember> *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  this->_padding_ =
       (longlong)
       &___7__TWrappedOp_UFRemoveSessionMember_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_;
  pTVar5 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  if (*(longlong *)&(this->OnCompleteHandle).DelegateUnbinder != 0) {
    plVar6 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar7 = plVar6;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnCompleteEvent).DelegateRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Op).SharedReferenceCount.ReferenceController);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  this->_padding_ = 0x15309c5b0;
  return;
}

// ~TWrappedOp<UE::Online::FSendSessionInvite> @ 14ee1fe80

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FSendSessionInvite>::
~TWrappedOp<UE::Online::FSendSessionInvite>(TWrappedOp<UE::Online::FSendSessionInvite> *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  this->_padding_ =
       (longlong)
       &___7__TWrappedOp_UFSendSessionInvite_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_;
  pTVar5 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  if (*(longlong *)&(this->OnCompleteHandle).DelegateUnbinder != 0) {
    plVar6 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar7 = plVar6;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnCompleteEvent).DelegateRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Op).SharedReferenceCount.ReferenceController);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  this->_padding_ = 0x15309c5b0;
  return;
}

// ~TWrappedOp<UE::Online::FStartMatchmaking> @ 14ee1ff40

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FStartMatchmaking>::
~TWrappedOp<UE::Online::FStartMatchmaking>(TWrappedOp<UE::Online::FStartMatchmaking> *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  this->_padding_ =
       (longlong)&___7__TWrappedOp_UFStartMatchmaking_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_
  ;
  pTVar5 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  if (*(longlong *)&(this->OnCompleteHandle).DelegateUnbinder != 0) {
    plVar6 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar7 = plVar6;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnCompleteEvent).DelegateRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Op).SharedReferenceCount.ReferenceController);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  this->_padding_ = 0x15309c5b0;
  return;
}

// ~TWrappedOp<UE::Online::FUpdateSessionSettings> @ 14ee20000

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FUpdateSessionSettings>::
~TWrappedOp<UE::Online::FUpdateSessionSettings>
          (TWrappedOp<UE::Online::FUpdateSessionSettings> *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  this->_padding_ =
       (longlong)
       &___7__TWrappedOp_UFUpdateSessionSettings_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_;
  pTVar5 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  if (*(longlong *)&(this->OnCompleteHandle).DelegateUnbinder != 0) {
    plVar6 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar7 = plVar6;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnCompleteEvent).DelegateRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Op).SharedReferenceCount.ReferenceController);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  this->_padding_ = 0x15309c5b0;
  return;
}

// Cancel @ 14ee64560

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FAddSessionMember>::Cancel
          (TWrappedOp<UE::Online::FAddSessionMember> *this,FOnlineError *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  (**(code **)(((this->Op).Object)->_padding_ + 0x10))();
  if ((((this->TickerHandle).Object != (FElement *)0x0) &&
      (pTVar1 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    local_18.Object = (this->TickerHandle).Object;
    local_18.WeakReferenceCount.ReferenceController =
         (this->TickerHandle).WeakReferenceCount.ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_18);
  }
  return;
}

// Cancel @ 14ee645d0

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FBatchQueryPresence>::Cancel
          (TWrappedOp<UE::Online::FBatchQueryPresence> *this,FOnlineError *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  (**(code **)(((this->Op).Object)->_padding_ + 0x10))();
  if ((((this->TickerHandle).Object != (FElement *)0x0) &&
      (pTVar1 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    local_18.Object = (this->TickerHandle).Object;
    local_18.WeakReferenceCount.ReferenceController =
         (this->TickerHandle).WeakReferenceCount.ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_18);
  }
  return;
}

// Cancel @ 14ee64640

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FCreateSession>::Cancel
          (TWrappedOp<UE::Online::FCreateSession> *this,FOnlineError *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  (**(code **)(((this->Op).Object)->_padding_ + 0x10))();
  if ((((this->TickerHandle).Object != (FElement *)0x0) &&
      (pTVar1 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    local_18.Object = (this->TickerHandle).Object;
    local_18.WeakReferenceCount.ReferenceController =
         (this->TickerHandle).WeakReferenceCount.ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_18);
  }
  return;
}

// Cancel @ 14ee646b0

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFindSessions>::Cancel
          (TWrappedOp<UE::Online::FFindSessions> *this,FOnlineError *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  (**(code **)(((this->Op).Object)->_padding_ + 0x10))();
  if ((((this->TickerHandle).Object != (FElement *)0x0) &&
      (pTVar1 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    local_18.Object = (this->TickerHandle).Object;
    local_18.WeakReferenceCount.ReferenceController =
         (this->TickerHandle).WeakReferenceCount.ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_18);
  }
  return;
}

// Cancel @ 14ee64720

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FJoinSession>::Cancel
          (TWrappedOp<UE::Online::FJoinSession> *this,FOnlineError *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  (**(code **)(((this->Op).Object)->_padding_ + 0x10))();
  if ((((this->TickerHandle).Object != (FElement *)0x0) &&
      (pTVar1 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    local_18.Object = (this->TickerHandle).Object;
    local_18.WeakReferenceCount.ReferenceController =
         (this->TickerHandle).WeakReferenceCount.ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_18);
  }
  return;
}

// Cancel @ 14ee64790

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FLeaveSession>::Cancel
          (TWrappedOp<UE::Online::FLeaveSession> *this,FOnlineError *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  (**(code **)(((this->Op).Object)->_padding_ + 0x10))();
  if ((((this->TickerHandle).Object != (FElement *)0x0) &&
      (pTVar1 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    local_18.Object = (this->TickerHandle).Object;
    local_18.WeakReferenceCount.ReferenceController =
         (this->TickerHandle).WeakReferenceCount.ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_18);
  }
  return;
}

// Cancel @ 14ee64800

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FRejectSessionInvite>::Cancel
          (TWrappedOp<UE::Online::FRejectSessionInvite> *this,FOnlineError *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  (**(code **)(((this->Op).Object)->_padding_ + 0x10))();
  if ((((this->TickerHandle).Object != (FElement *)0x0) &&
      (pTVar1 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    local_18.Object = (this->TickerHandle).Object;
    local_18.WeakReferenceCount.ReferenceController =
         (this->TickerHandle).WeakReferenceCount.ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_18);
  }
  return;
}

// Cancel @ 14ee64870

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FRemoveSessionMember>::Cancel
          (TWrappedOp<UE::Online::FRemoveSessionMember> *this,FOnlineError *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  (**(code **)(((this->Op).Object)->_padding_ + 0x10))();
  if ((((this->TickerHandle).Object != (FElement *)0x0) &&
      (pTVar1 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    local_18.Object = (this->TickerHandle).Object;
    local_18.WeakReferenceCount.ReferenceController =
         (this->TickerHandle).WeakReferenceCount.ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_18);
  }
  return;
}

// Cancel @ 14ee648e0

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FSendSessionInvite>::Cancel
          (TWrappedOp<UE::Online::FSendSessionInvite> *this,FOnlineError *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  (**(code **)(((this->Op).Object)->_padding_ + 0x10))();
  if ((((this->TickerHandle).Object != (FElement *)0x0) &&
      (pTVar1 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    local_18.Object = (this->TickerHandle).Object;
    local_18.WeakReferenceCount.ReferenceController =
         (this->TickerHandle).WeakReferenceCount.ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_18);
  }
  return;
}

// Cancel @ 14ee64950

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FStartMatchmaking>::Cancel
          (TWrappedOp<UE::Online::FStartMatchmaking> *this,FOnlineError *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  (**(code **)(((this->Op).Object)->_padding_ + 0x10))();
  if ((((this->TickerHandle).Object != (FElement *)0x0) &&
      (pTVar1 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    local_18.Object = (this->TickerHandle).Object;
    local_18.WeakReferenceCount.ReferenceController =
         (this->TickerHandle).WeakReferenceCount.ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_18);
  }
  return;
}

// Cancel @ 14ee649c0

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FUpdateSessionSettings>::Cancel
          (TWrappedOp<UE::Online::FUpdateSessionSettings> *this,FOnlineError *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  (**(code **)(((this->Op).Object)->_padding_ + 0x10))();
  if ((((this->TickerHandle).Object != (FElement *)0x0) &&
      (pTVar1 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    local_18.Object = (this->TickerHandle).Object;
    local_18.WeakReferenceCount.ReferenceController =
         (this->TickerHandle).WeakReferenceCount.ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_18);
  }
  return;
}

// IsComplete @ 14eeee3d0

bool __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FAddSessionMember>::IsComplete
          (TWrappedOp<UE::Online::FAddSessionMember> *this)

{
  return RetryQueued < ((((this->Op).Object)->SharedState).Object)->State;
}

// IsComplete @ 14eeee3f0

bool __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FBatchQueryPresence>::IsComplete
          (TWrappedOp<UE::Online::FBatchQueryPresence> *this)

{
  return RetryQueued < ((((this->Op).Object)->SharedState).Object)->State;
}

// IsComplete @ 14eeee410

bool __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FCreateSession>::IsComplete
          (TWrappedOp<UE::Online::FCreateSession> *this)

{
  return RetryQueued < ((((this->Op).Object)->SharedState).Object)->State;
}

// IsComplete @ 14eeee430

bool __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFindSessions>::IsComplete
          (TWrappedOp<UE::Online::FFindSessions> *this)

{
  return RetryQueued < ((((this->Op).Object)->SharedState).Object)->State;
}

// IsComplete @ 14eeee450

bool __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FJoinSession>::IsComplete
          (TWrappedOp<UE::Online::FJoinSession> *this)

{
  return RetryQueued < ((((this->Op).Object)->SharedState).Object)->State;
}

// IsComplete @ 14eeee470

bool __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FLeaveSession>::IsComplete
          (TWrappedOp<UE::Online::FLeaveSession> *this)

{
  return RetryQueued < ((((this->Op).Object)->SharedState).Object)->State;
}

// IsComplete @ 14eeee490

bool __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FRejectSessionInvite>::IsComplete
          (TWrappedOp<UE::Online::FRejectSessionInvite> *this)

{
  return RetryQueued < ((((this->Op).Object)->SharedState).Object)->State;
}

// IsComplete @ 14eeee4b0

bool __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FRemoveSessionMember>::IsComplete
          (TWrappedOp<UE::Online::FRemoveSessionMember> *this)

{
  return RetryQueued < ((((this->Op).Object)->SharedState).Object)->State;
}

// IsComplete @ 14eeee4d0

bool __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FSendSessionInvite>::IsComplete
          (TWrappedOp<UE::Online::FSendSessionInvite> *this)

{
  return RetryQueued < ((((this->Op).Object)->SharedState).Object)->State;
}

// IsComplete @ 14eeee4f0

bool __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FStartMatchmaking>::IsComplete
          (TWrappedOp<UE::Online::FStartMatchmaking> *this)

{
  return RetryQueued < ((((this->Op).Object)->SharedState).Object)->State;
}

// IsComplete @ 14eeee510

bool __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FUpdateSessionSettings>::IsComplete
          (TWrappedOp<UE::Online::FUpdateSessionSettings> *this)

{
  return RetryQueued < ((((this->Op).Object)->SharedState).Object)->State;
}

// OnComplete @ 14eef2b80

TOnlineEvent<void___cdecl(void)> __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FAddSessionMember>::OnComplete
          (TWrappedOp<UE::Online::FAddSessionMember> *this)

{
  TOnlineEventCallable<void___cdecl(void)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->OnCompleteEvent;
  return (TOnlineEvent<void___cdecl(void)>)in_RDX;
}

// OnComplete @ 14eef2ba0

TOnlineEvent<void___cdecl(void)> __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FBatchQueryPresence>::OnComplete
          (TWrappedOp<UE::Online::FBatchQueryPresence> *this)

{
  TOnlineEventCallable<void___cdecl(void)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->OnCompleteEvent;
  return (TOnlineEvent<void___cdecl(void)>)in_RDX;
}

// OnComplete @ 14eef2bc0

TOnlineEvent<void___cdecl(void)> __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FCreateSession>::OnComplete
          (TWrappedOp<UE::Online::FCreateSession> *this)

{
  TOnlineEventCallable<void___cdecl(void)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->OnCompleteEvent;
  return (TOnlineEvent<void___cdecl(void)>)in_RDX;
}

// OnComplete @ 14eef2be0

TOnlineEvent<void___cdecl(void)> __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFindSessions>::OnComplete
          (TWrappedOp<UE::Online::FFindSessions> *this)

{
  TOnlineEventCallable<void___cdecl(void)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->OnCompleteEvent;
  return (TOnlineEvent<void___cdecl(void)>)in_RDX;
}

// OnComplete @ 14eef2c00

TOnlineEvent<void___cdecl(void)> __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FJoinSession>::OnComplete
          (TWrappedOp<UE::Online::FJoinSession> *this)

{
  TOnlineEventCallable<void___cdecl(void)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->OnCompleteEvent;
  return (TOnlineEvent<void___cdecl(void)>)in_RDX;
}

// OnComplete @ 14eef2c20

TOnlineEvent<void___cdecl(void)> __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FLeaveSession>::OnComplete
          (TWrappedOp<UE::Online::FLeaveSession> *this)

{
  TOnlineEventCallable<void___cdecl(void)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->OnCompleteEvent;
  return (TOnlineEvent<void___cdecl(void)>)in_RDX;
}

// OnComplete @ 14eef2c40

TOnlineEvent<void___cdecl(void)> __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FRejectSessionInvite>::OnComplete
          (TWrappedOp<UE::Online::FRejectSessionInvite> *this)

{
  TOnlineEventCallable<void___cdecl(void)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->OnCompleteEvent;
  return (TOnlineEvent<void___cdecl(void)>)in_RDX;
}

// OnComplete @ 14eef2c60

TOnlineEvent<void___cdecl(void)> __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FRemoveSessionMember>::OnComplete
          (TWrappedOp<UE::Online::FRemoveSessionMember> *this)

{
  TOnlineEventCallable<void___cdecl(void)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->OnCompleteEvent;
  return (TOnlineEvent<void___cdecl(void)>)in_RDX;
}

// OnComplete @ 14eef2c80

TOnlineEvent<void___cdecl(void)> __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FSendSessionInvite>::OnComplete
          (TWrappedOp<UE::Online::FSendSessionInvite> *this)

{
  TOnlineEventCallable<void___cdecl(void)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->OnCompleteEvent;
  return (TOnlineEvent<void___cdecl(void)>)in_RDX;
}

// OnComplete @ 14eef2ca0

TOnlineEvent<void___cdecl(void)> __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FStartMatchmaking>::OnComplete
          (TWrappedOp<UE::Online::FStartMatchmaking> *this)

{
  TOnlineEventCallable<void___cdecl(void)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->OnCompleteEvent;
  return (TOnlineEvent<void___cdecl(void)>)in_RDX;
}

// OnComplete @ 14eef2cc0

TOnlineEvent<void___cdecl(void)> __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FUpdateSessionSettings>::OnComplete
          (TWrappedOp<UE::Online::FUpdateSessionSettings> *this)

{
  TOnlineEventCallable<void___cdecl(void)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->OnCompleteEvent;
  return (TOnlineEvent<void___cdecl(void)>)in_RDX;
}

// Start @ 14ef129b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FAddSessionMember>::Start
          (TWrappedOp<UE::Online::FAddSessionMember> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TOnlineAsyncOp<UE::Online::FAddSessionMember> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  double dVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  atomic<int> aVar12;
  TWrappedOp<UE::Online::FAddSessionMember> *pTVar13;
  FTSTicker *this_00;
  TWeakPtr<FTSTicker::FElement,1> *pTVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  TWrappedOp<UE::Online::FAddSessionMember> *pTVar17;
  TWrappedOp<UE::Online::FAddSessionMember> *pTVar18;
  TWrappedOp<UE::Online::FAddSessionMember> *pTVar19;
  bool bVar20;
  undefined1 auStackY_f8 [32];
  LARGE_INTEGER local_c8;
  <lambda_1> local_c0;
  TWeakPtr<FTSTicker::FElement,1> local_a8;
  undefined1 local_98 [48];
  code *local_68 [2];
  undefined **local_58;
  TOnlineAsyncOp<UE::Online::FAddSessionMember> *local_50;
  TReferenceControllerBase<1> *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pTVar3 = (this->Op).Object;
  pTVar19 = (TWrappedOp<UE::Online::FAddSessionMember> *)0x0;
  pTVar13 = (TWrappedOp<UE::Online::FAddSessionMember> *)this->_padding_;
  pTVar17 = pTVar13;
  pTVar18 = pTVar19;
  if (pTVar13 != (TWrappedOp<UE::Online::FAddSessionMember> *)0x0) {
    aVar2 = *(atomic<int> *)&pTVar13->_padding_;
    do {
      pTVar17 = pTVar19;
      pTVar18 = (TWrappedOp<UE::Online::FAddSessionMember> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14ef12a15;
      LOCK();
      aVar12 = *(atomic<int> *)&pTVar13->_padding_;
      bVar20 = aVar2 == aVar12;
      if (bVar20) {
        *(atomic<int> *)&pTVar13->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar12 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar12;
    } while (!bVar20);
    pTVar17 = pTVar13;
    pTVar18 = (TWrappedOp<UE::Online::FAddSessionMember> *)this->_padding_;
  }
LAB_14ef12a15:
  pTVar13 = (TWrappedOp<UE::Online::FAddSessionMember> *)&pTVar18->_padding_;
  if (pTVar18 == (TWrappedOp<UE::Online::FAddSessionMember> *)0x0) {
    pTVar13 = pTVar19;
  }
  if ((pTVar13 != (TWrappedOp<UE::Online::FAddSessionMember> *)&this->_padding_) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar18 == (TWrappedOp<UE::Online::FAddSessionMember> *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pTVar17 != (TWrappedOp<UE::Online::FAddSessionMember> *)0x0) {
    LOCK();
    ((atomic<int> *)&pTVar17->_padding_)[1] =
         (atomic<int>)((int)((atomic<int> *)&pTVar17->_padding_)[1] + 1);
    UNLOCK();
  }
  local_c0.__this = this;
  local_c0.WeakThis.Object = pTVar18;
  local_c0.WeakThis.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar17;
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_const_&)>
  ::
  Add<_UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FAddSessionMember>::Start_::__l2::<lambda_1>_>
            (&pTVar3->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_98,&local_c0);
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  lVar7 = *(longlong *)&(this->OnCompleteHandle).DelegateUnbinder;
  uVar8 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8;
  uVar9 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
  uVar10 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18;
  uVar11 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20;
  plVar15 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder = local_98._0_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8 = local_98._8_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10 = local_98._16_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18 = local_98._24_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20 = local_98._32_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28 = local_98._40_8_;
  local_98._0_8_ = lVar7;
  local_98._8_8_ = uVar8;
  local_98._16_8_ = uVar9;
  local_98._24_8_ = uVar10;
  local_98._32_8_ = uVar11;
  local_98._40_8_ = plVar15;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_98);
  if (local_98._0_8_ != 0) {
    plVar15 = (longlong *)(local_98 + 0x10);
    if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_98._40_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if ((TWrappedOp<UE::Online::FAddSessionMember> *)
      local_c0.WeakThis.WeakReferenceCount.ReferenceController !=
      (TWrappedOp<UE::Online::FAddSessionMember> *)0x0) {
    LOCK();
    paVar1 = &(local_c0.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_c0.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_c0.WeakThis.WeakReferenceCount.ReferenceController,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar17);
  if (this->DelayInSeconds <= 0.0) {
    TOnlineAsyncOp<UE::Online::FAddSessionMember>::Start((this->Op).Object);
  }
  else {
    QueryPerformanceCounter(&local_c8);
    dVar6 = (double)(local_c8.QuadPart - this->EnqueueCycles) *
            FGenericPlatformTime::SecondsPerCycle64;
    if (this->DelayInSeconds <= dVar6) {
      TOnlineAsyncOp<UE::Online::FAddSessionMember>::Start((this->Op).Object);
    }
    else {
      this_00 = FTSTicker::GetCoreTicker();
      local_48 = (this->Op).SharedReferenceCount.ReferenceController;
      local_50 = (this->Op).Object;
      if (local_48 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_48->WeakReferenceCount = (atomic<int>)((int)local_48->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_58 = &
                 ___7__TFunction_OwnedObject_V<lambda_2>__7__Start___TWrappedOp_UFAddSessionMember_Online_UE___FOnlineAsyncOpQueue_Online_UE__UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
      ;
      local_68[0] = Core::Private::Function::
                    TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FAddSessionMember>::Start'::__l8::<lambda_2>,bool,float>
                    ::Call;
      local_40 = (undefined ***)0x0;
      pTVar14 = FTSTicker::AddTicker
                          (this_00,&local_a8,L"StartDelayedOnlineAsyncOp",
                           (float)(this->DelayInSeconds - dVar6),
                           (TUniqueFunction<bool___cdecl(float)> *)local_68);
      if (&this->TickerHandle != pTVar14) {
        (this->TickerHandle).Object = pTVar14->Object;
        pTVar14->Object = (FElement *)0x0;
        pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
        (this->TickerHandle).WeakReferenceCount.ReferenceController =
             (pTVar14->WeakReferenceCount).ReferenceController;
        (pTVar14->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
      if (local_a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_a8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_a8.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_68[0] != (code *)0x0) {
        pppuVar16 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar16 = local_40;
        }
        (*(code *)(*pppuVar16)[2])();
      }
    }
  }
  return;
}

// Start @ 14ef12cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FBatchQueryPresence>::Start
          (TWrappedOp<UE::Online::FBatchQueryPresence> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  double dVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  atomic<int> aVar12;
  TWrappedOp<UE::Online::FBatchQueryPresence> *pTVar13;
  FTSTicker *this_00;
  TWeakPtr<FTSTicker::FElement,1> *pTVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  TWrappedOp<UE::Online::FBatchQueryPresence> *pTVar17;
  TWrappedOp<UE::Online::FBatchQueryPresence> *pTVar18;
  TWrappedOp<UE::Online::FBatchQueryPresence> *pTVar19;
  bool bVar20;
  undefined1 auStackY_f8 [32];
  LARGE_INTEGER local_c8;
  <lambda_1> local_c0;
  TWeakPtr<FTSTicker::FElement,1> local_a8;
  undefined1 local_98 [48];
  code *local_68 [2];
  undefined **local_58;
  TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *local_50;
  TReferenceControllerBase<1> *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pTVar3 = (this->Op).Object;
  pTVar19 = (TWrappedOp<UE::Online::FBatchQueryPresence> *)0x0;
  pTVar13 = (TWrappedOp<UE::Online::FBatchQueryPresence> *)this->_padding_;
  pTVar17 = pTVar13;
  pTVar18 = pTVar19;
  if (pTVar13 != (TWrappedOp<UE::Online::FBatchQueryPresence> *)0x0) {
    aVar2 = *(atomic<int> *)&pTVar13->_padding_;
    do {
      pTVar17 = pTVar19;
      pTVar18 = (TWrappedOp<UE::Online::FBatchQueryPresence> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14ef12d55;
      LOCK();
      aVar12 = *(atomic<int> *)&pTVar13->_padding_;
      bVar20 = aVar2 == aVar12;
      if (bVar20) {
        *(atomic<int> *)&pTVar13->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar12 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar12;
    } while (!bVar20);
    pTVar17 = pTVar13;
    pTVar18 = (TWrappedOp<UE::Online::FBatchQueryPresence> *)this->_padding_;
  }
LAB_14ef12d55:
  pTVar13 = (TWrappedOp<UE::Online::FBatchQueryPresence> *)&pTVar18->_padding_;
  if (pTVar18 == (TWrappedOp<UE::Online::FBatchQueryPresence> *)0x0) {
    pTVar13 = pTVar19;
  }
  if ((pTVar13 != (TWrappedOp<UE::Online::FBatchQueryPresence> *)&this->_padding_) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar18 == (TWrappedOp<UE::Online::FBatchQueryPresence> *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pTVar17 != (TWrappedOp<UE::Online::FBatchQueryPresence> *)0x0) {
    LOCK();
    ((atomic<int> *)&pTVar17->_padding_)[1] =
         (atomic<int>)((int)((atomic<int> *)&pTVar17->_padding_)[1] + 1);
    UNLOCK();
  }
  local_c0.__this = this;
  local_c0.WeakThis.Object = pTVar18;
  local_c0.WeakThis.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar17;
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryPresence>_const_&)>
  ::
  Add<_UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FBatchQueryPresence>::Start_::__l2::<lambda_1>_>
            (&pTVar3->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_98,&local_c0);
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  lVar7 = *(longlong *)&(this->OnCompleteHandle).DelegateUnbinder;
  uVar8 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8;
  uVar9 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
  uVar10 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18;
  uVar11 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20;
  plVar15 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder = local_98._0_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8 = local_98._8_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10 = local_98._16_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18 = local_98._24_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20 = local_98._32_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28 = local_98._40_8_;
  local_98._0_8_ = lVar7;
  local_98._8_8_ = uVar8;
  local_98._16_8_ = uVar9;
  local_98._24_8_ = uVar10;
  local_98._32_8_ = uVar11;
  local_98._40_8_ = plVar15;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_98);
  if (local_98._0_8_ != 0) {
    plVar15 = (longlong *)(local_98 + 0x10);
    if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_98._40_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if ((TWrappedOp<UE::Online::FBatchQueryPresence> *)
      local_c0.WeakThis.WeakReferenceCount.ReferenceController !=
      (TWrappedOp<UE::Online::FBatchQueryPresence> *)0x0) {
    LOCK();
    paVar1 = &(local_c0.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_c0.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_c0.WeakThis.WeakReferenceCount.ReferenceController,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar17);
  if (this->DelayInSeconds <= 0.0) {
    TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::Start((this->Op).Object);
  }
  else {
    QueryPerformanceCounter(&local_c8);
    dVar6 = (double)(local_c8.QuadPart - this->EnqueueCycles) *
            FGenericPlatformTime::SecondsPerCycle64;
    if (this->DelayInSeconds <= dVar6) {
      TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::Start((this->Op).Object);
    }
    else {
      this_00 = FTSTicker::GetCoreTicker();
      local_48 = (this->Op).SharedReferenceCount.ReferenceController;
      local_50 = (this->Op).Object;
      if (local_48 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_48->WeakReferenceCount = (atomic<int>)((int)local_48->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_58 = &
                 ___7__TFunction_OwnedObject_V<lambda_2>__7__Start___TWrappedOp_UFBatchQueryPresence_Online_UE___FOnlineAsyncOpQueue_Online_UE__UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
      ;
      local_68[0] = Core::Private::Function::
                    TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FBatchQueryPresence>::Start'::__l8::<lambda_2>,bool,float>
                    ::Call;
      local_40 = (undefined ***)0x0;
      pTVar14 = FTSTicker::AddTicker
                          (this_00,&local_a8,L"StartDelayedOnlineAsyncOp",
                           (float)(this->DelayInSeconds - dVar6),
                           (TUniqueFunction<bool___cdecl(float)> *)local_68);
      if (&this->TickerHandle != pTVar14) {
        (this->TickerHandle).Object = pTVar14->Object;
        pTVar14->Object = (FElement *)0x0;
        pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
        (this->TickerHandle).WeakReferenceCount.ReferenceController =
             (pTVar14->WeakReferenceCount).ReferenceController;
        (pTVar14->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
      if (local_a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_a8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_a8.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_68[0] != (code *)0x0) {
        pppuVar16 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar16 = local_40;
        }
        (*(code *)(*pppuVar16)[2])();
      }
    }
  }
  return;
}

// Start @ 14ef13030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FCreateSession>::Start
          (TWrappedOp<UE::Online::FCreateSession> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TOnlineAsyncOp<UE::Online::FCreateSession> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  double dVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  atomic<int> aVar12;
  TWrappedOp<UE::Online::FCreateSession> *pTVar13;
  FTSTicker *this_00;
  TWeakPtr<FTSTicker::FElement,1> *pTVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  TWrappedOp<UE::Online::FCreateSession> *pTVar17;
  TWrappedOp<UE::Online::FCreateSession> *pTVar18;
  TWrappedOp<UE::Online::FCreateSession> *pTVar19;
  bool bVar20;
  undefined1 auStackY_f8 [32];
  LARGE_INTEGER local_c8;
  <lambda_1> local_c0;
  TWeakPtr<FTSTicker::FElement,1> local_a8;
  undefined1 local_98 [48];
  code *local_68 [2];
  undefined **local_58;
  TOnlineAsyncOp<UE::Online::FCreateSession> *local_50;
  TReferenceControllerBase<1> *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pTVar3 = (this->Op).Object;
  pTVar19 = (TWrappedOp<UE::Online::FCreateSession> *)0x0;
  pTVar13 = (TWrappedOp<UE::Online::FCreateSession> *)this->_padding_;
  pTVar17 = pTVar13;
  pTVar18 = pTVar19;
  if (pTVar13 != (TWrappedOp<UE::Online::FCreateSession> *)0x0) {
    aVar2 = *(atomic<int> *)&pTVar13->_padding_;
    do {
      pTVar17 = pTVar19;
      pTVar18 = (TWrappedOp<UE::Online::FCreateSession> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14ef13095;
      LOCK();
      aVar12 = *(atomic<int> *)&pTVar13->_padding_;
      bVar20 = aVar2 == aVar12;
      if (bVar20) {
        *(atomic<int> *)&pTVar13->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar12 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar12;
    } while (!bVar20);
    pTVar17 = pTVar13;
    pTVar18 = (TWrappedOp<UE::Online::FCreateSession> *)this->_padding_;
  }
LAB_14ef13095:
  pTVar13 = (TWrappedOp<UE::Online::FCreateSession> *)&pTVar18->_padding_;
  if (pTVar18 == (TWrappedOp<UE::Online::FCreateSession> *)0x0) {
    pTVar13 = pTVar19;
  }
  if ((pTVar13 != (TWrappedOp<UE::Online::FCreateSession> *)&this->_padding_) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar18 == (TWrappedOp<UE::Online::FCreateSession> *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pTVar17 != (TWrappedOp<UE::Online::FCreateSession> *)0x0) {
    LOCK();
    ((atomic<int> *)&pTVar17->_padding_)[1] =
         (atomic<int>)((int)((atomic<int> *)&pTVar17->_padding_)[1] + 1);
    UNLOCK();
  }
  local_c0.__this = this;
  local_c0.WeakThis.Object = pTVar18;
  local_c0.WeakThis.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar17;
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateSession>_const_&)>
  ::
  Add<_UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FCreateSession>::Start_::__l2::<lambda_1>_>
            (&pTVar3->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_98,&local_c0);
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  lVar7 = *(longlong *)&(this->OnCompleteHandle).DelegateUnbinder;
  uVar8 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8;
  uVar9 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
  uVar10 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18;
  uVar11 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20;
  plVar15 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder = local_98._0_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8 = local_98._8_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10 = local_98._16_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18 = local_98._24_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20 = local_98._32_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28 = local_98._40_8_;
  local_98._0_8_ = lVar7;
  local_98._8_8_ = uVar8;
  local_98._16_8_ = uVar9;
  local_98._24_8_ = uVar10;
  local_98._32_8_ = uVar11;
  local_98._40_8_ = plVar15;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_98);
  if (local_98._0_8_ != 0) {
    plVar15 = (longlong *)(local_98 + 0x10);
    if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_98._40_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if ((TWrappedOp<UE::Online::FCreateSession> *)
      local_c0.WeakThis.WeakReferenceCount.ReferenceController !=
      (TWrappedOp<UE::Online::FCreateSession> *)0x0) {
    LOCK();
    paVar1 = &(local_c0.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_c0.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_c0.WeakThis.WeakReferenceCount.ReferenceController,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar17);
  if (this->DelayInSeconds <= 0.0) {
    TOnlineAsyncOp<UE::Online::FCreateSession>::Start((this->Op).Object);
  }
  else {
    QueryPerformanceCounter(&local_c8);
    dVar6 = (double)(local_c8.QuadPart - this->EnqueueCycles) *
            FGenericPlatformTime::SecondsPerCycle64;
    if (this->DelayInSeconds <= dVar6) {
      TOnlineAsyncOp<UE::Online::FCreateSession>::Start((this->Op).Object);
    }
    else {
      this_00 = FTSTicker::GetCoreTicker();
      local_48 = (this->Op).SharedReferenceCount.ReferenceController;
      local_50 = (this->Op).Object;
      if (local_48 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_48->WeakReferenceCount = (atomic<int>)((int)local_48->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_58 = &
                 ___7__TFunction_OwnedObject_V<lambda_2>__7__Start___TWrappedOp_UFCreateSession_Online_UE___FOnlineAsyncOpQueue_Online_UE__UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
      ;
      local_68[0] = Core::Private::Function::
                    TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FCreateSession>::Start'::__l8::<lambda_2>,bool,float>
                    ::Call;
      local_40 = (undefined ***)0x0;
      pTVar14 = FTSTicker::AddTicker
                          (this_00,&local_a8,L"StartDelayedOnlineAsyncOp",
                           (float)(this->DelayInSeconds - dVar6),
                           (TUniqueFunction<bool___cdecl(float)> *)local_68);
      if (&this->TickerHandle != pTVar14) {
        (this->TickerHandle).Object = pTVar14->Object;
        pTVar14->Object = (FElement *)0x0;
        pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
        (this->TickerHandle).WeakReferenceCount.ReferenceController =
             (pTVar14->WeakReferenceCount).ReferenceController;
        (pTVar14->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
      if (local_a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_a8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_a8.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_68[0] != (code *)0x0) {
        pppuVar16 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar16 = local_40;
        }
        (*(code *)(*pppuVar16)[2])();
      }
    }
  }
  return;
}

// Start @ 14ef13370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFindSessions>::Start
          (TWrappedOp<UE::Online::FFindSessions> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TOnlineAsyncOp<UE::Online::FFindSessions> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  double dVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  atomic<int> aVar12;
  TWrappedOp<UE::Online::FFindSessions> *pTVar13;
  FTSTicker *this_00;
  TWeakPtr<FTSTicker::FElement,1> *pTVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  TWrappedOp<UE::Online::FFindSessions> *pTVar17;
  TWrappedOp<UE::Online::FFindSessions> *pTVar18;
  TWrappedOp<UE::Online::FFindSessions> *pTVar19;
  bool bVar20;
  undefined1 auStackY_f8 [32];
  LARGE_INTEGER local_c8;
  <lambda_1> local_c0;
  TWeakPtr<FTSTicker::FElement,1> local_a8;
  undefined1 local_98 [48];
  code *local_68 [2];
  undefined **local_58;
  TOnlineAsyncOp<UE::Online::FFindSessions> *local_50;
  TReferenceControllerBase<1> *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pTVar3 = (this->Op).Object;
  pTVar19 = (TWrappedOp<UE::Online::FFindSessions> *)0x0;
  pTVar13 = (TWrappedOp<UE::Online::FFindSessions> *)this->_padding_;
  pTVar17 = pTVar13;
  pTVar18 = pTVar19;
  if (pTVar13 != (TWrappedOp<UE::Online::FFindSessions> *)0x0) {
    aVar2 = *(atomic<int> *)&pTVar13->_padding_;
    do {
      pTVar17 = pTVar19;
      pTVar18 = (TWrappedOp<UE::Online::FFindSessions> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14ef133d5;
      LOCK();
      aVar12 = *(atomic<int> *)&pTVar13->_padding_;
      bVar20 = aVar2 == aVar12;
      if (bVar20) {
        *(atomic<int> *)&pTVar13->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar12 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar12;
    } while (!bVar20);
    pTVar17 = pTVar13;
    pTVar18 = (TWrappedOp<UE::Online::FFindSessions> *)this->_padding_;
  }
LAB_14ef133d5:
  pTVar13 = (TWrappedOp<UE::Online::FFindSessions> *)&pTVar18->_padding_;
  if (pTVar18 == (TWrappedOp<UE::Online::FFindSessions> *)0x0) {
    pTVar13 = pTVar19;
  }
  if ((pTVar13 != (TWrappedOp<UE::Online::FFindSessions> *)&this->_padding_) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar18 == (TWrappedOp<UE::Online::FFindSessions> *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pTVar17 != (TWrappedOp<UE::Online::FFindSessions> *)0x0) {
    LOCK();
    ((atomic<int> *)&pTVar17->_padding_)[1] =
         (atomic<int>)((int)((atomic<int> *)&pTVar17->_padding_)[1] + 1);
    UNLOCK();
  }
  local_c0.__this = this;
  local_c0.WeakThis.Object = pTVar18;
  local_c0.WeakThis.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar17;
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&,UE::Online::TOnlineResult<UE::Online::FFindSessions>_const_&)>
  ::
  Add<_UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFindSessions>::Start_::__l2::<lambda_1>_>
            (&pTVar3->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_98,&local_c0);
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  lVar7 = *(longlong *)&(this->OnCompleteHandle).DelegateUnbinder;
  uVar8 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8;
  uVar9 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
  uVar10 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18;
  uVar11 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20;
  plVar15 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder = local_98._0_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8 = local_98._8_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10 = local_98._16_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18 = local_98._24_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20 = local_98._32_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28 = local_98._40_8_;
  local_98._0_8_ = lVar7;
  local_98._8_8_ = uVar8;
  local_98._16_8_ = uVar9;
  local_98._24_8_ = uVar10;
  local_98._32_8_ = uVar11;
  local_98._40_8_ = plVar15;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_98);
  if (local_98._0_8_ != 0) {
    plVar15 = (longlong *)(local_98 + 0x10);
    if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_98._40_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if ((TWrappedOp<UE::Online::FFindSessions> *)
      local_c0.WeakThis.WeakReferenceCount.ReferenceController !=
      (TWrappedOp<UE::Online::FFindSessions> *)0x0) {
    LOCK();
    paVar1 = &(local_c0.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_c0.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_c0.WeakThis.WeakReferenceCount.ReferenceController,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar17);
  if (this->DelayInSeconds <= 0.0) {
    TOnlineAsyncOp<UE::Online::FFindSessions>::Start((this->Op).Object);
  }
  else {
    QueryPerformanceCounter(&local_c8);
    dVar6 = (double)(local_c8.QuadPart - this->EnqueueCycles) *
            FGenericPlatformTime::SecondsPerCycle64;
    if (this->DelayInSeconds <= dVar6) {
      TOnlineAsyncOp<UE::Online::FFindSessions>::Start((this->Op).Object);
    }
    else {
      this_00 = FTSTicker::GetCoreTicker();
      local_48 = (this->Op).SharedReferenceCount.ReferenceController;
      local_50 = (this->Op).Object;
      if (local_48 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_48->WeakReferenceCount = (atomic<int>)((int)local_48->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_58 = &
                 ___7__TFunction_OwnedObject_V<lambda_2>__7__Start___TWrappedOp_UFFindSessions_Online_UE___FOnlineAsyncOpQueue_Online_UE__UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
      ;
      local_68[0] = Core::Private::Function::
                    TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFindSessions>::Start'::__l8::<lambda_2>,bool,float>
                    ::Call;
      local_40 = (undefined ***)0x0;
      pTVar14 = FTSTicker::AddTicker
                          (this_00,&local_a8,L"StartDelayedOnlineAsyncOp",
                           (float)(this->DelayInSeconds - dVar6),
                           (TUniqueFunction<bool___cdecl(float)> *)local_68);
      if (&this->TickerHandle != pTVar14) {
        (this->TickerHandle).Object = pTVar14->Object;
        pTVar14->Object = (FElement *)0x0;
        pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
        (this->TickerHandle).WeakReferenceCount.ReferenceController =
             (pTVar14->WeakReferenceCount).ReferenceController;
        (pTVar14->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
      if (local_a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_a8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_a8.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_68[0] != (code *)0x0) {
        pppuVar16 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar16 = local_40;
        }
        (*(code *)(*pppuVar16)[2])();
      }
    }
  }
  return;
}

// Start @ 14ef136b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FJoinSession>::Start
          (TWrappedOp<UE::Online::FJoinSession> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TOnlineAsyncOp<UE::Online::FJoinSession> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  double dVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  atomic<int> aVar12;
  TWrappedOp<UE::Online::FJoinSession> *pTVar13;
  FTSTicker *this_00;
  TWeakPtr<FTSTicker::FElement,1> *pTVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  TWrappedOp<UE::Online::FJoinSession> *pTVar17;
  TWrappedOp<UE::Online::FJoinSession> *pTVar18;
  TWrappedOp<UE::Online::FJoinSession> *pTVar19;
  bool bVar20;
  undefined1 auStackY_f8 [32];
  LARGE_INTEGER local_c8;
  <lambda_1> local_c0;
  TWeakPtr<FTSTicker::FElement,1> local_a8;
  undefined1 local_98 [48];
  code *local_68 [2];
  undefined **local_58;
  TOnlineAsyncOp<UE::Online::FJoinSession> *local_50;
  TReferenceControllerBase<1> *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pTVar3 = (this->Op).Object;
  pTVar19 = (TWrappedOp<UE::Online::FJoinSession> *)0x0;
  pTVar13 = (TWrappedOp<UE::Online::FJoinSession> *)this->_padding_;
  pTVar17 = pTVar13;
  pTVar18 = pTVar19;
  if (pTVar13 != (TWrappedOp<UE::Online::FJoinSession> *)0x0) {
    aVar2 = *(atomic<int> *)&pTVar13->_padding_;
    do {
      pTVar17 = pTVar19;
      pTVar18 = (TWrappedOp<UE::Online::FJoinSession> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14ef13715;
      LOCK();
      aVar12 = *(atomic<int> *)&pTVar13->_padding_;
      bVar20 = aVar2 == aVar12;
      if (bVar20) {
        *(atomic<int> *)&pTVar13->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar12 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar12;
    } while (!bVar20);
    pTVar17 = pTVar13;
    pTVar18 = (TWrappedOp<UE::Online::FJoinSession> *)this->_padding_;
  }
LAB_14ef13715:
  pTVar13 = (TWrappedOp<UE::Online::FJoinSession> *)&pTVar18->_padding_;
  if (pTVar18 == (TWrappedOp<UE::Online::FJoinSession> *)0x0) {
    pTVar13 = pTVar19;
  }
  if ((pTVar13 != (TWrappedOp<UE::Online::FJoinSession> *)&this->_padding_) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar18 == (TWrappedOp<UE::Online::FJoinSession> *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pTVar17 != (TWrappedOp<UE::Online::FJoinSession> *)0x0) {
    LOCK();
    ((atomic<int> *)&pTVar17->_padding_)[1] =
         (atomic<int>)((int)((atomic<int> *)&pTVar17->_padding_)[1] + 1);
    UNLOCK();
  }
  local_c0.__this = this;
  local_c0.WeakThis.Object = pTVar18;
  local_c0.WeakThis.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar17;
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinSession>_const_&)>
  ::
  Add<_UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FJoinSession>::Start_::__l2::<lambda_1>_>
            (&pTVar3->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_98,&local_c0);
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  lVar7 = *(longlong *)&(this->OnCompleteHandle).DelegateUnbinder;
  uVar8 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8;
  uVar9 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
  uVar10 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18;
  uVar11 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20;
  plVar15 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder = local_98._0_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8 = local_98._8_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10 = local_98._16_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18 = local_98._24_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20 = local_98._32_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28 = local_98._40_8_;
  local_98._0_8_ = lVar7;
  local_98._8_8_ = uVar8;
  local_98._16_8_ = uVar9;
  local_98._24_8_ = uVar10;
  local_98._32_8_ = uVar11;
  local_98._40_8_ = plVar15;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_98);
  if (local_98._0_8_ != 0) {
    plVar15 = (longlong *)(local_98 + 0x10);
    if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_98._40_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if ((TWrappedOp<UE::Online::FJoinSession> *)
      local_c0.WeakThis.WeakReferenceCount.ReferenceController !=
      (TWrappedOp<UE::Online::FJoinSession> *)0x0) {
    LOCK();
    paVar1 = &(local_c0.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_c0.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_c0.WeakThis.WeakReferenceCount.ReferenceController,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar17);
  if (this->DelayInSeconds <= 0.0) {
    TOnlineAsyncOp<UE::Online::FJoinSession>::Start((this->Op).Object);
  }
  else {
    QueryPerformanceCounter(&local_c8);
    dVar6 = (double)(local_c8.QuadPart - this->EnqueueCycles) *
            FGenericPlatformTime::SecondsPerCycle64;
    if (this->DelayInSeconds <= dVar6) {
      TOnlineAsyncOp<UE::Online::FJoinSession>::Start((this->Op).Object);
    }
    else {
      this_00 = FTSTicker::GetCoreTicker();
      local_48 = (this->Op).SharedReferenceCount.ReferenceController;
      local_50 = (this->Op).Object;
      if (local_48 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_48->WeakReferenceCount = (atomic<int>)((int)local_48->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_58 = &
                 ___7__TFunction_OwnedObject_V<lambda_2>__7__Start___TWrappedOp_UFJoinSession_Online_UE___FOnlineAsyncOpQueue_Online_UE__UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
      ;
      local_68[0] = Core::Private::Function::
                    TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FJoinSession>::Start'::__l8::<lambda_2>,bool,float>
                    ::Call;
      local_40 = (undefined ***)0x0;
      pTVar14 = FTSTicker::AddTicker
                          (this_00,&local_a8,L"StartDelayedOnlineAsyncOp",
                           (float)(this->DelayInSeconds - dVar6),
                           (TUniqueFunction<bool___cdecl(float)> *)local_68);
      if (&this->TickerHandle != pTVar14) {
        (this->TickerHandle).Object = pTVar14->Object;
        pTVar14->Object = (FElement *)0x0;
        pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
        (this->TickerHandle).WeakReferenceCount.ReferenceController =
             (pTVar14->WeakReferenceCount).ReferenceController;
        (pTVar14->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
      if (local_a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_a8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_a8.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_68[0] != (code *)0x0) {
        pppuVar16 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar16 = local_40;
        }
        (*(code *)(*pppuVar16)[2])();
      }
    }
  }
  return;
}

// Start @ 14ef139f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FLeaveSession>::Start
          (TWrappedOp<UE::Online::FLeaveSession> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TOnlineAsyncOp<UE::Online::FLeaveSession> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  double dVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  atomic<int> aVar12;
  TWrappedOp<UE::Online::FLeaveSession> *pTVar13;
  FTSTicker *this_00;
  TWeakPtr<FTSTicker::FElement,1> *pTVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  TWrappedOp<UE::Online::FLeaveSession> *pTVar17;
  TWrappedOp<UE::Online::FLeaveSession> *pTVar18;
  TWrappedOp<UE::Online::FLeaveSession> *pTVar19;
  bool bVar20;
  undefined1 auStackY_f8 [32];
  LARGE_INTEGER local_c8;
  <lambda_1> local_c0;
  TWeakPtr<FTSTicker::FElement,1> local_a8;
  undefined1 local_98 [48];
  code *local_68 [2];
  undefined **local_58;
  TOnlineAsyncOp<UE::Online::FLeaveSession> *local_50;
  TReferenceControllerBase<1> *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pTVar3 = (this->Op).Object;
  pTVar19 = (TWrappedOp<UE::Online::FLeaveSession> *)0x0;
  pTVar13 = (TWrappedOp<UE::Online::FLeaveSession> *)this->_padding_;
  pTVar17 = pTVar13;
  pTVar18 = pTVar19;
  if (pTVar13 != (TWrappedOp<UE::Online::FLeaveSession> *)0x0) {
    aVar2 = *(atomic<int> *)&pTVar13->_padding_;
    do {
      pTVar17 = pTVar19;
      pTVar18 = (TWrappedOp<UE::Online::FLeaveSession> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14ef13a55;
      LOCK();
      aVar12 = *(atomic<int> *)&pTVar13->_padding_;
      bVar20 = aVar2 == aVar12;
      if (bVar20) {
        *(atomic<int> *)&pTVar13->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar12 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar12;
    } while (!bVar20);
    pTVar17 = pTVar13;
    pTVar18 = (TWrappedOp<UE::Online::FLeaveSession> *)this->_padding_;
  }
LAB_14ef13a55:
  pTVar13 = (TWrappedOp<UE::Online::FLeaveSession> *)&pTVar18->_padding_;
  if (pTVar18 == (TWrappedOp<UE::Online::FLeaveSession> *)0x0) {
    pTVar13 = pTVar19;
  }
  if ((pTVar13 != (TWrappedOp<UE::Online::FLeaveSession> *)&this->_padding_) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar18 == (TWrappedOp<UE::Online::FLeaveSession> *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pTVar17 != (TWrappedOp<UE::Online::FLeaveSession> *)0x0) {
    LOCK();
    ((atomic<int> *)&pTVar17->_padding_)[1] =
         (atomic<int>)((int)((atomic<int> *)&pTVar17->_padding_)[1] + 1);
    UNLOCK();
  }
  local_c0.__this = this;
  local_c0.WeakThis.Object = pTVar18;
  local_c0.WeakThis.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar17;
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveSession>_const_&)>
  ::
  Add<_UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FLeaveSession>::Start_::__l2::<lambda_1>_>
            (&pTVar3->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_98,&local_c0);
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  lVar7 = *(longlong *)&(this->OnCompleteHandle).DelegateUnbinder;
  uVar8 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8;
  uVar9 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
  uVar10 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18;
  uVar11 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20;
  plVar15 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder = local_98._0_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8 = local_98._8_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10 = local_98._16_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18 = local_98._24_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20 = local_98._32_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28 = local_98._40_8_;
  local_98._0_8_ = lVar7;
  local_98._8_8_ = uVar8;
  local_98._16_8_ = uVar9;
  local_98._24_8_ = uVar10;
  local_98._32_8_ = uVar11;
  local_98._40_8_ = plVar15;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_98);
  if (local_98._0_8_ != 0) {
    plVar15 = (longlong *)(local_98 + 0x10);
    if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_98._40_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if ((TWrappedOp<UE::Online::FLeaveSession> *)
      local_c0.WeakThis.WeakReferenceCount.ReferenceController !=
      (TWrappedOp<UE::Online::FLeaveSession> *)0x0) {
    LOCK();
    paVar1 = &(local_c0.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_c0.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_c0.WeakThis.WeakReferenceCount.ReferenceController,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar17);
  if (this->DelayInSeconds <= 0.0) {
    TOnlineAsyncOp<UE::Online::FLeaveSession>::Start((this->Op).Object);
  }
  else {
    QueryPerformanceCounter(&local_c8);
    dVar6 = (double)(local_c8.QuadPart - this->EnqueueCycles) *
            FGenericPlatformTime::SecondsPerCycle64;
    if (this->DelayInSeconds <= dVar6) {
      TOnlineAsyncOp<UE::Online::FLeaveSession>::Start((this->Op).Object);
    }
    else {
      this_00 = FTSTicker::GetCoreTicker();
      local_48 = (this->Op).SharedReferenceCount.ReferenceController;
      local_50 = (this->Op).Object;
      if (local_48 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_48->WeakReferenceCount = (atomic<int>)((int)local_48->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_58 = &
                 ___7__TFunction_OwnedObject_V<lambda_2>__7__Start___TWrappedOp_UFLeaveSession_Online_UE___FOnlineAsyncOpQueue_Online_UE__UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
      ;
      local_68[0] = Core::Private::Function::
                    TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FLeaveSession>::Start'::__l8::<lambda_2>,bool,float>
                    ::Call;
      local_40 = (undefined ***)0x0;
      pTVar14 = FTSTicker::AddTicker
                          (this_00,&local_a8,L"StartDelayedOnlineAsyncOp",
                           (float)(this->DelayInSeconds - dVar6),
                           (TUniqueFunction<bool___cdecl(float)> *)local_68);
      if (&this->TickerHandle != pTVar14) {
        (this->TickerHandle).Object = pTVar14->Object;
        pTVar14->Object = (FElement *)0x0;
        pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
        (this->TickerHandle).WeakReferenceCount.ReferenceController =
             (pTVar14->WeakReferenceCount).ReferenceController;
        (pTVar14->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
      if (local_a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_a8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_a8.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_68[0] != (code *)0x0) {
        pppuVar16 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar16 = local_40;
        }
        (*(code *)(*pppuVar16)[2])();
      }
    }
  }
  return;
}

// Start @ 14ef13d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FRejectSessionInvite>::Start
          (TWrappedOp<UE::Online::FRejectSessionInvite> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  double dVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  atomic<int> aVar12;
  TWrappedOp<UE::Online::FRejectSessionInvite> *pTVar13;
  FTSTicker *this_00;
  TWeakPtr<FTSTicker::FElement,1> *pTVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  TWrappedOp<UE::Online::FRejectSessionInvite> *pTVar17;
  TWrappedOp<UE::Online::FRejectSessionInvite> *pTVar18;
  TWrappedOp<UE::Online::FRejectSessionInvite> *pTVar19;
  bool bVar20;
  undefined1 auStackY_f8 [32];
  LARGE_INTEGER local_c8;
  <lambda_1> local_c0;
  TWeakPtr<FTSTicker::FElement,1> local_a8;
  undefined1 local_98 [48];
  code *local_68 [2];
  undefined **local_58;
  TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *local_50;
  TReferenceControllerBase<1> *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pTVar3 = (this->Op).Object;
  pTVar19 = (TWrappedOp<UE::Online::FRejectSessionInvite> *)0x0;
  pTVar13 = (TWrappedOp<UE::Online::FRejectSessionInvite> *)this->_padding_;
  pTVar17 = pTVar13;
  pTVar18 = pTVar19;
  if (pTVar13 != (TWrappedOp<UE::Online::FRejectSessionInvite> *)0x0) {
    aVar2 = *(atomic<int> *)&pTVar13->_padding_;
    do {
      pTVar17 = pTVar19;
      pTVar18 = (TWrappedOp<UE::Online::FRejectSessionInvite> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14ef13d95;
      LOCK();
      aVar12 = *(atomic<int> *)&pTVar13->_padding_;
      bVar20 = aVar2 == aVar12;
      if (bVar20) {
        *(atomic<int> *)&pTVar13->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar12 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar12;
    } while (!bVar20);
    pTVar17 = pTVar13;
    pTVar18 = (TWrappedOp<UE::Online::FRejectSessionInvite> *)this->_padding_;
  }
LAB_14ef13d95:
  pTVar13 = (TWrappedOp<UE::Online::FRejectSessionInvite> *)&pTVar18->_padding_;
  if (pTVar18 == (TWrappedOp<UE::Online::FRejectSessionInvite> *)0x0) {
    pTVar13 = pTVar19;
  }
  if ((pTVar13 != (TWrappedOp<UE::Online::FRejectSessionInvite> *)&this->_padding_) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar18 == (TWrappedOp<UE::Online::FRejectSessionInvite> *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pTVar17 != (TWrappedOp<UE::Online::FRejectSessionInvite> *)0x0) {
    LOCK();
    ((atomic<int> *)&pTVar17->_padding_)[1] =
         (atomic<int>)((int)((atomic<int> *)&pTVar17->_padding_)[1] + 1);
    UNLOCK();
  }
  local_c0.__this = this;
  local_c0.WeakThis.Object = pTVar18;
  local_c0.WeakThis.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar17;
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_const_&)>
  ::
  Add<_UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FRejectSessionInvite>::Start_::__l2::<lambda_1>_>
            (&pTVar3->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_98,&local_c0);
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  lVar7 = *(longlong *)&(this->OnCompleteHandle).DelegateUnbinder;
  uVar8 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8;
  uVar9 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
  uVar10 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18;
  uVar11 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20;
  plVar15 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder = local_98._0_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8 = local_98._8_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10 = local_98._16_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18 = local_98._24_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20 = local_98._32_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28 = local_98._40_8_;
  local_98._0_8_ = lVar7;
  local_98._8_8_ = uVar8;
  local_98._16_8_ = uVar9;
  local_98._24_8_ = uVar10;
  local_98._32_8_ = uVar11;
  local_98._40_8_ = plVar15;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_98);
  if (local_98._0_8_ != 0) {
    plVar15 = (longlong *)(local_98 + 0x10);
    if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_98._40_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if ((TWrappedOp<UE::Online::FRejectSessionInvite> *)
      local_c0.WeakThis.WeakReferenceCount.ReferenceController !=
      (TWrappedOp<UE::Online::FRejectSessionInvite> *)0x0) {
    LOCK();
    paVar1 = &(local_c0.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_c0.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_c0.WeakThis.WeakReferenceCount.ReferenceController,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar17);
  if (this->DelayInSeconds <= 0.0) {
    TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::Start((this->Op).Object);
  }
  else {
    QueryPerformanceCounter(&local_c8);
    dVar6 = (double)(local_c8.QuadPart - this->EnqueueCycles) *
            FGenericPlatformTime::SecondsPerCycle64;
    if (this->DelayInSeconds <= dVar6) {
      TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::Start((this->Op).Object);
    }
    else {
      this_00 = FTSTicker::GetCoreTicker();
      local_48 = (this->Op).SharedReferenceCount.ReferenceController;
      local_50 = (this->Op).Object;
      if (local_48 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_48->WeakReferenceCount = (atomic<int>)((int)local_48->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_58 = &
                 ___7__TFunction_OwnedObject_V<lambda_2>__7__Start___TWrappedOp_UFRejectSessionInvite_Online_UE___FOnlineAsyncOpQueue_Online_UE__UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
      ;
      local_68[0] = Core::Private::Function::
                    TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FRejectSessionInvite>::Start'::__l8::<lambda_2>,bool,float>
                    ::Call;
      local_40 = (undefined ***)0x0;
      pTVar14 = FTSTicker::AddTicker
                          (this_00,&local_a8,L"StartDelayedOnlineAsyncOp",
                           (float)(this->DelayInSeconds - dVar6),
                           (TUniqueFunction<bool___cdecl(float)> *)local_68);
      if (&this->TickerHandle != pTVar14) {
        (this->TickerHandle).Object = pTVar14->Object;
        pTVar14->Object = (FElement *)0x0;
        pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
        (this->TickerHandle).WeakReferenceCount.ReferenceController =
             (pTVar14->WeakReferenceCount).ReferenceController;
        (pTVar14->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
      if (local_a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_a8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_a8.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_68[0] != (code *)0x0) {
        pppuVar16 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar16 = local_40;
        }
        (*(code *)(*pppuVar16)[2])();
      }
    }
  }
  return;
}

// Start @ 14ef14070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FRemoveSessionMember>::Start
          (TWrappedOp<UE::Online::FRemoveSessionMember> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  double dVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  atomic<int> aVar12;
  TWrappedOp<UE::Online::FRemoveSessionMember> *pTVar13;
  FTSTicker *this_00;
  TWeakPtr<FTSTicker::FElement,1> *pTVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  TWrappedOp<UE::Online::FRemoveSessionMember> *pTVar17;
  TWrappedOp<UE::Online::FRemoveSessionMember> *pTVar18;
  TWrappedOp<UE::Online::FRemoveSessionMember> *pTVar19;
  bool bVar20;
  undefined1 auStackY_f8 [32];
  LARGE_INTEGER local_c8;
  <lambda_1> local_c0;
  TWeakPtr<FTSTicker::FElement,1> local_a8;
  undefined1 local_98 [48];
  code *local_68 [2];
  undefined **local_58;
  TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *local_50;
  TReferenceControllerBase<1> *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pTVar3 = (this->Op).Object;
  pTVar19 = (TWrappedOp<UE::Online::FRemoveSessionMember> *)0x0;
  pTVar13 = (TWrappedOp<UE::Online::FRemoveSessionMember> *)this->_padding_;
  pTVar17 = pTVar13;
  pTVar18 = pTVar19;
  if (pTVar13 != (TWrappedOp<UE::Online::FRemoveSessionMember> *)0x0) {
    aVar2 = *(atomic<int> *)&pTVar13->_padding_;
    do {
      pTVar17 = pTVar19;
      pTVar18 = (TWrappedOp<UE::Online::FRemoveSessionMember> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14ef140d5;
      LOCK();
      aVar12 = *(atomic<int> *)&pTVar13->_padding_;
      bVar20 = aVar2 == aVar12;
      if (bVar20) {
        *(atomic<int> *)&pTVar13->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar12 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar12;
    } while (!bVar20);
    pTVar17 = pTVar13;
    pTVar18 = (TWrappedOp<UE::Online::FRemoveSessionMember> *)this->_padding_;
  }
LAB_14ef140d5:
  pTVar13 = (TWrappedOp<UE::Online::FRemoveSessionMember> *)&pTVar18->_padding_;
  if (pTVar18 == (TWrappedOp<UE::Online::FRemoveSessionMember> *)0x0) {
    pTVar13 = pTVar19;
  }
  if ((pTVar13 != (TWrappedOp<UE::Online::FRemoveSessionMember> *)&this->_padding_) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar18 == (TWrappedOp<UE::Online::FRemoveSessionMember> *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pTVar17 != (TWrappedOp<UE::Online::FRemoveSessionMember> *)0x0) {
    LOCK();
    ((atomic<int> *)&pTVar17->_padding_)[1] =
         (atomic<int>)((int)((atomic<int> *)&pTVar17->_padding_)[1] + 1);
    UNLOCK();
  }
  local_c0.__this = this;
  local_c0.WeakThis.Object = pTVar18;
  local_c0.WeakThis.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar17;
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_const_&)>
  ::
  Add<_UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FRemoveSessionMember>::Start_::__l2::<lambda_1>_>
            (&pTVar3->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_98,&local_c0);
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  lVar7 = *(longlong *)&(this->OnCompleteHandle).DelegateUnbinder;
  uVar8 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8;
  uVar9 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
  uVar10 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18;
  uVar11 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20;
  plVar15 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder = local_98._0_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8 = local_98._8_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10 = local_98._16_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18 = local_98._24_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20 = local_98._32_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28 = local_98._40_8_;
  local_98._0_8_ = lVar7;
  local_98._8_8_ = uVar8;
  local_98._16_8_ = uVar9;
  local_98._24_8_ = uVar10;
  local_98._32_8_ = uVar11;
  local_98._40_8_ = plVar15;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_98);
  if (local_98._0_8_ != 0) {
    plVar15 = (longlong *)(local_98 + 0x10);
    if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_98._40_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if ((TWrappedOp<UE::Online::FRemoveSessionMember> *)
      local_c0.WeakThis.WeakReferenceCount.ReferenceController !=
      (TWrappedOp<UE::Online::FRemoveSessionMember> *)0x0) {
    LOCK();
    paVar1 = &(local_c0.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_c0.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_c0.WeakThis.WeakReferenceCount.ReferenceController,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar17);
  if (this->DelayInSeconds <= 0.0) {
    TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::Start((this->Op).Object);
  }
  else {
    QueryPerformanceCounter(&local_c8);
    dVar6 = (double)(local_c8.QuadPart - this->EnqueueCycles) *
            FGenericPlatformTime::SecondsPerCycle64;
    if (this->DelayInSeconds <= dVar6) {
      TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::Start((this->Op).Object);
    }
    else {
      this_00 = FTSTicker::GetCoreTicker();
      local_48 = (this->Op).SharedReferenceCount.ReferenceController;
      local_50 = (this->Op).Object;
      if (local_48 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_48->WeakReferenceCount = (atomic<int>)((int)local_48->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_58 = &
                 ___7__TFunction_OwnedObject_V<lambda_2>__7__Start___TWrappedOp_UFRemoveSessionMember_Online_UE___FOnlineAsyncOpQueue_Online_UE__UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
      ;
      local_68[0] = Core::Private::Function::
                    TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FRemoveSessionMember>::Start'::__l8::<lambda_2>,bool,float>
                    ::Call;
      local_40 = (undefined ***)0x0;
      pTVar14 = FTSTicker::AddTicker
                          (this_00,&local_a8,L"StartDelayedOnlineAsyncOp",
                           (float)(this->DelayInSeconds - dVar6),
                           (TUniqueFunction<bool___cdecl(float)> *)local_68);
      if (&this->TickerHandle != pTVar14) {
        (this->TickerHandle).Object = pTVar14->Object;
        pTVar14->Object = (FElement *)0x0;
        pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
        (this->TickerHandle).WeakReferenceCount.ReferenceController =
             (pTVar14->WeakReferenceCount).ReferenceController;
        (pTVar14->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
      if (local_a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_a8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_a8.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_68[0] != (code *)0x0) {
        pppuVar16 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar16 = local_40;
        }
        (*(code *)(*pppuVar16)[2])();
      }
    }
  }
  return;
}

// Start @ 14ef143b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FSendSessionInvite>::Start
          (TWrappedOp<UE::Online::FSendSessionInvite> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TOnlineAsyncOp<UE::Online::FSendSessionInvite> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  double dVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  atomic<int> aVar12;
  TWrappedOp<UE::Online::FSendSessionInvite> *pTVar13;
  FTSTicker *this_00;
  TWeakPtr<FTSTicker::FElement,1> *pTVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  TWrappedOp<UE::Online::FSendSessionInvite> *pTVar17;
  TWrappedOp<UE::Online::FSendSessionInvite> *pTVar18;
  TWrappedOp<UE::Online::FSendSessionInvite> *pTVar19;
  bool bVar20;
  undefined1 auStackY_f8 [32];
  LARGE_INTEGER local_c8;
  <lambda_1> local_c0;
  TWeakPtr<FTSTicker::FElement,1> local_a8;
  undefined1 local_98 [48];
  code *local_68 [2];
  undefined **local_58;
  TOnlineAsyncOp<UE::Online::FSendSessionInvite> *local_50;
  TReferenceControllerBase<1> *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pTVar3 = (this->Op).Object;
  pTVar19 = (TWrappedOp<UE::Online::FSendSessionInvite> *)0x0;
  pTVar13 = (TWrappedOp<UE::Online::FSendSessionInvite> *)this->_padding_;
  pTVar17 = pTVar13;
  pTVar18 = pTVar19;
  if (pTVar13 != (TWrappedOp<UE::Online::FSendSessionInvite> *)0x0) {
    aVar2 = *(atomic<int> *)&pTVar13->_padding_;
    do {
      pTVar17 = pTVar19;
      pTVar18 = (TWrappedOp<UE::Online::FSendSessionInvite> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14ef14415;
      LOCK();
      aVar12 = *(atomic<int> *)&pTVar13->_padding_;
      bVar20 = aVar2 == aVar12;
      if (bVar20) {
        *(atomic<int> *)&pTVar13->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar12 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar12;
    } while (!bVar20);
    pTVar17 = pTVar13;
    pTVar18 = (TWrappedOp<UE::Online::FSendSessionInvite> *)this->_padding_;
  }
LAB_14ef14415:
  pTVar13 = (TWrappedOp<UE::Online::FSendSessionInvite> *)&pTVar18->_padding_;
  if (pTVar18 == (TWrappedOp<UE::Online::FSendSessionInvite> *)0x0) {
    pTVar13 = pTVar19;
  }
  if ((pTVar13 != (TWrappedOp<UE::Online::FSendSessionInvite> *)&this->_padding_) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar18 == (TWrappedOp<UE::Online::FSendSessionInvite> *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pTVar17 != (TWrappedOp<UE::Online::FSendSessionInvite> *)0x0) {
    LOCK();
    ((atomic<int> *)&pTVar17->_padding_)[1] =
         (atomic<int>)((int)((atomic<int> *)&pTVar17->_padding_)[1] + 1);
    UNLOCK();
  }
  local_c0.__this = this;
  local_c0.WeakThis.Object = pTVar18;
  local_c0.WeakThis.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar17;
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_const_&)>
  ::
  Add<_UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FSendSessionInvite>::Start_::__l2::<lambda_1>_>
            (&pTVar3->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_98,&local_c0);
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  lVar7 = *(longlong *)&(this->OnCompleteHandle).DelegateUnbinder;
  uVar8 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8;
  uVar9 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
  uVar10 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18;
  uVar11 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20;
  plVar15 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder = local_98._0_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8 = local_98._8_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10 = local_98._16_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18 = local_98._24_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20 = local_98._32_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28 = local_98._40_8_;
  local_98._0_8_ = lVar7;
  local_98._8_8_ = uVar8;
  local_98._16_8_ = uVar9;
  local_98._24_8_ = uVar10;
  local_98._32_8_ = uVar11;
  local_98._40_8_ = plVar15;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_98);
  if (local_98._0_8_ != 0) {
    plVar15 = (longlong *)(local_98 + 0x10);
    if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_98._40_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if ((TWrappedOp<UE::Online::FSendSessionInvite> *)
      local_c0.WeakThis.WeakReferenceCount.ReferenceController !=
      (TWrappedOp<UE::Online::FSendSessionInvite> *)0x0) {
    LOCK();
    paVar1 = &(local_c0.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_c0.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_c0.WeakThis.WeakReferenceCount.ReferenceController,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar17);
  if (this->DelayInSeconds <= 0.0) {
    TOnlineAsyncOp<UE::Online::FSendSessionInvite>::Start((this->Op).Object);
  }
  else {
    QueryPerformanceCounter(&local_c8);
    dVar6 = (double)(local_c8.QuadPart - this->EnqueueCycles) *
            FGenericPlatformTime::SecondsPerCycle64;
    if (this->DelayInSeconds <= dVar6) {
      TOnlineAsyncOp<UE::Online::FSendSessionInvite>::Start((this->Op).Object);
    }
    else {
      this_00 = FTSTicker::GetCoreTicker();
      local_48 = (this->Op).SharedReferenceCount.ReferenceController;
      local_50 = (this->Op).Object;
      if (local_48 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_48->WeakReferenceCount = (atomic<int>)((int)local_48->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_58 = &
                 ___7__TFunction_OwnedObject_V<lambda_2>__7__Start___TWrappedOp_UFSendSessionInvite_Online_UE___FOnlineAsyncOpQueue_Online_UE__UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
      ;
      local_68[0] = Core::Private::Function::
                    TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FSendSessionInvite>::Start'::__l8::<lambda_2>,bool,float>
                    ::Call;
      local_40 = (undefined ***)0x0;
      pTVar14 = FTSTicker::AddTicker
                          (this_00,&local_a8,L"StartDelayedOnlineAsyncOp",
                           (float)(this->DelayInSeconds - dVar6),
                           (TUniqueFunction<bool___cdecl(float)> *)local_68);
      if (&this->TickerHandle != pTVar14) {
        (this->TickerHandle).Object = pTVar14->Object;
        pTVar14->Object = (FElement *)0x0;
        pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
        (this->TickerHandle).WeakReferenceCount.ReferenceController =
             (pTVar14->WeakReferenceCount).ReferenceController;
        (pTVar14->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
      if (local_a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_a8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_a8.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_68[0] != (code *)0x0) {
        pppuVar16 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar16 = local_40;
        }
        (*(code *)(*pppuVar16)[2])();
      }
    }
  }
  return;
}

// Start @ 14ef146f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FStartMatchmaking>::Start
          (TWrappedOp<UE::Online::FStartMatchmaking> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TOnlineAsyncOp<UE::Online::FStartMatchmaking> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  double dVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  atomic<int> aVar12;
  TWrappedOp<UE::Online::FStartMatchmaking> *pTVar13;
  FTSTicker *this_00;
  TWeakPtr<FTSTicker::FElement,1> *pTVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  TWrappedOp<UE::Online::FStartMatchmaking> *pTVar17;
  TWrappedOp<UE::Online::FStartMatchmaking> *pTVar18;
  TWrappedOp<UE::Online::FStartMatchmaking> *pTVar19;
  bool bVar20;
  undefined1 auStackY_f8 [32];
  LARGE_INTEGER local_c8;
  <lambda_1> local_c0;
  TWeakPtr<FTSTicker::FElement,1> local_a8;
  undefined1 local_98 [48];
  code *local_68 [2];
  undefined **local_58;
  TOnlineAsyncOp<UE::Online::FStartMatchmaking> *local_50;
  TReferenceControllerBase<1> *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pTVar3 = (this->Op).Object;
  pTVar19 = (TWrappedOp<UE::Online::FStartMatchmaking> *)0x0;
  pTVar13 = (TWrappedOp<UE::Online::FStartMatchmaking> *)this->_padding_;
  pTVar17 = pTVar13;
  pTVar18 = pTVar19;
  if (pTVar13 != (TWrappedOp<UE::Online::FStartMatchmaking> *)0x0) {
    aVar2 = *(atomic<int> *)&pTVar13->_padding_;
    do {
      pTVar17 = pTVar19;
      pTVar18 = (TWrappedOp<UE::Online::FStartMatchmaking> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14ef14755;
      LOCK();
      aVar12 = *(atomic<int> *)&pTVar13->_padding_;
      bVar20 = aVar2 == aVar12;
      if (bVar20) {
        *(atomic<int> *)&pTVar13->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar12 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar12;
    } while (!bVar20);
    pTVar17 = pTVar13;
    pTVar18 = (TWrappedOp<UE::Online::FStartMatchmaking> *)this->_padding_;
  }
LAB_14ef14755:
  pTVar13 = (TWrappedOp<UE::Online::FStartMatchmaking> *)&pTVar18->_padding_;
  if (pTVar18 == (TWrappedOp<UE::Online::FStartMatchmaking> *)0x0) {
    pTVar13 = pTVar19;
  }
  if ((pTVar13 != (TWrappedOp<UE::Online::FStartMatchmaking> *)&this->_padding_) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar18 == (TWrappedOp<UE::Online::FStartMatchmaking> *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pTVar17 != (TWrappedOp<UE::Online::FStartMatchmaking> *)0x0) {
    LOCK();
    ((atomic<int> *)&pTVar17->_padding_)[1] =
         (atomic<int>)((int)((atomic<int> *)&pTVar17->_padding_)[1] + 1);
    UNLOCK();
  }
  local_c0.__this = this;
  local_c0.WeakThis.Object = pTVar18;
  local_c0.WeakThis.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar17;
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&,UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_const_&)>
  ::
  Add<_UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FStartMatchmaking>::Start_::__l2::<lambda_1>_>
            (&pTVar3->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_98,&local_c0);
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  lVar7 = *(longlong *)&(this->OnCompleteHandle).DelegateUnbinder;
  uVar8 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8;
  uVar9 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
  uVar10 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18;
  uVar11 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20;
  plVar15 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder = local_98._0_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8 = local_98._8_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10 = local_98._16_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18 = local_98._24_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20 = local_98._32_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28 = local_98._40_8_;
  local_98._0_8_ = lVar7;
  local_98._8_8_ = uVar8;
  local_98._16_8_ = uVar9;
  local_98._24_8_ = uVar10;
  local_98._32_8_ = uVar11;
  local_98._40_8_ = plVar15;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_98);
  if (local_98._0_8_ != 0) {
    plVar15 = (longlong *)(local_98 + 0x10);
    if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_98._40_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if ((TWrappedOp<UE::Online::FStartMatchmaking> *)
      local_c0.WeakThis.WeakReferenceCount.ReferenceController !=
      (TWrappedOp<UE::Online::FStartMatchmaking> *)0x0) {
    LOCK();
    paVar1 = &(local_c0.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_c0.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_c0.WeakThis.WeakReferenceCount.ReferenceController,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar17);
  if (this->DelayInSeconds <= 0.0) {
    TOnlineAsyncOp<UE::Online::FStartMatchmaking>::Start((this->Op).Object);
  }
  else {
    QueryPerformanceCounter(&local_c8);
    dVar6 = (double)(local_c8.QuadPart - this->EnqueueCycles) *
            FGenericPlatformTime::SecondsPerCycle64;
    if (this->DelayInSeconds <= dVar6) {
      TOnlineAsyncOp<UE::Online::FStartMatchmaking>::Start((this->Op).Object);
    }
    else {
      this_00 = FTSTicker::GetCoreTicker();
      local_48 = (this->Op).SharedReferenceCount.ReferenceController;
      local_50 = (this->Op).Object;
      if (local_48 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_48->WeakReferenceCount = (atomic<int>)((int)local_48->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_58 = &
                 ___7__TFunction_OwnedObject_V<lambda_2>__7__Start___TWrappedOp_UFStartMatchmaking_Online_UE___FOnlineAsyncOpQueue_Online_UE__UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
      ;
      local_68[0] = Core::Private::Function::
                    TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FStartMatchmaking>::Start'::__l8::<lambda_2>,bool,float>
                    ::Call;
      local_40 = (undefined ***)0x0;
      pTVar14 = FTSTicker::AddTicker
                          (this_00,&local_a8,L"StartDelayedOnlineAsyncOp",
                           (float)(this->DelayInSeconds - dVar6),
                           (TUniqueFunction<bool___cdecl(float)> *)local_68);
      if (&this->TickerHandle != pTVar14) {
        (this->TickerHandle).Object = pTVar14->Object;
        pTVar14->Object = (FElement *)0x0;
        pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
        (this->TickerHandle).WeakReferenceCount.ReferenceController =
             (pTVar14->WeakReferenceCount).ReferenceController;
        (pTVar14->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
      if (local_a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_a8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_a8.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_68[0] != (code *)0x0) {
        pppuVar16 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar16 = local_40;
        }
        (*(code *)(*pppuVar16)[2])();
      }
    }
  }
  return;
}

// Start @ 14ef14a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FUpdateSessionSettings>::Start
          (TWrappedOp<UE::Online::FUpdateSessionSettings> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  double dVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  atomic<int> aVar12;
  TWrappedOp<UE::Online::FUpdateSessionSettings> *pTVar13;
  FTSTicker *this_00;
  TWeakPtr<FTSTicker::FElement,1> *pTVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  TWrappedOp<UE::Online::FUpdateSessionSettings> *pTVar17;
  TWrappedOp<UE::Online::FUpdateSessionSettings> *pTVar18;
  TWrappedOp<UE::Online::FUpdateSessionSettings> *pTVar19;
  bool bVar20;
  undefined1 auStackY_f8 [32];
  LARGE_INTEGER local_c8;
  <lambda_1> local_c0;
  TWeakPtr<FTSTicker::FElement,1> local_a8;
  undefined1 local_98 [48];
  code *local_68 [2];
  undefined **local_58;
  TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *local_50;
  TReferenceControllerBase<1> *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pTVar3 = (this->Op).Object;
  pTVar19 = (TWrappedOp<UE::Online::FUpdateSessionSettings> *)0x0;
  pTVar13 = (TWrappedOp<UE::Online::FUpdateSessionSettings> *)this->_padding_;
  pTVar17 = pTVar13;
  pTVar18 = pTVar19;
  if (pTVar13 != (TWrappedOp<UE::Online::FUpdateSessionSettings> *)0x0) {
    aVar2 = *(atomic<int> *)&pTVar13->_padding_;
    do {
      pTVar17 = pTVar19;
      pTVar18 = (TWrappedOp<UE::Online::FUpdateSessionSettings> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14ef14a95;
      LOCK();
      aVar12 = *(atomic<int> *)&pTVar13->_padding_;
      bVar20 = aVar2 == aVar12;
      if (bVar20) {
        *(atomic<int> *)&pTVar13->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar12 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar12;
    } while (!bVar20);
    pTVar17 = pTVar13;
    pTVar18 = (TWrappedOp<UE::Online::FUpdateSessionSettings> *)this->_padding_;
  }
LAB_14ef14a95:
  pTVar13 = (TWrappedOp<UE::Online::FUpdateSessionSettings> *)&pTVar18->_padding_;
  if (pTVar18 == (TWrappedOp<UE::Online::FUpdateSessionSettings> *)0x0) {
    pTVar13 = pTVar19;
  }
  if ((pTVar13 != (TWrappedOp<UE::Online::FUpdateSessionSettings> *)&this->_padding_) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar18 == (TWrappedOp<UE::Online::FUpdateSessionSettings> *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pTVar17 != (TWrappedOp<UE::Online::FUpdateSessionSettings> *)0x0) {
    LOCK();
    ((atomic<int> *)&pTVar17->_padding_)[1] =
         (atomic<int>)((int)((atomic<int> *)&pTVar17->_padding_)[1] + 1);
    UNLOCK();
  }
  local_c0.__this = this;
  local_c0.WeakThis.Object = pTVar18;
  local_c0.WeakThis.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar17;
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_const_&)>
  ::
  Add<_UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FUpdateSessionSettings>::Start_::__l2::<lambda_1>_>
            (&pTVar3->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_98,&local_c0);
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  lVar7 = *(longlong *)&(this->OnCompleteHandle).DelegateUnbinder;
  uVar8 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8;
  uVar9 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
  uVar10 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18;
  uVar11 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20;
  plVar15 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder = local_98._0_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8 = local_98._8_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10 = local_98._16_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18 = local_98._24_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20 = local_98._32_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28 = local_98._40_8_;
  local_98._0_8_ = lVar7;
  local_98._8_8_ = uVar8;
  local_98._16_8_ = uVar9;
  local_98._24_8_ = uVar10;
  local_98._32_8_ = uVar11;
  local_98._40_8_ = plVar15;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_98);
  if (local_98._0_8_ != 0) {
    plVar15 = (longlong *)(local_98 + 0x10);
    if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_98._40_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if ((TWrappedOp<UE::Online::FUpdateSessionSettings> *)
      local_c0.WeakThis.WeakReferenceCount.ReferenceController !=
      (TWrappedOp<UE::Online::FUpdateSessionSettings> *)0x0) {
    LOCK();
    paVar1 = &(local_c0.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_c0.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_c0.WeakThis.WeakReferenceCount.ReferenceController,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar17);
  if (this->DelayInSeconds <= 0.0) {
    TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::Start((this->Op).Object);
  }
  else {
    QueryPerformanceCounter(&local_c8);
    dVar6 = (double)(local_c8.QuadPart - this->EnqueueCycles) *
            FGenericPlatformTime::SecondsPerCycle64;
    if (this->DelayInSeconds <= dVar6) {
      TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::Start((this->Op).Object);
    }
    else {
      this_00 = FTSTicker::GetCoreTicker();
      local_48 = (this->Op).SharedReferenceCount.ReferenceController;
      local_50 = (this->Op).Object;
      if (local_48 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_48->WeakReferenceCount = (atomic<int>)((int)local_48->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_58 = &
                 ___7__TFunction_OwnedObject_V<lambda_2>__7__Start___TWrappedOp_UFUpdateSessionSettings_Online_UE___FOnlineAsyncOpQueue_Online_UE__UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
      ;
      local_68[0] = Core::Private::Function::
                    TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FUpdateSessionSettings>::Start'::__l8::<lambda_2>,bool,float>
                    ::Call;
      local_40 = (undefined ***)0x0;
      pTVar14 = FTSTicker::AddTicker
                          (this_00,&local_a8,L"StartDelayedOnlineAsyncOp",
                           (float)(this->DelayInSeconds - dVar6),
                           (TUniqueFunction<bool___cdecl(float)> *)local_68);
      if (&this->TickerHandle != pTVar14) {
        (this->TickerHandle).Object = pTVar14->Object;
        pTVar14->Object = (FElement *)0x0;
        pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
        (this->TickerHandle).WeakReferenceCount.ReferenceController =
             (pTVar14->WeakReferenceCount).ReferenceController;
        (pTVar14->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
      if (local_a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_a8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_a8.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_68[0] != (code *)0x0) {
        pppuVar16 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar16 = local_40;
        }
        (*(code *)(*pppuVar16)[2])();
      }
    }
  }
  return;
}

// ~TWrappedOp<UE::Online::FFunctionalTestLobbies> @ 14efe6200

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>::
~TWrappedOp<UE::Online::FFunctionalTestLobbies>
          (TWrappedOp<UE::Online::FFunctionalTestLobbies> *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  this->_padding_ =
       (longlong)
       &___7__TWrappedOp_UFFunctionalTestLobbies_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_;
  pTVar5 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  if (*(longlong *)&(this->OnCompleteHandle).DelegateUnbinder != 0) {
    plVar6 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar7 = plVar6;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnCompleteEvent).DelegateRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Op).SharedReferenceCount.ReferenceController);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  this->_padding_ = 0x15309c5b0;
  return;
}

// operator() @ 14efef3b0

void __thiscall
`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>::Start'::__l2::
<lambda_1>::operator()
          (void *this,TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,
          TOnlineResult<UE::Online::FFunctionalTestLobbies> *param_2)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  char cVar6;
  atomic<int> aVar7;
  uint uVar8;
  uint uVar9;
  TReferenceControllerBase<1> *pTVar10;
  longlong lVar11;
  bool bVar12;
  FDestructionSentinel local_38;
  
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar10->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efef3e0;
      }
      LOCK();
      aVar7 = pTVar10->SharedReferenceCount;
      bVar12 = aVar4 == aVar7;
      if (bVar12) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar7 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar7;
    } while (!bVar12);
    if (*(longlong *)((longlong)this + 8) != 0) {
      this_00 = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)(*(longlong *)this + 0x38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_38);
      this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
      bVar12 = false;
      uVar9 = (this_00->InvocationList).ArrayNum - 1;
      if (-1 < (int)uVar9) {
        lVar11 = (longlong)(int)uVar9 << 4;
        bVar12 = false;
        do {
          uVar8 = 0;
          if ((int)uVar9 < (this_00->InvocationList).ArrayNum) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
          if (((*(int *)(pFVar1 + lVar11 + 8) == 0) ||
              (plVar2 = *(longlong **)(pFVar1 + lVar11), plVar2 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
            bVar12 = true;
          }
          lVar11 = lVar11 + -0x10;
          uVar9 = uVar9 - 1;
        } while (-1 < (int)uVar9);
      }
      this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
      if (bVar12) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
        return;
      }
    }
  }
LAB_14efef3e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// Cancel @ 14eff6fe0

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>::Cancel
          (TWrappedOp<UE::Online::FFunctionalTestLobbies> *this,FOnlineError *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  (**(code **)(((this->Op).Object)->_padding_ + 0x10))();
  if ((((this->TickerHandle).Object != (FElement *)0x0) &&
      (pTVar1 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    local_18.Object = (this->TickerHandle).Object;
    local_18.WeakReferenceCount.ReferenceController =
         (this->TickerHandle).WeakReferenceCount.ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_18);
  }
  return;
}

// IsComplete @ 14efff530

bool __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>::IsComplete
          (TWrappedOp<UE::Online::FFunctionalTestLobbies> *this)

{
  return RetryQueued < ((((this->Op).Object)->SharedState).Object)->State;
}

// OnComplete @ 14efff760

TOnlineEvent<void___cdecl(void)> __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>::OnComplete
          (TWrappedOp<UE::Online::FFunctionalTestLobbies> *this)

{
  TOnlineEventCallable<void___cdecl(void)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->OnCompleteEvent;
  return (TOnlineEvent<void___cdecl(void)>)in_RDX;
}

// Start @ 14f002f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>::Start
          (TWrappedOp<UE::Online::FFunctionalTestLobbies> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  double dVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  atomic<int> aVar12;
  TWrappedOp<UE::Online::FFunctionalTestLobbies> *pTVar13;
  FTSTicker *this_00;
  TWeakPtr<FTSTicker::FElement,1> *pTVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  TWrappedOp<UE::Online::FFunctionalTestLobbies> *pTVar17;
  TWrappedOp<UE::Online::FFunctionalTestLobbies> *pTVar18;
  TWrappedOp<UE::Online::FFunctionalTestLobbies> *pTVar19;
  bool bVar20;
  undefined1 auStackY_f8 [32];
  LARGE_INTEGER local_c8;
  <lambda_1> local_c0;
  TWeakPtr<FTSTicker::FElement,1> local_a8;
  undefined1 local_98 [48];
  code *local_68 [2];
  undefined **local_58;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *local_50;
  TReferenceControllerBase<1> *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pTVar3 = (this->Op).Object;
  pTVar19 = (TWrappedOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  pTVar13 = (TWrappedOp<UE::Online::FFunctionalTestLobbies> *)this->_padding_;
  pTVar17 = pTVar13;
  pTVar18 = pTVar19;
  if (pTVar13 != (TWrappedOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
    aVar2 = *(atomic<int> *)&pTVar13->_padding_;
    do {
      pTVar17 = pTVar19;
      pTVar18 = (TWrappedOp<UE::Online::FFunctionalTestLobbies> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14f002fc5;
      LOCK();
      aVar12 = *(atomic<int> *)&pTVar13->_padding_;
      bVar20 = aVar2 == aVar12;
      if (bVar20) {
        *(atomic<int> *)&pTVar13->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar12 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar12;
    } while (!bVar20);
    pTVar17 = pTVar13;
    pTVar18 = (TWrappedOp<UE::Online::FFunctionalTestLobbies> *)this->_padding_;
  }
LAB_14f002fc5:
  pTVar13 = (TWrappedOp<UE::Online::FFunctionalTestLobbies> *)&pTVar18->_padding_;
  if (pTVar18 == (TWrappedOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
    pTVar13 = pTVar19;
  }
  if ((pTVar13 != (TWrappedOp<UE::Online::FFunctionalTestLobbies> *)&this->_padding_) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar18 == (TWrappedOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pTVar17 != (TWrappedOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
    LOCK();
    ((atomic<int> *)&pTVar17->_padding_)[1] =
         (atomic<int>)((int)((atomic<int> *)&pTVar17->_padding_)[1] + 1);
    UNLOCK();
  }
  local_c0.__this = this;
  local_c0.WeakThis.Object = pTVar18;
  local_c0.WeakThis.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar17;
  TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFunctionalTestLobbies>_const_&)>
  ::
  Add<_UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>::Start_::__l2::<lambda_1>_>
            (&pTVar3->OnCompleteEvent,(FOnlineEventDelegateHandle *)local_98,&local_c0);
  FOnlineEventDelegateHandle::Unbind(&this->OnCompleteHandle);
  lVar7 = *(longlong *)&(this->OnCompleteHandle).DelegateUnbinder;
  uVar8 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8;
  uVar9 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10;
  uVar10 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18;
  uVar11 = *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20;
  plVar15 = *(longlong **)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder = local_98._0_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x8 = local_98._8_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x10 = local_98._16_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x18 = local_98._24_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x20 = local_98._32_8_;
  *(undefined8 *)&(this->OnCompleteHandle).DelegateUnbinder.field_0x28 = local_98._40_8_;
  local_98._0_8_ = lVar7;
  local_98._8_8_ = uVar8;
  local_98._16_8_ = uVar9;
  local_98._24_8_ = uVar10;
  local_98._32_8_ = uVar11;
  local_98._40_8_ = plVar15;
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)local_98);
  if (local_98._0_8_ != 0) {
    plVar15 = (longlong *)(local_98 + 0x10);
    if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_98._40_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if ((TWrappedOp<UE::Online::FFunctionalTestLobbies> *)
      local_c0.WeakThis.WeakReferenceCount.ReferenceController !=
      (TWrappedOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
    LOCK();
    paVar1 = &(local_c0.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_c0.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_c0.WeakThis.WeakReferenceCount.ReferenceController,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar17);
  if (this->DelayInSeconds <= 0.0) {
    TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::Start((this->Op).Object);
  }
  else {
    QueryPerformanceCounter(&local_c8);
    dVar6 = (double)(local_c8.QuadPart - this->EnqueueCycles) *
            FGenericPlatformTime::SecondsPerCycle64;
    if (this->DelayInSeconds <= dVar6) {
      TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::Start((this->Op).Object);
    }
    else {
      this_00 = FTSTicker::GetCoreTicker();
      local_48 = (this->Op).SharedReferenceCount.ReferenceController;
      local_50 = (this->Op).Object;
      if (local_48 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_48->WeakReferenceCount = (atomic<int>)((int)local_48->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_58 = &
                 ___7__TFunction_OwnedObject_V<lambda_2>__7__Start___TWrappedOp_UFFunctionalTestLobbies_Online_UE___FOnlineAsyncOpQueue_Online_UE__UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
      ;
      local_68[0] = Core::Private::Function::
                    TFunctionRefCaller<`UE::Online::FOnlineAsyncOpQueue::TWrappedOp<UE::Online::FFunctionalTestLobbies>::Start'::__l8::<lambda_2>,bool,float>
                    ::Call;
      local_40 = (undefined ***)0x0;
      pTVar14 = FTSTicker::AddTicker
                          (this_00,&local_a8,L"StartDelayedOnlineAsyncOp",
                           (float)(this->DelayInSeconds - dVar6),
                           (TUniqueFunction<bool___cdecl(float)> *)local_68);
      if (&this->TickerHandle != pTVar14) {
        (this->TickerHandle).Object = pTVar14->Object;
        pTVar14->Object = (FElement *)0x0;
        pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
        (this->TickerHandle).WeakReferenceCount.ReferenceController =
             (pTVar14->WeakReferenceCount).ReferenceController;
        (pTVar14->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
      if (local_a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_a8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_a8.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_68[0] != (code *)0x0) {
        pppuVar16 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar16 = local_40;
        }
        (*(code *)(*pppuVar16)[2])();
      }
    }
  }
  return;
}


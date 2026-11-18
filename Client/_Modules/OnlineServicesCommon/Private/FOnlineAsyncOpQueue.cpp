// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 13

// Enqueue<UE::Online::FAddSessionMember> @ 14eda9f00

void __thiscall
UE::Online::FOnlineAsyncOpQueue::Enqueue<UE::Online::FAddSessionMember>
          (FOnlineAsyncOpQueue *this,TOnlineAsyncOp<UE::Online::FAddSessionMember> *param_1,
          double param_2)

{
  TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
  *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  LARGE_INTEGER LVar9;
  FNode *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  LARGE_INTEGER local_res8;
  
  this_00 = &this->QueuedOperations;
  LVar8 = (LARGE_INTEGER)::operator_new(0xa0);
  LVar9.QuadPart = 0;
  if ((TReferenceControllerBase<1> *)LVar8.QuadPart == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    *(atomic<int> *)(LVar8.QuadPart + 8) = (atomic<int>)0x1;
    *(atomic<int> *)(LVar8.QuadPart + 0xc) = (atomic<int>)0x1;
    *(undefined8 *)(LVar8.QuadPart + 0x18) = 0;
    *(undefined ***)LVar8 =
         &
         ___7__TIntrusiveReferenceController_V__TWrappedOp_UFAddSessionMember_Online_UE___FOnlineAsyncOpQueue_Online_UE___00_SharedPointerInternals__6B_
    ;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10))->_padding_ =
         (longlong)
         &___7__TWrappedOp_UFAddSessionMember_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x20))->_padding_ = 0;
    TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>,1>::AsShared
              ((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>,1> *)
               &param_1->_padding_,
               (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>,1> *)
               (LVar8.QuadPart + 0x28));
    *(double *)(LVar8.QuadPart + 0x38) = param_2;
    if (0.0 < param_2) {
      QueryPerformanceCounter(&local_res8);
      LVar9 = local_res8;
    }
    *(LARGE_INTEGER *)(LVar8.QuadPart + 0x40) = LVar9;
    TOnlineEventCallable<void___cdecl(void)>::TOnlineEventCallable<void___cdecl(void)>
              ((TOnlineEventCallable<void___cdecl(void)> *)(LVar8.QuadPart + 0x48));
    pTVar11 = (TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10);
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x60))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x88) = 0;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x90))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x98) = 0;
    LVar9 = LVar8;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_14edaa078;
    }
  }
  lVar4._0_4_ = pTVar11->SharedReferenceCount;
  lVar4._4_4_ = pTVar11->WeakReferenceCount;
  if (((lVar4 == 0) || (pTVar11[1]._padding_ == 0)) || (*(int *)(pTVar11[1]._padding_ + 8) < 1)) {
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(LVar9.QuadPart + 8) =
           (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount = pTVar11;
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart !=
        (TReferenceControllerBase<1> *)pTVar11[1]._padding_) {
      if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(LVar9.QuadPart + 0xc) =
             (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 0xc) + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pTVar11[1]._padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      ((LARGE_INTEGER *)(pTVar11 + 1))->QuadPart = (LONGLONG)LVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)LVar9);
  }
LAB_14edaa078:
  pFVar10 = TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
            ::AllocNode(this_00);
  *(TReferenceControllerBase<1> **)(pFVar10->Value).Pad = pTVar11;
  ((LARGE_INTEGER *)((pFVar10->Value).Pad + 8))->QuadPart = (LONGLONG)LVar9;
  if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(LVar9.QuadPart + 8) =
         (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
    UNLOCK();
  }
  if ((this_00 ==
       (TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
        *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  LOCK();
  bVar7 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow(&this_00->Mutex);
  }
  ((this->QueuedOperations).Head)->Next = pFVar10;
  (this->QueuedOperations).Head = pFVar10;
  LOCK();
  aVar2 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)LVar9);
                    /* WARNING: Could not recover jumptable at 0x00014edaa11e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this);
  return;
}

// Enqueue<UE::Online::FBatchQueryPresence> @ 14edaa130

void __thiscall
UE::Online::FOnlineAsyncOpQueue::Enqueue<UE::Online::FBatchQueryPresence>
          (FOnlineAsyncOpQueue *this,TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *param_1,
          double param_2)

{
  TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
  *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  LARGE_INTEGER LVar9;
  FNode *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  LARGE_INTEGER local_res8;
  
  this_00 = &this->QueuedOperations;
  LVar8 = (LARGE_INTEGER)::operator_new(0xa0);
  LVar9.QuadPart = 0;
  if ((TReferenceControllerBase<1> *)LVar8.QuadPart == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    *(atomic<int> *)(LVar8.QuadPart + 8) = (atomic<int>)0x1;
    *(atomic<int> *)(LVar8.QuadPart + 0xc) = (atomic<int>)0x1;
    *(undefined8 *)(LVar8.QuadPart + 0x18) = 0;
    *(undefined ***)LVar8 =
         &
         ___7__TIntrusiveReferenceController_V__TWrappedOp_UFBatchQueryPresence_Online_UE___FOnlineAsyncOpQueue_Online_UE___00_SharedPointerInternals__6B_
    ;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10))->_padding_ =
         (longlong)
         &___7__TWrappedOp_UFBatchQueryPresence_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x20))->_padding_ = 0;
    TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,1>::AsShared
              ((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,1> *)
               &param_1->_padding_,
               (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,1> *)
               (LVar8.QuadPart + 0x28));
    *(double *)(LVar8.QuadPart + 0x38) = param_2;
    if (0.0 < param_2) {
      QueryPerformanceCounter(&local_res8);
      LVar9 = local_res8;
    }
    *(LARGE_INTEGER *)(LVar8.QuadPart + 0x40) = LVar9;
    TOnlineEventCallable<void___cdecl(void)>::TOnlineEventCallable<void___cdecl(void)>
              ((TOnlineEventCallable<void___cdecl(void)> *)(LVar8.QuadPart + 0x48));
    pTVar11 = (TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10);
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x60))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x88) = 0;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x90))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x98) = 0;
    LVar9 = LVar8;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_14edaa2a8;
    }
  }
  lVar4._0_4_ = pTVar11->SharedReferenceCount;
  lVar4._4_4_ = pTVar11->WeakReferenceCount;
  if (((lVar4 == 0) || (pTVar11[1]._padding_ == 0)) || (*(int *)(pTVar11[1]._padding_ + 8) < 1)) {
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(LVar9.QuadPart + 8) =
           (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount = pTVar11;
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart !=
        (TReferenceControllerBase<1> *)pTVar11[1]._padding_) {
      if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(LVar9.QuadPart + 0xc) =
             (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 0xc) + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pTVar11[1]._padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      ((LARGE_INTEGER *)(pTVar11 + 1))->QuadPart = (LONGLONG)LVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)LVar9);
  }
LAB_14edaa2a8:
  pFVar10 = TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
            ::AllocNode(this_00);
  *(TReferenceControllerBase<1> **)(pFVar10->Value).Pad = pTVar11;
  ((LARGE_INTEGER *)((pFVar10->Value).Pad + 8))->QuadPart = (LONGLONG)LVar9;
  if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(LVar9.QuadPart + 8) =
         (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
    UNLOCK();
  }
  if ((this_00 ==
       (TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
        *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  LOCK();
  bVar7 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow(&this_00->Mutex);
  }
  ((this->QueuedOperations).Head)->Next = pFVar10;
  (this->QueuedOperations).Head = pFVar10;
  LOCK();
  aVar2 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)LVar9);
                    /* WARNING: Could not recover jumptable at 0x00014edaa34e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this);
  return;
}

// Enqueue<UE::Online::FCreateSession> @ 14edaa360

void __thiscall
UE::Online::FOnlineAsyncOpQueue::Enqueue<UE::Online::FCreateSession>
          (FOnlineAsyncOpQueue *this,TOnlineAsyncOp<UE::Online::FCreateSession> *param_1,
          double param_2)

{
  TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
  *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  LARGE_INTEGER LVar9;
  FNode *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  LARGE_INTEGER local_res8;
  
  this_00 = &this->QueuedOperations;
  LVar8 = (LARGE_INTEGER)::operator_new(0xa0);
  LVar9.QuadPart = 0;
  if ((TReferenceControllerBase<1> *)LVar8.QuadPart == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    *(atomic<int> *)(LVar8.QuadPart + 8) = (atomic<int>)0x1;
    *(atomic<int> *)(LVar8.QuadPart + 0xc) = (atomic<int>)0x1;
    *(undefined8 *)(LVar8.QuadPart + 0x18) = 0;
    *(undefined ***)LVar8 =
         &
         ___7__TIntrusiveReferenceController_V__TWrappedOp_UFCreateSession_Online_UE___FOnlineAsyncOpQueue_Online_UE___00_SharedPointerInternals__6B_
    ;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10))->_padding_ =
         (longlong)&___7__TWrappedOp_UFCreateSession_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x20))->_padding_ = 0;
    TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>,1>::AsShared
              ((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>,1> *)
               &param_1->_padding_,
               (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>,1> *)
               (LVar8.QuadPart + 0x28));
    *(double *)(LVar8.QuadPart + 0x38) = param_2;
    if (0.0 < param_2) {
      QueryPerformanceCounter(&local_res8);
      LVar9 = local_res8;
    }
    *(LARGE_INTEGER *)(LVar8.QuadPart + 0x40) = LVar9;
    TOnlineEventCallable<void___cdecl(void)>::TOnlineEventCallable<void___cdecl(void)>
              ((TOnlineEventCallable<void___cdecl(void)> *)(LVar8.QuadPart + 0x48));
    pTVar11 = (TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10);
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x60))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x88) = 0;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x90))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x98) = 0;
    LVar9 = LVar8;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_14edaa4d8;
    }
  }
  lVar4._0_4_ = pTVar11->SharedReferenceCount;
  lVar4._4_4_ = pTVar11->WeakReferenceCount;
  if (((lVar4 == 0) || (pTVar11[1]._padding_ == 0)) || (*(int *)(pTVar11[1]._padding_ + 8) < 1)) {
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(LVar9.QuadPart + 8) =
           (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount = pTVar11;
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart !=
        (TReferenceControllerBase<1> *)pTVar11[1]._padding_) {
      if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(LVar9.QuadPart + 0xc) =
             (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 0xc) + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pTVar11[1]._padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      ((LARGE_INTEGER *)(pTVar11 + 1))->QuadPart = (LONGLONG)LVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)LVar9);
  }
LAB_14edaa4d8:
  pFVar10 = TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
            ::AllocNode(this_00);
  *(TReferenceControllerBase<1> **)(pFVar10->Value).Pad = pTVar11;
  ((LARGE_INTEGER *)((pFVar10->Value).Pad + 8))->QuadPart = (LONGLONG)LVar9;
  if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(LVar9.QuadPart + 8) =
         (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
    UNLOCK();
  }
  if ((this_00 ==
       (TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
        *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  LOCK();
  bVar7 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow(&this_00->Mutex);
  }
  ((this->QueuedOperations).Head)->Next = pFVar10;
  (this->QueuedOperations).Head = pFVar10;
  LOCK();
  aVar2 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)LVar9);
                    /* WARNING: Could not recover jumptable at 0x00014edaa57e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this);
  return;
}

// Enqueue<UE::Online::FFindSessions> @ 14edaa590

void __thiscall
UE::Online::FOnlineAsyncOpQueue::Enqueue<UE::Online::FFindSessions>
          (FOnlineAsyncOpQueue *this,TOnlineAsyncOp<UE::Online::FFindSessions> *param_1,
          double param_2)

{
  TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
  *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  LARGE_INTEGER LVar9;
  FNode *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  LARGE_INTEGER local_res8;
  
  this_00 = &this->QueuedOperations;
  LVar8 = (LARGE_INTEGER)::operator_new(0xa0);
  LVar9.QuadPart = 0;
  if ((TReferenceControllerBase<1> *)LVar8.QuadPart == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    *(atomic<int> *)(LVar8.QuadPart + 8) = (atomic<int>)0x1;
    *(atomic<int> *)(LVar8.QuadPart + 0xc) = (atomic<int>)0x1;
    *(undefined8 *)(LVar8.QuadPart + 0x18) = 0;
    *(undefined ***)LVar8 =
         &
         ___7__TIntrusiveReferenceController_V__TWrappedOp_UFFindSessions_Online_UE___FOnlineAsyncOpQueue_Online_UE___00_SharedPointerInternals__6B_
    ;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10))->_padding_ =
         (longlong)&___7__TWrappedOp_UFFindSessions_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x20))->_padding_ = 0;
    TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>,1>::AsShared
              ((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>,1> *)
               &param_1->_padding_,
               (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>,1> *)
               (LVar8.QuadPart + 0x28));
    *(double *)(LVar8.QuadPart + 0x38) = param_2;
    if (0.0 < param_2) {
      QueryPerformanceCounter(&local_res8);
      LVar9 = local_res8;
    }
    *(LARGE_INTEGER *)(LVar8.QuadPart + 0x40) = LVar9;
    TOnlineEventCallable<void___cdecl(void)>::TOnlineEventCallable<void___cdecl(void)>
              ((TOnlineEventCallable<void___cdecl(void)> *)(LVar8.QuadPart + 0x48));
    pTVar11 = (TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10);
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x60))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x88) = 0;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x90))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x98) = 0;
    LVar9 = LVar8;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_14edaa708;
    }
  }
  lVar4._0_4_ = pTVar11->SharedReferenceCount;
  lVar4._4_4_ = pTVar11->WeakReferenceCount;
  if (((lVar4 == 0) || (pTVar11[1]._padding_ == 0)) || (*(int *)(pTVar11[1]._padding_ + 8) < 1)) {
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(LVar9.QuadPart + 8) =
           (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount = pTVar11;
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart !=
        (TReferenceControllerBase<1> *)pTVar11[1]._padding_) {
      if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(LVar9.QuadPart + 0xc) =
             (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 0xc) + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pTVar11[1]._padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      ((LARGE_INTEGER *)(pTVar11 + 1))->QuadPart = (LONGLONG)LVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)LVar9);
  }
LAB_14edaa708:
  pFVar10 = TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
            ::AllocNode(this_00);
  *(TReferenceControllerBase<1> **)(pFVar10->Value).Pad = pTVar11;
  ((LARGE_INTEGER *)((pFVar10->Value).Pad + 8))->QuadPart = (LONGLONG)LVar9;
  if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(LVar9.QuadPart + 8) =
         (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
    UNLOCK();
  }
  if ((this_00 ==
       (TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
        *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  LOCK();
  bVar7 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow(&this_00->Mutex);
  }
  ((this->QueuedOperations).Head)->Next = pFVar10;
  (this->QueuedOperations).Head = pFVar10;
  LOCK();
  aVar2 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)LVar9);
                    /* WARNING: Could not recover jumptable at 0x00014edaa7ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this);
  return;
}

// Enqueue<UE::Online::FJoinSession> @ 14edaa7c0

void __thiscall
UE::Online::FOnlineAsyncOpQueue::Enqueue<UE::Online::FJoinSession>
          (FOnlineAsyncOpQueue *this,TOnlineAsyncOp<UE::Online::FJoinSession> *param_1,
          double param_2)

{
  TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
  *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  LARGE_INTEGER LVar9;
  FNode *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  LARGE_INTEGER local_res8;
  
  this_00 = &this->QueuedOperations;
  LVar8 = (LARGE_INTEGER)::operator_new(0xa0);
  LVar9.QuadPart = 0;
  if ((TReferenceControllerBase<1> *)LVar8.QuadPart == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    *(atomic<int> *)(LVar8.QuadPart + 8) = (atomic<int>)0x1;
    *(atomic<int> *)(LVar8.QuadPart + 0xc) = (atomic<int>)0x1;
    *(undefined8 *)(LVar8.QuadPart + 0x18) = 0;
    *(undefined ***)LVar8 =
         &
         ___7__TIntrusiveReferenceController_V__TWrappedOp_UFJoinSession_Online_UE___FOnlineAsyncOpQueue_Online_UE___00_SharedPointerInternals__6B_
    ;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10))->_padding_ =
         (longlong)&___7__TWrappedOp_UFJoinSession_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x20))->_padding_ = 0;
    TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>,1>::AsShared
              ((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>,1> *)
               &param_1->_padding_,
               (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>,1> *)
               (LVar8.QuadPart + 0x28));
    *(double *)(LVar8.QuadPart + 0x38) = param_2;
    if (0.0 < param_2) {
      QueryPerformanceCounter(&local_res8);
      LVar9 = local_res8;
    }
    *(LARGE_INTEGER *)(LVar8.QuadPart + 0x40) = LVar9;
    TOnlineEventCallable<void___cdecl(void)>::TOnlineEventCallable<void___cdecl(void)>
              ((TOnlineEventCallable<void___cdecl(void)> *)(LVar8.QuadPart + 0x48));
    pTVar11 = (TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10);
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x60))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x88) = 0;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x90))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x98) = 0;
    LVar9 = LVar8;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_14edaa938;
    }
  }
  lVar4._0_4_ = pTVar11->SharedReferenceCount;
  lVar4._4_4_ = pTVar11->WeakReferenceCount;
  if (((lVar4 == 0) || (pTVar11[1]._padding_ == 0)) || (*(int *)(pTVar11[1]._padding_ + 8) < 1)) {
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(LVar9.QuadPart + 8) =
           (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount = pTVar11;
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart !=
        (TReferenceControllerBase<1> *)pTVar11[1]._padding_) {
      if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(LVar9.QuadPart + 0xc) =
             (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 0xc) + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pTVar11[1]._padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      ((LARGE_INTEGER *)(pTVar11 + 1))->QuadPart = (LONGLONG)LVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)LVar9);
  }
LAB_14edaa938:
  pFVar10 = TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
            ::AllocNode(this_00);
  *(TReferenceControllerBase<1> **)(pFVar10->Value).Pad = pTVar11;
  ((LARGE_INTEGER *)((pFVar10->Value).Pad + 8))->QuadPart = (LONGLONG)LVar9;
  if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(LVar9.QuadPart + 8) =
         (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
    UNLOCK();
  }
  if ((this_00 ==
       (TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
        *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  LOCK();
  bVar7 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow(&this_00->Mutex);
  }
  ((this->QueuedOperations).Head)->Next = pFVar10;
  (this->QueuedOperations).Head = pFVar10;
  LOCK();
  aVar2 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)LVar9);
                    /* WARNING: Could not recover jumptable at 0x00014edaa9de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this);
  return;
}

// Enqueue<UE::Online::FLeaveSession> @ 14edaa9f0

void __thiscall
UE::Online::FOnlineAsyncOpQueue::Enqueue<UE::Online::FLeaveSession>
          (FOnlineAsyncOpQueue *this,TOnlineAsyncOp<UE::Online::FLeaveSession> *param_1,
          double param_2)

{
  TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
  *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  LARGE_INTEGER LVar9;
  FNode *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  LARGE_INTEGER local_res8;
  
  this_00 = &this->QueuedOperations;
  LVar8 = (LARGE_INTEGER)::operator_new(0xa0);
  LVar9.QuadPart = 0;
  if ((TReferenceControllerBase<1> *)LVar8.QuadPart == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    *(atomic<int> *)(LVar8.QuadPart + 8) = (atomic<int>)0x1;
    *(atomic<int> *)(LVar8.QuadPart + 0xc) = (atomic<int>)0x1;
    *(undefined8 *)(LVar8.QuadPart + 0x18) = 0;
    *(undefined ***)LVar8 =
         &
         ___7__TIntrusiveReferenceController_V__TWrappedOp_UFLeaveSession_Online_UE___FOnlineAsyncOpQueue_Online_UE___00_SharedPointerInternals__6B_
    ;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10))->_padding_ =
         (longlong)&___7__TWrappedOp_UFLeaveSession_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x20))->_padding_ = 0;
    TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>,1>::AsShared
              ((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>,1> *)
               &param_1->_padding_,
               (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>,1> *)
               (LVar8.QuadPart + 0x28));
    *(double *)(LVar8.QuadPart + 0x38) = param_2;
    if (0.0 < param_2) {
      QueryPerformanceCounter(&local_res8);
      LVar9 = local_res8;
    }
    *(LARGE_INTEGER *)(LVar8.QuadPart + 0x40) = LVar9;
    TOnlineEventCallable<void___cdecl(void)>::TOnlineEventCallable<void___cdecl(void)>
              ((TOnlineEventCallable<void___cdecl(void)> *)(LVar8.QuadPart + 0x48));
    pTVar11 = (TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10);
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x60))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x88) = 0;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x90))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x98) = 0;
    LVar9 = LVar8;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_14edaab68;
    }
  }
  lVar4._0_4_ = pTVar11->SharedReferenceCount;
  lVar4._4_4_ = pTVar11->WeakReferenceCount;
  if (((lVar4 == 0) || (pTVar11[1]._padding_ == 0)) || (*(int *)(pTVar11[1]._padding_ + 8) < 1)) {
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(LVar9.QuadPart + 8) =
           (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount = pTVar11;
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart !=
        (TReferenceControllerBase<1> *)pTVar11[1]._padding_) {
      if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(LVar9.QuadPart + 0xc) =
             (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 0xc) + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pTVar11[1]._padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      ((LARGE_INTEGER *)(pTVar11 + 1))->QuadPart = (LONGLONG)LVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)LVar9);
  }
LAB_14edaab68:
  pFVar10 = TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
            ::AllocNode(this_00);
  *(TReferenceControllerBase<1> **)(pFVar10->Value).Pad = pTVar11;
  ((LARGE_INTEGER *)((pFVar10->Value).Pad + 8))->QuadPart = (LONGLONG)LVar9;
  if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(LVar9.QuadPart + 8) =
         (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
    UNLOCK();
  }
  if ((this_00 ==
       (TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
        *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  LOCK();
  bVar7 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow(&this_00->Mutex);
  }
  ((this->QueuedOperations).Head)->Next = pFVar10;
  (this->QueuedOperations).Head = pFVar10;
  LOCK();
  aVar2 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)LVar9);
                    /* WARNING: Could not recover jumptable at 0x00014edaac0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this);
  return;
}

// Enqueue<UE::Online::FRejectSessionInvite> @ 14edaac20

void __thiscall
UE::Online::FOnlineAsyncOpQueue::Enqueue<UE::Online::FRejectSessionInvite>
          (FOnlineAsyncOpQueue *this,TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *param_1,
          double param_2)

{
  TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
  *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  LARGE_INTEGER LVar9;
  FNode *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  LARGE_INTEGER local_res8;
  
  this_00 = &this->QueuedOperations;
  LVar8 = (LARGE_INTEGER)::operator_new(0xa0);
  LVar9.QuadPart = 0;
  if ((TReferenceControllerBase<1> *)LVar8.QuadPart == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    *(atomic<int> *)(LVar8.QuadPart + 8) = (atomic<int>)0x1;
    *(atomic<int> *)(LVar8.QuadPart + 0xc) = (atomic<int>)0x1;
    *(undefined8 *)(LVar8.QuadPart + 0x18) = 0;
    *(undefined ***)LVar8 =
         &
         ___7__TIntrusiveReferenceController_V__TWrappedOp_UFRejectSessionInvite_Online_UE___FOnlineAsyncOpQueue_Online_UE___00_SharedPointerInternals__6B_
    ;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10))->_padding_ =
         (longlong)
         &___7__TWrappedOp_UFRejectSessionInvite_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x20))->_padding_ = 0;
    TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>,1>::AsShared
              ((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>,1> *)
               &param_1->_padding_,
               (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>,1> *)
               (LVar8.QuadPart + 0x28));
    *(double *)(LVar8.QuadPart + 0x38) = param_2;
    if (0.0 < param_2) {
      QueryPerformanceCounter(&local_res8);
      LVar9 = local_res8;
    }
    *(LARGE_INTEGER *)(LVar8.QuadPart + 0x40) = LVar9;
    TOnlineEventCallable<void___cdecl(void)>::TOnlineEventCallable<void___cdecl(void)>
              ((TOnlineEventCallable<void___cdecl(void)> *)(LVar8.QuadPart + 0x48));
    pTVar11 = (TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10);
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x60))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x88) = 0;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x90))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x98) = 0;
    LVar9 = LVar8;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_14edaad98;
    }
  }
  lVar4._0_4_ = pTVar11->SharedReferenceCount;
  lVar4._4_4_ = pTVar11->WeakReferenceCount;
  if (((lVar4 == 0) || (pTVar11[1]._padding_ == 0)) || (*(int *)(pTVar11[1]._padding_ + 8) < 1)) {
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(LVar9.QuadPart + 8) =
           (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount = pTVar11;
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart !=
        (TReferenceControllerBase<1> *)pTVar11[1]._padding_) {
      if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(LVar9.QuadPart + 0xc) =
             (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 0xc) + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pTVar11[1]._padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      ((LARGE_INTEGER *)(pTVar11 + 1))->QuadPart = (LONGLONG)LVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)LVar9);
  }
LAB_14edaad98:
  pFVar10 = TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
            ::AllocNode(this_00);
  *(TReferenceControllerBase<1> **)(pFVar10->Value).Pad = pTVar11;
  ((LARGE_INTEGER *)((pFVar10->Value).Pad + 8))->QuadPart = (LONGLONG)LVar9;
  if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(LVar9.QuadPart + 8) =
         (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
    UNLOCK();
  }
  if ((this_00 ==
       (TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
        *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  LOCK();
  bVar7 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow(&this_00->Mutex);
  }
  ((this->QueuedOperations).Head)->Next = pFVar10;
  (this->QueuedOperations).Head = pFVar10;
  LOCK();
  aVar2 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)LVar9);
                    /* WARNING: Could not recover jumptable at 0x00014edaae3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this);
  return;
}

// Enqueue<UE::Online::FRemoveSessionMember> @ 14edaae50

void __thiscall
UE::Online::FOnlineAsyncOpQueue::Enqueue<UE::Online::FRemoveSessionMember>
          (FOnlineAsyncOpQueue *this,TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *param_1,
          double param_2)

{
  TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
  *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  LARGE_INTEGER LVar9;
  FNode *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  LARGE_INTEGER local_res8;
  
  this_00 = &this->QueuedOperations;
  LVar8 = (LARGE_INTEGER)::operator_new(0xa0);
  LVar9.QuadPart = 0;
  if ((TReferenceControllerBase<1> *)LVar8.QuadPart == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    *(atomic<int> *)(LVar8.QuadPart + 8) = (atomic<int>)0x1;
    *(atomic<int> *)(LVar8.QuadPart + 0xc) = (atomic<int>)0x1;
    *(undefined8 *)(LVar8.QuadPart + 0x18) = 0;
    *(undefined ***)LVar8 =
         &
         ___7__TIntrusiveReferenceController_V__TWrappedOp_UFRemoveSessionMember_Online_UE___FOnlineAsyncOpQueue_Online_UE___00_SharedPointerInternals__6B_
    ;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10))->_padding_ =
         (longlong)
         &___7__TWrappedOp_UFRemoveSessionMember_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x20))->_padding_ = 0;
    TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>,1>::AsShared
              ((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>,1> *)
               &param_1->_padding_,
               (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>,1> *)
               (LVar8.QuadPart + 0x28));
    *(double *)(LVar8.QuadPart + 0x38) = param_2;
    if (0.0 < param_2) {
      QueryPerformanceCounter(&local_res8);
      LVar9 = local_res8;
    }
    *(LARGE_INTEGER *)(LVar8.QuadPart + 0x40) = LVar9;
    TOnlineEventCallable<void___cdecl(void)>::TOnlineEventCallable<void___cdecl(void)>
              ((TOnlineEventCallable<void___cdecl(void)> *)(LVar8.QuadPart + 0x48));
    pTVar11 = (TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10);
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x60))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x88) = 0;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x90))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x98) = 0;
    LVar9 = LVar8;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_14edaafc8;
    }
  }
  lVar4._0_4_ = pTVar11->SharedReferenceCount;
  lVar4._4_4_ = pTVar11->WeakReferenceCount;
  if (((lVar4 == 0) || (pTVar11[1]._padding_ == 0)) || (*(int *)(pTVar11[1]._padding_ + 8) < 1)) {
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(LVar9.QuadPart + 8) =
           (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount = pTVar11;
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart !=
        (TReferenceControllerBase<1> *)pTVar11[1]._padding_) {
      if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(LVar9.QuadPart + 0xc) =
             (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 0xc) + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pTVar11[1]._padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      ((LARGE_INTEGER *)(pTVar11 + 1))->QuadPart = (LONGLONG)LVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)LVar9);
  }
LAB_14edaafc8:
  pFVar10 = TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
            ::AllocNode(this_00);
  *(TReferenceControllerBase<1> **)(pFVar10->Value).Pad = pTVar11;
  ((LARGE_INTEGER *)((pFVar10->Value).Pad + 8))->QuadPart = (LONGLONG)LVar9;
  if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(LVar9.QuadPart + 8) =
         (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
    UNLOCK();
  }
  if ((this_00 ==
       (TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
        *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  LOCK();
  bVar7 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow(&this_00->Mutex);
  }
  ((this->QueuedOperations).Head)->Next = pFVar10;
  (this->QueuedOperations).Head = pFVar10;
  LOCK();
  aVar2 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)LVar9);
                    /* WARNING: Could not recover jumptable at 0x00014edab06e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this);
  return;
}

// Enqueue<UE::Online::FSendSessionInvite> @ 14edab080

void __thiscall
UE::Online::FOnlineAsyncOpQueue::Enqueue<UE::Online::FSendSessionInvite>
          (FOnlineAsyncOpQueue *this,TOnlineAsyncOp<UE::Online::FSendSessionInvite> *param_1,
          double param_2)

{
  TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
  *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  LARGE_INTEGER LVar9;
  FNode *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  LARGE_INTEGER local_res8;
  
  this_00 = &this->QueuedOperations;
  LVar8 = (LARGE_INTEGER)::operator_new(0xa0);
  LVar9.QuadPart = 0;
  if ((TReferenceControllerBase<1> *)LVar8.QuadPart == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    *(atomic<int> *)(LVar8.QuadPart + 8) = (atomic<int>)0x1;
    *(atomic<int> *)(LVar8.QuadPart + 0xc) = (atomic<int>)0x1;
    *(undefined8 *)(LVar8.QuadPart + 0x18) = 0;
    *(undefined ***)LVar8 =
         &
         ___7__TIntrusiveReferenceController_V__TWrappedOp_UFSendSessionInvite_Online_UE___FOnlineAsyncOpQueue_Online_UE___00_SharedPointerInternals__6B_
    ;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10))->_padding_ =
         (longlong)
         &___7__TWrappedOp_UFSendSessionInvite_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x20))->_padding_ = 0;
    TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>,1>::AsShared
              ((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>,1> *)
               &param_1->_padding_,
               (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>,1> *)
               (LVar8.QuadPart + 0x28));
    *(double *)(LVar8.QuadPart + 0x38) = param_2;
    if (0.0 < param_2) {
      QueryPerformanceCounter(&local_res8);
      LVar9 = local_res8;
    }
    *(LARGE_INTEGER *)(LVar8.QuadPart + 0x40) = LVar9;
    TOnlineEventCallable<void___cdecl(void)>::TOnlineEventCallable<void___cdecl(void)>
              ((TOnlineEventCallable<void___cdecl(void)> *)(LVar8.QuadPart + 0x48));
    pTVar11 = (TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10);
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x60))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x88) = 0;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x90))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x98) = 0;
    LVar9 = LVar8;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_14edab1f8;
    }
  }
  lVar4._0_4_ = pTVar11->SharedReferenceCount;
  lVar4._4_4_ = pTVar11->WeakReferenceCount;
  if (((lVar4 == 0) || (pTVar11[1]._padding_ == 0)) || (*(int *)(pTVar11[1]._padding_ + 8) < 1)) {
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(LVar9.QuadPart + 8) =
           (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount = pTVar11;
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart !=
        (TReferenceControllerBase<1> *)pTVar11[1]._padding_) {
      if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(LVar9.QuadPart + 0xc) =
             (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 0xc) + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pTVar11[1]._padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      ((LARGE_INTEGER *)(pTVar11 + 1))->QuadPart = (LONGLONG)LVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)LVar9);
  }
LAB_14edab1f8:
  pFVar10 = TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
            ::AllocNode(this_00);
  *(TReferenceControllerBase<1> **)(pFVar10->Value).Pad = pTVar11;
  ((LARGE_INTEGER *)((pFVar10->Value).Pad + 8))->QuadPart = (LONGLONG)LVar9;
  if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(LVar9.QuadPart + 8) =
         (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
    UNLOCK();
  }
  if ((this_00 ==
       (TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
        *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  LOCK();
  bVar7 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow(&this_00->Mutex);
  }
  ((this->QueuedOperations).Head)->Next = pFVar10;
  (this->QueuedOperations).Head = pFVar10;
  LOCK();
  aVar2 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)LVar9);
                    /* WARNING: Could not recover jumptable at 0x00014edab29e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this);
  return;
}

// Enqueue<UE::Online::FStartMatchmaking> @ 14edab2b0

void __thiscall
UE::Online::FOnlineAsyncOpQueue::Enqueue<UE::Online::FStartMatchmaking>
          (FOnlineAsyncOpQueue *this,TOnlineAsyncOp<UE::Online::FStartMatchmaking> *param_1,
          double param_2)

{
  TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
  *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  LARGE_INTEGER LVar9;
  FNode *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  LARGE_INTEGER local_res8;
  
  this_00 = &this->QueuedOperations;
  LVar8 = (LARGE_INTEGER)::operator_new(0xa0);
  LVar9.QuadPart = 0;
  if ((TReferenceControllerBase<1> *)LVar8.QuadPart == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    *(atomic<int> *)(LVar8.QuadPart + 8) = (atomic<int>)0x1;
    *(atomic<int> *)(LVar8.QuadPart + 0xc) = (atomic<int>)0x1;
    *(undefined8 *)(LVar8.QuadPart + 0x18) = 0;
    *(undefined ***)LVar8 =
         &
         ___7__TIntrusiveReferenceController_V__TWrappedOp_UFStartMatchmaking_Online_UE___FOnlineAsyncOpQueue_Online_UE___00_SharedPointerInternals__6B_
    ;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10))->_padding_ =
         (longlong)
         &___7__TWrappedOp_UFStartMatchmaking_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x20))->_padding_ = 0;
    TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>,1>::AsShared
              ((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>,1> *)
               &param_1->_padding_,
               (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>,1> *)
               (LVar8.QuadPart + 0x28));
    *(double *)(LVar8.QuadPart + 0x38) = param_2;
    if (0.0 < param_2) {
      QueryPerformanceCounter(&local_res8);
      LVar9 = local_res8;
    }
    *(LARGE_INTEGER *)(LVar8.QuadPart + 0x40) = LVar9;
    TOnlineEventCallable<void___cdecl(void)>::TOnlineEventCallable<void___cdecl(void)>
              ((TOnlineEventCallable<void___cdecl(void)> *)(LVar8.QuadPart + 0x48));
    pTVar11 = (TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10);
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x60))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x88) = 0;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x90))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x98) = 0;
    LVar9 = LVar8;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_14edab428;
    }
  }
  lVar4._0_4_ = pTVar11->SharedReferenceCount;
  lVar4._4_4_ = pTVar11->WeakReferenceCount;
  if (((lVar4 == 0) || (pTVar11[1]._padding_ == 0)) || (*(int *)(pTVar11[1]._padding_ + 8) < 1)) {
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(LVar9.QuadPart + 8) =
           (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount = pTVar11;
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart !=
        (TReferenceControllerBase<1> *)pTVar11[1]._padding_) {
      if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(LVar9.QuadPart + 0xc) =
             (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 0xc) + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pTVar11[1]._padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      ((LARGE_INTEGER *)(pTVar11 + 1))->QuadPart = (LONGLONG)LVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)LVar9);
  }
LAB_14edab428:
  pFVar10 = TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
            ::AllocNode(this_00);
  *(TReferenceControllerBase<1> **)(pFVar10->Value).Pad = pTVar11;
  ((LARGE_INTEGER *)((pFVar10->Value).Pad + 8))->QuadPart = (LONGLONG)LVar9;
  if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(LVar9.QuadPart + 8) =
         (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
    UNLOCK();
  }
  if ((this_00 ==
       (TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
        *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  LOCK();
  bVar7 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow(&this_00->Mutex);
  }
  ((this->QueuedOperations).Head)->Next = pFVar10;
  (this->QueuedOperations).Head = pFVar10;
  LOCK();
  aVar2 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)LVar9);
                    /* WARNING: Could not recover jumptable at 0x00014edab4ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this);
  return;
}

// Enqueue<UE::Online::FUpdateSessionSettings> @ 14edab4e0

void __thiscall
UE::Online::FOnlineAsyncOpQueue::Enqueue<UE::Online::FUpdateSessionSettings>
          (FOnlineAsyncOpQueue *this,TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *param_1,
          double param_2)

{
  TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
  *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  LARGE_INTEGER LVar9;
  FNode *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  LARGE_INTEGER local_res8;
  
  this_00 = &this->QueuedOperations;
  LVar8 = (LARGE_INTEGER)::operator_new(0xa0);
  LVar9.QuadPart = 0;
  if ((TReferenceControllerBase<1> *)LVar8.QuadPart == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    *(atomic<int> *)(LVar8.QuadPart + 8) = (atomic<int>)0x1;
    *(atomic<int> *)(LVar8.QuadPart + 0xc) = (atomic<int>)0x1;
    *(undefined8 *)(LVar8.QuadPart + 0x18) = 0;
    *(undefined ***)LVar8 =
         &
         ___7__TIntrusiveReferenceController_V__TWrappedOp_UFUpdateSessionSettings_Online_UE___FOnlineAsyncOpQueue_Online_UE___00_SharedPointerInternals__6B_
    ;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10))->_padding_ =
         (longlong)
         &___7__TWrappedOp_UFUpdateSessionSettings_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x20))->_padding_ = 0;
    TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>,1>::AsShared
              ((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>,1> *)
               &param_1->_padding_,
               (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>,1> *)
               (LVar8.QuadPart + 0x28));
    *(double *)(LVar8.QuadPart + 0x38) = param_2;
    if (0.0 < param_2) {
      QueryPerformanceCounter(&local_res8);
      LVar9 = local_res8;
    }
    *(LARGE_INTEGER *)(LVar8.QuadPart + 0x40) = LVar9;
    TOnlineEventCallable<void___cdecl(void)>::TOnlineEventCallable<void___cdecl(void)>
              ((TOnlineEventCallable<void___cdecl(void)> *)(LVar8.QuadPart + 0x48));
    pTVar11 = (TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10);
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x60))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x88) = 0;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x90))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x98) = 0;
    LVar9 = LVar8;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_14edab658;
    }
  }
  lVar4._0_4_ = pTVar11->SharedReferenceCount;
  lVar4._4_4_ = pTVar11->WeakReferenceCount;
  if (((lVar4 == 0) || (pTVar11[1]._padding_ == 0)) || (*(int *)(pTVar11[1]._padding_ + 8) < 1)) {
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(LVar9.QuadPart + 8) =
           (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount = pTVar11;
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart !=
        (TReferenceControllerBase<1> *)pTVar11[1]._padding_) {
      if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(LVar9.QuadPart + 0xc) =
             (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 0xc) + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pTVar11[1]._padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      ((LARGE_INTEGER *)(pTVar11 + 1))->QuadPart = (LONGLONG)LVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)LVar9);
  }
LAB_14edab658:
  pFVar10 = TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
            ::AllocNode(this_00);
  *(TReferenceControllerBase<1> **)(pFVar10->Value).Pad = pTVar11;
  ((LARGE_INTEGER *)((pFVar10->Value).Pad + 8))->QuadPart = (LONGLONG)LVar9;
  if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(LVar9.QuadPart + 8) =
         (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
    UNLOCK();
  }
  if ((this_00 ==
       (TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
        *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  LOCK();
  bVar7 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow(&this_00->Mutex);
  }
  ((this->QueuedOperations).Head)->Next = pFVar10;
  (this->QueuedOperations).Head = pFVar10;
  LOCK();
  aVar2 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)LVar9);
                    /* WARNING: Could not recover jumptable at 0x00014edab6fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this);
  return;
}

// ~FOnlineAsyncOpQueue @ 14ee24c90

void __thiscall UE::Online::FOnlineAsyncOpQueue::~FOnlineAsyncOpQueue(FOnlineAsyncOpQueue *this)

{
  TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
  *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  FNode *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 uVar5;
  FText *pFVar6;
  FString *pFVar7;
  TSharedRef<UE::Online::FOnlineErrorDetails,1> *pTVar8;
  IWrappedOp *pIVar9;
  FSharedReferencer<1> FVar10;
  IWrappedOp *pIVar11;
  bool bVar12;
  TOptional<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>_>_u_0 local_98;
  TSharedRef<UE::Online::FOnlineErrorDetails,1> local_88;
  FString local_78;
  FText local_68;
  FOnlineErrorDetails *local_58;
  TReferenceControllerBase<1> *local_50;
  undefined8 local_48;
  TReferenceControllerBase<1> *pTStack_40;
  undefined8 local_38;
  
  this_00 = &this->QueuedOperations;
  this->_padding_ = 0x15309c5d8;
  TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>::
  Dequeue(this_00,(TOptional<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>_> *)
                  &local_98.TypedValue);
  uVar5 = local_98.TypedValue.Object;
  while( true ) {
    if ((IWrappedOp *)uVar5 == (IWrappedOp *)0x0) {
      TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
      ::
      ~TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
                (this_00);
      return;
    }
    pcVar2 = *(code **)((longlong)*(IWrappedOp *)uVar5 + 0x10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"OnlineErrors",L"Cancelled",L"Operation was cancelled");
    pFVar7 = ::FString::FString(&local_78,"Common.Cancelled");
    pTVar8 = MakeShared<UE::Online::FOnlineErrorDetails,1,FString,wchar_t_const_(&)[10],FText>
                       (&local_88,pFVar7,(wchar_t (*) [10])L"cancelled",pFVar6);
    local_50 = (pTVar8->SharedReferenceCount).ReferenceController;
    local_58 = pTVar8->Object;
    if (local_50 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38 = 0x1000000100000010;
    local_48 = 0;
    pTStack_40 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    (*pcVar2)(uVar5,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    LOCK();
    bVar12 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
    if (bVar12) {
      (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar12) {
      FMutex::LockSlow(&this_00->Mutex);
    }
    pFVar3 = ((this->QueuedOperations).Tail)->Next;
    LOCK();
    aVar1 = (this_00->Mutex).State;
    (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      FMutex::WakeWaitingThread(&this_00->Mutex);
    }
    if (pFVar3 != (FNode *)0x0) break;
    FVar10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pIVar11 = (IWrappedOp *)0x0;
LAB_14ee24e0c:
    pIVar9 = (IWrappedOp *)0x0;
    if ((IWrappedOp *)uVar5 != (IWrappedOp *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 local_98.TypedValue.SharedReferenceCount.ReferenceController);
      pIVar9 = (IWrappedOp *)0x0;
      local_98.TypedValue.Object = (IWrappedOp *)0x0;
      local_98.TypedValue.SharedReferenceCount.ReferenceController =
           (FSharedReferencer<1>)(TReferenceControllerBase<1> *)0x0;
    }
LAB_14ee24e24:
    uVar5 = pIVar9;
    if (pIVar11 != (IWrappedOp *)0x0) {
LAB_14ee24e29:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar10.ReferenceController);
      uVar5 = pIVar9;
    }
  }
  pTVar4 = *(TReferenceControllerBase<1> **)((pFVar3->Value).Pad + 8);
  pIVar11 = *(IWrappedOp **)(pFVar3->Value).Pad;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pIVar11 == (IWrappedOp *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0xbd,
                          L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                         ), bVar12)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((pFVar3->Value).Pad + 8));
  LOCK();
  bVar12 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar12) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar12) {
    FMutex::LockSlow(&this_00->Mutex);
  }
  (this->QueuedOperations).Tail = pFVar3;
  LOCK();
  aVar1 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  FVar10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pIVar9 = (IWrappedOp *)0x0;
  if (pIVar11 != (IWrappedOp *)0x0) {
    FVar10.ReferenceController = pTVar4;
    pIVar9 = pIVar11;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      if (pIVar11 == (IWrappedOp *)0x0) goto LAB_14ee24f27;
    }
    else {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
LAB_14ee24f27:
  pIVar11 = pIVar9;
  if (pIVar9 == (IWrappedOp *)0x0) goto LAB_14ee24e0c;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             local_98.TypedValue.SharedReferenceCount.ReferenceController);
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.TypedValue.Object = pIVar9;
  local_98.TypedValue.SharedReferenceCount.ReferenceController =
       (FSharedReferencer<1>)FVar10.ReferenceController;
  if (pIVar9 == (IWrappedOp *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsSet()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                        ,0x171,
                        L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                       );
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    goto LAB_14ee24e24;
  }
  goto LAB_14ee24e29;
}

// Enqueue<UE::Online::FFunctionalTestLobbies> @ 14efd90a0

void __thiscall
UE::Online::FOnlineAsyncOpQueue::Enqueue<UE::Online::FFunctionalTestLobbies>
          (FOnlineAsyncOpQueue *this,TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1,
          double param_2)

{
  TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
  *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  LARGE_INTEGER LVar9;
  undefined8 *puVar10;
  FNode *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  LARGE_INTEGER local_res8;
  
  this_00 = &this->QueuedOperations;
  LVar8 = (LARGE_INTEGER)::operator_new(0xa0);
  LVar9.QuadPart = 0;
  if ((TReferenceControllerBase<1> *)LVar8.QuadPart == (TReferenceControllerBase<1> *)0x0) {
    pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    *(atomic<int> *)(LVar8.QuadPart + 8) = (atomic<int>)0x1;
    *(atomic<int> *)(LVar8.QuadPart + 0xc) = (atomic<int>)0x1;
    *(undefined8 *)(LVar8.QuadPart + 0x18) = 0;
    *(undefined ***)LVar8 =
         &
         ___7__TIntrusiveReferenceController_V__TWrappedOp_UFFunctionalTestLobbies_Online_UE___FOnlineAsyncOpQueue_Online_UE___00_SharedPointerInternals__6B_
    ;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10))->_padding_ =
         (longlong)
         &___7__TWrappedOp_UFFunctionalTestLobbies_Online_UE___FOnlineAsyncOpQueue_Online_UE__6B_;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x20))->_padding_ = 0;
    TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::AsShared
              ((TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *)
               &param_1->_padding_,
               (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *)
               (LVar8.QuadPart + 0x28));
    *(double *)(LVar8.QuadPart + 0x38) = param_2;
    if (0.0 < param_2) {
      QueryPerformanceCounter(&local_res8);
      LVar9 = local_res8;
    }
    *(LARGE_INTEGER *)(LVar8.QuadPart + 0x40) = LVar9;
    puVar10 = ::operator_new(0x30);
    if (puVar10 == (undefined8 *)0x0) {
      ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x50))->_padding_ = 0;
      *(undefined8 *)(LVar8.QuadPart + 0x48) = 0x10;
    }
    else {
      *(undefined4 *)(puVar10 + 1) = 1;
      *(undefined4 *)((longlong)puVar10 + 0xc) = 1;
      *puVar10 = &
                 ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXXZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
      ;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 2;
      *(undefined8 **)(LVar8.QuadPart + 0x48) = puVar10 + 2;
      ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x50))->_padding_ = (longlong)puVar10;
      if ((puVar10 + 2 == (undefined8 *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pTVar12 = (TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x10);
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x60))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x88) = 0;
    ((TReferenceControllerBase<1> *)(LVar8.QuadPart + 0x90))->_padding_ = 0;
    *(undefined8 *)(LVar8.QuadPart + 0x98) = 0;
    LVar9 = LVar8;
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_14efd928c;
    }
  }
  lVar4._0_4_ = pTVar12->SharedReferenceCount;
  lVar4._4_4_ = pTVar12->WeakReferenceCount;
  if (((lVar4 == 0) || (pTVar12[1]._padding_ == 0)) || (*(int *)(pTVar12[1]._padding_ + 8) < 1)) {
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(LVar9.QuadPart + 8) =
           (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar12->SharedReferenceCount = pTVar12;
    if ((TReferenceControllerBase<1> *)LVar9.QuadPart !=
        (TReferenceControllerBase<1> *)pTVar12[1]._padding_) {
      if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(LVar9.QuadPart + 0xc) =
             (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 0xc) + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pTVar12[1]._padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      ((LARGE_INTEGER *)(pTVar12 + 1))->QuadPart = (LONGLONG)LVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)LVar9);
  }
LAB_14efd928c:
  pFVar11 = TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
            ::AllocNode(this_00);
  *(TReferenceControllerBase<1> **)(pFVar11->Value).Pad = pTVar12;
  ((LARGE_INTEGER *)((pFVar11->Value).Pad + 8))->QuadPart = (LONGLONG)LVar9;
  if ((TReferenceControllerBase<1> *)LVar9.QuadPart != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(LVar9.QuadPart + 8) =
         (atomic<int>)((int)*(atomic<int> *)(LVar9.QuadPart + 8) + 1);
    UNLOCK();
  }
  if ((this_00 ==
       (TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
        *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  LOCK();
  bVar7 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow(&this_00->Mutex);
  }
  ((this->QueuedOperations).Head)->Next = pFVar11;
  (this->QueuedOperations).Head = pFVar11;
  LOCK();
  aVar2 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)LVar9);
                    /* WARNING: Could not recover jumptable at 0x00014efd9334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this);
  return;
}


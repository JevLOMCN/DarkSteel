// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 4

// ~TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory> @ 14ee1f730

void __thiscall
TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>::
~TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
          (TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
           *this)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  FNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNode *pFVar6;
  
  if ((this == (TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
                *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  bVar5 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar6 = this->First;
  do {
    pFVar2 = pFVar6->Next;
    pFVar3 = this->Tail;
    FMemory::Free(pFVar6);
    bVar5 = pFVar6 != pFVar3;
    pFVar6 = pFVar2;
  } while (bVar5);
  while (pFVar2 != (FNode *)0x0) {
    pFVar6 = pFVar2->Next;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((pFVar2->Value).Pad + 8));
    FMemory::Free(pFVar2);
    pFVar2 = pFVar6;
  }
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  return;
}

// AllocNode @ 14ee572e0

FNode * __thiscall
TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>::
AllocNode(TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
          *this)

{
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  FNode *pFVar4;
  
  if ((this == (TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
                *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FNode *)(*pcVar2)();
    return pFVar4;
  }
  LOCK();
  bVar3 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar4 = this->First;
  if ((pFVar4 == this->TailCopy) && (this->TailCopy = this->Tail, pFVar4 == this->Tail)) {
    LOCK();
    aVar1 = (this->Mutex).State;
    (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this->Mutex);
    }
    pFVar4 = FMemory::Malloc(0x18,8);
    (pFVar4->Value).Pad[0] = '\0';
    (pFVar4->Value).Pad[1] = '\0';
    (pFVar4->Value).Pad[2] = '\0';
    (pFVar4->Value).Pad[3] = '\0';
    (pFVar4->Value).Pad[4] = '\0';
    (pFVar4->Value).Pad[5] = '\0';
    (pFVar4->Value).Pad[6] = '\0';
    (pFVar4->Value).Pad[7] = '\0';
    (pFVar4->Value).Pad[8] = '\0';
    (pFVar4->Value).Pad[9] = '\0';
    (pFVar4->Value).Pad[10] = '\0';
    (pFVar4->Value).Pad[0xb] = '\0';
    (pFVar4->Value).Pad[0xc] = '\0';
    (pFVar4->Value).Pad[0xd] = '\0';
    (pFVar4->Value).Pad[0xe] = '\0';
    (pFVar4->Value).Pad[0xf] = '\0';
    pFVar4->Next = (FNode *)0x0;
    return pFVar4;
  }
  this->First = pFVar4->Next;
  pFVar4->Next = (FNode *)0x0;
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  return pFVar4;
}

// Dequeue @ 14eea82a0

TOptional<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>_> * __thiscall
TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>::
Dequeue(TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
        *this,TOptional<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>_>
              *__return_storage_ptr__)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  IWrappedOp *pIVar4;
  code *pcVar5;
  TOptional<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>_> *pTVar6;
  bool bVar7;
  
  LOCK();
  bVar7 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar2 = this->Tail->Next;
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  if (pFVar2 != (FNode *)0x0) {
    pTVar3 = *(TReferenceControllerBase<1> **)((pFVar2->Value).Pad + 8);
    pIVar4 = *(IWrappedOp **)(pFVar2->Value).Pad;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar4 == (IWrappedOp *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar6 = (TOptional<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>_> *)(*pcVar5)();
      return pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((pFVar2->Value).Pad + 8));
    LOCK();
    bVar7 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
    if (bVar7) {
      (this->Mutex).State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar7) {
      UE::FMutex::LockSlow(&this->Mutex);
    }
    this->Tail = pFVar2;
    LOCK();
    aVar1 = (this->Mutex).State;
    (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this->Mutex);
    }
    (__return_storage_ptr__->field0_0x0).TypedValue.Object = (IWrappedOp *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pIVar4 != (IWrappedOp *)0x0) {
      (__return_storage_ptr__->field0_0x0).TypedValue.Object = pIVar4;
      *(TReferenceControllerBase<1> **)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0).TypedValue.Object = (IWrappedOp *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// Enqueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>_&> @ 14ef54c90

void __thiscall
TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>::
Enqueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>_&>
          (TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
           *this,TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1> *param_1)

{
  atomic<unsigned_char> aVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FNode *pFVar5;
  
  if ((this == (TTransactionallySafeSpscQueue<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,FMemory>
                *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  LOCK();
  bVar4 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar5 = this->First;
  if ((pFVar5 == this->TailCopy) && (this->TailCopy = this->Tail, pFVar5 == this->Tail)) {
    LOCK();
    aVar1 = (this->Mutex).State;
    (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this->Mutex);
    }
    pFVar5 = FMemory::Malloc(0x18,8);
    (pFVar5->Value).Pad[0] = '\0';
    (pFVar5->Value).Pad[1] = '\0';
    (pFVar5->Value).Pad[2] = '\0';
    (pFVar5->Value).Pad[3] = '\0';
    (pFVar5->Value).Pad[4] = '\0';
    (pFVar5->Value).Pad[5] = '\0';
    (pFVar5->Value).Pad[6] = '\0';
    (pFVar5->Value).Pad[7] = '\0';
    (pFVar5->Value).Pad[8] = '\0';
    (pFVar5->Value).Pad[9] = '\0';
    (pFVar5->Value).Pad[10] = '\0';
    (pFVar5->Value).Pad[0xb] = '\0';
    (pFVar5->Value).Pad[0xc] = '\0';
    (pFVar5->Value).Pad[0xd] = '\0';
    (pFVar5->Value).Pad[0xe] = '\0';
    (pFVar5->Value).Pad[0xf] = '\0';
    pFVar5->Next = (FNode *)0x0;
  }
  else {
    this->First = pFVar5->Next;
    pFVar5->Next = (FNode *)0x0;
    LOCK();
    aVar1 = (this->Mutex).State;
    (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this->Mutex);
    }
  }
  *(IWrappedOp **)(pFVar5->Value).Pad = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)((pFVar5->Value).Pad + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  LOCK();
  bVar4 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  this->Head->Next = pFVar5;
  this->Head = pFVar5;
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 30

// FNetObjectAttachmentSendQueue @ 1441f89b0

FNetObjectAttachmentSendQueue * __thiscall
UE::Net::Private::FNetObjectAttachmentSendQueue::FNetObjectAttachmentSendQueue
          (FNetObjectAttachmentSendQueue *this,FNetObjectAttachmentSendQueue *param_1)

{
  TArray<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar1 = &(this->UnreliableQueue).Storage;
  this->ReliableQueue = param_1->ReliableQueue;
  (this->UnreliableQueue).Head = (param_1->UnreliableQueue).Head;
  (this->UnreliableQueue).Tail = (param_1->UnreliableQueue).Tail;
  (this->UnreliableQueue).IndexMask = (param_1->UnreliableQueue).IndexMask;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->UnreliableQueue).Storage.ArrayMax;
  iVar3 = (param_1->UnreliableQueue).Storage.ArrayNum;
  pFVar4 = (param_1->UnreliableQueue).Storage.AllocatorInstance.Data;
  (this->UnreliableQueue).Storage.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TRefCountPtr<UE::Net::FNetBlob>,TRefCountPtr<UE::Net::FNetBlob>,int>
              ((pTVar1->AllocatorInstance).Data,(TRefCountPtr<UE::Net::FNetBlob> *)pFVar4,iVar3);
  }
  this->MaxUnreliableCount = param_1->MaxUnreliableCount;
  return this;
}

// FNetObjectAttachmentSendQueue @ 1441f8a60

FNetObjectAttachmentSendQueue * __thiscall
UE::Net::Private::FNetObjectAttachmentSendQueue::FNetObjectAttachmentSendQueue
          (FNetObjectAttachmentSendQueue *this)

{
  (this->UnreliableQueue).Head = 0;
  (this->UnreliableQueue).Tail = 0;
  (this->UnreliableQueue).IndexMask = 0;
  (this->UnreliableQueue).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UnreliableQueue).Storage.ArrayNum = 0;
  (this->UnreliableQueue).Storage.ArrayMax = 0;
  this->ReliableQueue = (FReliableSendQueue *)0x0;
  this->MaxUnreliableCount = AttachmentReplicationCVars::UnreliableRPCQueueSize;
  return this;
}

// ~FNetObjectAttachmentSendQueue @ 1441f9c90

void __thiscall
UE::Net::Private::FNetObjectAttachmentSendQueue::~FNetObjectAttachmentSendQueue
          (FNetObjectAttachmentSendQueue *this)

{
  FReliableSendQueue *this_00;
  FScriptContainerElement *pFVar1;
  
  this_00 = this->ReliableQueue;
  if (this_00 != (FReliableSendQueue *)0x0) {
    DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
              ((TRefCountPtr<UE::Net::FNetBlob> *)(this_00->PreQueue).AllocatorInstance.Data,
               (this_00->PreQueue).ArrayNum);
    pFVar1 = (this_00->PreQueue).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    FReliableNetBlobQueue::~FReliableNetBlobQueue(&this_00->ReliableQueue);
    ::operator_delete(this_00,0x2128);
  }
  TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::PopNoCheck
            (&this->UnreliableQueue,
             (ulonglong)((this->UnreliableQueue).Head - (this->UnreliableQueue).Tail));
  (this->UnreliableQueue).Storage.ArrayNum = 0;
  DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
            ((TRefCountPtr<UE::Net::FNetBlob> *)
             (this->UnreliableQueue).Storage.AllocatorInstance.Data,0);
  pFVar1 = (this->UnreliableQueue).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// CanSendMoreReliableAttachments @ 144200ec0

bool __thiscall
UE::Net::Private::FNetObjectAttachmentSendQueue::CanSendMoreReliableAttachments
          (FNetObjectAttachmentSendQueue *this)

{
  FReliableSendQueue *pFVar1;
  
  pFVar1 = this->ReliableQueue;
  if ((pFVar1 != (FReliableSendQueue *)0x0) &&
     (0x3ff < (pFVar1->ReliableQueue).LastSeq - (pFVar1->ReliableQueue).FirstSeq)) {
    return false;
  }
  return true;
}

// CommitReplicationRecord @ 1442017c0

void __thiscall
UE::Net::Private::FNetObjectAttachmentSendQueue::CommitReplicationRecord
          (FNetObjectAttachmentSendQueue *this,FCommitRecord *param_1)

{
  uint uVar1;
  
  uVar1 = (param_1->UnreliableCommitRecord).Record;
  if (uVar1 != 0) {
    TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::PopNoCheck
              (&this->UnreliableQueue,(ulonglong)uVar1);
  }
  if (0x3ff < (ushort)((ushort)(param_1->ReliableReplicationRecord).Sequences[3] |
                       (ushort)(param_1->ReliableReplicationRecord).Sequences[2] |
                       (ushort)(param_1->ReliableReplicationRecord).Sequences[1] |
                      (ushort)(param_1->ReliableReplicationRecord).Sequences[0])) {
    FReliableNetBlobQueue::CommitReplicationRecord
              (&this->ReliableQueue->ReliableQueue,&param_1->ReliableReplicationRecord);
  }
  return;
}

// DropUnreliable @ 144208100

void __thiscall
UE::Net::Private::FNetObjectAttachmentSendQueue::DropUnreliable
          (FNetObjectAttachmentSendQueue *this,bool *param_1)

{
  int iVar1;
  FReliableSendQueue *this_00;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  
  TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::PopNoCheck
            (&this->UnreliableQueue,
             (ulonglong)((this->UnreliableQueue).Head - (this->UnreliableQueue).Tail));
  (this->UnreliableQueue).IndexMask = 0xffffffff;
  (this->UnreliableQueue).Head = 0;
  (this->UnreliableQueue).Tail = 0;
  (this->UnreliableQueue).Storage.ArrayNum = 0;
  DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
            ((TRefCountPtr<UE::Net::FNetBlob> *)
             (this->UnreliableQueue).Storage.AllocatorInstance.Data,0);
  iVar1 = (this->UnreliableQueue).Storage.ArrayMax;
  (this->UnreliableQueue).Storage.ArrayNum = 0;
  if (iVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->UnreliableQueue).Storage.AllocatorInstance,0,
               &(this->UnreliableQueue).Storage.ArrayMax);
  }
  this_00 = this->ReliableQueue;
  if (this_00 == (FReliableSendQueue *)0x0) {
    *param_1 = false;
    return;
  }
  iVar1 = (this_00->PreQueue).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this_00->PreQueue).AllocatorInstance.Data;
    if ((*(longlong *)&pFVar2->field_0x0 == 0) ||
       ((*(byte *)(*(longlong *)&pFVar2->field_0x0 + 0xc) & 1) == 0)) {
      bVar10 = 0;
    }
    else {
      bVar10 = 1;
    }
    lVar5 = 0;
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      lVar3 = lVar5;
      do {
        lVar5 = lVar3 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar5) break;
        if ((*(longlong *)(pFVar2 + lVar3 * 8 + 8) == 0) ||
           ((*(byte *)(*(longlong *)(pFVar2 + lVar3 * 8 + 8) + 0xc) & 1) == 0)) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
        lVar3 = lVar5;
      } while (bVar10 == bVar4);
      iVar6 = iVar8 - iVar7;
      if (bVar10 == 0) {
        DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
                  ((TRefCountPtr<UE::Net::FNetBlob> *)(pFVar2 + (longlong)iVar7 * 8),iVar6);
      }
      else {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,(longlong)iVar6 << 3);
        }
        iVar9 = iVar9 + iVar6;
      }
      bVar10 = bVar10 ^ 1;
      iVar7 = iVar8;
    } while (lVar5 < iVar1);
    (this_00->PreQueue).ArrayNum = iVar9;
  }
  FReliableNetBlobQueue::DropUnreliable(&this_00->ReliableQueue);
  if (((this->ReliableQueue->PreQueue).ArrayNum < 1) &&
     ((this->ReliableQueue->ReliableQueue).UnsentBlobCount == 0)) {
    *param_1 = false;
    return;
  }
  *param_1 = true;
  return;
}

// Enqueue @ 1442088f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FNetObjectAttachmentSendQueue::Enqueue
          (FNetObjectAttachmentSendQueue *this,
          TArrayView<TRefCountPtr<UE::Net::FNetBlob>_const_,int> *param_1)

{
  FScriptContainerElement *pFVar1;
  FNetBlob *pFVar2;
  code *pcVar3;
  TRefCountPtr<UE::Net::FNetBlob> *pTVar4;
  int *piVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FReliableSendQueue *this_00;
  uint uVar9;
  ulonglong uVar10;
  ulong64 uVar11;
  TRefCountPtr<UE::Net::FNetBlob> *pTVar12;
  ulonglong uVar13;
  int iVar14;
  FReliableSendQueue *pFVar15;
  FReliableSendQueue *this_01;
  
  pFVar15 = (FReliableSendQueue *)0x0;
  if ((param_1->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if (((param_1->DataPtr->Reference->CreationInfo).Flags & (Ordered|Reliable)) == None) {
    uVar13 = (longlong)param_1->ArrayNum +
             (ulonglong)((this->UnreliableQueue).Head - (this->UnreliableQueue).Tail);
    if (this->MaxUnreliableCount < uVar13) {
      if (5 < (byte)LogIris._0_1_) {
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
      uVar9 = (this->UnreliableQueue).Head - (this->UnreliableQueue).Tail;
      uVar13 = uVar13 - this->MaxUnreliableCount;
      uVar10 = (ulonglong)uVar9;
      if (uVar13 < uVar9) {
        uVar10 = uVar13;
      }
      if (uVar9 < uVar10) {
        bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1638566698149740331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                           ,0xd5,"Count() >= PopCount");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
      }
      else {
        TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::
        PopNoCheck(&this->UnreliableQueue,uVar10);
      }
    }
    pTVar12 = param_1->DataPtr;
    pTVar4 = pTVar12 + param_1->ArrayNum;
    for (; pTVar12 != pTVar4; pTVar12 = pTVar12 + 1) {
      uVar11 = (ulonglong)((this->UnreliableQueue).Head - (this->UnreliableQueue).Tail) + 1;
      if ((ulonglong)(longlong)(this->UnreliableQueue).Storage.ArrayNum < uVar11) {
        TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::
        SetCapacity(&this->UnreliableQueue,uVar11);
      }
      uVar9 = (this->UnreliableQueue).Head;
      (this->UnreliableQueue).Head = uVar9 + 1;
      uVar13 = (ulonglong)(uVar9 & (this->UnreliableQueue).IndexMask);
      pFVar1 = (this->UnreliableQueue).Storage.AllocatorInstance.Data;
      *(undefined8 *)(pFVar1 + uVar13 * 8) = 0;
      pFVar2 = pTVar12->Reference;
      *(FNetBlob **)(pFVar1 + uVar13 * 8) = pFVar2;
      if (pFVar2 != (FNetBlob *)0x0) {
        pFVar2->RefCount = pFVar2->RefCount + 1;
      }
    }
    bVar6 = true;
  }
  else {
    this_01 = this->ReliableQueue;
    if (this_01 == (FReliableSendQueue *)0x0) {
      this_00 = ::operator_new(0x2128);
      this_01 = pFVar15;
      if (this_00 != (FReliableSendQueue *)0x0) {
        FReliableNetBlobQueue::FReliableNetBlobQueue(&this_00->ReliableQueue);
        (this_00->PreQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this_00->PreQueue).ArrayNum = 0;
        (this_00->PreQueue).ArrayMax = 0;
        this_00->MaxPreQueueCount = AttachmentReplicationCVars::ReliableRPCQueueSize;
        this_01 = this_00;
      }
      this->ReliableQueue = this_01;
    }
    piVar5 = &(this_01->PreQueue).ArrayNum;
    iVar8 = *piVar5;
    pTVar4 = param_1->DataPtr;
    iVar14 = (int)*(undefined8 *)&param_1->ArrayNum;
    if (this_01->MaxPreQueueCount < (uint)(iVar8 + iVar14)) {
      bVar6 = false;
    }
    else {
      if (iVar8 == 0) {
        pTVar12 = pTVar4;
        while ((pTVar12 != pTVar4 + iVar14 &&
               (bVar6 = FReliableNetBlobQueue::Enqueue(&this_01->ReliableQueue,pTVar12), bVar6))) {
          pFVar15 = (FReliableSendQueue *)(ulonglong)((int)pFVar15 + 1);
          pTVar12 = pTVar12 + 1;
        }
      }
      iVar14 = iVar14 - (int)pFVar15;
      if (iVar14 != 0) {
        if (((pTVar4 + (longlong)pFVar15 == (TRefCountPtr<UE::Net::FNetBlob> *)0x0) && (iVar14 != 0)
            ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Ptr != nullptr || Count == 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x9c1,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar14,&(this_01->PreQueue).AllocatorInstance,piVar5,
                           &(this_01->PreQueue).ArrayMax);
        ConstructItems<TRefCountPtr<UE::Net::FNetBlob>,TRefCountPtr<UE::Net::FNetBlob>,int>
                  ((this_01->PreQueue).AllocatorInstance.Data + (longlong)iVar8 * 8,
                   pTVar4 + (longlong)pFVar15,iVar14);
      }
      bVar6 = true;
    }
  }
  return bVar6;
}

// GetUnreliableCount @ 14420ded0

ulong64 __thiscall
UE::Net::Private::FNetObjectAttachmentSendQueue::GetUnreliableCount
          (FNetObjectAttachmentSendQueue *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FReliableSendQueue *this_00;
  ulong64 uVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  uVar5 = (ulonglong)((this->UnreliableQueue).Head - (this->UnreliableQueue).Tail);
  this_00 = this->ReliableQueue;
  if (this_00 != (FReliableSendQueue *)0x0) {
    pFVar4 = (this_00->PreQueue).AllocatorInstance.Data;
    lVar6 = 0;
    iVar2 = (this_00->PreQueue).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this_00->PreQueue).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TRefCountPtr<UE::Net::FNetBlob>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      if ((*(longlong *)&pFVar4->field_0x0 == 0) ||
         ((*(byte *)(*(longlong *)&pFVar4->field_0x0 + 0xc) & 1) != 0)) {
        pFVar4 = pFVar4 + 8;
      }
      else {
        lVar6 = lVar6 + 1;
        pFVar4 = pFVar4 + 8;
      }
    }
    uVar3 = FReliableNetBlobQueue::GetUnreliableCount(&this_00->ReliableQueue);
    return uVar3 + lVar6 + uVar5;
  }
  return uVar5;
}

// HasUnsent @ 14420f4a0

bool __thiscall
UE::Net::Private::FNetObjectAttachmentSendQueue::HasUnsent(FNetObjectAttachmentSendQueue *this)

{
  FReliableSendQueue *pFVar1;
  
  if (((this->UnreliableQueue).Head == (this->UnreliableQueue).Tail) &&
     ((pFVar1 = this->ReliableQueue, pFVar1 == (FReliableSendQueue *)0x0 ||
      (((pFVar1->PreQueue).ArrayNum < 1 && ((pFVar1->ReliableQueue).UnsentBlobCount == 0)))))) {
    return false;
  }
  return true;
}

// HasUnsentUnreliable @ 14420f520

bool __thiscall
UE::Net::Private::FNetObjectAttachmentSendQueue::HasUnsentUnreliable
          (FNetObjectAttachmentSendQueue *this)

{
  return (this->UnreliableQueue).Head != (this->UnreliableQueue).Tail;
}

// IsAllReliableSentAndAcked @ 144211560

bool __thiscall
UE::Net::Private::FNetObjectAttachmentSendQueue::IsAllReliableSentAndAcked
          (FNetObjectAttachmentSendQueue *this)

{
  FReliableSendQueue *pFVar1;
  
  pFVar1 = this->ReliableQueue;
  if ((pFVar1 != (FReliableSendQueue *)0x0) &&
     ((((pFVar1->PreQueue).ArrayNum != 0 ||
       ((pFVar1->ReliableQueue).FirstSeq != (pFVar1->ReliableQueue).LastSeq)) ||
      ((pFVar1->ReliableQueue).UnsentBlobCount != 0)))) {
    return false;
  }
  return true;
}

// IsAllSentAndAcked @ 144211600

bool __thiscall
UE::Net::Private::FNetObjectAttachmentSendQueue::IsAllSentAndAcked
          (FNetObjectAttachmentSendQueue *this)

{
  FReliableSendQueue *pFVar1;
  
  if (((this->UnreliableQueue).Head == (this->UnreliableQueue).Tail) &&
     ((pFVar1 = this->ReliableQueue, pFVar1 == (FReliableSendQueue *)0x0 ||
      ((((pFVar1->PreQueue).ArrayNum == 0 &&
        ((pFVar1->ReliableQueue).FirstSeq == (pFVar1->ReliableQueue).LastSeq)) &&
       ((pFVar1->ReliableQueue).UnsentBlobCount == 0)))))) {
    return true;
  }
  return false;
}

// IsSafeToDestroy @ 144211cc0

bool __thiscall
UE::Net::Private::FNetObjectAttachmentSendQueue::IsSafeToDestroy
          (FNetObjectAttachmentSendQueue *this)

{
  bool bVar1;
  
  if ((this->UnreliableQueue).Head != (this->UnreliableQueue).Tail) {
    return false;
  }
  if ((this->ReliableQueue != (FReliableSendQueue *)0x0) &&
     (bVar1 = FReliableNetBlobQueue::IsSafeToDestroy(&this->ReliableQueue->ReliableQueue), !bVar1))
  {
    return false;
  }
  return true;
}

// ProcessPacketDeliveryStatus @ 1442147a0

void __thiscall
UE::Net::Private::FNetObjectAttachmentSendQueue::ProcessPacketDeliveryStatus
          (FNetObjectAttachmentSendQueue *this,EPacketDeliveryStatus param_1,
          FReplicationRecord *param_2)

{
  TArray<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FReliableSendQueue *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int *piVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  
  this_00 = this->ReliableQueue;
  if (this_00 == (FReliableSendQueue *)0x0) {
    return;
  }
  FReliableNetBlobQueue::ProcessPacketDeliveryStatus(&this_00->ReliableQueue,param_1,param_2);
  if ((param_1 == Delivered) &&
     (0x3ff < (ushort)((ushort)param_2->Sequences[3] | (ushort)param_2->Sequences[2] |
                       (ushort)param_2->Sequences[1] | (ushort)param_2->Sequences[0]))) {
    piVar5 = &(this_00->PreQueue).ArrayNum;
    iVar9 = *piVar5;
    if (iVar9 != 0) {
      uVar10 = 0;
      pTVar1 = &this_00->PreQueue;
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar2 = (this_00->PreQueue).ArrayNum;
      (this_00->PreQueue).ArrayNum = 0;
      (this_00->PreQueue).ArrayMax = 0;
      if ((iVar2 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar8 = pFVar3;
      while ((pFVar8 != pFVar3 + (longlong)iVar2 * 8 &&
             (bVar6 = FReliableNetBlobQueue::Enqueue
                                (&this_00->ReliableQueue,(TRefCountPtr<UE::Net::FNetBlob> *)pFVar8),
             bVar6))) {
        uVar10 = uVar10 + 1;
        pFVar8 = pFVar8 + 8;
      }
      iVar9 = iVar9 - uVar10;
      if (iVar9 != 0) {
        if (((pFVar3 + (ulonglong)uVar10 * 8 == (FScriptContainerElement *)0x0) && (iVar9 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar9,&pTVar1->AllocatorInstance,piVar5,&(this_00->PreQueue).ArrayMax
                          );
        ConstructItems<TRefCountPtr<UE::Net::FNetBlob>,TRefCountPtr<UE::Net::FNetBlob>,int>
                  ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 8,
                   (TRefCountPtr<UE::Net::FNetBlob> *)(pFVar3 + (ulonglong)uVar10 * 8),iVar9);
      }
      DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
                ((TRefCountPtr<UE::Net::FNetBlob> *)pFVar3,iVar2);
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
    }
  }
  return;
}

// Serialize @ 1442190d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EAttachmentWriteStatus __thiscall
UE::Net::Private::FNetObjectAttachmentSendQueue::Serialize
          (FNetObjectAttachmentSendQueue *this,FNetSerializationContext *param_1,
          FNetRefHandle param_2,FCommitRecord *param_3,bool *param_4)

{
  FNetBitStreamWriter *this_00;
  FReliableSendQueue *pFVar1;
  code *pcVar2;
  char cVar3;
  FNetSerializationContext *pFVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  EAttachmentWriteStatus EVar10;
  ForElementType<FNetTracePacketContentEvent> FVar11;
  FNetTraceCollector *pFVar12;
  FNetTraceCollector *pFVar13;
  undefined1 auStack_a8 [32];
  bool local_88;
  char local_87;
  char local_86;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  FNetSerializationContext *local_70;
  bool *local_68;
  uint local_60;
  FNetTraceCollector *local_58;
  FReplicationRecord local_50;
  FUnreliableReplicationRecord aFStack_48 [2];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar13 = (FNetTraceCollector *)0x0;
  EVar10 = Success;
  this_00 = param_1->BitStreamWriter;
  local_68 = param_4;
  pFVar1 = this->ReliableQueue;
  INSERT(0,0,10,6);
  INSERT(local_50.Sequences[0],0,0,10);
  INSERT(0,0,10,6);
  INSERT(local_50.Sequences[1],0,0,10);
  INSERT(0,0,10,6);
  INSERT(local_50.Sequences[2],0,0,10);
  INSERT(0,0,10,6);
  INSERT(local_50.Sequences[3],0,0,10);
  aFStack_48[0].Record = 0;
  local_70 = param_1;
  if (pFVar1 == (FReliableSendQueue *)0x0) {
    local_7c = 0;
LAB_144219285:
    uVar6 = local_7c;
    local_84 = (this->UnreliableQueue).Tail;
    uVar9 = (this->UnreliableQueue).Head;
    local_88 = uVar9 != local_84;
    local_87 = '\0';
    if (!local_88) {
      FNetBitStreamWriter::DoOverflow(this_00);
      *(ulonglong *)(param_3->ReliableReplicationRecord).Sequences =
           CONCAT44(local_50.Sequences._4_4_,local_50.Sequences._0_4_);
      (param_3->UnreliableCommitRecord).Record = aFStack_48[0].Record;
      *local_68 = false;
      return (uVar6 != 0) + NoAttachments;
    }
  }
  else {
    uVar9 = (pFVar1->ReliableQueue).UnsentBlobCount;
    local_7c = (pFVar1->PreQueue).ArrayNum + uVar9;
    if ((local_7c == 0) || (uVar9 == 0)) goto LAB_144219285;
    local_84 = (this->UnreliableQueue).Tail;
    uVar9 = (this->UnreliableQueue).Head;
    local_88 = uVar9 != local_84;
    local_87 = '\x01';
  }
  pFVar12 = pFVar13;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar12 = param_1->TraceCollector;
  }
  local_78 = 0xffffffff;
  local_58 = pFVar12;
  if (pFVar12 != (FNetTraceCollector *)0x0) {
    uVar6 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar6 = 0;
    }
    local_78 = FNetTrace::BeginPacketContentEvent(pFVar12,NameId,uVar6);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      RPCs = CreatePersistentNetDebugName(L"RPCs",4);
      _Init_thread_footer(&::_TSS0);
    }
    uVar6 = FNetTrace::TraceName(RPCs);
    FVar11 = (pFVar12->Events).AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar11 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
    }
    *(uint *)((longlong)FVar11 + (ulonglong)local_78 * 0x10) = uVar6;
  }
  cVar3 = local_87;
  local_86 = local_87;
  FNetBitStreamWriter::WriteBits(this_00,(uint)(local_87 != '\0'),1);
  local_60 = this_00->BufferBitPosition - this_00->BufferBitStartOffset;
  FNetBitStreamWriter::WriteBits(this_00,(uint)(local_88 != false),1);
  uVar6 = 0;
  if (this_00->OverflowBitCount != 0) {
    EVar10 = BitstreamOverflow;
    *(ulonglong *)(param_3->ReliableReplicationRecord).Sequences =
         CONCAT44(local_50.Sequences._4_4_,local_50.Sequences._0_4_);
    (param_3->UnreliableCommitRecord).Record = aFStack_48[0].Record;
    *local_68 = true;
    goto LAB_1442195e7;
  }
  local_80 = 0;
  if (cVar3 != '\0') {
    pFVar12 = pFVar13;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar12 = param_1->TraceCollector;
    }
    uVar7 = 0xffffffff;
    if (pFVar12 != (FNetTraceCollector *)0x0) {
      uVar7 = FNetTrace::BeginPacketContentEvent(pFVar12,NameId,this_00->BufferBitPosition);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        Ordered = CreatePersistentNetDebugName(L"Ordered",7);
        _Init_thread_footer(&::_TSS0);
      }
      uVar8 = FNetTrace::TraceName(Ordered);
      FVar11 = (pFVar12->Events).AllocatorInstance.SecondaryData;
      if (FVar11 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar11 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
      }
      *(uint *)((longlong)FVar11 + (ulonglong)uVar7 * 0x10) = uVar8;
    }
    if (param_2.field0_0x0 == 0) {
      local_80 = FReliableNetBlobQueue::Serialize
                           (&this->ReliableQueue->ReliableQueue,local_70,&local_50);
    }
    else {
      local_80 = FReliableNetBlobQueue::SerializeWithObject
                           (&this->ReliableQueue->ReliableQueue,local_70,param_2,&local_50);
    }
    if (local_80 == 0) {
      FNetBitStreamWriter::DoOverflow(this_00);
      *(ulonglong *)(param_3->ReliableReplicationRecord).Sequences =
           CONCAT44(local_50.Sequences._4_4_,local_50.Sequences._0_4_);
      (param_3->UnreliableCommitRecord).Record = aFStack_48[0].Record;
      *local_68 = true;
      if (uVar7 != 0xffffffff) {
        uVar9 = this_00->BufferBitPosition;
        if (this_00->OverflowBitCount != 0) {
          uVar9 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar12,uVar7,uVar9);
      }
      EVar10 = BitstreamOverflow;
      goto LAB_1442195e7;
    }
    if (uVar7 != 0xffffffff) {
      uVar8 = this_00->BufferBitPosition;
      if (this_00->OverflowBitCount != 0) {
        uVar8 = uVar6;
      }
      FNetTrace::EndPacketContentEvent(pFVar12,uVar7,uVar8);
    }
  }
  pFVar4 = local_70;
  uVar7 = local_80;
  uVar8 = 0;
  if (uVar9 == local_84) {
LAB_14421958e:
    if ((local_7c != 0) && (local_87 == '\0')) {
      EVar10 = ReliableWindowFull;
    }
  }
  else {
    local_84 = 0xffffffff;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar13 = local_70->TraceCollector;
    }
    if (pFVar13 != (FNetTraceCollector *)0x0) {
      uVar9 = this_00->BufferBitPosition;
      if (this_00->OverflowBitCount != 0) {
        uVar9 = uVar6;
      }
      local_84 = FNetTrace::BeginPacketContentEvent(pFVar13,NameId,uVar9);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        Unreliable = CreatePersistentNetDebugName(L"Unreliable",10);
        _Init_thread_footer(&::_TSS0);
      }
      uVar9 = FNetTrace::TraceName(Unreliable);
      FVar11 = (pFVar13->Events).AllocatorInstance.SecondaryData;
      if (FVar11 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar11 = (ForElementType<FNetTracePacketContentEvent>)&pFVar13->Events;
      }
      *(uint *)((longlong)FVar11 + (ulonglong)local_84 * 0x10) = uVar9;
    }
    uVar9 = SerializeUnreliable(this,pFVar4,param_2,aFStack_48);
    uVar7 = local_80;
    local_70 = (FNetSerializationContext *)CONCAT44(local_70._4_4_,uVar9);
    EVar10 = Success;
    if (uVar9 == 0) {
      if (local_80 == 0) {
        FNetBitStreamWriter::DoOverflow(this_00);
        EVar10 = BitstreamOverflow;
      }
      else {
        uVar9 = this_00->BufferBitPosition - this_00->BufferBitStartOffset;
        if ((this_00->OverflowBitCount != 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Writer.IsOverflown()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetBitStreamUtil.h"
                               ,0x18,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          EVar10 = (*pcVar2)();
          return EVar10;
        }
        FNetBitStreamWriter::Seek(this_00,local_60);
        local_88 = false;
        FNetBitStreamWriter::WriteBits(this_00,0,1);
        if ((uVar9 < this_00->BufferBitPosition - this_00->BufferBitStartOffset) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Writer.GetPosBits() <= OriginalPos",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetBitStreamUtil.h"
                               ,0x21,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          EVar10 = (*pcVar2)();
          return EVar10;
        }
        FNetBitStreamWriter::Seek(this_00,uVar9);
        EVar10 = Success;
      }
    }
    if (local_84 != 0xffffffff) {
      uVar9 = this_00->BufferBitPosition;
      if (this_00->OverflowBitCount != 0) {
        uVar9 = uVar6;
      }
      FNetTrace::EndPacketContentEvent(pFVar13,local_84,uVar9);
    }
    uVar8 = (uint)local_70;
    if (EVar10 == Success) goto LAB_14421958e;
  }
  *(ulonglong *)(param_3->ReliableReplicationRecord).Sequences =
       CONCAT44(local_50.Sequences._4_4_,local_50.Sequences._0_4_);
  (param_3->UnreliableCommitRecord).Record = aFStack_48[0].Record;
  if ((uVar7 < local_7c) || (uVar8 < (this->UnreliableQueue).Head - (this->UnreliableQueue).Tail)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  *local_68 = bVar5;
LAB_1442195e7:
  if (local_78 != 0xffffffff) {
    uVar9 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar9 = uVar6;
    }
    FNetTrace::EndPacketContentEvent(local_58,local_78,uVar9);
  }
  return EVar10;
}

// SerializeReliable @ 1442197c0

uint __thiscall
UE::Net::Private::FNetObjectAttachmentSendQueue::SerializeReliable
          (FNetObjectAttachmentSendQueue *this,FNetSerializationContext *param_1,
          FNetRefHandle param_2,FReplicationRecord *param_3)

{
  uint uVar1;
  
  if (param_2.field0_0x0 == 0) {
    uVar1 = FReliableNetBlobQueue::Serialize(&this->ReliableQueue->ReliableQueue,param_1,param_3);
    return uVar1;
  }
  uVar1 = FReliableNetBlobQueue::SerializeInternal
                    (&this->ReliableQueue->ReliableQueue,param_1,param_2,param_3,true);
  return uVar1;
}

// SerializeUnreliable @ 1442197e0

uint __thiscall
UE::Net::Private::FNetObjectAttachmentSendQueue::SerializeUnreliable
          (FNetObjectAttachmentSendQueue *this,FNetSerializationContext *param_1,
          FNetRefHandle param_2,FUnreliableReplicationRecord *param_3)

{
  FScriptContainerElement *pFVar1;
  FNetToken_u_0 *pFVar2;
  uint uVar3;
  FNetBitStreamWriter *this_00;
  FNetExportContext *pFVar4;
  FBatchExports *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  FNetToken_u_0 *pFVar13;
  ulonglong uVar14;
  uint uVar15;
  uint local_res18;
  FNetToken_u_0 local_b8 [2];
  FNetExportRollbackScope local_b0;
  FScriptContainerElement *local_98;
  FObjectReferenceCache *local_90;
  ulonglong local_88;
  FNetToken_u_0 *local_80;
  int local_78;
  FNetObjectReference *local_68 [2];
  TArrayView<UE::Net::FNetObjectReference_const_,int> local_58;
  
  this_00 = param_1->BitStreamWriter;
  local_90 = param_1->InternalContext->ObjectReferenceCache;
  uVar10 = (this->UnreliableQueue).Head - (this->UnreliableQueue).Tail;
  local_88 = (ulonglong)uVar10;
  uVar15 = 0;
  uVar14 = 0;
  local_res18 = 0;
  if (uVar10 == 0) {
    param_3->Record = 0;
    return 0;
  }
  while( true ) {
    uVar10 = this_00->BufferBitPosition - this_00->BufferBitStartOffset;
    pFVar4 = param_1->ExportContext;
    if (pFVar4 == (FNetExportContext *)0x0) {
      local_b0.StartNumNetHandleExports = 0;
      local_b0.StartNumNetTokenExports = 0;
      local_b0.StartNumPendingExports = 0;
      local_b0.StartNumNetTokensPendingExports = 0;
    }
    else {
      pFVar5 = pFVar4->BatchExports;
      local_b0.StartNumNetTokenExports = (pFVar5->NetTokensExportedInCurrentBatch).ArrayNum;
      local_b0.StartNumNetHandleExports = (pFVar5->HandlesExportedInCurrentBatch).ArrayNum;
      local_b0.StartNumNetTokensPendingExports =
           (pFVar5->NetTokensPendingExportInCurrentBatch).ArrayNum;
      local_b0.StartNumPendingExports = (pFVar5->ReferencesPendingExportInCurrentBatch).ArrayNum;
    }
    uVar11 = (this->UnreliableQueue).Tail + uVar14 & (ulonglong)(this->UnreliableQueue).IndexMask;
    pFVar6 = (this->UnreliableQueue).Storage.AllocatorInstance.Data;
    pFVar1 = pFVar6 + uVar11 * 8;
    plVar7 = *(longlong **)(pFVar6 + uVar11 * 8);
    local_b0.Context = param_1;
    local_98 = pFVar1;
    if (((*(byte *)((longlong)plVar7 + 0xc) & 4) != 0) && (pFVar4 != (FNetExportContext *)0x0)) {
      (**(code **)(*plVar7 + 0x28))(plVar7,local_68);
      local_58.DataPtr = local_68[0];
      local_58._8_8_ = local_68[1];
      FObjectReferenceCache::AddPendingExports(local_90,param_1,&local_58);
      (**(code **)(**(longlong **)pFVar1 + 0x30))(*(longlong **)pFVar1,&local_80);
      pFVar2 = local_80 + local_78;
      for (pFVar13 = local_80; pFVar13 != pFVar2; pFVar13 = pFVar13 + 1) {
        local_b8[0] = *pFVar13;
        TArray<UE::Net::FNetToken,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
        AddUniqueImpl<UE::Net::FNetToken_const_&>
                  (&pFVar4->BatchExports->NetTokensPendingExportInCurrentBatch,
                   (FNetToken *)&local_b8[0]._s_0);
      }
    }
    pFVar1 = local_98;
    FNetBlob::SerializeCreationInfo(param_1,(FNetBlobCreationInfo *)(*(longlong *)local_98 + 8));
    plVar7 = *(longlong **)pFVar1;
    if (param_2.field0_0x0 == 0) {
      (*(code *)((undefined8 *)*plVar7)[2])(plVar7,param_1);
    }
    else {
      (**(code **)*plVar7)(plVar7,param_1,param_2.field0_0x0);
    }
    uVar11 = local_88;
    uVar12 = this_00->BufferBitPosition;
    uVar3 = this_00->BufferBitStartOffset;
    FNetBitStreamWriter::WriteBits(this_00,(uint)(uVar14 + 1 != local_88),1);
    if (this_00->OverflowBitCount != 0) break;
    uVar15 = uVar15 + 1;
    if (((param_1->ErrorContext).Error != (FName)0x0) ||
       (bVar9 = FNetSerializationContext::IsBitStreamOverflown(param_1), bVar9)) {
      FNetExportRollbackScope::Rollback(&local_b0);
    }
    if (this_00->OverflowBitCount != 0) {
      FNetBitStreamWriter::Seek(this_00,uVar10);
    }
    uVar14 = uVar14 + 1;
    local_res18 = uVar12 - uVar3;
    if (uVar14 == uVar11) {
LAB_144219a1d:
      param_3->Record = uVar15;
      return uVar15;
    }
  }
  FNetExportRollbackScope::Rollback(&local_b0);
  FNetBitStreamWriter::Seek(this_00,uVar10);
  if (uVar15 != 0) {
    uVar12 = this_00->BufferBitPosition - this_00->BufferBitStartOffset;
    if ((this_00->OverflowBitCount != 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Writer.IsOverflown()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetBitStreamUtil.h"
                           ,0x18,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return uVar10;
    }
    FNetBitStreamWriter::Seek(this_00,local_res18);
    FNetBitStreamWriter::WriteBits(this_00,0,1);
    if ((uVar12 < this_00->BufferBitPosition - this_00->BufferBitStartOffset) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Writer.GetPosBits() <= OriginalPos",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetBitStreamUtil.h"
                           ,0x21,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return uVar10;
    }
    FNetBitStreamWriter::Seek(this_00,uVar12);
  }
  if (((param_1->ErrorContext).Error != (FName)0x0) ||
     (bVar9 = FNetSerializationContext::IsBitStreamOverflown(param_1), bVar9)) {
    FNetExportRollbackScope::Rollback(&local_b0);
  }
  if (this_00->OverflowBitCount != 0) {
    FNetBitStreamWriter::Seek(this_00,uVar10);
  }
  goto LAB_144219a1d;
}

// SetUnreliableQueueCapacity @ 14421bb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FNetObjectAttachmentSendQueue::SetUnreliableQueueCapacity
          (FNetObjectAttachmentSendQueue *this,uint param_1)

{
  TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  this_00 = &this->UnreliableQueue;
  this->MaxUnreliableCount = param_1;
  uVar3 = (ulonglong)(this_00->Head - (this->UnreliableQueue).Tail);
  if (param_1 < uVar3) {
    uVar3 = uVar3 - param_1;
    if (2 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    if (this_00->Head - (this->UnreliableQueue).Tail < uVar3) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1638566698149740331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0xd5,"Count() >= PopCount");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::
      PopNoCheck(this_00,uVar3);
    }
  }
  return;
}

// FNetObjectAttachmentSendQueue @ 1442294f0

FNetObjectAttachmentSendQueue * __thiscall
UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentSendQueue
          (FNetObjectAttachmentSendQueue *this)

{
  this->Manager = (FNetBlobManager *)0x0;
  (this->AttachmentQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttachmentQueue).ArrayNum = 0;
  (this->AttachmentQueue).ArrayMax = 0;
  (this->ScheduleAsOOBAttachmentQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScheduleAsOOBAttachmentQueue).ArrayNum = 0;
  (this->ScheduleAsOOBAttachmentQueue).ArrayMax = 0;
  this->bHasMulticastAttachments = false;
  (this->ProcessContext).AttachmentsToObjectsGoingOutOfScope.Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ProcessContext).AttachmentsToObjectsGoingOutOfScope.Storage.ArrayNum = 0;
  (this->ProcessContext).AttachmentsToObjectsGoingOutOfScope.Storage.ArrayMax = 0;
  (this->ProcessContext).AttachmentsToObjectsGoingOutOfScope.BitCount = 0;
  (this->ProcessContext).AttachmentsToObjectsInScope.Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ProcessContext).AttachmentsToObjectsInScope.Storage.ArrayNum = 0;
  (this->ProcessContext).AttachmentsToObjectsInScope.Storage.ArrayMax = 0;
  (this->ProcessContext).AttachmentsToObjectsInScope.BitCount = 0;
  (this->ProcessContext).ConnectionsPendingSendInPostDispatch.Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ProcessContext).ConnectionsPendingSendInPostDispatch.Storage.ArrayNum = 0;
  (this->ProcessContext).ConnectionsPendingSendInPostDispatch.Storage.ArrayMax = 0;
  (this->ProcessContext).ConnectionsPendingSendInPostDispatch.BitCount = 0;
  (this->ProcessContext).ConnectionIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProcessContext).ConnectionIds.ArrayNum = 0;
  (this->ProcessContext).ConnectionIds.ArrayMax = 0;
  (this->ProcessContext).Connections = (FReplicationConnections *)0x0;
  (this->ProcessContext).NetRefHandleManager = (FNetRefHandleManager *)0x0;
  (this->ProcessContext).QueueToProcess =
       (TArray<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,TSizedDefaultAllocator<32>_>
        *)0x0;
  return this;
}

// operator() @ 14422c5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::ProcessQueue'::__l2::<lambda_1>::
operator()(void *this,uint param_1)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ForAnyElementType *pFVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 uVar10;
  bool bVar11;
  bool bVar12;
  FReplicationView *pFVar13;
  FReplicationConnection *pFVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  TRefCountPtr<UE::Net::FNetBlob> *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<TRefCountPtr<UE::Net::FNetBlob>_const_,int> local_68;
  TArrayView<TRefCountPtr<UE::Net::FNetBlob>_const_,int> local_58;
  
  pFVar7 = *(ForAnyElementType **)((longlong)this + 0x10);
  piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
  puVar17 = (uint *)((ulonglong)param_1 * 0x30 + *(longlong *)((longlong)this + 8));
  if (*piVar1 < 0) {
    DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
              ((TRefCountPtr<UE::Net::FNetBlob> *)pFVar7->Data,*(int *)&pFVar7[1].Data);
    *(undefined4 *)&pFVar7[1].Data = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,pFVar7,0,piVar1);
    }
  }
  else {
    DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
              ((TRefCountPtr<UE::Net::FNetBlob> *)pFVar7->Data,*(int *)&pFVar7[1].Data);
    *(undefined4 *)&pFVar7[1].Data = 0;
  }
  uVar5 = *puVar17;
  if ((*(longlong *)(*(longlong *)(puVar17 + 4) + 0x10) == 0) ||
     ((*(uint *)(*(longlong *)(*(longlong *)(puVar17 + 4) + 0x10) + 0xb8) & 0x1000) == 0)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  uVar16 = puVar17[3] & 2;
  if ((puVar17[3] & 1) == 0) {
    uVar10 = *(undefined1 *)(**(longlong **)this + 0x149);
  }
  else {
    uVar10 = false;
  }
  if (((uVar5 == 0) && (bVar12)) ||
     (bVar11 = UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::
               PreSerializeAndSplitNetBlob
                         (*(FNetObjectAttachmentSendQueue **)this,uVar5,
                          (TRefCountPtr<UE::Net::FNetObjectAttachment> *)(puVar17 + 4),
                          *(TArray<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> **)
                           ((longlong)this + 0x10),(bool)uVar10), bVar11)) {
    iStack_70 = *(int *)(*(undefined8 **)((longlong)this + 0x10) + 1);
    local_78 = (TRefCountPtr<UE::Net::FNetBlob> *)**(undefined8 **)((longlong)this + 0x10);
    if ((iStack_70 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (uVar5 == 0) {
      if ((1 < iStack_70) && (2 < (byte)LogIris._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
      bVar4 = *(byte *)(*(longlong *)(puVar17 + 4) + 0xc);
      iVar6 = *(int *)(*(longlong *)this + 0x80);
      puVar15 = *(uint **)(*(longlong *)this + 0x78);
      if ((iVar6 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      puVar2 = puVar15 + iVar6;
      for (; puVar15 != puVar2; puVar15 = puVar15 + 1) {
        uVar5 = *puVar15;
        if (((bVar4 & 1) != 0) ||
           (pFVar13 = UE::Net::Private::FReplicationConnections::GetReplicationView
                                (*(FReplicationConnections **)(*(longlong *)this + 0x88),uVar5),
           0 < (pFVar13->Views).ArrayNum)) {
          lVar8 = *(longlong *)(puVar17 + 6);
          if ((puVar17[10] <= uVar5) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < BitCount",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                  ,0x2c1,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar3 = (ulonglong)(uVar5 >> 5) * 4;
          if ((*(uint *)(lVar8 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) {
            if (bVar12) {
              pFVar7 = *(ForAnyElementType **)((longlong)this + 0x10);
              piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
              if (*(int *)((longlong)&pFVar7[1].Data + 4) < 0) {
                DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
                          ((TRefCountPtr<UE::Net::FNetBlob> *)pFVar7->Data,*(int *)&pFVar7[1].Data);
                *(undefined4 *)&pFVar7[1].Data = 0;
                if (*piVar1 != 0) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,0,pFVar7,0,piVar1);
                }
              }
              else {
                DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
                          ((TRefCountPtr<UE::Net::FNetBlob> *)pFVar7->Data,*(int *)&pFVar7[1].Data);
                *(undefined4 *)&pFVar7[1].Data = 0;
              }
              bVar11 = UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::
                       PreSerializeAndSplitNetBlob
                                 (*(FNetObjectAttachmentSendQueue **)this,uVar5,
                                  (TRefCountPtr<UE::Net::FNetObjectAttachment> *)(puVar17 + 4),
                                  *(TArray<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>
                                    **)((longlong)this + 0x10),(bool)uVar10);
              if (!bVar11) {
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("false",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\NetBlobManager.cpp"
                                    ,0x2cf,
                                    L"Unable to split %s NetObjectAttachment with connection specific serialization."
                                   );
                if (bVar11) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                goto LAB_14422ca36;
              }
              iStack_70 = *(int *)(*(undefined8 **)((longlong)this + 0x10) + 1);
              local_78 = (TRefCountPtr<UE::Net::FNetBlob> *)**(undefined8 **)((longlong)this + 0x10)
              ;
              if ((iStack_70 < 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar11)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uStack_6c = local_58._12_4_;
            }
            pFVar14 = UE::Net::Private::FReplicationConnections::GetConnection
                                (*(FReplicationConnections **)(*(longlong *)this + 0x88),uVar5);
            local_68._12_4_ = uStack_6c;
            local_68.ArrayNum = iStack_70;
            local_68.DataPtr = local_78;
            bVar11 = UE::Net::Private::FReplicationWriter::QueueNetObjectAttachments
                               (pFVar14->ReplicationWriter,puVar17[1],puVar17[2],&local_68,
                                puVar17[3]);
            if ((bVar11) && (uVar16 != 0)) {
              lVar8 = *(longlong *)(*(longlong *)this + 0x60);
              if ((*(uint *)(*(longlong *)this + 0x70) <= uVar5) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < BitCount",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                      ,0x2a2,L""), bVar11)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              *(uint *)(lVar3 + lVar8) = *(uint *)(lVar3 + lVar8) | 1 << (uVar5 & 0x1f);
            }
          }
        }
LAB_14422ca36:
      }
    }
    else {
      pFVar14 = UE::Net::Private::FReplicationConnections::GetConnection
                          (*(FReplicationConnections **)(*(longlong *)this + 0x88),*puVar17);
      if (pFVar14 != (FReplicationConnection *)0x0) {
        local_58._12_4_ = uStack_6c;
        local_58.ArrayNum = iStack_70;
        local_58.DataPtr = local_78;
        bVar12 = UE::Net::Private::FReplicationWriter::QueueNetObjectAttachments
                           (pFVar14->ReplicationWriter,puVar17[1],puVar17[2],&local_58,puVar17[3]);
        if ((bVar12) && (uVar16 != 0)) {
          UE::Net::FNetBitArray::SetBit((FNetBitArray *)(*(longlong *)this + 0x60),*puVar17);
        }
      }
    }
  }
  else {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\NetBlobManager.cpp"
                        ,0x2ad,L"Unable to split %s NetObjectAttachment.");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  return;
}

// Enqueue @ 144237d80

void __thiscall
UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::Enqueue
          (FNetObjectAttachmentSendQueue *this,uint param_1,uint param_2,
          TRefCountPtr<UE::Net::FNetObjectAttachment> *param_3,
          ENetObjectAttachmentSendPolicyFlags param_4,FNetBitArray *param_5)

{
  int *piVar1;
  longlong *plVar2;
  FNetObjectAttachment *pFVar3;
  FNetObjectAttachment *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  ENetObjectAttachmentSendPolicyFlags EVar7;
  FScriptContainerElement *pFVar8;
  FNetBitArray *pFVar9;
  
  EVar7 = param_4 & ScheduleAsOOB;
  iVar6 = (&this->AttachmentQueue)[EVar7].ArrayNum;
  piVar1 = &(&this->AttachmentQueue)[EVar7].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(&this->AttachmentQueue)[EVar7].AllocatorInstance,piVar1);
  }
  (&this->AttachmentQueue)[EVar7].ArrayNum = iVar6 + 1;
  pFVar8 = (&this->AttachmentQueue)[EVar7].AllocatorInstance.Data + (longlong)iVar6 * 0x30;
  DefaultConstructItems<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,int>
            (pFVar8,1);
  *(uint *)(pFVar8 + 4) = param_1;
  *(undefined4 *)pFVar8 = 0;
  *(uint *)(pFVar8 + 8) = param_2;
  *(ENetObjectAttachmentSendPolicyFlags *)(pFVar8 + 0xc) = param_4;
  pFVar3 = param_3->Reference;
  pFVar4 = *(FNetObjectAttachment **)(pFVar8 + 0x10);
  if (pFVar4 != pFVar3) {
    *(FNetObjectAttachment **)(pFVar8 + 0x10) = pFVar3;
    if (pFVar3 != (FNetObjectAttachment *)0x0) {
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
    }
    if (pFVar4 != (FNetObjectAttachment *)0x0) {
      plVar2 = &pFVar4->_padding_;
      *(int *)plVar2 = (int)*plVar2 + -1;
      if ((int)*plVar2 == 0) {
        (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4,1);
      }
    }
  }
  pFVar9 = (FNetBitArray *)(pFVar8 + 0x18);
  if (pFVar9 != param_5) {
    pFVar5 = (pFVar9->Storage).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar9->Storage).AllocatorInstance.Data = (param_5->Storage).AllocatorInstance.Data;
    (param_5->Storage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar8 + 0x20) = (param_5->Storage).ArrayNum;
    *(int *)(pFVar8 + 0x24) = (param_5->Storage).ArrayMax;
    (param_5->Storage).ArrayNum = 0;
    (param_5->Storage).ArrayMax = 0;
  }
  *(uint *)(pFVar8 + 0x28) = param_5->BitCount;
  this->bHasMulticastAttachments = true;
  pFVar8 = (param_5->Storage).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return;
}

// Enqueue @ 144237ea0

void __thiscall
UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::Enqueue
          (FNetObjectAttachmentSendQueue *this,uint param_1,uint param_2,uint param_3,
          TRefCountPtr<UE::Net::FNetObjectAttachment> *param_4,
          ENetObjectAttachmentSendPolicyFlags param_5)

{
  int *piVar1;
  longlong *plVar2;
  FNetObjectAttachment *pFVar3;
  FNetObjectAttachment *pFVar4;
  int iVar5;
  ENetObjectAttachmentSendPolicyFlags EVar6;
  FScriptContainerElement *pFVar7;
  
  EVar6 = param_5 & ScheduleAsOOB;
  iVar5 = (&this->AttachmentQueue)[EVar6].ArrayNum;
  piVar1 = &(&this->AttachmentQueue)[EVar6].ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(&this->AttachmentQueue)[EVar6].AllocatorInstance,piVar1);
  }
  (&this->AttachmentQueue)[EVar6].ArrayNum = iVar5 + 1;
  pFVar7 = (&this->AttachmentQueue)[EVar6].AllocatorInstance.Data + (longlong)iVar5 * 0x30;
  DefaultConstructItems<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,int>
            (pFVar7,1);
  *(uint *)pFVar7 = param_1;
  *(uint *)(pFVar7 + 4) = param_2;
  *(uint *)(pFVar7 + 8) = param_3;
  *(ENetObjectAttachmentSendPolicyFlags *)(pFVar7 + 0xc) = param_5;
  pFVar3 = param_4->Reference;
  pFVar4 = *(FNetObjectAttachment **)(pFVar7 + 0x10);
  if (pFVar4 != pFVar3) {
    *(FNetObjectAttachment **)(pFVar7 + 0x10) = pFVar3;
    if (pFVar3 != (FNetObjectAttachment *)0x0) {
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
    }
    if (pFVar4 != (FNetObjectAttachment *)0x0) {
      plVar2 = &pFVar4->_padding_;
      *(int *)plVar2 = (int)*plVar2 + -1;
      if ((int)*plVar2 == 0) {
        (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4,1);
      }
    }
  }
  return;
}

// HasAnyUnprocessedReliableAttachments @ 14423f850

bool __thiscall
UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::
HasAnyUnprocessedReliableAttachments(FNetObjectAttachmentSendQueue *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AttachmentQueue).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->AttachmentQueue).ArrayNum * 0x30;
  for (; pFVar1 != pFVar2; pFVar1 = pFVar1 + 0x30) {
    if ((*(byte *)(*(longlong *)(pFVar1 + 0x10) + 0xc) & 1) != 0) goto LAB_14423f885;
  }
  pFVar1 = (FScriptContainerElement *)0x0;
LAB_14423f885:
  return pFVar1 != (FScriptContainerElement *)0x0;
}

// HasUnprocessedReliableAttachments @ 14423fd40

bool __thiscall
UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::HasUnprocessedReliableAttachments
          (FNetObjectAttachmentSendQueue *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AttachmentQueue).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->AttachmentQueue).ArrayNum * 0x30;
  for (; pFVar1 != pFVar2; pFVar1 = pFVar1 + 0x30) {
    if (((*(uint *)(pFVar1 + 4) == param_1) || (*(uint *)(pFVar1 + 8) == param_1)) &&
       ((*(byte *)(*(longlong *)(pFVar1 + 0x10) + 0xc) & 1) != 0)) goto LAB_14423fd77;
  }
  pFVar1 = (FScriptContainerElement *)0x0;
LAB_14423fd77:
  return pFVar1 != (FScriptContainerElement *)0x0;
}

// Init @ 1442403b0

void __thiscall
UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::Init
          (FNetObjectAttachmentSendQueue *this,FNetBlobManager *param_1)

{
  this->Manager = param_1;
  return;
}

// PreSerializeAndSplitNetBlob @ 1442475e0

bool __thiscall
UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::PreSerializeAndSplitNetBlob
          (FNetObjectAttachmentSendQueue *this,uint param_1,
          TRefCountPtr<UE::Net::FNetObjectAttachment> *param_2,
          TArray<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  UPartialNetObjectAttachmentHandler *this_00;
  FScriptContainerElement *pFVar1;
  FNetObjectAttachment *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  this_00 = (UPartialNetObjectAttachmentHandler *)
            (this->Manager->PartialNetObjectAttachmentHandler).Object;
  if (this_00 != (UPartialNetObjectAttachmentHandler *)0x0) {
    bVar4 = UPartialNetObjectAttachmentHandler::PreSerializeAndSplitNetBlob
                      (this_00,param_1,param_2,param_3,param_4);
    return bVar4;
  }
  pFVar1 = (param_3->AllocatorInstance).Data;
  if ((pFVar1 <= param_2) && (param_2 < pFVar1 + (longlong)param_3->ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = param_3->ArrayNum;
  if (iVar6 == param_3->ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  param_3->ArrayNum = iVar6 + 1;
  pFVar1 = (param_3->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + (longlong)iVar6 * 8) = 0;
  pFVar2 = param_2->Reference;
  *(FNetObjectAttachment **)(pFVar1 + (longlong)iVar6 * 8) = pFVar2;
  if (pFVar2 != (FNetObjectAttachment *)0x0) {
    *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
  }
  return true;
}

// PrepareAndProcessOOBAttachmentQueue @ 144247b30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::
PrepareAndProcessOOBAttachmentQueue
          (FNetObjectAttachmentSendQueue *this,FReplicationConnections *param_1,
          FNetRefHandleManager *param_2,FNetBitArray *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FNetObjectAttachmentQueueEntry *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  FNetBitArrayView local_38;
  
  if (((this->ProcessContext).NetRefHandleManager != (FNetRefHandleManager *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ProcessContext.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\NetBlobManager.cpp"
                         ,0x1f8,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((this->ProcessContext).NetRefHandleManager == (FNetRefHandleManager *)0x0) {
    uVar8 = (this->ScheduleAsOOBAttachmentQueue).ArrayNum;
    if ((int)uVar8 < 1) {
      memset((param_3->Storage).AllocatorInstance.Data,0,(longlong)(param_3->Storage).ArrayNum << 2)
      ;
      return;
    }
    (this->ProcessContext).QueueToProcess = &this->ScheduleAsOOBAttachmentQueue;
    (this->ProcessContext).Connections = param_1;
    (this->ProcessContext).NetRefHandleManager = param_2;
    FNetBitArray::Init(&(this->ProcessContext).AttachmentsToObjectsInScope,uVar8);
    FNetBitArray::Init(&(this->ProcessContext).ConnectionsPendingSendInPostDispatch,
                       (param_1->ValidConnections).BitCount);
    if (this->bHasMulticastAttachments != false) {
      FNetBitArrayView::FNetBitArrayView
                (&local_38,(uint *)(param_1->ValidConnections).Storage.AllocatorInstance.Data,
                 (param_1->ValidConnections).BitCount);
      uVar8 = FNetBitArrayHelper::CountSetBits(local_38.Storage,local_38.BitCount,0,0xffffffff);
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum
                (&(this->ProcessContext).ConnectionIds,uVar8,Default);
      uVar8 = (this->ProcessContext).ConnectionIds.ArrayNum;
      if (uVar8 != 0) {
        FNetBitArrayHelper::GetSetBitIndices
                  (local_38.Storage,local_38.BitCount,0,0xffffffff,
                   (uint *)(this->ProcessContext).ConnectionIds.AllocatorInstance.Data,uVar8);
      }
    }
    iVar3 = (this->ScheduleAsOOBAttachmentQueue).ArrayNum;
    uVar10 = 0;
    pFVar9 = (this->ScheduleAsOOBAttachmentQueue).AllocatorInstance.Data;
    if ((iVar3 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar11 = pFVar9 + (longlong)iVar3 * 0x30;
    for (; pFVar9 != pFVar11; pFVar9 = pFVar9 + 0x30) {
      pFVar4 = (this->ProcessContext).AttachmentsToObjectsInScope.Storage.AllocatorInstance.Data;
      uVar8 = (uint)uVar10;
      if (((this->ProcessContext).AttachmentsToObjectsInScope.BitCount <= uVar8) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2a2,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = pFVar4 + (uVar10 >> 5) * 4;
      uVar10 = (ulonglong)(uVar8 + 1);
      *(uint *)pFVar4 = *(uint *)pFVar4 | 1 << (uVar8 & 0x1f);
    }
    ProcessQueue(this,ProcessObjectsInScope);
    uVar8 = (this->ProcessContext).ConnectionsPendingSendInPostDispatch.BitCount;
    piVar1 = &(param_3->Storage).ArrayMax;
    param_3->BitCount = uVar8;
    piVar2 = &(param_3->Storage).ArrayNum;
    uVar8 = uVar8 + 0x1f >> 5;
    *piVar2 = 0;
    if (*piVar1 < (int)uVar8) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar8,(ForAnyElementType *)param_3,0,piVar1);
    }
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar8,(ForAnyElementType *)param_3,piVar2,piVar1);
    if ((((param_3->Storage).AllocatorInstance.Data ==
          (this->ProcessContext).ConnectionsPendingSendInPostDispatch.Storage.AllocatorInstance.Data
         ) || (param_3->BitCount !=
               (this->ProcessContext).ConnectionsPendingSendInPostDispatch.BitCount)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x51e,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((*piVar2 != 0) &&
       ((this->ProcessContext).ConnectionsPendingSendInPostDispatch.Storage.ArrayNum != 0)) {
      memcpy((param_3->Storage).AllocatorInstance.Data,
             (this->ProcessContext).ConnectionsPendingSendInPostDispatch.Storage.AllocatorInstance.
             Data,(ulonglong)(uint)*piVar2 << 2);
    }
    (this->ProcessContext).Connections = (FReplicationConnections *)0x0;
    (this->ProcessContext).NetRefHandleManager = (FNetRefHandleManager *)0x0;
    (this->ProcessContext).QueueToProcess =
         (TArray<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,TSizedDefaultAllocator<32>_>
          *)0x0;
    memset((this->ProcessContext).ConnectionsPendingSendInPostDispatch.Storage.AllocatorInstance.
           Data,0,(longlong)
                  (this->ProcessContext).ConnectionsPendingSendInPostDispatch.Storage.ArrayNum << 2)
    ;
    piVar1 = &(this->ScheduleAsOOBAttachmentQueue).ArrayMax;
    pFVar5 = (FNetObjectAttachmentQueueEntry *)
             (this->ScheduleAsOOBAttachmentQueue).AllocatorInstance.Data;
    iVar3 = (this->ScheduleAsOOBAttachmentQueue).ArrayNum;
    if ((this->ScheduleAsOOBAttachmentQueue).ArrayMax < 0) {
      DestructItems<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,int>
                (pFVar5,iVar3);
      (this->ScheduleAsOOBAttachmentQueue).ArrayNum = 0;
      if (*piVar1 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,&(this->ScheduleAsOOBAttachmentQueue).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,int>
                (pFVar5,iVar3);
      (this->ScheduleAsOOBAttachmentQueue).ArrayNum = 0;
    }
  }
  return;
}

// PrepareProcessQueue @ 144248000

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::PrepareProcessQueue
          (FNetObjectAttachmentSendQueue *this,FReplicationConnections *param_1,
          FNetRefHandleManager *param_2)

{
  TArray<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TArray<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int *piVar3;
  int iVar4;
  FNetObjectAttachmentQueueEntry *pFVar5;
  code *pcVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FNetBitArrayView local_58;
  FNetBitArrayView local_48;
  FNetBitArrayView local_38;
  
  if ((this->ProcessContext).NetRefHandleManager == (FNetRefHandleManager *)0x0) {
    pTVar1 = &this->ScheduleAsOOBAttachmentQueue;
    pTVar2 = &this->AttachmentQueue;
    if ((pTVar2 == pTVar1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar4 = (this->ScheduleAsOOBAttachmentQueue).ArrayNum;
    if (iVar4 != 0) {
      iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x30,8,iVar4,&pTVar2->AllocatorInstance,&(this->AttachmentQueue).ArrayNum,
                          &(this->AttachmentQueue).ArrayMax);
      ConstructItems<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,int>
                ((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x30,
                 (FNetObjectAttachmentQueueEntry *)(pTVar1->AllocatorInstance).Data,iVar4);
    }
    piVar3 = &(this->ScheduleAsOOBAttachmentQueue).ArrayMax;
    pFVar5 = (FNetObjectAttachmentQueueEntry *)(pTVar1->AllocatorInstance).Data;
    iVar4 = (this->ScheduleAsOOBAttachmentQueue).ArrayNum;
    if ((this->ScheduleAsOOBAttachmentQueue).ArrayMax < 0) {
      DestructItems<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,int>
                (pFVar5,iVar4);
      (this->ScheduleAsOOBAttachmentQueue).ArrayNum = 0;
      if (*piVar3 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,&pTVar1->AllocatorInstance,0,piVar3);
      }
    }
    else {
      DestructItems<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,int>
                (pFVar5,iVar4);
      (this->ScheduleAsOOBAttachmentQueue).ArrayNum = 0;
    }
    uVar12 = 0;
    uVar11 = (this->AttachmentQueue).ArrayNum;
    if (0 < (int)uVar11) {
      (this->ProcessContext).QueueToProcess = pTVar2;
      (this->ProcessContext).Connections = param_1;
      (this->ProcessContext).NetRefHandleManager = param_2;
      FNetBitArray::Init(&(this->ProcessContext).AttachmentsToObjectsGoingOutOfScope,uVar11);
      FNetBitArray::Init(&(this->ProcessContext).AttachmentsToObjectsInScope,
                         (this->AttachmentQueue).ArrayNum);
      FNetBitArray::Init(&(this->ProcessContext).ConnectionsPendingSendInPostDispatch,
                         (param_1->ValidConnections).BitCount);
      if (this->bHasMulticastAttachments != false) {
        FNetBitArrayView::FNetBitArrayView
                  (&local_58,(uint *)(param_1->ValidConnections).Storage.AllocatorInstance.Data,
                   (param_1->ValidConnections).BitCount);
        uVar11 = FNetBitArrayHelper::CountSetBits(local_58.Storage,local_58.BitCount,0,0xffffffff);
        TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum
                  (&(this->ProcessContext).ConnectionIds,uVar11,Default);
        uVar11 = (this->ProcessContext).ConnectionIds.ArrayNum;
        if (uVar11 != 0) {
          FNetBitArrayHelper::GetSetBitIndices
                    (local_58.Storage,local_58.BitCount,0,0xffffffff,
                     (uint *)(this->ProcessContext).ConnectionIds.AllocatorInstance.Data,uVar11);
        }
      }
      if (this->Manager->bAllowObjectReplication == false) {
        iVar4 = (this->AttachmentQueue).ArrayNum;
        pFVar14 = (this->AttachmentQueue).AllocatorInstance.Data;
        if ((iVar4 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar16 = pFVar14 + (longlong)iVar4 * 0x30;
        for (; pFVar14 != pFVar16; pFVar14 = pFVar14 + 0x30) {
          pFVar15 = (this->ProcessContext).AttachmentsToObjectsInScope.Storage.AllocatorInstance.
                    Data;
          if (((this->ProcessContext).AttachmentsToObjectsInScope.BitCount <= uVar12) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < BitCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x2a2,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar11 = uVar12 & 0x1f;
          pFVar15 = pFVar15 + (ulonglong)(uVar12 >> 5) * 4;
          uVar12 = uVar12 + 1;
          *(uint *)pFVar15 = *(uint *)pFVar15 | 1 << uVar11;
        }
      }
      else {
        if (((param_2->ScopeFrameData).bIsValid == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ScopeFrameData.bIsValid",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                               ,0xef,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FNetBitArrayView::FNetBitArrayView
                  (&local_48,
                   (uint *)(param_2->ScopeFrameData).CurrentFrameScopableInternalIndices.Storage.
                           AllocatorInstance.Data,
                   (param_2->ScopeFrameData).CurrentFrameScopableInternalIndices.BitCount);
        if (((param_2->ScopeFrameData).bIsValid == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ScopeFrameData.bIsValid",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                               ,0xf2,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FNetBitArrayView::FNetBitArrayView
                  (&local_38,
                   (uint *)(param_2->ScopeFrameData).PrevFrameScopableInternalIndices.Storage.
                           AllocatorInstance.Data,
                   (param_2->ScopeFrameData).PrevFrameScopableInternalIndices.BitCount);
        iVar4 = (this->AttachmentQueue).ArrayNum;
        pFVar14 = (pTVar2->AllocatorInstance).Data;
        if ((iVar4 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar16 = pFVar14 + (longlong)iVar4 * 0x30;
        puVar7 = local_48.Storage;
        for (; pFVar14 != pFVar16; pFVar14 = pFVar14 + 0x30) {
          uVar11 = *(uint *)(pFVar14 + 8);
          if (uVar11 == 0) {
            uVar11 = *(uint *)(pFVar14 + 4);
          }
          local_48.Storage = puVar7;
          if ((local_48.BitCount <= uVar11) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < BitCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x2c1,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          puVar8 = local_38.Storage;
          uVar13 = 1 << ((byte)uVar11 & 0x1f);
          if ((puVar7[uVar11 >> 5] & uVar13) == 0) {
            if ((local_38.BitCount <= uVar11) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < BitCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x2c1,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((puVar8[uVar11 >> 5] & uVar13) == 0) goto LAB_14424832b;
            pFVar15 = (this->ProcessContext).AttachmentsToObjectsGoingOutOfScope.Storage.
                      AllocatorInstance.Data;
            uVar11 = (this->ProcessContext).AttachmentsToObjectsGoingOutOfScope.BitCount;
          }
          else {
LAB_14424832b:
            pFVar15 = (this->ProcessContext).AttachmentsToObjectsInScope.Storage.AllocatorInstance.
                      Data;
            uVar11 = (this->ProcessContext).AttachmentsToObjectsInScope.BitCount;
          }
          if ((uVar11 <= uVar12) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < BitCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x2a2,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar11 = uVar12 >> 5;
          uVar13 = uVar12 & 0x1f;
          uVar12 = uVar12 + 1;
          *(uint *)(pFVar15 + (ulonglong)uVar11 * 4) =
               *(uint *)(pFVar15 + (ulonglong)uVar11 * 4) | 1 << uVar13;
          puVar7 = local_48.Storage;
        }
      }
    }
  }
  return;
}

// ProcessQueue @ 144249950

void __thiscall
UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::ProcessQueue
          (FNetObjectAttachmentSendQueue *this,EProcessMode param_1)

{
  uint uVar1;
  uint uVar2;
  TArray<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,TSizedDefaultAllocator<32>_>
  *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FProcessQueueContext *pFVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  TRefCountPtr<UE::Net::FNetBlob> *local_58;
  undefined8 local_50;
  FNetObjectAttachmentSendQueue *local_48;
  FScriptContainerElement *local_40;
  TRefCountPtr<UE::Net::FNetBlob> **local_38;
  
  if ((this->ProcessContext).NetRefHandleManager != (FNetRefHandleManager *)0x0) {
    pFVar8 = &this->ProcessContext;
    if (param_1 != ProcessObjectsGoingOutOfScope) {
      pFVar8 = (FProcessQueueContext *)&(this->ProcessContext).AttachmentsToObjectsInScope;
    }
    pTVar3 = (this->ProcessContext).QueueToProcess;
    uVar10 = 0;
    local_58 = (TRefCountPtr<UE::Net::FNetBlob> *)0x0;
    local_50 = 0;
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar8->AttachmentsToObjectsGoingOutOfScope).BitCount != pTVar3->ArrayNum) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ProcessContext.IsValid() && IndicesToProcess.GetNumBits() == NumEntries"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\NetBlobManager.cpp"
                           ,0x29a,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar1 = (pFVar8->AttachmentsToObjectsGoingOutOfScope).Storage.ArrayNum;
    local_38 = &local_58;
    uVar2 = (pFVar8->AttachmentsToObjectsGoingOutOfScope).BitCount;
    pFVar12 = (pFVar8->AttachmentsToObjectsGoingOutOfScope).Storage.AllocatorInstance.Data;
    uVar9 = uVar10;
    local_48 = this;
    local_40 = pFVar4;
    if (uVar1 != 0) {
      do {
        uVar7 = 0xffffffff;
        if (uVar10 == uVar1 - 1) {
          uVar7 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
        }
        uVar11 = uVar9;
        for (uVar7 = uVar7 & *(uint *)pFVar12; uVar7 != 0; uVar7 = uVar7 >> 1) {
          if ((uVar7 & 1) != 0) {
            `UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::ProcessQueue'::__l2::
            <lambda_1>::operator()(&local_48,uVar11);
          }
          uVar11 = uVar11 + 1;
        }
        uVar10 = uVar10 + 1;
        pFVar12 = pFVar12 + 4;
        uVar9 = uVar9 + 0x20;
      } while (uVar10 < uVar1);
    }
    DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>(local_58,(int)local_50);
    if (local_58 != (TRefCountPtr<UE::Net::FNetBlob> *)0x0) {
      FMemory::Free(local_58);
    }
  }
  return;
}

// ResetProcessQueue @ 14424fb50

void __thiscall
UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::ResetProcessQueue
          (FNetObjectAttachmentSendQueue *this)

{
  int *piVar1;
  int iVar2;
  FNetObjectAttachmentQueueEntry *pFVar3;
  
  piVar1 = &(this->AttachmentQueue).ArrayMax;
  pFVar3 = (FNetObjectAttachmentQueueEntry *)(this->AttachmentQueue).AllocatorInstance.Data;
  iVar2 = (this->AttachmentQueue).ArrayNum;
  if ((this->AttachmentQueue).ArrayMax < 0) {
    DestructItems<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,int>
              (pFVar3,iVar2);
    (this->AttachmentQueue).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->AttachmentQueue).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,int>
              (pFVar3,iVar2);
    (this->AttachmentQueue).ArrayNum = 0;
  }
  this->bHasMulticastAttachments = false;
  (this->ProcessContext).Connections = (FReplicationConnections *)0x0;
  (this->ProcessContext).NetRefHandleManager = (FNetRefHandleManager *)0x0;
  (this->ProcessContext).QueueToProcess =
       (TArray<UE::Net::Private::FNetBlobManager::FNetObjectAttachmentSendQueue::FNetObjectAttachmentQueueEntry,TSizedDefaultAllocator<32>_>
        *)0x0;
  memset((this->ProcessContext).ConnectionsPendingSendInPostDispatch.Storage.AllocatorInstance.Data,
         0,(longlong)(this->ProcessContext).ConnectionsPendingSendInPostDispatch.Storage.ArrayNum <<
           2);
  return;
}


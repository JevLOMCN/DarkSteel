// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 19

// AreAllObjectsReliableSentAndAcked @ 1441fbc50

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Net::Private::FNetObjectAttachmentsWriter::AreAllObjectsReliableSentAndAcked
          (FNetObjectAttachmentsWriter *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FReliableSendQueue *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FNetObjectAttachmentsWriter *pFVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&(this->ObjectToQueue).field_0x28;
  puVar1 = &(this->ObjectToQueue).field_0x10;
  iVar14 = 0;
  uVar8 = 1;
  iVar16 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->ObjectToQueue).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1441fbced;
      uVar13 = puVar17[lVar10 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar9 = iVar16 + -1 + local_res10;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_1441fbced:
  uVar13 = *(uint *)&(this->ObjectToQueue).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar8,iVar14);
  TStack_50.CurrentBitIndex = iVar9;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_50._28_4_ = iVar9;
  TStack_50.BaseBitIndex = iVar16;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->ObjectToQueue).field_0x8 -
                       *(int *)&(this->ObjectToQueue).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar8 = *(uint *)&(this->ObjectToQueue).field_0x28;
  if (uVar13 != uVar8) {
    puVar15 = *(undefined1 **)&(this->ObjectToQueue).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1441fbdf0;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_1441fbdf0:
  do {
    if (*(int *)&(this->ObjectToQueue).field_0x8 - *(int *)&(this->ObjectToQueue).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FNetObjectAttachmentSendQueue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar13) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      pFVar11 = (FNetObjectAttachmentsWriter *)this->SpecialQueues;
      while( true ) {
        if (pFVar11 == this + 1) {
          return true;
        }
        if (((*(FNetObjectAttachmentSendQueue **)&pFVar11->ObjectToQueue !=
              (FNetObjectAttachmentSendQueue *)0x0) &&
            (pFVar4 = (*(FNetObjectAttachmentSendQueue **)&pFVar11->ObjectToQueue)->ReliableQueue,
            pFVar4 != (FReliableSendQueue *)0x0)) &&
           (((pFVar4->PreQueue).ArrayNum != 0 ||
            (((pFVar4->ReliableQueue).FirstSeq != (pFVar4->ReliableQueue).LastSeq ||
             ((pFVar4->ReliableQueue).UnsentBlobCount != 0)))))) break;
        pFVar11 = (FNetObjectAttachmentsWriter *)&(pFVar11->ObjectToQueue).field_0x8;
      }
      return false;
    }
    lVar10 = *(longlong *)
              ((longlong)TStack_50.CurrentBitIndex * 0x40 + 8 + *(longlong *)&this->ObjectToQueue);
    if (lVar10 != 0) {
      if (*(int *)(lVar10 + 0x2118) != 0) {
        return false;
      }
      if (*(int *)(lVar10 + 0x2100) != *(int *)(lVar10 + 0x2104)) {
        return false;
      }
      if (*(int *)(lVar10 + 0x2108) != 0) {
        return false;
      }
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  } while( true );
}

// CanSendMoreReliableAttachments @ 144200ef0

bool __thiscall
UE::Net::Private::FNetObjectAttachmentsWriter::CanSendMoreReliableAttachments
          (FNetObjectAttachmentsWriter *this,ENetObjectAttachmentType param_1,uint param_2)

{
  FReliableSendQueue *pFVar1;
  FNetObjectAttachmentSendQueue *pFVar2;
  
  pFVar2 = GetQueue(this,param_1,param_2);
  if (((pFVar2 != (FNetObjectAttachmentSendQueue *)0x0) &&
      (pFVar1 = pFVar2->ReliableQueue, pFVar1 != (FReliableSendQueue *)0x0)) &&
     (0x3ff < (pFVar1->ReliableQueue).LastSeq - (pFVar1->ReliableQueue).FirstSeq)) {
    return false;
  }
  return true;
}

// CommitReplicationRecord @ 144201820

void __thiscall
UE::Net::Private::FNetObjectAttachmentsWriter::CommitReplicationRecord
          (FNetObjectAttachmentsWriter *this,ENetObjectAttachmentType param_1,uint param_2,
          FCommitRecord *param_3)

{
  uint uVar1;
  FNetObjectAttachmentSendQueue *pFVar2;
  
  pFVar2 = GetQueue(this,param_1,param_2);
  uVar1 = (param_3->UnreliableCommitRecord).Record;
  if (uVar1 != 0) {
    TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::PopNoCheck
              (&pFVar2->UnreliableQueue,(ulonglong)uVar1);
  }
  if (0x3ff < (ushort)((ushort)(param_3->ReliableReplicationRecord).Sequences[3] |
                       (ushort)(param_3->ReliableReplicationRecord).Sequences[2] |
                       (ushort)(param_3->ReliableReplicationRecord).Sequences[1] |
                      (ushort)(param_3->ReliableReplicationRecord).Sequences[0])) {
    FReliableNetBlobQueue::CommitReplicationRecord
              (&pFVar2->ReliableQueue->ReliableQueue,&param_3->ReliableReplicationRecord);
  }
  return;
}

// DropAllAttachments @ 1442080d0

void __thiscall
UE::Net::Private::FNetObjectAttachmentsWriter::DropAllAttachments
          (FNetObjectAttachmentsWriter *this,ENetObjectAttachmentType param_1,uint param_2)

{
  uint local_res18 [4];
  
  if (*(int *)&(this->ObjectToQueue).field_0x8 != *(int *)&(this->ObjectToQueue).field_0x34) {
    local_res18[0] = param_2;
    TSet<TTuple<unsigned_int,UE::Net::Private::FNetObjectAttachmentSendQueue>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetObjectAttachmentSendQueue,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned_int>
              ((TSet<TTuple<unsigned_int,UE::Net::Private::FNetObjectAttachmentSendQueue>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetObjectAttachmentSendQueue,0>,FDefaultSetAllocator>
                *)this,param_2,local_res18);
  }
  return;
}

// DropUnreliableAttachments @ 1442082c0

void __thiscall
UE::Net::Private::FNetObjectAttachmentsWriter::DropUnreliableAttachments
          (FNetObjectAttachmentsWriter *this,ENetObjectAttachmentType param_1,uint param_2,
          bool *param_3)

{
  bool bVar1;
  FNetObjectAttachmentSendQueue *this_00;
  uint local_18 [4];
  
  this_00 = GetQueue(this,param_1,param_2);
  if (this_00 == (FNetObjectAttachmentSendQueue *)0x0) {
    *param_3 = false;
  }
  else {
    FNetObjectAttachmentSendQueue::DropUnreliable(this_00,param_3);
    if ((*param_3 == false) && ((this_00->UnreliableQueue).Head == (this_00->UnreliableQueue).Tail))
    {
      if ((this_00->ReliableQueue != (FReliableSendQueue *)0x0) &&
         (bVar1 = FReliableNetBlobQueue::IsSafeToDestroy(&this_00->ReliableQueue->ReliableQueue),
         !bVar1)) {
        return;
      }
      if (*(int *)&(this->ObjectToQueue).field_0x8 != *(int *)&(this->ObjectToQueue).field_0x34) {
        local_18[0] = param_2;
        TSet<TTuple<unsigned_int,UE::Net::Private::FNetObjectAttachmentSendQueue>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetObjectAttachmentSendQueue,0>,FDefaultSetAllocator>
        ::RemoveImpl<unsigned_int>
                  ((TSet<TTuple<unsigned_int,UE::Net::Private::FNetObjectAttachmentSendQueue>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetObjectAttachmentSendQueue,0>,FDefaultSetAllocator>
                    *)this,param_2,local_18);
      }
    }
  }
  return;
}

// Enqueue @ 144208bb0

bool __thiscall
UE::Net::Private::FNetObjectAttachmentsWriter::Enqueue
          (FNetObjectAttachmentsWriter *this,ENetObjectAttachmentType param_1,uint param_2,
          TArrayView<TRefCountPtr<UE::Net::FNetBlob>_const_,int> *param_3)

{
  bool bVar1;
  FNetObjectAttachmentSendQueue *this_00;
  TArrayView<TRefCountPtr<UE::Net::FNetBlob>_const_,int> local_18;
  
  this_00 = GetOrCreateQueue(this,param_1,param_2);
  if (this_00 == (FNetObjectAttachmentSendQueue *)0x0) {
    local_18.DataPtr = (TRefCountPtr<UE::Net::FNetBlob> *)this;
    bVar1 = `UE::Net::Private::FNetObjectAttachmentsWriter::Enqueue'::__l3::<lambda_1>::operator()
                      (&local_18);
    if (!bVar1) {
      return false;
    }
  }
  local_18.DataPtr = param_3->DataPtr;
  local_18.ArrayNum = param_3->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_3->field_0xc;
  bVar1 = FNetObjectAttachmentSendQueue::Enqueue(this_00,&local_18);
  return bVar1;
}

// GetOrCreateQueue @ 14420b690

/* WARNING: Enum "Type": Some values do not have unique names */

FNetObjectAttachmentSendQueue * __thiscall
UE::Net::Private::FNetObjectAttachmentsWriter::GetOrCreateQueue
          (FNetObjectAttachmentsWriter *this,ENetObjectAttachmentType param_1,uint param_2)

{
  TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> *this_00;
  TUniquePtr<UE::Net::Private::FNetObjectAttachmentSendQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentSendQueue>_>
  *pTVar1;
  int iVar2;
  int iVar3;
  FNetObjectAttachmentSendQueue *this_01;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FNetObjectAttachmentSendQueue *pFVar7;
  uint *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  TKeyInitializer<unsigned_int_const_&> local_res10;
  uint local_res18 [2];
  uint *local_res20;
  longlong local_28 [2];
  
  local_res18[0] = param_2;
  if (param_1 == Normal) {
    iVar2 = *(int *)&(this->ObjectToQueue).field_0x8;
    iVar3 = *(int *)&(this->ObjectToQueue).field_0x34;
    if (iVar2 != iVar3) {
      puVar9 = *(undefined1 **)&(this->ObjectToQueue).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->ObjectToQueue).field_0x38;
      }
      uVar6 = *(uint *)(puVar9 + (ulonglong)
                                 (*(int *)&(this->ObjectToQueue).field_0x48 - 1U & param_2) * 4);
      if (uVar6 != 0xffffffff) {
        do {
          puVar8 = (uint *)((longlong)(int)uVar6 * 0x40 + *(longlong *)&this->ObjectToQueue);
          if (*puVar8 == param_2) {
            pFVar7 = (FNetObjectAttachmentSendQueue *)(puVar8 + 2);
            if (puVar8 == (uint *)0x0) {
              pFVar7 = (FNetObjectAttachmentSendQueue *)0x0;
            }
            if (pFVar7 != (FNetObjectAttachmentSendQueue *)0x0) {
              return pFVar7;
            }
            break;
          }
          uVar6 = puVar8[0xe];
        } while (uVar6 != 0xffffffff);
      }
    }
    if (AttachmentReplicationCVars::MaxSimultaneousObjectsWithRPCs <= iVar2 - iVar3) {
      return (FNetObjectAttachmentSendQueue *)0x0;
    }
    local_res20 = local_res18;
    TSet<TTuple<unsigned_int,UE::Net::Private::FNetObjectAttachmentSendQueue>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetObjectAttachmentSendQueue,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned_int,UE::Net::Private::FNetObjectAttachmentSendQueue>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetObjectAttachmentSendQueue,0>,FDefaultSetAllocator>
                *)this,&local_res10,(bool *)&local_res20);
    return (FNetObjectAttachmentSendQueue *)
           (*(longlong *)&this->ObjectToQueue + (longlong)(int)local_res10.Key * 0x40 + 8);
  }
  pTVar1 = this->SpecialQueues + param_1;
  pFVar7 = this->SpecialQueues[param_1].Ptr;
  if (pFVar7 != (FNetObjectAttachmentSendQueue *)0x0) {
    return pFVar7;
  }
  pFVar7 = ::operator_new(0x30);
  if (pFVar7 != (FNetObjectAttachmentSendQueue *)0x0) {
    (pFVar7->UnreliableQueue).Head = 0;
    (pFVar7->UnreliableQueue).Tail = 0;
    (pFVar7->UnreliableQueue).IndexMask = 0;
    (pFVar7->UnreliableQueue).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->UnreliableQueue).Storage.ArrayNum = 0;
    (pFVar7->UnreliableQueue).Storage.ArrayMax = 0;
    pFVar7->ReliableQueue = (FReliableSendQueue *)0x0;
    pFVar7->MaxUnreliableCount = AttachmentReplicationCVars::UnreliableRPCQueueSize;
  }
  if (pTVar1 == (TUniquePtr<UE::Net::Private::FNetObjectAttachmentSendQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentSendQueue>_>
                 *)local_28) {
    if (pFVar7 == (FNetObjectAttachmentSendQueue *)0x0) goto LAB_14420b737;
    FNetObjectAttachmentSendQueue::~FNetObjectAttachmentSendQueue(pFVar7);
  }
  else {
    this_01 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar7;
    if (this_01 == (FNetObjectAttachmentSendQueue *)0x0) goto LAB_14420b737;
    FNetObjectAttachmentSendQueue::~FNetObjectAttachmentSendQueue(this_01);
    pFVar7 = this_01;
  }
  ::operator_delete(pFVar7,0x30);
LAB_14420b737:
  if (param_1 == OutOfBand) {
    pFVar7 = pTVar1->Ptr;
    uVar11 = (ulonglong)(uint)AttachmentReplicationCVars::ClientToServerUnreliableRPCQueueSize;
    this_00 = &pFVar7->UnreliableQueue;
    pFVar7->MaxUnreliableCount = AttachmentReplicationCVars::ClientToServerUnreliableRPCQueueSize;
    uVar10 = (ulonglong)(this_00->Head - (pFVar7->UnreliableQueue).Tail);
    if (uVar11 < uVar10) {
      uVar10 = uVar10 - uVar11;
      if (2 < (byte)LogIris._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
      if (this_00->Head - (pFVar7->UnreliableQueue).Tail < uVar10) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1638566698149740331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                           ,0xd5,"Count() >= PopCount");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FNetObjectAttachmentSendQueue *)(*pcVar4)();
          return pFVar7;
        }
      }
      else {
        TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::
        PopNoCheck(this_00,uVar10);
      }
    }
  }
  return pTVar1->Ptr;
}

// GetQueue @ 14420d060

FNetObjectAttachmentSendQueue * __thiscall
UE::Net::Private::FNetObjectAttachmentsWriter::GetQueue
          (FNetObjectAttachmentsWriter *this,ENetObjectAttachmentType param_1,uint param_2)

{
  uint uVar1;
  FNetObjectAttachmentSendQueue *pFVar2;
  FNetObjectAttachmentSendQueue *pFVar3;
  undefined1 *puVar4;
  FNetObjectAttachmentSendQueue *pFVar5;
  
  if (param_1 != Normal) {
    return this->SpecialQueues[param_1].Ptr;
  }
  pFVar5 = (FNetObjectAttachmentSendQueue *)0x0;
  pFVar3 = pFVar5;
  if (*(int *)&(this->ObjectToQueue).field_0x8 != *(int *)&(this->ObjectToQueue).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ObjectToQueue).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ObjectToQueue).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)(*(int *)&(this->ObjectToQueue).field_0x48 - 1U & param_2)
                               * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar3 = (FNetObjectAttachmentSendQueue *)
                 ((longlong)(int)uVar1 * 0x40 + *(longlong *)&this->ObjectToQueue);
        if (*(uint *)&pFVar3->ReliableQueue == param_2) break;
        uVar1 = pFVar3[1].UnreliableQueue.Head;
        pFVar3 = pFVar5;
      } while (uVar1 != 0xffffffff);
    }
  }
  pFVar2 = (FNetObjectAttachmentSendQueue *)&pFVar3->UnreliableQueue;
  if (pFVar3 == (FNetObjectAttachmentSendQueue *)0x0) {
    pFVar2 = pFVar5;
  }
  return pFVar2;
}

// GetQueue @ 14420d0e0

FNetObjectAttachmentSendQueue * __thiscall
UE::Net::Private::FNetObjectAttachmentsWriter::GetQueue
          (FNetObjectAttachmentsWriter *this,ENetObjectAttachmentType param_1,uint param_2)

{
  uint uVar1;
  FNetObjectAttachmentSendQueue *pFVar2;
  FNetObjectAttachmentSendQueue *pFVar3;
  undefined1 *puVar4;
  FNetObjectAttachmentSendQueue *pFVar5;
  
  if (param_1 != Normal) {
    return this->SpecialQueues[param_1].Ptr;
  }
  pFVar5 = (FNetObjectAttachmentSendQueue *)0x0;
  pFVar3 = pFVar5;
  if (*(int *)&(this->ObjectToQueue).field_0x8 != *(int *)&(this->ObjectToQueue).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ObjectToQueue).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ObjectToQueue).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)(*(int *)&(this->ObjectToQueue).field_0x48 - 1U & param_2)
                               * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar3 = (FNetObjectAttachmentSendQueue *)
                 ((longlong)(int)uVar1 * 0x40 + *(longlong *)&this->ObjectToQueue);
        if (*(uint *)&pFVar3->ReliableQueue == param_2) break;
        uVar1 = pFVar3[1].UnreliableQueue.Head;
        pFVar3 = pFVar5;
      } while (uVar1 != 0xffffffff);
    }
  }
  pFVar2 = (FNetObjectAttachmentSendQueue *)&pFVar3->UnreliableQueue;
  if (pFVar3 == (FNetObjectAttachmentSendQueue *)0x0) {
    pFVar2 = pFVar5;
  }
  return pFVar2;
}

// GetUnreliableAttachmentCount @ 14420de00

ulong64 __thiscall
UE::Net::Private::FNetObjectAttachmentsWriter::GetUnreliableAttachmentCount
          (FNetObjectAttachmentsWriter *this,ENetObjectAttachmentType param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FReliableSendQueue *this_00;
  FNetObjectAttachmentSendQueue *pFVar3;
  ulong64 uVar4;
  FScriptContainerElement *pFVar5;
  ulong64 uVar6;
  longlong lVar7;
  undefined1 local_res20 [8];
  
  pFVar3 = GetQueue(this,param_1,param_2);
  if (pFVar3 == (FNetObjectAttachmentSendQueue *)0x0) {
    return 0;
  }
  uVar6 = (ulong64)((pFVar3->UnreliableQueue).Head - (pFVar3->UnreliableQueue).Tail);
  this_00 = pFVar3->ReliableQueue;
  if (this_00 != (FReliableSendQueue *)0x0) {
    pFVar5 = (this_00->PreQueue).AllocatorInstance.Data;
    lVar7 = 0;
    iVar2 = (this_00->PreQueue).ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this_00->PreQueue).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TRefCountPtr<UE::Net::FNetBlob>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar5 == pFVar1) break;
      if ((*(longlong *)&pFVar5->field_0x0 == 0) ||
         ((*(byte *)(*(longlong *)&pFVar5->field_0x0 + 0xc) & 1) != 0)) {
        pFVar5 = pFVar5 + 8;
      }
      else {
        lVar7 = lVar7 + 1;
        pFVar5 = pFVar5 + 8;
      }
    }
    uVar4 = FReliableNetBlobQueue::GetUnreliableCount(&this_00->ReliableQueue);
    uVar6 = uVar6 + uVar4 + lVar7;
  }
  return uVar6;
}

// HasUnsentAttachments @ 14420f4d0

bool __thiscall
UE::Net::Private::FNetObjectAttachmentsWriter::HasUnsentAttachments
          (FNetObjectAttachmentsWriter *this,ENetObjectAttachmentType param_1,uint param_2)

{
  FReliableSendQueue *pFVar1;
  FNetObjectAttachmentSendQueue *pFVar2;
  
  pFVar2 = GetQueue(this,param_1,param_2);
  if ((pFVar2 != (FNetObjectAttachmentSendQueue *)0x0) &&
     (((pFVar2->UnreliableQueue).Head != (pFVar2->UnreliableQueue).Tail ||
      ((pFVar1 = pFVar2->ReliableQueue, pFVar1 != (FReliableSendQueue *)0x0 &&
       ((0 < (pFVar1->PreQueue).ArrayNum || ((pFVar1->ReliableQueue).UnsentBlobCount != 0)))))))) {
    return true;
  }
  return false;
}

// HasUnsentUnreliableAttachments @ 14420f530

bool __thiscall
UE::Net::Private::FNetObjectAttachmentsWriter::HasUnsentUnreliableAttachments
          (FNetObjectAttachmentsWriter *this,ENetObjectAttachmentType param_1,uint param_2)

{
  FNetObjectAttachmentSendQueue *pFVar1;
  
  pFVar1 = GetQueue(this,param_1,param_2);
  if (pFVar1 == (FNetObjectAttachmentSendQueue *)0x0) {
    return false;
  }
  return (pFVar1->UnreliableQueue).Head != (pFVar1->UnreliableQueue).Tail;
}

// IsAllReliableSentAndAcked @ 1442115a0

bool __thiscall
UE::Net::Private::FNetObjectAttachmentsWriter::IsAllReliableSentAndAcked
          (FNetObjectAttachmentsWriter *this,ENetObjectAttachmentType param_1,uint param_2)

{
  FReliableSendQueue *pFVar1;
  FNetObjectAttachmentSendQueue *pFVar2;
  
  pFVar2 = GetQueue(this,param_1,param_2);
  if ((pFVar2 != (FNetObjectAttachmentSendQueue *)0x0) &&
     (((pFVar2->UnreliableQueue).Head != (pFVar2->UnreliableQueue).Tail ||
      ((pFVar1 = pFVar2->ReliableQueue, pFVar1 != (FReliableSendQueue *)0x0 &&
       ((((pFVar1->PreQueue).ArrayNum != 0 ||
         ((pFVar1->ReliableQueue).FirstSeq != (pFVar1->ReliableQueue).LastSeq)) ||
        ((pFVar1->ReliableQueue).UnsentBlobCount != 0)))))))) {
    return false;
  }
  return true;
}

// IsAllSentAndAcked @ 144211640

bool __thiscall
UE::Net::Private::FNetObjectAttachmentsWriter::IsAllSentAndAcked
          (FNetObjectAttachmentsWriter *this,ENetObjectAttachmentType param_1,uint param_2)

{
  FReliableSendQueue *pFVar1;
  FNetObjectAttachmentSendQueue *pFVar2;
  
  pFVar2 = GetQueue(this,param_1,param_2);
  if ((pFVar2 != (FNetObjectAttachmentSendQueue *)0x0) &&
     (((pFVar2->UnreliableQueue).Head != (pFVar2->UnreliableQueue).Tail ||
      ((pFVar1 = pFVar2->ReliableQueue, pFVar1 != (FReliableSendQueue *)0x0 &&
       ((((pFVar1->PreQueue).ArrayNum != 0 ||
         ((pFVar1->ReliableQueue).FirstSeq != (pFVar1->ReliableQueue).LastSeq)) ||
        ((pFVar1->ReliableQueue).UnsentBlobCount != 0)))))))) {
    return false;
  }
  return true;
}

// IsSafeToDestroy @ 144211d00

bool __thiscall
UE::Net::Private::FNetObjectAttachmentsWriter::IsSafeToDestroy
          (FNetObjectAttachmentsWriter *this,ENetObjectAttachmentType param_1,uint param_2)

{
  bool bVar1;
  FNetObjectAttachmentSendQueue *pFVar2;
  
  pFVar2 = GetQueue(this,param_1,param_2);
  if (pFVar2 != (FNetObjectAttachmentSendQueue *)0x0) {
    if ((pFVar2->UnreliableQueue).Head != (pFVar2->UnreliableQueue).Tail) {
      return false;
    }
    if ((pFVar2->ReliableQueue != (FReliableSendQueue *)0x0) &&
       (bVar1 = FReliableNetBlobQueue::IsSafeToDestroy(&pFVar2->ReliableQueue->ReliableQueue),
       !bVar1)) {
      return false;
    }
  }
  return true;
}

// ProcessPacketDeliveryStatus @ 1442147c0

void __thiscall
UE::Net::Private::FNetObjectAttachmentsWriter::ProcessPacketDeliveryStatus
          (FNetObjectAttachmentsWriter *this,EPacketDeliveryStatus param_1,
          ENetObjectAttachmentType param_2,uint param_3,FReplicationRecord *param_4)

{
  FNetObjectAttachmentSendQueue *pFVar1;
  
  pFVar1 = GetQueue(this,param_2,param_3);
  if ((pFVar1 != (FNetObjectAttachmentSendQueue *)0x0) &&
     (pFVar1->ReliableQueue != (FReliableSendQueue *)0x0)) {
    FNetObjectAttachmentSendQueue::FReliableSendQueue::ProcessPacketDeliveryStatus
              (pFVar1->ReliableQueue,param_1,param_4);
    return;
  }
  return;
}

// Serialize @ 144219700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EAttachmentWriteStatus __thiscall
UE::Net::Private::FNetObjectAttachmentsWriter::Serialize
          (FNetObjectAttachmentsWriter *this,FNetSerializationContext *param_1,
          ENetObjectAttachmentType param_2,uint param_3,FNetRefHandle param_4,FCommitRecord *param_5
          ,bool *param_6)

{
  code *pcVar1;
  bool bVar2;
  EAttachmentWriteStatus EVar3;
  FNetObjectAttachmentSendQueue *this_00;
  
  this_00 = GetQueue(this,param_2,param_3);
  if (this_00 == (FNetObjectAttachmentSendQueue *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3090213919906595455>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\AttachmentReplication.cpp"
                       ,0x27f,"Queue != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    *(undefined8 *)(param_5->ReliableReplicationRecord).Sequences = 0;
    (param_5->UnreliableCommitRecord).Record = 0;
    *param_6 = false;
    EVar3 = NoAttachments;
  }
  else {
    EVar3 = FNetObjectAttachmentSendQueue::Serialize(this_00,param_1,param_4,param_5,param_6);
  }
  return EVar3;
}

// ~FNetObjectAttachmentsWriter @ 1442f8440

void __thiscall
UE::Net::Private::FNetObjectAttachmentsWriter::~FNetObjectAttachmentsWriter
          (FNetObjectAttachmentsWriter *this)

{
  FNetObjectAttachmentSendQueue *this_00;
  void *pvVar1;
  longlong lVar2;
  FNetObjectAttachmentsWriter *pFVar3;
  
  pFVar3 = this + 1;
  lVar2 = 3;
  do {
    this_00 = pFVar3[-1].SpecialQueues[2].Ptr;
    pFVar3 = (FNetObjectAttachmentsWriter *)(pFVar3[-1].SpecialQueues + 2);
    lVar2 = lVar2 + -1;
    if (this_00 != (FNetObjectAttachmentSendQueue *)0x0) {
      FNetObjectAttachmentSendQueue::~FNetObjectAttachmentSendQueue(this_00);
      ::operator_delete(this_00,0x30);
    }
  } while (lVar2 != 0);
  *(undefined4 *)&(this->ObjectToQueue).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ObjectToQueue).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FNetObjectAttachmentSendQueue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FNetObjectAttachmentSendQueue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FNetObjectAttachmentSendQueue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator() @ 1504b26a0

bool __thiscall
`UE::Net::Private::FNetObjectAttachmentsWriter::Enqueue'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3090213919906595324>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3090213919906595324>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}


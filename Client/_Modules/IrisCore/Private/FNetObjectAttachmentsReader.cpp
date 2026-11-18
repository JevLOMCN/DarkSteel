// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 9

// FNetObjectAttachmentsReader @ 1441f8a90

FNetObjectAttachmentsReader * __thiscall
UE::Net::Private::FNetObjectAttachmentsReader::FNetObjectAttachmentsReader
          (FNetObjectAttachmentsReader *this)

{
  *(undefined8 *)&this->ObjectToQueue = 0;
  *(undefined8 *)&(this->ObjectToQueue).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectToQueue).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectToQueue).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectToQueue).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectToQueue).field_0x34 = 0;
  *(undefined4 *)&(this->ObjectToQueue).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ObjectToQueue).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectToQueue).field_0x48 = 0;
  this->SpecialQueues[0].Ptr = (FNetObjectAttachmentReceiveQueue *)0x0;
  this->SpecialQueues[1].Ptr = (FNetObjectAttachmentReceiveQueue *)0x0;
  this->SpecialQueues[2].Ptr = (FNetObjectAttachmentReceiveQueue *)0x0;
  this->PartialNetObjectAttachmentHandler = (UPartialNetObjectAttachmentHandler *)0x0;
  return this;
}

// ~FNetObjectAttachmentsReader @ 1441f9d20

void __thiscall
UE::Net::Private::FNetObjectAttachmentsReader::~FNetObjectAttachmentsReader
          (FNetObjectAttachmentsReader *this)

{
  FNetObjectAttachmentReceiveQueue *this_00;
  void *pvVar1;
  longlong lVar2;
  TUniquePtr<UE::Net::Private::FNetObjectAttachmentReceiveQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentReceiveQueue>_>
  *pTVar3;
  
  pTVar3 = (TUniquePtr<UE::Net::Private::FNetObjectAttachmentReceiveQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentReceiveQueue>_>
            *)&this->PartialNetObjectAttachmentHandler;
  lVar2 = 3;
  do {
    this_00 = pTVar3[-1].Ptr;
    pTVar3 = pTVar3 + -1;
    lVar2 = lVar2 + -1;
    if (this_00 != (FNetObjectAttachmentReceiveQueue *)0x0) {
      FNetObjectAttachmentReceiveQueue::~FNetObjectAttachmentReceiveQueue(this_00);
      ::operator_delete(this_00,0x28);
    }
  } while (lVar2 != 0);
  *(undefined4 *)&(this->ObjectToQueue).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ObjectToQueue).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FNetObjectAttachmentReceiveQueue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FNetObjectAttachmentReceiveQueue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FNetObjectAttachmentReceiveQueue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// Deserialize @ 144207580

void __thiscall
UE::Net::Private::FNetObjectAttachmentsReader::Deserialize
          (FNetObjectAttachmentsReader *this,FNetSerializationContext *param_1,
          ENetObjectAttachmentType param_2,uint param_3,FNetRefHandle param_4)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  FNetObjectAttachmentReceiveQueue *this_00;
  
  this_00 = GetOrCreateQueue(this,param_2,param_3);
  if (this_00 != (FNetObjectAttachmentReceiveQueue *)0x0) {
    FNetObjectAttachmentReceiveQueue::Deserialize(this_00,param_1,param_4);
    return;
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3090213919906595936>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\AttachmentReplication.cpp"
                     ,0x460,"Queue != nullptr");
  FVar2 = NetError_TooManyObjectsWithFunctionCalls;
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FNetSerializationContext::SetBitStreamOverflow(param_1);
  FNetErrorContext::SetError(&param_1->ErrorContext,FVar2);
  return;
}

// DropAllAttachments @ 1442080a0

void __thiscall
UE::Net::Private::FNetObjectAttachmentsReader::DropAllAttachments
          (FNetObjectAttachmentsReader *this,ENetObjectAttachmentType param_1,uint param_2)

{
  uint local_res18 [4];
  
  if (*(int *)&(this->ObjectToQueue).field_0x8 != *(int *)&(this->ObjectToQueue).field_0x34) {
    local_res18[0] = param_2;
    TSet<TTuple<unsigned_int,UE::Net::Private::FNetObjectAttachmentReceiveQueue>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetObjectAttachmentReceiveQueue,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned_int>
              ((TSet<TTuple<unsigned_int,UE::Net::Private::FNetObjectAttachmentReceiveQueue>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetObjectAttachmentReceiveQueue,0>,FDefaultSetAllocator>
                *)this,param_2,local_res18);
  }
  return;
}

// GetOrCreateQueue @ 14420b430

/* WARNING: Enum "Type": Some values do not have unique names */

FNetObjectAttachmentReceiveQueue * __thiscall
UE::Net::Private::FNetObjectAttachmentsReader::GetOrCreateQueue
          (FNetObjectAttachmentsReader *this,ENetObjectAttachmentType param_1,uint param_2)

{
  TUniquePtr<UE::Net::Private::FNetObjectAttachmentReceiveQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentReceiveQueue>_>
  *pTVar1;
  int iVar2;
  int iVar3;
  UPartialNetObjectAttachmentHandler *pUVar4;
  FDeferredProcessingQueue *pFVar5;
  code *pcVar6;
  bool bVar7;
  FNetObjectAttachmentReceiveQueue *pFVar8;
  FNetObjectAttachmentReceiveQueue *pFVar9;
  uint *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  TKeyInitializer<unsigned_int_const_&> local_res10;
  uint local_res18 [2];
  uint *local_res20;
  longlong local_38 [2];
  
  local_res18[0] = param_2;
  if (param_1 == Normal) {
    iVar2 = *(int *)&(this->ObjectToQueue).field_0x8;
    iVar3 = *(int *)&(this->ObjectToQueue).field_0x34;
    if (iVar2 != iVar3) {
      puVar11 = *(undefined1 **)&(this->ObjectToQueue).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->ObjectToQueue).field_0x38;
      }
      uVar13 = *(uint *)(puVar11 +
                        (ulonglong)(*(int *)&(this->ObjectToQueue).field_0x48 - 1U & param_2) * 4);
      if (uVar13 != 0xffffffff) {
        do {
          puVar10 = (uint *)((longlong)(int)uVar13 * 0x38 + *(longlong *)&this->ObjectToQueue);
          if (*puVar10 == param_2) {
            pFVar9 = (FNetObjectAttachmentReceiveQueue *)(puVar10 + 2);
            if (puVar10 == (uint *)0x0) {
              pFVar9 = (FNetObjectAttachmentReceiveQueue *)0x0;
            }
            if (pFVar9 != (FNetObjectAttachmentReceiveQueue *)0x0) {
              return pFVar9;
            }
            break;
          }
          uVar13 = puVar10[0xc];
        } while (uVar13 != 0xffffffff);
      }
    }
    if (AttachmentReplicationCVars::MaxSimultaneousObjectsWithRPCs <= iVar2 - iVar3) {
      return (FNetObjectAttachmentReceiveQueue *)0x0;
    }
    local_res20 = local_res18;
    TSet<TTuple<unsigned_int,UE::Net::Private::FNetObjectAttachmentReceiveQueue>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetObjectAttachmentReceiveQueue,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned_int,UE::Net::Private::FNetObjectAttachmentReceiveQueue>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetObjectAttachmentReceiveQueue,0>,FDefaultSetAllocator>
                *)this,&local_res10,(bool *)&local_res20);
    pUVar4 = this->PartialNetObjectAttachmentHandler;
    lVar12 = (longlong)(int)local_res10.Key * 0x38 + *(longlong *)&this->ObjectToQueue;
    *(UPartialNetObjectAttachmentHandler **)(lVar12 + 0x20) = pUVar4;
    if (pUVar4 != (UPartialNetObjectAttachmentHandler *)0x0) {
      *(int *)(lVar12 + 0x2c) = (int)pUVar4->_padding_;
      return (FNetObjectAttachmentReceiveQueue *)(lVar12 + 8);
    }
    *(undefined4 *)(lVar12 + 0x2c) = 0xffffffff;
    return (FNetObjectAttachmentReceiveQueue *)(lVar12 + 8);
  }
  pTVar1 = this->SpecialQueues + param_1;
  pFVar9 = this->SpecialQueues[param_1].Ptr;
  if (pFVar9 != (FNetObjectAttachmentReceiveQueue *)0x0) {
    return pFVar9;
  }
  pFVar8 = ::operator_new(0x28);
  pFVar9 = (FNetObjectAttachmentReceiveQueue *)0x0;
  uVar13 = 0xffffffff;
  if (pFVar8 != (FNetObjectAttachmentReceiveQueue *)0x0) {
    pFVar8->ReliableQueue = (FReliableNetBlobQueue *)0x0;
    pFVar8->DeferredProcessingQueues[0] = (FDeferredProcessingQueue *)0x0;
    pFVar8->DeferredProcessingQueues[1] = (FDeferredProcessingQueue *)0x0;
    pFVar8->PartialNetObjectAttachmentHandler = (UPartialNetObjectAttachmentHandler *)0x0;
    pFVar8->MaxUnreliableCount = AttachmentReplicationCVars::UnreliableRPCQueueSize;
    pFVar8->PartialNetBlobType = 0xffffffff;
    pFVar9 = pFVar8;
  }
  if (pTVar1 == (TUniquePtr<UE::Net::Private::FNetObjectAttachmentReceiveQueue,TDefaultDelete<UE::Net::Private::FNetObjectAttachmentReceiveQueue>_>
                 *)local_38) {
    if (pFVar9 == (FNetObjectAttachmentReceiveQueue *)0x0) goto LAB_14420b4e1;
    FNetObjectAttachmentReceiveQueue::~FNetObjectAttachmentReceiveQueue(pFVar9);
  }
  else {
    pFVar8 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar9;
    if (pFVar8 == (FNetObjectAttachmentReceiveQueue *)0x0) goto LAB_14420b4e1;
    FNetObjectAttachmentReceiveQueue::~FNetObjectAttachmentReceiveQueue(pFVar8);
    pFVar9 = pFVar8;
  }
  ::operator_delete(pFVar9,0x28);
LAB_14420b4e1:
  pUVar4 = this->PartialNetObjectAttachmentHandler;
  pFVar9 = pTVar1->Ptr;
  pFVar9->PartialNetObjectAttachmentHandler = pUVar4;
  if (pUVar4 != (UPartialNetObjectAttachmentHandler *)0x0) {
    uVar13 = (uint)pUVar4->_padding_;
  }
  pFVar9->PartialNetBlobType = uVar13;
  if (param_1 == OutOfBand) {
    pFVar5 = pFVar9->DeferredProcessingQueues[0];
    uVar14 = (ulonglong)(uint)AttachmentReplicationCVars::ClientToServerUnreliableRPCQueueSize;
    pFVar9->MaxUnreliableCount = AttachmentReplicationCVars::ClientToServerUnreliableRPCQueueSize;
    if (pFVar5 != (FDeferredProcessingQueue *)0x0) {
      uVar14 = ((pFVar5->Queue).Head - (pFVar5->Queue).Tail) - uVar14;
      if (2 < (byte)LogIris._0_1_) {
        Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_UE::Net::Private::FNetObjectAttachmentReceiveQueue::FDeferredProcessingQueue::SetQueueCapacity(unsigned_int)___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
      if ((pFVar5->Queue).Head - (pFVar5->Queue).Tail < uVar14) {
        bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1638566698149740331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                           ,0xd5,"Count() >= PopCount");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pFVar9 = (FNetObjectAttachmentReceiveQueue *)(*pcVar6)();
          return pFVar9;
        }
      }
      else {
        TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::
        PopNoCheck(&pFVar5->Queue,uVar14);
      }
    }
  }
  return pFVar9;
}

// GetQueue @ 14420cf60

FNetObjectAttachmentReceiveQueue * __thiscall
UE::Net::Private::FNetObjectAttachmentsReader::GetQueue
          (FNetObjectAttachmentsReader *this,ENetObjectAttachmentType param_1,uint param_2)

{
  int iVar1;
  FNetObjectAttachmentReceiveQueue *pFVar2;
  undefined1 *puVar3;
  FNetObjectAttachmentReceiveQueue *pFVar4;
  FNetObjectAttachmentReceiveQueue *pFVar5;
  
  if (param_1 != Normal) {
    return this->SpecialQueues[param_1].Ptr;
  }
  pFVar5 = (FNetObjectAttachmentReceiveQueue *)0x0;
  pFVar4 = pFVar5;
  if (*(int *)&(this->ObjectToQueue).field_0x8 != *(int *)&(this->ObjectToQueue).field_0x34) {
    puVar3 = *(undefined1 **)&(this->ObjectToQueue).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->ObjectToQueue).field_0x38;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)(*(int *)&(this->ObjectToQueue).field_0x48 - 1U & param_2)
                              * 4);
    if (iVar1 != -1) {
      do {
        pFVar4 = (FNetObjectAttachmentReceiveQueue *)
                 ((longlong)iVar1 * 0x38 + *(longlong *)&this->ObjectToQueue);
        if (*(uint *)&pFVar4->ReliableQueue == param_2) break;
        iVar1 = *(int *)pFVar4[1].DeferredProcessingQueues;
        pFVar4 = pFVar5;
      } while (iVar1 != -1);
    }
  }
  pFVar2 = (FNetObjectAttachmentReceiveQueue *)pFVar4->DeferredProcessingQueues;
  if (pFVar4 == (FNetObjectAttachmentReceiveQueue *)0x0) {
    pFVar2 = pFVar5;
  }
  return pFVar2;
}

// GetQueue @ 14420cfe0

FNetObjectAttachmentReceiveQueue * __thiscall
UE::Net::Private::FNetObjectAttachmentsReader::GetQueue
          (FNetObjectAttachmentsReader *this,ENetObjectAttachmentType param_1,uint param_2)

{
  int iVar1;
  FNetObjectAttachmentReceiveQueue *pFVar2;
  undefined1 *puVar3;
  FNetObjectAttachmentReceiveQueue *pFVar4;
  FNetObjectAttachmentReceiveQueue *pFVar5;
  
  if (param_1 != Normal) {
    return this->SpecialQueues[param_1].Ptr;
  }
  pFVar5 = (FNetObjectAttachmentReceiveQueue *)0x0;
  pFVar4 = pFVar5;
  if (*(int *)&(this->ObjectToQueue).field_0x8 != *(int *)&(this->ObjectToQueue).field_0x34) {
    puVar3 = *(undefined1 **)&(this->ObjectToQueue).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->ObjectToQueue).field_0x38;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)(*(int *)&(this->ObjectToQueue).field_0x48 - 1U & param_2)
                              * 4);
    if (iVar1 != -1) {
      do {
        pFVar4 = (FNetObjectAttachmentReceiveQueue *)
                 ((longlong)iVar1 * 0x38 + *(longlong *)&this->ObjectToQueue);
        if (*(uint *)&pFVar4->ReliableQueue == param_2) break;
        iVar1 = *(int *)pFVar4[1].DeferredProcessingQueues;
        pFVar4 = pFVar5;
      } while (iVar1 != -1);
    }
  }
  pFVar2 = (FNetObjectAttachmentReceiveQueue *)pFVar4->DeferredProcessingQueues;
  if (pFVar4 == (FNetObjectAttachmentReceiveQueue *)0x0) {
    pFVar2 = pFVar5;
  }
  return pFVar2;
}

// HasUnprocessedAttachments @ 14420f400

bool __thiscall
UE::Net::Private::FNetObjectAttachmentsReader::HasUnprocessedAttachments
          (FNetObjectAttachmentsReader *this,ENetObjectAttachmentType param_1,uint param_2)

{
  FDeferredProcessingQueue *pFVar1;
  int iVar2;
  FNetObjectAttachmentReceiveQueue *pFVar3;
  FNetObjectAttachmentReceiveQueue *pFVar4;
  undefined1 *puVar5;
  FNetObjectAttachmentReceiveQueue *pFVar6;
  
  if (param_1 == Normal) {
    pFVar6 = (FNetObjectAttachmentReceiveQueue *)0x0;
    pFVar3 = pFVar6;
    if (*(int *)&(this->ObjectToQueue).field_0x8 != *(int *)&(this->ObjectToQueue).field_0x34) {
      puVar5 = *(undefined1 **)&(this->ObjectToQueue).field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(this->ObjectToQueue).field_0x38;
      }
      iVar2 = *(int *)(puVar5 + (ulonglong)
                                (*(int *)&(this->ObjectToQueue).field_0x48 - 1U & param_2) * 4);
      if (iVar2 != -1) {
        do {
          pFVar3 = (FNetObjectAttachmentReceiveQueue *)
                   ((longlong)iVar2 * 0x38 + *(longlong *)&this->ObjectToQueue);
          if (*(uint *)&pFVar3->ReliableQueue == param_2) break;
          iVar2 = *(int *)pFVar3[1].DeferredProcessingQueues;
          pFVar3 = pFVar6;
        } while (iVar2 != -1);
      }
    }
    pFVar4 = (FNetObjectAttachmentReceiveQueue *)pFVar3->DeferredProcessingQueues;
    if (pFVar3 == (FNetObjectAttachmentReceiveQueue *)0x0) {
      pFVar4 = pFVar6;
    }
  }
  else {
    pFVar4 = this->SpecialQueues[param_1].Ptr;
  }
  if ((pFVar4 != (FNetObjectAttachmentReceiveQueue *)0x0) &&
     (((pFVar1 = pFVar4->DeferredProcessingQueues[0], pFVar1 != (FDeferredProcessingQueue *)0x0 &&
       ((pFVar1->Queue).Head != (pFVar1->Queue).Tail)) ||
      ((pFVar1 = pFVar4->DeferredProcessingQueues[1], pFVar1 != (FDeferredProcessingQueue *)0x0 &&
       ((pFVar1->Queue).Head != (pFVar1->Queue).Tail)))))) {
    return true;
  }
  return false;
}

// Init @ 14420f680

void __thiscall
UE::Net::Private::FNetObjectAttachmentsReader::Init
          (FNetObjectAttachmentsReader *this,FNetObjectAttachmentsReaderInitParams *param_1)

{
  this->PartialNetObjectAttachmentHandler = param_1->PartialNetObjectAttachmentHandler;
  return;
}


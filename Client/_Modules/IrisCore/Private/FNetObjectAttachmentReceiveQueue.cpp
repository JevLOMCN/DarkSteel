// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 17

// FNetObjectAttachmentReceiveQueue @ 1441f8980

FNetObjectAttachmentReceiveQueue * __thiscall
UE::Net::Private::FNetObjectAttachmentReceiveQueue::FNetObjectAttachmentReceiveQueue
          (FNetObjectAttachmentReceiveQueue *this)

{
  this->ReliableQueue = (FReliableNetBlobQueue *)0x0;
  this->DeferredProcessingQueues[0] = (FDeferredProcessingQueue *)0x0;
  this->DeferredProcessingQueues[1] = (FDeferredProcessingQueue *)0x0;
  this->PartialNetObjectAttachmentHandler = (UPartialNetObjectAttachmentHandler *)0x0;
  this->MaxUnreliableCount = AttachmentReplicationCVars::UnreliableRPCQueueSize;
  this->PartialNetBlobType = 0xffffffff;
  return this;
}

// ~FNetObjectAttachmentReceiveQueue @ 1441f9b70

void __thiscall
UE::Net::Private::FNetObjectAttachmentReceiveQueue::~FNetObjectAttachmentReceiveQueue
          (FNetObjectAttachmentReceiveQueue *this)

{
  FReliableNetBlobQueue *this_00;
  FDeferredProcessingQueue *pFVar1;
  FScriptContainerElement *pFVar2;
  FNetBlobAssembler *pFVar3;
  FDeferredProcessingQueue **ppFVar4;
  
  this_00 = this->ReliableQueue;
  if (this_00 != (FReliableNetBlobQueue *)0x0) {
    FReliableNetBlobQueue::~FReliableNetBlobQueue(this_00);
    ::operator_delete(this_00,0x2110);
  }
  for (ppFVar4 = this->DeferredProcessingQueues;
      (UPartialNetObjectAttachmentHandler **)ppFVar4 != &this->PartialNetObjectAttachmentHandler;
      ppFVar4 = ppFVar4 + 1) {
    pFVar1 = *ppFVar4;
    if (pFVar1 != (FDeferredProcessingQueue *)0x0) {
      TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::
      PopNoCheck(&pFVar1->Queue,(ulonglong)((pFVar1->Queue).Head - (pFVar1->Queue).Tail));
      (pFVar1->Queue).Storage.ArrayNum = 0;
      DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
                ((TRefCountPtr<UE::Net::FNetBlob> *)(pFVar1->Queue).Storage.AllocatorInstance.Data,0
                );
      pFVar2 = (pFVar1->Queue).Storage.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar3 = (pFVar1->UnreliableNetBlobAssembler).Ptr;
      if (pFVar3 != (FNetBlobAssembler *)0x0) {
        FNetBitStreamWriter::~FNetBitStreamWriter(&pFVar3->BitWriter);
        pFVar2 = (pFVar3->Payload).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pFVar3,0x60);
      }
      pFVar3 = (pFVar1->ReliableNetBlobAssembler).Ptr;
      if (pFVar3 != (FNetBlobAssembler *)0x0) {
        FNetBitStreamWriter::~FNetBitStreamWriter(&pFVar3->BitWriter);
        pFVar2 = (pFVar3->Payload).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pFVar3,0x60);
      }
      ::operator_delete(pFVar1,0x40);
    }
  }
  return;
}

// Deserialize @ 144207210

void __thiscall
UE::Net::Private::FNetObjectAttachmentReceiveQueue::Deserialize
          (FNetObjectAttachmentReceiveQueue *this,FNetSerializationContext *param_1,
          FNetRefHandle param_2)

{
  FNetBitStreamReader *this_00;
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ForElementType<FNetTracePacketContentEvent> FVar5;
  FNetTraceCollector *pFVar6;
  FNetTraceCollector *pFVar7;
  ulonglong uVar8;
  FNetTraceCollector *pFVar9;
  uint local_res20;
  
  this_00 = param_1->BitStreamReader;
  pFVar6 = (FNetTraceCollector *)0x0;
  pFVar9 = pFVar6;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar9 = param_1->TraceCollector;
  }
  local_res20 = 0xffffffff;
  if (pFVar9 != (FNetTraceCollector *)0x0) {
    local_res20 = FNetTrace::BeginPacketContentEvent(pFVar9,NameId,this_00->BufferBitPosition);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      RPCs = CreatePersistentNetDebugName(L"RPCs",4);
      _Init_thread_footer(&::_TSS0);
    }
    uVar2 = FNetTrace::TraceName(RPCs);
    FVar5 = (pFVar9->Events).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar5 = (ForElementType<FNetTracePacketContentEvent>)&pFVar9->Events;
    }
    *(uint *)((longlong)FVar5 + (ulonglong)local_res20 * 0x10) = uVar2;
  }
  uVar2 = FNetBitStreamReader::ReadBits(this_00,1);
  uVar3 = FNetBitStreamReader::ReadBits(this_00,1);
  if (this_00->OverflowBitCount != 0) goto LAB_144207485;
  if ((uVar2 & 1) == 0) {
    uVar8 = (ulonglong)_tls_index;
LAB_1442073d4:
    if ((uVar3 & 1) == 0) goto LAB_144207485;
    uVar2 = 0xffffffff;
    pFVar7 = pFVar6;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar7 = param_1->TraceCollector;
    }
    if (pFVar7 != (FNetTraceCollector *)0x0) {
      uVar2 = FNetTrace::BeginPacketContentEvent(pFVar7,NameId,this_00->BufferBitPosition);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x9d4c) <
           ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        Unreliable = CreatePersistentNetDebugName(L"Unreliable",10);
        _Init_thread_footer(&::_TSS0);
      }
      uVar3 = FNetTrace::TraceName(Unreliable);
      FVar5 = (pFVar7->Events).AllocatorInstance.SecondaryData;
      if (FVar5 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar5 = (ForElementType<FNetTracePacketContentEvent>)&pFVar7->Events;
      }
      *(uint *)((longlong)FVar5 + (ulonglong)uVar2 * 0x10) = uVar3;
    }
    DeserializeUnreliable(this,param_1,param_2);
    if ((param_1->ErrorContext).Error == (FName)0x0) {
      FNetSerializationContext::IsBitStreamOverflown(param_1);
    }
  }
  else {
    uVar2 = 0xffffffff;
    pFVar7 = pFVar6;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar7 = param_1->TraceCollector;
    }
    if (pFVar7 == (FNetTraceCollector *)0x0) {
      uVar8 = (ulonglong)_tls_index;
    }
    else {
      uVar2 = FNetTrace::BeginPacketContentEvent(pFVar7,NameId,this_00->BufferBitPosition);
      uVar8 = (ulonglong)_tls_index;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x9d4c) <
           ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        Ordered = CreatePersistentNetDebugName(L"Ordered",7);
        _Init_thread_footer(&::_TSS0);
      }
      uVar4 = FNetTrace::TraceName(Ordered);
      FVar5 = (pFVar7->Events).AllocatorInstance.SecondaryData;
      if (FVar5 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar5 = (ForElementType<FNetTracePacketContentEvent>)&pFVar7->Events;
      }
      *(uint *)((longlong)FVar5 + (ulonglong)uVar2 * 0x10) = uVar4;
    }
    DeserializeReliable(this,param_1,param_2);
    if (((param_1->ErrorContext).Error == (FName)0x0) &&
       (bVar1 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar1)) {
      if (uVar2 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar7,uVar2,this_00->BufferBitPosition);
      }
      goto LAB_1442073d4;
    }
  }
  if (uVar2 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar7,uVar2,this_00->BufferBitPosition);
  }
LAB_144207485:
  if (local_res20 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar9,local_res20,this_00->BufferBitPosition);
  }
  return;
}

// DeserializeReliable @ 144207610

uint __thiscall
UE::Net::Private::FNetObjectAttachmentReceiveQueue::DeserializeReliable
          (FNetObjectAttachmentReceiveQueue *this,FNetSerializationContext *param_1,
          FNetRefHandle param_2)

{
  FScriptContainerElement *pFVar1;
  FDeferredProcessingQueue *this_00;
  int iVar2;
  bool bVar3;
  uint uVar4;
  FReliableNetBlobQueue *this_01;
  FReliableNetBlobQueue *pFVar5;
  TRefCountPtr<UE::Net::FNetBlob> *pTVar6;
  FReliableNetBlobQueue *pFVar7;
  ForAnyElementType FVar8;
  undefined1 local_res8 [8];
  TArray<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> local_38;
  
  pFVar7 = (FReliableNetBlobQueue *)0x0;
  if (this->ReliableQueue == (FReliableNetBlobQueue *)0x0) {
    this_01 = ::operator_new(0x2110);
    pFVar5 = pFVar7;
    if (this_01 != (FReliableNetBlobQueue *)0x0) {
      pFVar5 = FReliableNetBlobQueue::FReliableNetBlobQueue(this_01);
    }
    this->ReliableQueue = pFVar5;
    pFVar5 = ::operator_new(0x40);
    if (pFVar5 != (FReliableNetBlobQueue *)0x0) {
      pFVar5->NetBlobs[3].Reference = (FNetBlob *)0x0;
      *(undefined4 *)((longlong)&pFVar5->NetBlobs[7].Reference + 1) = 0;
      *(undefined2 *)((longlong)&pFVar5->NetBlobs[7].Reference + 5) = 0;
      *(undefined1 *)((longlong)&pFVar5->NetBlobs[7].Reference + 7) = 0;
      pFVar5->NetBlobs[0].Reference = (FNetBlob *)0x0;
      pFVar5->NetBlobs[1].Reference = (FNetBlob *)0x0;
      pFVar5->NetBlobs[2].Reference = (FNetBlob *)0x0;
      pFVar5->NetBlobs[4].Reference = (FNetBlob *)0x0;
      pFVar5->NetBlobs[5].Reference = (FNetBlob *)0x0;
      pFVar5->NetBlobs[6].Reference = (FNetBlob *)0x0;
      *(undefined1 *)&pFVar5->NetBlobs[7].Reference = 0;
      pFVar7 = pFVar5;
    }
    this->DeferredProcessingQueues[1] = (FDeferredProcessingQueue *)pFVar7;
    pFVar7->NetBlobs[6].Reference = (FNetBlob *)this->PartialNetObjectAttachmentHandler;
    *(undefined1 *)&pFVar7->NetBlobs[7].Reference = 0;
  }
  if (param_2.field0_0x0 == 0) {
    uVar4 = FReliableNetBlobQueue::Deserialize(this->ReliableQueue,param_1);
  }
  else {
    uVar4 = FReliableNetBlobQueue::DeserializeWithObject(this->ReliableQueue,param_1,param_2);
  }
  if (((param_1->ErrorContext).Error != (FName)0x0) ||
     (bVar3 = FNetSerializationContext::IsBitStreamOverflown(param_1), bVar3)) {
    return uVar4;
  }
  this_00 = this->DeferredProcessingQueues[1];
  pTVar6 = FReliableNetBlobQueue::Peek(this->ReliableQueue);
  while (pTVar6 != (TRefCountPtr<UE::Net::FNetBlob> *)0x0) {
    if ((pTVar6->Reference == (FNetBlob *)0x0) ||
       ((pTVar6->Reference->CreationInfo).Type != this->PartialNetBlobType)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    FDeferredProcessingQueue::Enqueue(this_00,param_1,param_2,pTVar6,bVar3);
    FReliableNetBlobQueue::Pop(this->ReliableQueue);
    if ((param_1->ErrorContext).Error != (FName)0x0) {
      return uVar4;
    }
    bVar3 = FNetSerializationContext::IsBitStreamOverflown(param_1);
    if (bVar3) {
      return uVar4;
    }
    pTVar6 = FReliableNetBlobQueue::Peek(this->ReliableQueue);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,0x10,&local_38.AllocatorInstance,0,&local_38.ArrayMax);
  FReliableNetBlobQueue::DequeueUnreliable(this->ReliableQueue,&local_38);
  iVar2 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar8.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TRefCountPtr<UE::Net::FNetBlob>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (FVar8.Data == pFVar1) break;
    if ((*(FNetBlob **)FVar8.Data == (FNetBlob *)0x0) ||
       (((*(FNetBlob **)FVar8.Data)->CreationInfo).Type != this->PartialNetBlobType)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    FDeferredProcessingQueue::Enqueue
              (this_00,param_1,param_2,(TRefCountPtr<UE::Net::FNetBlob> *)FVar8.Data,bVar3);
    if (((param_1->ErrorContext).Error != (FName)0x0) ||
       (bVar3 = FNetSerializationContext::IsBitStreamOverflown(param_1), bVar3)) break;
    FVar8.Data = FVar8.Data + 8;
  }
  DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
            ((TRefCountPtr<UE::Net::FNetBlob> *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return uVar4;
}

// DeserializeUnreliable @ 144207860

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
UE::Net::Private::FNetObjectAttachmentReceiveQueue::DeserializeUnreliable
          (FNetObjectAttachmentReceiveQueue *this,FNetSerializationContext *param_1,
          FNetRefHandle param_2)

{
  INetBlobReceiver *pIVar1;
  FName FVar2;
  FNetBitStreamReader *this_00;
  bool bVar3;
  uint uVar4;
  FDeferredProcessingQueue *pFVar5;
  FString *pFVar6;
  FDeferredProcessingQueue *pFVar7;
  FStaticBasicLogRecord *pFVar8;
  uint uVar9;
  bool bVar10;
  TRefCountPtr<UE::Net::FNetBlob> local_res8;
  FNetBlobCreationInfo local_res10;
  FNetRefHandle_u_0 local_res18;
  FNetBitStreamReader *local_res20;
  FString local_58;
  
  local_res18 = param_2.field0_0x0;
  if (this->DeferredProcessingQueues[0] == (FDeferredProcessingQueue *)0x0) {
    pFVar5 = ::operator_new(0x40);
    pFVar7 = (FDeferredProcessingQueue *)0x0;
    if (pFVar5 != (FDeferredProcessingQueue *)0x0) {
      *(undefined8 *)&(pFVar5->Queue).IndexMask = 0;
      *(undefined4 *)&pFVar5->field_0x39 = 0;
      *(undefined2 *)&pFVar5->field_0x3d = 0;
      pFVar5->field_0x3f = 0;
      (pFVar5->ReliableNetBlobAssembler).Ptr = (FNetBlobAssembler *)0x0;
      (pFVar5->UnreliableNetBlobAssembler).Ptr = (FNetBlobAssembler *)0x0;
      (pFVar5->Queue).Head = 0;
      (pFVar5->Queue).Tail = 0;
      (pFVar5->Queue).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar5->Queue).Storage.ArrayNum = 0;
      (pFVar5->Queue).Storage.ArrayMax = 0;
      pFVar5->PartialNetObjectAttachmentHandler = (UPartialNetObjectAttachmentHandler *)0x0;
      pFVar5->bOnlyProcessUnreliable = false;
      pFVar7 = pFVar5;
    }
    this->DeferredProcessingQueues[0] = pFVar7;
    pFVar7->PartialNetObjectAttachmentHandler = this->PartialNetObjectAttachmentHandler;
    pFVar7->bOnlyProcessUnreliable = true;
  }
  uVar9 = 0;
  local_res20 = param_1->BitStreamReader;
  bVar10 = local_res18.Value == 0;
  pFVar7 = this->DeferredProcessingQueues[0];
  pIVar1 = param_1->NetBlobReceiver;
  while( true ) {
    this_00 = local_res20;
    if ((pFVar7->Queue).Head - (pFVar7->Queue).Tail == this->MaxUnreliableCount) {
      if (1 < (byte)LogIris._0_1_) {
        FNetRefHandle::ToString((FNetRefHandle *)&local_res18._s_0,&local_58);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      FVar2 = NetError_UnreliableQueueFull;
      FNetSerializationContext::SetBitStreamOverflow(param_1);
      FNetErrorContext::SetError(&param_1->ErrorContext,FVar2);
      return uVar9;
    }
    local_res10.Flags = None;
    local_res10.Type = 0xffffffff;
    FNetBlob::DeserializeCreationInfo(param_1,&local_res10);
    (**(code **)*pIVar1)(pIVar1,&local_res8,&local_res10);
    FVar2 = GNetError_UnsupportedNetBlob;
    if (local_res8.Reference == (FNetBlob *)0x0) {
      FNetSerializationContext::SetBitStreamOverflow(param_1);
      FNetErrorContext::SetError(&param_1->ErrorContext,FVar2);
      goto LAB_144207a3b;
    }
    if (bVar10) {
      (**(code **)((local_res8.Reference)->_padding_ + 0x18))(local_res8.Reference,param_1);
    }
    else {
      (**(code **)((local_res8.Reference)->_padding_ + 8))
                (local_res8.Reference,param_1,local_res18.Value);
    }
    uVar4 = FNetBitStreamReader::ReadBits(this_00,1);
    if (((param_1->ErrorContext).Error != (FName)0x0) ||
       (bVar3 = FNetSerializationContext::IsBitStreamOverflown(param_1), bVar3)) break;
    if ((local_res8.Reference == (FNetBlob *)0x0) ||
       (((local_res8.Reference)->CreationInfo).Type != this->PartialNetBlobType)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    FDeferredProcessingQueue::Enqueue
              (pFVar7,param_1,(FNetRefHandle)local_res18._s_0,&local_res8,bVar3);
    if (((param_1->ErrorContext).Error != (FName)0x0) ||
       (bVar3 = FNetSerializationContext::IsBitStreamOverflown(param_1), bVar3)) {
      if ((byte)LogIris._0_1_ < 2) goto LAB_144207a3b;
      FNetRefHandle::ToString((FNetRefHandle *)&local_res18._s_0,&local_58);
      pFVar8 = &::LOG_Static;
      goto LAB_144207a21;
    }
    uVar9 = uVar9 + 1;
    if (local_res8.Reference != (FNetBlob *)0x0) {
      FNetBlob::Release(local_res8.Reference);
    }
    if ((uVar4 & 1) == 0) {
      return uVar9;
    }
  }
  if ((byte)LogIris._0_1_ < 2) goto LAB_144207a3b;
  pFVar6 = FNetRefHandle::ToString((FNetRefHandle *)&local_res18._s_0,&local_58);
  if ((pFVar6->Data).ArrayNum == 0) {
    pFVar8 = &::LOG_Static;
  }
  else {
    pFVar8 = &::LOG_Static;
  }
LAB_144207a21:
  Logging::Private::BasicLog<2>(pFVar8,(FLogCategoryBase *)&LogIris);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_144207a3b:
  if (local_res8.Reference == (FNetBlob *)0x0) {
    return uVar9;
  }
  FNetBlob::Release(local_res8.Reference);
  return uVar9;
}

// HasDeferredProcessingQueueUnprocessed @ 14420f3b0

bool __thiscall
UE::Net::Private::FNetObjectAttachmentReceiveQueue::HasDeferredProcessingQueueUnprocessed
          (FNetObjectAttachmentReceiveQueue *this,EDeferredProcessingQueue param_1)

{
  FDeferredProcessingQueue *pFVar1;
  
  pFVar1 = this->DeferredProcessingQueues[param_1];
  if ((pFVar1 != (FDeferredProcessingQueue *)0x0) && ((pFVar1->Queue).Head != (pFVar1->Queue).Tail))
  {
    return true;
  }
  return false;
}

// HasUnprocessed @ 14420f3d0

bool __thiscall
UE::Net::Private::FNetObjectAttachmentReceiveQueue::HasUnprocessed
          (FNetObjectAttachmentReceiveQueue *this)

{
  FDeferredProcessingQueue *pFVar1;
  
  pFVar1 = this->DeferredProcessingQueues[0];
  if (((pFVar1 == (FDeferredProcessingQueue *)0x0) || ((pFVar1->Queue).Head == (pFVar1->Queue).Tail)
      ) && ((pFVar1 = this->DeferredProcessingQueues[1], pFVar1 == (FDeferredProcessingQueue *)0x0
            || ((pFVar1->Queue).Head == (pFVar1->Queue).Tail)))) {
    return false;
  }
  return true;
}

// Init @ 14420f650

void __thiscall
UE::Net::Private::FNetObjectAttachmentReceiveQueue::Init
          (FNetObjectAttachmentReceiveQueue *this,
          FNetObjectAttachmentReceiveQueueInitParams *param_1)

{
  this->PartialNetObjectAttachmentHandler = param_1->PartialNetObjectAttachmentHandler;
  if (param_1->PartialNetObjectAttachmentHandler != (UPartialNetObjectAttachmentHandler *)0x0) {
    this->PartialNetBlobType = (uint)param_1->PartialNetObjectAttachmentHandler->_padding_;
    return;
  }
  this->PartialNetBlobType = 0xffffffff;
  return;
}

// IsDeferredProcessingQueueEmpty @ 144211870

bool __thiscall
UE::Net::Private::FNetObjectAttachmentReceiveQueue::IsDeferredProcessingQueueEmpty
          (FNetObjectAttachmentReceiveQueue *this,EDeferredProcessingQueue param_1)

{
  FDeferredProcessingQueue *pFVar1;
  
  pFVar1 = this->DeferredProcessingQueues[param_1];
  if ((pFVar1 != (FDeferredProcessingQueue *)0x0) && ((pFVar1->Queue).Head != (pFVar1->Queue).Tail))
  {
    return false;
  }
  return true;
}

// IsDeferredProcessingQueueSafeToDestroy @ 144211890

bool __thiscall
UE::Net::Private::FNetObjectAttachmentReceiveQueue::IsDeferredProcessingQueueSafeToDestroy
          (FNetObjectAttachmentReceiveQueue *this,EDeferredProcessingQueue param_1)

{
  FDeferredProcessingQueue *pFVar1;
  
  pFVar1 = this->DeferredProcessingQueues[param_1];
  if ((pFVar1 != (FDeferredProcessingQueue *)0x0) &&
     ((((pFVar1->Queue).Head != (pFVar1->Queue).Tail ||
       ((pFVar1->ReliableNetBlobAssembler).Ptr != (FNetBlobAssembler *)0x0)) ||
      ((pFVar1->UnreliableNetBlobAssembler).Ptr != (FNetBlobAssembler *)0x0)))) {
    return false;
  }
  return true;
}

// IsPartialNetBlob @ 144211c30

bool __thiscall
UE::Net::Private::FNetObjectAttachmentReceiveQueue::IsPartialNetBlob
          (FNetObjectAttachmentReceiveQueue *this,TRefCountPtr<UE::Net::FNetBlob> *param_1)

{
  if ((param_1->Reference != (FNetBlob *)0x0) &&
     ((param_1->Reference->CreationInfo).Type == this->PartialNetBlobType)) {
    return true;
  }
  return false;
}

// IsSafeToDestroy @ 144211c50

bool __thiscall
UE::Net::Private::FNetObjectAttachmentReceiveQueue::IsSafeToDestroy
          (FNetObjectAttachmentReceiveQueue *this)

{
  FDeferredProcessingQueue *pFVar1;
  bool bVar2;
  
  pFVar1 = this->DeferredProcessingQueues[0];
  if (((pFVar1 == (FDeferredProcessingQueue *)0x0) ||
      ((((pFVar1->Queue).Head == (pFVar1->Queue).Tail &&
        ((pFVar1->ReliableNetBlobAssembler).Ptr == (FNetBlobAssembler *)0x0)) &&
       ((pFVar1->UnreliableNetBlobAssembler).Ptr == (FNetBlobAssembler *)0x0)))) &&
     ((pFVar1 = this->DeferredProcessingQueues[1], pFVar1 == (FDeferredProcessingQueue *)0x0 ||
      ((((pFVar1->Queue).Head == (pFVar1->Queue).Tail &&
        ((pFVar1->ReliableNetBlobAssembler).Ptr == (FNetBlobAssembler *)0x0)) &&
       ((pFVar1->UnreliableNetBlobAssembler).Ptr == (FNetBlobAssembler *)0x0)))))) {
    if ((this->ReliableQueue != (FReliableNetBlobQueue *)0x0) &&
       (bVar2 = FReliableNetBlobQueue::IsSafeToDestroy(this->ReliableQueue), !bVar2)) {
      return false;
    }
    return true;
  }
  return false;
}

// PeekReliable @ 144213320

TRefCountPtr<UE::Net::FNetBlob> * __thiscall
UE::Net::Private::FNetObjectAttachmentReceiveQueue::PeekReliable
          (FNetObjectAttachmentReceiveQueue *this)

{
  uint *puVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FNetBlob *this_00;
  FDeferredProcessingQueue *pFVar5;
  code *pcVar6;
  bool bVar7;
  TRefCountPtr<UE::Net::FNetBlob> *pTVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  pFVar5 = this->DeferredProcessingQueues[1];
  if ((pFVar5 == (FDeferredProcessingQueue *)0x0) || ((pFVar5->Queue).Head == (pFVar5->Queue).Tail))
  {
    return (TRefCountPtr<UE::Net::FNetBlob> *)0x0;
  }
  uVar11 = 0;
  uVar10 = (pFVar5->Queue).Head - (pFVar5->Queue).Tail;
  if (uVar10 != 0) {
    do {
      if (((pFVar5->Queue).Head == (pFVar5->Queue).Tail) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset < Count()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                             ,0x4f,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar8 = (TRefCountPtr<UE::Net::FNetBlob> *)(*pcVar6)();
        return pTVar8;
      }
      uVar9 = (ulonglong)((pFVar5->Queue).IndexMask & (pFVar5->Queue).Tail);
      pFVar3 = (pFVar5->Queue).Storage.AllocatorInstance.Data;
      lVar4 = *(longlong *)(pFVar3 + uVar9 * 8);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x28) != 0) {
          return (TRefCountPtr<UE::Net::FNetBlob> *)(pFVar3 + uVar9 * 8);
        }
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                           ,0x262,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pTVar8 = (TRefCountPtr<UE::Net::FNetBlob> *)(*pcVar6)();
          return pTVar8;
        }
      }
      uVar2 = (pFVar5->Queue).Tail;
      if ((pFVar5->Queue).Head == uVar2) {
        bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1638566698149740322>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                           ,0xde,"Count() > 0");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pTVar8 = (TRefCountPtr<UE::Net::FNetBlob> *)(*pcVar6)();
          return pTVar8;
        }
      }
      else {
        this_00 = *(FNetBlob **)
                   ((pFVar5->Queue).Storage.AllocatorInstance.Data +
                   (ulonglong)(uVar2 & (pFVar5->Queue).IndexMask) * 8);
        if (this_00 != (FNetBlob *)0x0) {
          FNetBlob::Release(this_00);
        }
        puVar1 = &(pFVar5->Queue).Tail;
        *puVar1 = *puVar1 + 1;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar10);
  }
  return (TRefCountPtr<UE::Net::FNetBlob> *)0x0;
}

// PeekUnreliable @ 144213340

TRefCountPtr<UE::Net::FNetBlob> * __thiscall
UE::Net::Private::FNetObjectAttachmentReceiveQueue::PeekUnreliable
          (FNetObjectAttachmentReceiveQueue *this)

{
  uint *puVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FNetBlob *this_00;
  FDeferredProcessingQueue *pFVar5;
  code *pcVar6;
  bool bVar7;
  TRefCountPtr<UE::Net::FNetBlob> *pTVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  pFVar5 = this->DeferredProcessingQueues[0];
  if ((pFVar5 == (FDeferredProcessingQueue *)0x0) || ((pFVar5->Queue).Head == (pFVar5->Queue).Tail))
  {
    return (TRefCountPtr<UE::Net::FNetBlob> *)0x0;
  }
  uVar11 = 0;
  uVar10 = (pFVar5->Queue).Head - (pFVar5->Queue).Tail;
  if (uVar10 != 0) {
    do {
      if (((pFVar5->Queue).Head == (pFVar5->Queue).Tail) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset < Count()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                             ,0x4f,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar8 = (TRefCountPtr<UE::Net::FNetBlob> *)(*pcVar6)();
        return pTVar8;
      }
      uVar9 = (ulonglong)((pFVar5->Queue).IndexMask & (pFVar5->Queue).Tail);
      pFVar3 = (pFVar5->Queue).Storage.AllocatorInstance.Data;
      lVar4 = *(longlong *)(pFVar3 + uVar9 * 8);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x28) != 0) {
          return (TRefCountPtr<UE::Net::FNetBlob> *)(pFVar3 + uVar9 * 8);
        }
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                           ,0x262,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pTVar8 = (TRefCountPtr<UE::Net::FNetBlob> *)(*pcVar6)();
          return pTVar8;
        }
      }
      uVar2 = (pFVar5->Queue).Tail;
      if ((pFVar5->Queue).Head == uVar2) {
        bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1638566698149740322>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                           ,0xde,"Count() > 0");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pTVar8 = (TRefCountPtr<UE::Net::FNetBlob> *)(*pcVar6)();
          return pTVar8;
        }
      }
      else {
        this_00 = *(FNetBlob **)
                   ((pFVar5->Queue).Storage.AllocatorInstance.Data +
                   (ulonglong)(uVar2 & (pFVar5->Queue).IndexMask) * 8);
        if (this_00 != (FNetBlob *)0x0) {
          FNetBlob::Release(this_00);
        }
        puVar1 = &(pFVar5->Queue).Tail;
        *puVar1 = *puVar1 + 1;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar10);
  }
  return (TRefCountPtr<UE::Net::FNetBlob> *)0x0;
}

// PopReliable @ 144214010

void __thiscall
UE::Net::Private::FNetObjectAttachmentReceiveQueue::PopReliable
          (FNetObjectAttachmentReceiveQueue *this)

{
  TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::Pop
            (&this->DeferredProcessingQueues[1]->Queue);
  return;
}

// PopUnreliable @ 144214030

void __thiscall
UE::Net::Private::FNetObjectAttachmentReceiveQueue::PopUnreliable
          (FNetObjectAttachmentReceiveQueue *this)

{
  TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::Pop
            (&this->DeferredProcessingQueues[0]->Queue);
  return;
}

// SetUnreliableQueueCapacity @ 14421bae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FNetObjectAttachmentReceiveQueue::SetUnreliableQueueCapacity
          (FNetObjectAttachmentReceiveQueue *this,uint param_1)

{
  FDeferredProcessingQueue *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  pFVar1 = this->DeferredProcessingQueues[0];
  this->MaxUnreliableCount = param_1;
  if (pFVar1 != (FDeferredProcessingQueue *)0x0) {
    uVar4 = (ulonglong)((pFVar1->Queue).Head - (pFVar1->Queue).Tail) - (ulonglong)param_1;
    if (2 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_UE::Net::Private::FNetObjectAttachmentReceiveQueue::FDeferredProcessingQueue::SetQueueCapacity(unsigned_int)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    if ((pFVar1->Queue).Head - (pFVar1->Queue).Tail < uVar4) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1638566698149740331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0xd5,"Count() >= PopCount");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      TResizableCircularQueue<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_>::
      PopNoCheck(&pFVar1->Queue,uVar4);
    }
  }
  return;
}


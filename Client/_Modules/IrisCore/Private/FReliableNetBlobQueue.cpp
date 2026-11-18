// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 20

// FReliableNetBlobQueue @ 1442675c0

FReliableNetBlobQueue * __thiscall
UE::Net::Private::FReliableNetBlobQueue::FReliableNetBlobQueue(FReliableNetBlobQueue *this)

{
  FReliableNetBlobQueue *pFVar1;
  longlong lVar2;
  
  lVar2 = 0x80;
  pFVar1 = this;
  do {
    pFVar1->NetBlobs[0].Reference = (FNetBlob *)0x0;
    pFVar1->NetBlobs[1].Reference = (FNetBlob *)0x0;
    pFVar1->NetBlobs[2].Reference = (FNetBlob *)0x0;
    pFVar1->NetBlobs[3].Reference = (FNetBlob *)0x0;
    pFVar1->NetBlobs[4].Reference = (FNetBlob *)0x0;
    pFVar1->NetBlobs[5].Reference = (FNetBlob *)0x0;
    pFVar1->NetBlobs[6].Reference = (FNetBlob *)0x0;
    pFVar1->NetBlobs[7].Reference = (FNetBlob *)0x0;
    lVar2 = lVar2 + -1;
    pFVar1 = (FReliableNetBlobQueue *)(pFVar1->NetBlobs + 8);
  } while (lVar2 != 0);
  this->Sent[0] = 0;
  this->Sent[1] = 0;
  this->Sent[2] = 0;
  this->Sent[3] = 0;
  this->Sent[4] = 0;
  this->Sent[5] = 0;
  this->Sent[6] = 0;
  this->Sent[7] = 0;
  this->Sent[8] = 0;
  this->Sent[9] = 0;
  this->Sent[10] = 0;
  this->Sent[0xb] = 0;
  this->Sent[0xc] = 0;
  this->Sent[0xd] = 0;
  this->Sent[0xe] = 0;
  this->Sent[0xf] = 0;
  this->Sent[0x10] = 0;
  this->Sent[0x11] = 0;
  this->Sent[0x12] = 0;
  this->Sent[0x13] = 0;
  this->Sent[0x14] = 0;
  this->Sent[0x15] = 0;
  this->Sent[0x16] = 0;
  this->Sent[0x17] = 0;
  this->Sent[0x18] = 0;
  this->Sent[0x19] = 0;
  this->Sent[0x1a] = 0;
  this->Sent[0x1b] = 0;
  this->Sent[0x1c] = 0;
  this->Sent[0x1d] = 0;
  this->Sent[0x1e] = 0;
  this->Sent[0x1f] = 0;
  this->Acked[0] = 0;
  this->Acked[1] = 0;
  this->Acked[2] = 0;
  this->Acked[3] = 0;
  this->Acked[4] = 0;
  this->Acked[5] = 0;
  this->Acked[6] = 0;
  this->Acked[7] = 0;
  this->Acked[8] = 0;
  this->Acked[9] = 0;
  this->Acked[10] = 0;
  this->Acked[0xb] = 0;
  this->Acked[0xc] = 0;
  this->Acked[0xd] = 0;
  this->Acked[0xe] = 0;
  this->Acked[0xf] = 0;
  this->Acked[0x10] = 0;
  this->Acked[0x11] = 0;
  this->Acked[0x12] = 0;
  this->Acked[0x13] = 0;
  this->Acked[0x14] = 0;
  this->Acked[0x15] = 0;
  this->Acked[0x16] = 0;
  this->Acked[0x17] = 0;
  this->Acked[0x18] = 0;
  this->Acked[0x19] = 0;
  this->Acked[0x1a] = 0;
  this->Acked[0x1b] = 0;
  this->Acked[0x1c] = 0;
  this->Acked[0x1d] = 0;
  this->Acked[0x1e] = 0;
  this->Acked[0x1f] = 0;
  this->FirstSeq = 0;
  this->LastSeq = 0;
  this->UnsentBlobCount = 0;
  ReliabilityNetDebugNames[0] = CreatePersistentNetDebugName(L"Unreliable",10);
  ReliabilityNetDebugNames[1] = CreatePersistentNetDebugName(L"Reliable",8);
  return this;
}

// ~FReliableNetBlobQueue @ 144269390

void __thiscall
UE::Net::Private::FReliableNetBlobQueue::~FReliableNetBlobQueue(FReliableNetBlobQueue *this)

{
  TRefCountPtr<UE::Net::FNetBlob> *pTVar1;
  longlong lVar2;
  TRefCountPtr<UE::Net::FNetBlob> *pTVar3;
  
  pTVar3 = (TRefCountPtr<UE::Net::FNetBlob> *)this->Sent;
  lVar2 = 0x400;
  do {
    pTVar1 = pTVar3 + -1;
    pTVar3 = pTVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pTVar1->Reference != (FNetBlob *)0x0) {
      FNetBlob::Release(pTVar1->Reference);
    }
  } while (lVar2 != 0);
  return;
}

// CommitReplicationRecord @ 144271130

void __thiscall
UE::Net::Private::FReliableNetBlobQueue::CommitReplicationRecord
          (FReliableNetBlobQueue *this,FReplicationRecord *param_1)

{
  FNetBlob *this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = 4;
  do {
    uVar1 = param_1->Count;
    this->UnsentBlobCount = this->UnsentBlobCount - uVar1;
    uVar3 = param_1->Number;
    uVar1 = uVar1 + uVar3;
    for (; uVar3 != uVar1; uVar3 = uVar3 + 1) {
      uVar2 = uVar3 & 0x3ff;
      this->Sent[uVar2 >> 5] = this->Sent[uVar2 >> 5] | 1 << (uVar3 & 0x1f);
      this_00 = this->NetBlobs[uVar2].Reference;
      if ((this_00 != (FNetBlob *)0x0) && (((this_00->CreationInfo).Flags & Reliable) == None)) {
        this->NetBlobs[uVar2].Reference = (FNetBlob *)0x0;
        FNetBlob::Release(this_00);
      }
    }
    param_1 = (FReplicationRecord *)((longlong)param_1 + 2);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

// DequeueUnreliable @ 144274d10

void __thiscall
UE::Net::Private::FReliableNetBlobQueue::DequeueUnreliable
          (FReliableNetBlobQueue *this,
          TArray<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> *param_1)

{
  FNetBlob *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = this->FirstSeq;
  if (uVar8 < this->LastSeq) {
    do {
      uVar6 = uVar8 & 0x3ff;
      uVar4 = uVar6 >> 5;
      if ((this->Acked[uVar4] >> (uVar8 & 0x1f) & 1) != 0) {
        pFVar1 = this->NetBlobs[uVar6].Reference;
        if (pFVar1 != (FNetBlob *)0x0) {
          if (pFVar1->RefCount == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                               ,0x262,L"");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else if (((pFVar1->CreationInfo).Flags & Reliable) == None) {
            iVar7 = param_1->ArrayNum;
            if (iVar7 == param_1->ArrayMax) {
              iVar7 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
            }
            param_1->ArrayNum = iVar7 + 1;
            pFVar2 = (param_1->AllocatorInstance).Data;
            *(undefined8 *)(pFVar2 + (longlong)iVar7 * 8) = 0;
            *(FNetBlob **)(pFVar2 + (longlong)iVar7 * 8) = this->NetBlobs[uVar6].Reference;
            this->NetBlobs[uVar6].Reference = (FNetBlob *)0x0;
            if (uVar8 == this->FirstSeq) {
              this->Acked[uVar4] = this->Acked[uVar4] & ~(1 << (uVar8 & 0x1f));
              this->FirstSeq = this->FirstSeq + 1;
            }
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < this->LastSeq);
  }
  return;
}

// Deserialize @ 1442754d0

uint __thiscall
UE::Net::Private::FReliableNetBlobQueue::Deserialize
          (FReliableNetBlobQueue *this,FNetSerializationContext *param_1)

{
  uint uVar1;
  
  uVar1 = DeserializeInternal(this,param_1,(FNetRefHandle)0x0,false);
  return uVar1;
}

// DeserializeInternal @ 144275710

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
UE::Net::Private::FReliableNetBlobQueue::DeserializeInternal
          (FReliableNetBlobQueue *this,FNetSerializationContext *param_1,FNetRefHandle param_2,
          bool param_3)

{
  TRefCountPtr<UE::Net::FNetBlob> *pTVar1;
  FNetBitStreamReader *this_00;
  ForElementType<FNetTracePacketContentEvent> FVar2;
  FNetBlob *this_01;
  uint uVar3;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  ForElementType<FNetTracePacketContentEvent> FVar10;
  FNetTraceCollector *this_02;
  FNetTraceCollector *pFVar11;
  FNetTraceCollector *pFVar12;
  uint local_res10;
  FNetBlobCreationInfo local_70;
  INetBlobReceiver *local_68;
  FNetBlob *local_60;
  longlong local_58;
  FString local_50;
  
  local_68 = param_1->NetBlobReceiver;
  pFVar11 = (FNetTraceCollector *)0x0;
  this_00 = param_1->BitStreamReader;
  local_res10 = 0;
  uVar7 = 0xffffffff;
  while( true ) {
    uVar6 = FNetBitStreamReader::ReadBits(this_00,1);
    if ((uVar6 & 1) == 0) {
      uVar7 = uVar7 + 1 & 0x3ff;
    }
    else {
      uVar7 = FNetBitStreamReader::ReadBits(this_00,10);
    }
    uVar6 = this->FirstSeq;
    uVar9 = (uVar6 & 0xfffffc00) + uVar7;
    uVar3 = uVar9 + 0x400;
    if (uVar6 <= uVar9) {
      uVar3 = uVar9;
    }
    if ((uVar3 < uVar6 || 0x3ff < uVar3 - uVar6) ||
       (local_50.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)(this->Acked + (uVar7 >> 5)),
       (*(uint *)local_50.Data.AllocatorInstance.Data >> (uVar7 & 0x1f) & 1) != 0)) {
      if (2 < (byte)LogIris._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
      FVar4 = NetError_InvalidSequence;
      FNetSerializationContext::SetBitStreamOverflow(param_1);
      FNetErrorContext::SetError(&param_1->ErrorContext,FVar4);
      return local_res10;
    }
    uVar6 = FNetBitStreamReader::ReadBits(this_00,1);
    this_02 = pFVar11;
    if ((uVar6 & 1) != 0) {
      uVar6 = 0xffffffff;
      pFVar12 = pFVar11;
      if (1 < GNetTraceRuntimeVerbosity) {
        pFVar12 = param_1->TraceCollector;
      }
      if (pFVar12 != (FNetTraceCollector *)0x0) {
        uVar6 = FNetTrace::BeginPacketContentEvent(pFVar12,NameId,this_00->BufferBitPosition);
        uVar9 = FNetTrace::TraceName(ReliabilityNetDebugNames[0]);
        FVar2 = (pFVar12->Events).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
        if (FVar2 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar10 = FVar2;
        }
        *(uint *)((longlong)FVar10 + (ulonglong)uVar6 * 0x10) = uVar9;
      }
      local_70.Type = 0xffffffff;
      local_70.Flags = None;
      FNetBlob::DeserializeCreationInfo(param_1,&local_70);
      plVar8 = (longlong *)(**(code **)*local_68)(local_68,&local_60,&local_70);
      if (&local_58 != plVar8) {
        this_02 = (FNetTraceCollector *)*plVar8;
        *plVar8 = 0;
      }
      if (local_60 != (FNetBlob *)0x0) {
        FNetBlob::Release(local_60);
      }
      if (this_02 == (FNetTraceCollector *)0x0) {
        if (2 < (byte)LogIris._0_1_) {
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
        FVar4 = GNetError_UnsupportedNetBlob;
        FNetSerializationContext::SetBitStreamOverflow(param_1);
        FNetErrorContext::SetError(&param_1->ErrorContext,FVar4);
        if (uVar6 == 0xffffffff) {
          return local_res10;
        }
        FNetTrace::EndPacketContentEvent(pFVar12,uVar6,this_00->BufferBitPosition);
        return local_res10;
      }
      if (param_3) {
        (**(code **)(*(longlong *)this_02->NestingStack + 8))(this_02,param_1,param_2.field0_0x0);
      }
      else {
        (**(code **)(*(longlong *)this_02->NestingStack + 0x18))(this_02,param_1);
      }
      if (uVar6 != 0xffffffff) {
        uVar9 = FNetTrace::TraceName
                          (ReliabilityNetDebugNames[(byte)(char)this_02->NestingStack[3] & 1]);
        FVar2 = (pFVar12->Events).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
        if (FVar2 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar10 = FVar2;
        }
        *(uint *)((longlong)FVar10 + (ulonglong)uVar6 * 0x10) = uVar9;
        FNetTrace::EndPacketContentEvent(pFVar12,uVar6,this_00->BufferBitPosition);
      }
    }
    uVar6 = FNetBitStreamReader::ReadBits(this_00,1);
    if (((param_1->ErrorContext).Error != (FName)0x0) ||
       (bVar5 = FNetSerializationContext::IsBitStreamOverflown(param_1), bVar5)) break;
    pTVar1 = this->NetBlobs + uVar7;
    if (pTVar1 != (TRefCountPtr<UE::Net::FNetBlob> *)&local_58) {
      this_01 = pTVar1->Reference;
      pTVar1->Reference = (FNetBlob *)this_02;
      this_02 = pFVar11;
      if (this_01 != (FNetBlob *)0x0) {
        FNetBlob::Release(this_01);
      }
    }
    uVar9 = uVar3 + 1;
    if (uVar3 + 1 < this->LastSeq) {
      uVar9 = this->LastSeq;
    }
    local_res10 = local_res10 + 1;
    this->LastSeq = uVar9;
    *(uint *)local_50.Data.AllocatorInstance.Data =
         *(uint *)local_50.Data.AllocatorInstance.Data | 1 << (uVar7 & 0x1f);
    if (this_02 != (FNetTraceCollector *)0x0) {
      FNetBlob::Release((FNetBlob *)this_02);
    }
    if ((uVar6 & 1) == 0) {
      return local_res10;
    }
  }
  if (2 < (byte)LogIris._0_1_) {
    if ((param_2.field0_0x0 == 0) || ((ulonglong)param_2.field0_0x0 >> 0x36 == 0)) {
      ::FString::PrintfImpl(&local_50,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_50,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  if (this_02 == (FNetTraceCollector *)0x0) {
    return local_res10;
  }
  FNetBlob::Release((FNetBlob *)this_02);
  return local_res10;
}

// DeserializeWithObject @ 144275fb0

uint __thiscall
UE::Net::Private::FReliableNetBlobQueue::DeserializeWithObject
          (FReliableNetBlobQueue *this,FNetSerializationContext *param_1,FNetRefHandle param_2)

{
  uint uVar1;
  
  uVar1 = DeserializeInternal(this,param_1,param_2,true);
  return uVar1;
}

// DropUnreliable @ 144277570

void __thiscall UE::Net::Private::FReliableNetBlobQueue::DropUnreliable(FReliableNetBlobQueue *this)

{
  FNetBlob *this_00;
  uint uVar1;
  
  uVar1 = this->FirstSeq;
  if (uVar1 < this->LastSeq) {
    do {
      this_00 = this->NetBlobs[uVar1 & 0x3ff].Reference;
      if ((this_00 != (FNetBlob *)0x0) && (((this_00->CreationInfo).Flags & Reliable) == None)) {
        this->NetBlobs[uVar1 & 0x3ff].Reference = (FNetBlob *)0x0;
        FNetBlob::Release(this_00);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < this->LastSeq);
  }
  return;
}

// Enqueue @ 144277800

bool __thiscall
UE::Net::Private::FReliableNetBlobQueue::Enqueue
          (FReliableNetBlobQueue *this,TRefCountPtr<UE::Net::FNetBlob> *param_1)

{
  uint uVar1;
  FNetBlob *pFVar2;
  FNetBlob *this_00;
  
  uVar1 = this->LastSeq;
  if (0x3ff < uVar1 - this->FirstSeq) {
    return false;
  }
  this->UnsentBlobCount = this->UnsentBlobCount + 1;
  this->LastSeq = uVar1 + 1;
  pFVar2 = param_1->Reference;
  this_00 = this->NetBlobs[uVar1 & 0x3ff].Reference;
  if (this_00 != pFVar2) {
    this->NetBlobs[uVar1 & 0x3ff].Reference = pFVar2;
    if (pFVar2 != (FNetBlob *)0x0) {
      pFVar2->RefCount = pFVar2->RefCount + 1;
    }
    if (this_00 != (FNetBlob *)0x0) {
      FNetBlob::Release(this_00);
    }
  }
  return true;
}

// GetUnreliableCount @ 14427d1c0

ulong64 __thiscall
UE::Net::Private::FReliableNetBlobQueue::GetUnreliableCount(FReliableNetBlobQueue *this)

{
  FNetBlob *pFVar1;
  uint uVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  
  uVar4 = 0;
  uVar2 = this->FirstSeq;
  if (uVar2 < this->LastSeq) {
    uVar3 = (ulonglong)(this->LastSeq - uVar2);
    do {
      pFVar1 = this->NetBlobs[uVar2 & 0x3ff].Reference;
      if (pFVar1 != (FNetBlob *)0x0) {
        uVar4 = uVar4 + ((byte)~(char)(pFVar1->CreationInfo).Flags & 1);
      }
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return uVar4;
}

// IsSafeToDestroy @ 144282f10

bool __thiscall
UE::Net::Private::FReliableNetBlobQueue::IsSafeToDestroy(FReliableNetBlobQueue *this)

{
  if (this->FirstSeq == this->LastSeq) {
    return (this->FirstSeq & 0x3ff) == 0;
  }
  return false;
}

// OnPacketDelivered @ 1442853b0

void __thiscall
UE::Net::Private::FReliableNetBlobQueue::OnPacketDelivered
          (FReliableNetBlobQueue *this,FReplicationRecord *param_1)

{
  FNetBlob *this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = 4;
  do {
    uVar2 = param_1->Number;
    uVar3 = param_1->Count + uVar2;
    for (; uVar2 != uVar3; uVar2 = uVar2 + 1) {
      uVar1 = uVar2 & 0x3ff;
      this->Acked[uVar1 >> 5] = this->Acked[uVar1 >> 5] | 1 << (uVar2 & 0x1f);
      this_00 = this->NetBlobs[uVar1].Reference;
      if (this_00 != (FNetBlob *)0x0) {
        this->NetBlobs[uVar1].Reference = (FNetBlob *)0x0;
        FNetBlob::Release(this_00);
      }
    }
    param_1 = (FReplicationRecord *)((longlong)param_1 + 2);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uVar2 = this->FirstSeq;
  if (uVar2 != this->LastSeq) {
    do {
      uVar3 = (uVar2 & 0x3ff) >> 5;
      uVar2 = uVar2 & 0x1f;
      if ((this->Acked[uVar3] >> uVar2 & 1) == 0) {
        return;
      }
      this->Acked[uVar3] = this->Acked[uVar3] & ~(1 << uVar2);
      this->Sent[uVar3] = this->Sent[uVar3] & ~(1 << uVar2);
      this->FirstSeq = this->FirstSeq + 1;
      uVar2 = this->FirstSeq;
    } while (uVar2 != this->LastSeq);
  }
  return;
}

// OnPacketDropped @ 1442854d0

void __thiscall
UE::Net::Private::FReliableNetBlobQueue::OnPacketDropped
          (FReliableNetBlobQueue *this,FReplicationRecord *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = 4;
  do {
    uVar4 = param_1->Count;
    this->UnsentBlobCount = this->UnsentBlobCount + uVar4;
    uVar2 = param_1->Number;
    uVar4 = uVar4 + uVar2;
    for (; uVar2 != uVar4; uVar2 = uVar2 + 1) {
      uVar1 = (uVar2 & 0x3ff) >> 5;
      this->Sent[uVar1] = this->Sent[uVar1] & ~(1 << (uVar2 & 0x1f));
    }
    param_1 = (FReplicationRecord *)((longlong)param_1 + 2);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

// Peek @ 144285eb0

TRefCountPtr<UE::Net::FNetBlob> * __thiscall
UE::Net::Private::FReliableNetBlobQueue::Peek(FReliableNetBlobQueue *this)

{
  FNetBlob *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  TRefCountPtr<UE::Net::FNetBlob> *pTVar7;
  uint uVar6;
  
  uVar6 = this->FirstSeq;
  if (uVar6 < this->LastSeq) {
    do {
      uVar5 = uVar6 & 0x3ff;
      uVar3 = uVar5 >> 5;
      if ((this->Acked[uVar3] >> (uVar6 & 0x1f) & 1) == 0) {
        return (TRefCountPtr<UE::Net::FNetBlob> *)0x0;
      }
      pFVar1 = this->NetBlobs[uVar5].Reference;
      if (pFVar1 != (FNetBlob *)0x0) {
        if (pFVar1->RefCount != 0) {
          return this->NetBlobs + uVar5;
        }
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                           ,0x262,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TRefCountPtr<UE::Net::FNetBlob> *)(*pcVar2)();
          return pTVar7;
        }
      }
      this->Acked[uVar3] = this->Acked[uVar3] & ~(1 << (uVar6 & 0x1f));
      this->FirstSeq = this->FirstSeq + 1;
      uVar6 = this->FirstSeq;
    } while (uVar6 < this->LastSeq);
  }
  return (TRefCountPtr<UE::Net::FNetBlob> *)0x0;
}

// Pop @ 1442861f0

void __thiscall UE::Net::Private::FReliableNetBlobQueue::Pop(FReliableNetBlobQueue *this)

{
  uint uVar1;
  FNetBlob *this_00;
  uint uVar2;
  
  uVar1 = this->FirstSeq;
  uVar2 = uVar1 & 0x3ff;
  this_00 = this->NetBlobs[uVar2].Reference;
  if (this_00 != (FNetBlob *)0x0) {
    this->NetBlobs[uVar2].Reference = (FNetBlob *)0x0;
    FNetBlob::Release(this_00);
  }
  this->Acked[uVar2 >> 5] = this->Acked[uVar2 >> 5] & ~(1 << (uVar1 & 0x1f));
  this->FirstSeq = this->FirstSeq + 1;
  return;
}

// PopInOrderAckedBlobs @ 144286340

void __thiscall
UE::Net::Private::FReliableNetBlobQueue::PopInOrderAckedBlobs(FReliableNetBlobQueue *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = this->FirstSeq;
  if (uVar2 != this->LastSeq) {
    do {
      uVar1 = (uVar2 & 0x3ff) >> 5;
      uVar2 = uVar2 & 0x1f;
      if ((this->Acked[uVar1] >> uVar2 & 1) == 0) {
        return;
      }
      this->Acked[uVar1] = this->Acked[uVar1] & ~(1 << uVar2);
      this->Sent[uVar1] = this->Sent[uVar1] & ~(1 << uVar2);
      this->FirstSeq = this->FirstSeq + 1;
      uVar2 = this->FirstSeq;
    } while (uVar2 != this->LastSeq);
  }
  return;
}

// ProcessPacketDeliveryStatus @ 144287fd0

void __thiscall
UE::Net::Private::FReliableNetBlobQueue::ProcessPacketDeliveryStatus
          (FReliableNetBlobQueue *this,EPacketDeliveryStatus param_1,FReplicationRecord *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  if (param_1 != Delivered) {
    if (param_1 == Lost) {
      lVar4 = 4;
      do {
        uVar3 = param_2->Count;
        this->UnsentBlobCount = this->UnsentBlobCount + uVar3;
        uVar2 = param_2->Number;
        uVar3 = uVar3 + uVar2;
        for (; uVar2 != uVar3; uVar2 = uVar2 + 1) {
          uVar1 = (uVar2 & 0x3ff) >> 5;
          this->Sent[uVar1] = this->Sent[uVar1] & ~(1 << (uVar2 & 0x1f));
        }
        param_2 = (FReplicationRecord *)((longlong)param_2 + 2);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      return;
    }
    if (param_1 != Discard) {
      return;
    }
  }
  OnPacketDelivered(this,param_2);
  return;
}

// Serialize @ 1442927b0

uint __thiscall
UE::Net::Private::FReliableNetBlobQueue::Serialize
          (FReliableNetBlobQueue *this,FNetSerializationContext *param_1,FReplicationRecord *param_2
          )

{
  uint uVar1;
  
  uVar1 = SerializeInternal(this,param_1,(FNetRefHandle)0x0,param_2,false);
  return uVar1;
}

// SerializeInternal @ 144292a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
UE::Net::Private::FReliableNetBlobQueue::SerializeInternal
          (FReliableNetBlobQueue *this,FNetSerializationContext *param_1,FNetRefHandle param_2,
          FReplicationRecord *param_3,bool param_4)

{
  FNetToken_u_0 *pFVar1;
  int *piVar2;
  FNetBitStreamWriter *this_00;
  FBatchExports *pFVar3;
  FNetBlob *pFVar4;
  ForElementType<FNetTracePacketContentEvent> FVar5;
  FNetExportContext *pFVar6;
  FNetExportContext *pFVar7;
  code *pcVar8;
  FObjectReferenceCache *this_01;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ForElementType<FNetTracePacketContentEvent> FVar13;
  uint uVar14;
  FNetObjectReference *pFVar15;
  FNetToken_u_0 *pFVar16;
  FNetTraceCollector *pFVar17;
  ulonglong uVar18;
  FNetObjectReference *pFVar19;
  undefined1 auStack_128 [32];
  char local_108;
  uint local_104;
  uint local_100;
  FReliableNetBlobQueue *local_f8;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  FNetSerializationContext *local_e0;
  FNetExportRollbackScope local_d8;
  FNetToken_u_0 local_c0 [2];
  uint local_b8;
  FNetTraceCollector *local_b0;
  FObjectReferenceCache *local_a8;
  FNetRefHandle_u_0 local_a0;
  FReplicationRecord *local_98;
  FNetObjectReference *local_90;
  int local_88;
  FNetToken_u_0 *local_80;
  int local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  uVar11 = this->FirstSeq;
  uVar18 = 0;
  this_00 = param_1->BitStreamWriter;
  uVar12 = 0xffffffff;
  local_a8 = param_1->InternalContext->ObjectReferenceCache;
  local_b8 = this->LastSeq;
  local_e4 = 0;
  local_104 = 0;
  local_100 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_60 = _UNK_15060db28;
  uVar14 = 0;
  local_f8 = this;
  local_e0 = param_1;
  local_a0 = param_2.field0_0x0;
  local_98 = param_3;
  if (uVar11 < local_b8) {
    do {
      uVar10 = uVar11 & 0x3ff;
      if ((this->Sent[uVar10 >> 5] >> (uVar11 & 0x1f) & 1) == 0) {
        if (*(int *)((longlong)&local_68 + uVar18 * 4) == -1) {
          *(uint *)((longlong)&local_68 + uVar18 * 4) = uVar11;
        }
        else if (uVar12 + 1 != uVar11) {
          local_100 = (int)uVar18 + 1;
          uVar18 = (ulonglong)local_100;
          uVar14 = local_104;
          if (3 < local_100) break;
          *(uint *)((longlong)&local_68 + uVar18 * 4) = uVar11;
        }
        local_e8 = this_00->BufferBitPosition - this_00->BufferBitStartOffset;
        if (param_1->ExportContext == (FNetExportContext *)0x0) {
          local_d8.StartNumNetHandleExports = 0;
          local_d8.StartNumNetTokenExports = 0;
          local_d8.StartNumPendingExports = 0;
          local_d8.StartNumNetTokensPendingExports = 0;
        }
        else {
          pFVar3 = param_1->ExportContext->BatchExports;
          local_d8.StartNumNetTokenExports = (pFVar3->NetTokensExportedInCurrentBatch).ArrayNum;
          local_d8.StartNumNetHandleExports = (pFVar3->HandlesExportedInCurrentBatch).ArrayNum;
          local_d8.StartNumNetTokensPendingExports =
               (pFVar3->NetTokensPendingExportInCurrentBatch).ArrayNum;
          local_d8.StartNumPendingExports = (pFVar3->ReferencesPendingExportInCurrentBatch).ArrayNum
          ;
        }
        local_108 = uVar11 != uVar12 + 1;
        local_ec = uVar11;
        local_d8.Context = param_1;
        FNetBitStreamWriter::WriteBits(this_00,(uint)(byte)local_108,1);
        if (local_108 != '\0') {
          FNetBitStreamWriter::WriteBits(this_00,uVar10,10);
        }
        pFVar4 = local_f8->NetBlobs[uVar10].Reference;
        if (pFVar4 == (FNetBlob *)0x0) {
LAB_144292c5e:
          bVar9 = true;
        }
        else {
          bVar9 = false;
          if (pFVar4->RefCount == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                               ,0x262,L"");
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return uVar11;
            }
            goto LAB_144292c5e;
          }
        }
        local_108 = !bVar9;
        FNetBitStreamWriter::WriteBits(this_00,(uint)(byte)local_108,1);
        if (local_108 != '\0') {
          local_f0 = 0xffffffff;
          pFVar17 = (FNetTraceCollector *)0x0;
          if (1 < GNetTraceRuntimeVerbosity) {
            pFVar17 = param_1->TraceCollector;
          }
          local_b0 = pFVar17;
          if (pFVar17 != (FNetTraceCollector *)0x0) {
            uVar12 = this_00->BufferBitPosition;
            if (this_00->OverflowBitCount != 0) {
              uVar12 = 0;
            }
            local_f0 = FNetTrace::BeginPacketContentEvent(pFVar17,NameId,uVar12);
            uVar12 = FNetTrace::TraceName
                               (ReliabilityNetDebugNames
                                [(byte)(char)((local_f8->NetBlobs[uVar10].Reference)->CreationInfo).
                                             Flags & 1]);
            FVar5 = (pFVar17->Events).AllocatorInstance.SecondaryData;
            FVar13 = (ForElementType<FNetTracePacketContentEvent>)&pFVar17->Events;
            if (FVar5 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar13 = FVar5;
            }
            *(uint *)((longlong)FVar13 + (ulonglong)local_f0 * 0x10) = uVar12;
          }
          pFVar4 = local_f8->NetBlobs[uVar10].Reference;
          if (((pFVar4->CreationInfo).Flags & HasExports) != None) {
            pFVar6 = param_1->ExportContext;
            if (pFVar6 != (FNetExportContext *)0x0) {
              (**(code **)(pFVar4->_padding_ + 0x28))(pFVar4,&local_90);
              this_01 = local_a8;
              pFVar7 = param_1->ExportContext;
              if (pFVar7 != (FNetExportContext *)0x0) {
                pFVar19 = local_90 + local_88;
                for (pFVar15 = local_90; pFVar15 != pFVar19; pFVar15 = pFVar15 + 1) {
                  FObjectReferenceCache::AddPendingExport(this_01,pFVar7,pFVar15);
                  param_2.field0_0x0 = local_a0;
                }
              }
              pFVar4 = local_f8->NetBlobs[uVar10].Reference;
              (**(code **)(pFVar4->_padding_ + 0x30))(pFVar4,&local_80);
              pFVar1 = local_80 + local_78;
              uVar11 = local_ec;
              param_1 = local_e0;
              pFVar17 = local_b0;
              for (pFVar16 = local_80; local_ec = uVar11, local_e0 = param_1, local_b0 = pFVar17,
                  pFVar16 != pFVar1; pFVar16 = pFVar16 + 1) {
                local_c0[0] = *pFVar16;
                TArray<UE::Net::FNetToken,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                ::AddUniqueImpl<UE::Net::FNetToken_const_&>
                          (&pFVar6->BatchExports->NetTokensPendingExportInCurrentBatch,
                           (FNetToken *)&local_c0[0]._s_0);
                uVar11 = local_ec;
                param_1 = local_e0;
                pFVar17 = local_b0;
              }
            }
            uVar18 = (ulonglong)local_100;
          }
          FNetBlob::SerializeCreationInfo
                    (param_1,&(local_f8->NetBlobs[uVar10].Reference)->CreationInfo);
          pFVar4 = local_f8->NetBlobs[uVar10].Reference;
          if (param_4) {
            (**(code **)pFVar4->_padding_)(pFVar4,param_1,param_2.field0_0x0.Value);
          }
          else {
            (*(code *)((undefined8 *)pFVar4->_padding_)[2])(pFVar4,param_1);
          }
          if (local_f0 != 0xffffffff) {
            uVar12 = this_00->BufferBitPosition;
            if (this_00->OverflowBitCount != 0) {
              uVar12 = 0;
            }
            FNetTrace::EndPacketContentEvent(pFVar17,local_f0,uVar12);
          }
        }
        uVar12 = this_00->BufferBitPosition - this_00->BufferBitStartOffset;
        local_108 = 0;
        FNetBitStreamWriter::WriteBits(this_00,0,1);
        if (this_00->OverflowBitCount != 0) {
          FNetExportRollbackScope::Rollback(&local_d8);
LAB_144292f66:
          if ((((local_d8.Context)->ErrorContext).Error != (FName)0x0) ||
             (bVar9 = FNetSerializationContext::IsBitStreamOverflown(local_d8.Context), bVar9)) {
            FNetExportRollbackScope::Rollback(&local_d8);
          }
          uVar14 = local_104;
          if (this_00->OverflowBitCount != 0) {
            FNetBitStreamWriter::Seek(this_00,local_e8);
            uVar14 = local_104;
          }
          break;
        }
        if (local_104 != 0) {
          uVar14 = this_00->BufferBitPosition - this_00->BufferBitStartOffset;
          FNetBitStreamWriter::Seek(this_00,local_e4);
          local_108 = 1;
          FNetBitStreamWriter::WriteBits(this_00,1,1);
          if ((uVar14 < this_00->BufferBitPosition - this_00->BufferBitStartOffset) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Writer.GetPosBits() <= OriginalPos",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetBitStreamUtil.h"
                                 ,0x21,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return uVar11;
          }
          FNetBitStreamWriter::Seek(this_00,uVar14);
        }
        local_104 = local_104 + 1;
        piVar2 = (int *)((longlong)&local_58 + uVar18 * 4);
        *piVar2 = *piVar2 + 1;
        if (*(int *)((longlong)&local_58 + uVar18 * 4) == 0x3f) {
          local_100 = (int)uVar18 + 1;
          uVar18 = (ulonglong)local_100;
          if (3 < local_100) goto LAB_144292f66;
        }
        local_e4 = uVar12;
        if ((((local_d8.Context)->ErrorContext).Error != (FName)0x0) ||
           (bVar9 = FNetSerializationContext::IsBitStreamOverflown(local_d8.Context), bVar9)) {
          FNetExportRollbackScope::Rollback(&local_d8);
        }
        this = local_f8;
        param_1 = local_e0;
        uVar12 = uVar11;
        if (this_00->OverflowBitCount != 0) {
          FNetBitStreamWriter::Seek(this_00,local_e8);
          this = local_f8;
          param_1 = local_e0;
        }
      }
      uVar11 = uVar11 + 1;
      uVar14 = local_104;
    } while (uVar11 < local_b8);
  }
  *(ulonglong *)local_98->Sequences =
       CONCAT26(uStack_60._4_2_ & 0x3ff | uStack_50._4_2_ << 10,
                CONCAT24((ushort)uStack_60 & 0x3ff | (short)uStack_50 << 10,
                         CONCAT22(local_68._4_2_ & 0x3ff | local_58._4_2_ << 10,
                                  (ushort)local_68 & 0x3ff | (short)local_58 << 10)));
  return uVar14;
}

// SerializeWithObject @ 144293340

uint __thiscall
UE::Net::Private::FReliableNetBlobQueue::SerializeWithObject
          (FReliableNetBlobQueue *this,FNetSerializationContext *param_1,FNetRefHandle param_2,
          FReplicationRecord *param_3)

{
  uint uVar1;
  
  uVar1 = SerializeInternal(this,param_1,param_2,param_3,true);
  return uVar1;
}


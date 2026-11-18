// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 6

// FVoicePacketBuffer @ 14ecd9540

FVoicePacketBuffer * __thiscall
FVoicePacketBuffer::FVoicePacketBuffer
          (FVoicePacketBuffer *this,int param_1,int param_2,ulong64 param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TNode *pTVar7;
  TNode *pTVar8;
  FVoicePacketBuffer *pFVar9;
  uint uVar10;
  TNode *pTVar11;
  
  pTVar11 = (TNode *)0x0;
  this->SampleCounter = param_3;
  this->ListHead = (FSortedVoicePacketNode *)0x0;
  piVar1 = &(this->PacketBuffer).ArrayNum;
  this->IdleSampleCounter = 0;
  piVar2 = &(this->PacketBuffer).ArrayMax;
  this->bIsIdle = (FThreadSafeBool)0x0;
  this->NumSamplesUntilIdling = param_2;
  (this->PacketBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  pTVar7 = ::operator_new(0x10);
  pTVar8 = pTVar11;
  if (pTVar7 != (TNode *)0x0) {
    pTVar7->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar7->Item = 0;
    pTVar7->NextNode = (TNode *)0x0;
    pTVar8 = pTVar7;
  }
  (this->FreedIndicesQueue).Tail = pTVar8;
  (this->FreedIndicesQueue).Head = pTVar8;
  (this->NumBufferedSamples).Counter = 0;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,param_1,&(this->PacketBuffer).AllocatorInstance,piVar1,piVar2);
  DefaultConstructItems<FSortedVoicePacketNode,int>
            ((this->PacketBuffer).AllocatorInstance.Data + (longlong)iVar5 * 0x30,param_1);
  pTVar8 = pTVar11;
  if (0 < param_1) {
    do {
      uVar10 = (uint)pTVar11;
      uVar6 = 0;
      if ((int)uVar10 < *piVar1) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FVoicePacketBuffer *)(*pcVar3)();
        return pFVar9;
      }
      *(uint *)((longlong)&pTVar8[2].NextNode +
               (longlong)(this->PacketBuffer).AllocatorInstance.Data) = uVar10;
      pTVar7 = ::operator_new(0x10);
      if (pTVar7 != (TNode *)0x0) {
        pTVar7->NextNode = (TNode *)0x0;
        pTVar7->Item = uVar10;
        pTVar11 = (this->FreedIndicesQueue).Head;
        (this->FreedIndicesQueue).Head = pTVar7;
        pTVar11->NextNode = pTVar7;
      }
      pTVar11 = (TNode *)(ulonglong)(uVar10 + 1);
      pTVar8 = pTVar8 + 3;
    } while ((int)(uVar10 + 1) < param_1);
  }
  return this;
}

// DropOldestAudio @ 14ece2a20

uint __thiscall FVoicePacketBuffer::DropOldestAudio(FVoicePacketBuffer *this,uint param_1)

{
  uint uVar1;
  FSortedVoicePacketNode *pFVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (param_1 != 0) {
    do {
      pFVar2 = this->ListHead;
      if (pFVar2 == (FSortedVoicePacketNode *)0x0) {
        return uVar6;
      }
      if (this->SampleCounter < pFVar2->StartSample) {
        this->SampleCounter = pFVar2->StartSample;
      }
      else {
        iVar5 = param_1 - uVar6;
        if (iVar5 < pFVar2->SamplesLeft) {
          pFVar2->SamplesLeft = pFVar2->SamplesLeft - iVar5;
          this->SampleCounter = this->SampleCounter + (longlong)iVar5;
          this->IdleSampleCounter = 0;
          LOCK();
          this->bIsIdle = (FThreadSafeBool)0x0;
          UNLOCK();
          break;
        }
        LOCK();
        this->bIsIdle = (FThreadSafeBool)0x0;
        UNLOCK();
        pFVar2 = this->ListHead;
        uVar1 = pFVar2->SamplesLeft;
        this->SampleCounter = this->SampleCounter + (ulonglong)uVar1;
        uVar6 = uVar6 + uVar1;
        pTVar4 = ::operator_new(0x10);
        if (pTVar4 != (TNode *)0x0) {
          pTVar4->NextNode = (TNode *)0x0;
          pTVar4->Item = pFVar2->IndexInPacketBuffer;
          pTVar3 = (this->FreedIndicesQueue).Head;
          (this->FreedIndicesQueue).Head = pTVar4;
          pTVar3->NextNode = pTVar4;
        }
        this->ListHead = this->ListHead->NextPacket;
      }
    } while (uVar6 < param_1);
  }
  uVar6 = param_1 - this->IdleSampleCounter;
  LOCK();
  (this->NumBufferedSamples).Counter = (this->NumBufferedSamples).Counter - uVar6;
  UNLOCK();
  return uVar6;
}

// GetNumBufferedSamples @ 14ece8160

int __thiscall FVoicePacketBuffer::GetNumBufferedSamples(FVoicePacketBuffer *this)

{
  return (this->NumBufferedSamples).Counter;
}

// PopAudio @ 14ecf3ff0

int __thiscall FVoicePacketBuffer::PopAudio(FVoicePacketBuffer *this,float *param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  FSortedVoicePacketNode *pFVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = 0;
  if (param_2 != 0) {
    do {
      pFVar3 = this->ListHead;
      iVar7 = (int)uVar6;
      if (pFVar3 == (FSortedVoicePacketNode *)0x0) {
        memset(param_1 + uVar6,0,(ulonglong)(param_2 - iVar7) << 2);
        this->IdleSampleCounter = this->IdleSampleCounter + param_2;
        if (this->NumSamplesUntilIdling < this->IdleSampleCounter) {
          LOCK();
          this->bIsIdle = (FThreadSafeBool)0x1;
          UNLOCK();
        }
        return 0;
      }
      if (this->SampleCounter < pFVar3->StartSample) {
        this->SampleCounter = pFVar3->StartSample;
      }
      else {
        iVar8 = param_2 - iVar7;
        if (iVar8 < pFVar3->SamplesLeft) {
          memcpy(param_1 + uVar6,
                 (pFVar3->AudioBufferMem).AllocatorInstance.Data +
                 (longlong)(pFVar3->BufferNumSamples - pFVar3->SamplesLeft) * 4,(longlong)iVar8 * 4)
          ;
          piVar1 = &this->ListHead->SamplesLeft;
          *piVar1 = *piVar1 - iVar8;
          this->SampleCounter = this->SampleCounter + (longlong)iVar8;
          this->IdleSampleCounter = 0;
          LOCK();
          this->bIsIdle = (FThreadSafeBool)0x0;
          UNLOCK();
          break;
        }
        LOCK();
        this->bIsIdle = (FThreadSafeBool)0x0;
        UNLOCK();
        pFVar3 = this->ListHead;
        uVar2 = pFVar3->SamplesLeft;
        memcpy(param_1 + uVar6,
               (pFVar3->AudioBufferMem).AllocatorInstance.Data +
               (longlong)(int)(pFVar3->BufferNumSamples - uVar2) * 4,(ulonglong)uVar2 * 4);
        this->SampleCounter = this->SampleCounter + (ulonglong)uVar2;
        uVar6 = (ulonglong)(iVar7 + uVar2);
        pFVar3 = this->ListHead;
        pTVar5 = ::operator_new(0x10);
        if (pTVar5 != (TNode *)0x0) {
          pTVar5->NextNode = (TNode *)0x0;
          pTVar5->Item = pFVar3->IndexInPacketBuffer;
          pTVar4 = (this->FreedIndicesQueue).Head;
          (this->FreedIndicesQueue).Head = pTVar5;
          pTVar4->NextNode = pTVar5;
        }
        this->ListHead = this->ListHead->NextPacket;
      }
    } while ((uint)uVar6 < param_2);
  }
  iVar7 = param_2 - this->IdleSampleCounter;
  LOCK();
  (this->NumBufferedSamples).Counter = (this->NumBufferedSamples).Counter - iVar7;
  UNLOCK();
  return iVar7;
}

// PushPacket @ 14ecf5e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVoicePacketBuffer::PushPacket
          (FVoicePacketBuffer *this,void *param_1,int param_2,ulong64 param_3,
          EVoipStreamDataFormat param_4)

{
  uint uVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  FSortedVoicePacketNode *pFVar4;
  code *pcVar5;
  FSortedVoicePacketNode *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FSortedVoicePacketNode *pFVar10;
  longlong lVar11;
  uint uVar12;
  
  if (param_3 + (longlong)param_2 < this->SampleCounter) {
    this->SampleCounter = param_3;
  }
  pTVar2 = ((this->FreedIndicesQueue).Tail)->NextNode;
  if (pTVar2 == (TNode *)0x0) {
    if ((PacketDropCounter == 0) && (2 < (byte)LogAudio._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    PacketDropCounter = PacketDropCounter + 1U & 0x8000007f;
    if (PacketDropCounter < 0) {
      PacketDropCounter = (PacketDropCounter - 1U | 0xffffff80) + 1;
    }
    return;
  }
  pTVar3 = (this->FreedIndicesQueue).Tail;
  uVar1 = pTVar2->Item;
  (this->FreedIndicesQueue).Tail = pTVar2;
  pTVar2->Item = 0;
  ::operator_delete(pTVar3,0x10);
  uVar12 = ~uVar1 >> 0x1f;
  uVar8 = 0;
  if ((int)uVar1 < (this->PacketBuffer).ArrayNum) {
    uVar8 = uVar12;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar11 = (longlong)(int)uVar1 * 0x30;
  FSortedVoicePacketNode::Initialize
            ((FSortedVoicePacketNode *)((this->PacketBuffer).AllocatorInstance.Data + lVar11),
             param_1,param_2,param_3,param_4);
  if ((uVar1 == 0xffffffff) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\VoicePacketBuffer.cpp"
                         ,0x110,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = 0;
  if ((int)uVar1 < (this->PacketBuffer).ArrayNum) {
    uVar8 = uVar12;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(uint *)((this->PacketBuffer).AllocatorInstance.Data + lVar11 + 0x20) = uVar1;
  uVar8 = 0;
  if ((int)uVar1 < (this->PacketBuffer).ArrayNum) {
    uVar8 = uVar12;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = this->ListHead;
  pFVar10 = (FSortedVoicePacketNode *)((this->PacketBuffer).AllocatorInstance.Data + lVar11);
  if (pFVar4 == (FSortedVoicePacketNode *)0x0) {
    this->ListHead = pFVar10;
    this->SampleCounter = param_3;
  }
  else if (param_3 < pFVar4->StartSample) {
    pFVar10->NextPacket = pFVar4;
    this->ListHead = pFVar10;
  }
  else {
    for (pFVar6 = pFVar4->NextPacket; pFVar6 != (FSortedVoicePacketNode *)0x0;
        pFVar6 = pFVar6->NextPacket) {
      if (param_3 < pFVar6->StartSample) {
        pFVar4->NextPacket = pFVar10;
        pFVar10->NextPacket = pFVar6;
        return;
      }
      pFVar4 = pFVar6;
    }
    pFVar4->NextPacket = pFVar10;
  }
  if (param_4 == Float) {
    iVar9 = 4;
  }
  else if (param_4 == Int16) {
    iVar9 = 2;
  }
  else {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Public\\VoicePacketBuffer.h"
                       ,0xa4,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = 1;
  }
  LOCK();
  (this->NumBufferedSamples).Counter = (this->NumBufferedSamples).Counter + param_2 / iVar9;
  UNLOCK();
  return;
}

// Reset @ 14ecf93d0

void __thiscall FVoicePacketBuffer::Reset(FVoicePacketBuffer *this,int param_1)

{
  TNode *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TNode *pTVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar6 = 0;
  while( true ) {
    pTVar5 = ((this->FreedIndicesQueue).Tail)->NextNode;
    if (pTVar5 == (TNode *)0x0) break;
    pTVar1 = (this->FreedIndicesQueue).Tail;
    (this->FreedIndicesQueue).Tail = pTVar5;
    pTVar5->Item = 0;
    ::operator_delete(pTVar1,0x10);
  }
  uVar8 = uVar6;
  if (0 < (this->PacketBuffer).ArrayNum) {
    do {
      uVar7 = (uint)uVar8;
      uVar4 = 0;
      if ((int)uVar7 < (this->PacketBuffer).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined8 *)((this->PacketBuffer).AllocatorInstance.Data + uVar6 + 0x18) = 0;
      pTVar5 = ::operator_new(0x10);
      if (pTVar5 != (TNode *)0x0) {
        pTVar5->NextNode = (TNode *)0x0;
        pTVar5->Item = uVar7;
        pTVar1 = (this->FreedIndicesQueue).Head;
        (this->FreedIndicesQueue).Head = pTVar5;
        pTVar1->NextNode = pTVar5;
      }
      uVar6 = uVar6 + 0x30;
      uVar8 = (ulonglong)(uVar7 + 1);
    } while ((int)(uVar7 + 1) < (this->PacketBuffer).ArrayNum);
  }
  this->ListHead = (FSortedVoicePacketNode *)0x0;
  this->IdleSampleCounter = 0;
  LOCK();
  this->bIsIdle = (FThreadSafeBool)0x0;
  UNLOCK();
  this->SampleCounter = (longlong)param_1;
  return;
}


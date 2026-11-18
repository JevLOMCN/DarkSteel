// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 28

// TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_> @ 147fa33b0

TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_> *
__thiscall
TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>::
TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>
           *this,ulong64 param_1)

{
  this->Head = 0;
  this->Tail = 0;
  this->IndexMask = 0;
  (this->Storage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ArrayNum = 0;
  (this->Storage).ArrayMax = 0;
  if (param_1 != 0) {
    SetCapacity(this,param_1);
  }
  return this;
}

// ~TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_> @ 147fa79f0

void __thiscall
TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>::
~TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = this->Head - this->Tail;
  if (0xffffffff < (ulonglong)uVar4 + (ulonglong)this->Tail) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Tail = this->Tail + uVar4;
  (this->Storage).ArrayNum = 0;
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TResizableCircularQueue<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> @ 147fa7a70

void __thiscall
TResizableCircularQueue<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
::
~TResizableCircularQueue<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
          (TResizableCircularQueue<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
           *this)

{
  ForElementType<FNetPacketNotify::FSentAckData> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = this->Head - this->Tail;
  if (0xffffffff < (ulonglong)uVar4 + (ulonglong)this->Tail) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Tail = this->Tail + uVar4;
  (this->Storage).ArrayNum = 0;
  FVar1 = (this->Storage).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FNetPacketNotify::FSentAckData>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  return;
}

// ~TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_> @ 147fa7af0

void __thiscall
TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_>::
~TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = this->Head - this->Tail;
  if (0xffffffff < (ulonglong)uVar4 + (ulonglong)this->Tail) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Tail = this->Tail + uVar4;
  (this->Storage).ArrayNum = 0;
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// Enqueue @ 147fc6d50

void __thiscall
TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>::
Enqueue(TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>
        *this,FChannelRecordEntry *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  ulong64 uVar3;
  
  uVar3 = (ulonglong)(this->Head - this->Tail) + 1;
  if ((ulonglong)(longlong)(this->Storage).ArrayNum < uVar3) {
    SetCapacity(this,uVar3);
  }
  uVar1 = this->Head;
  pFVar2 = (this->Storage).AllocatorInstance.Data;
  this->Head = uVar1 + 1;
  *(FChannelRecordEntry *)(pFVar2 + (ulonglong)(this->IndexMask & uVar1) * 4) = *param_1;
  return;
}

// Pop @ 147fe5ae0

void __thiscall
TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>::
Pop(TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>
    *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Head == this->Tail) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1638566698149740322>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0xde,"Count() > 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->Tail = this->Tail + 1;
  }
  return;
}

// PopNoCheck @ 147fe5be0

void __thiscall
TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>::
PopNoCheck(TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>
           *this)

{
  this->Tail = this->Tail + 1;
  return;
}

// PopNoCheck @ 147fe5bf0

void __thiscall
TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>::
PopNoCheck(TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>
           *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (0xffffffff < this->Tail + param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Tail = this->Tail + (int)param_1;
  return;
}

// PopNoCheck @ 147fe5c50

void __thiscall
TResizableCircularQueue<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
::PopNoCheck(TResizableCircularQueue<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
             *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (0xffffffff < this->Tail + param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Tail = this->Tail + (int)param_1;
  return;
}

// PopNoCheck @ 147fe5cb0

void __thiscall
TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_>::PopNoCheck
          (TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (0xffffffff < this->Tail + param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Tail = this->Tail + (int)param_1;
  return;
}

// SetCapacity @ 147ff4330

void __thiscall
TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>::
SetCapacity(TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>
            *this,ulong64 param_1)

{
  TArray<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *_Src;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulong64 uVar9;
  
  uVar9 = 1;
  if (param_1 != 0) {
    uVar9 = param_1;
  }
  uVar8 = uVar9 - 1;
  pTVar1 = &this->Storage;
  lVar4 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  piVar2 = &(this->Storage).ArrayNum;
  cVar10 = (char)lVar4;
  if (uVar8 == 0) {
    cVar10 = -1;
  }
  uVar8 = 1L << (0x40U - ('?' - cVar10) & 0x3f);
  iVar14 = *piVar2;
  if ((uVar8 != (longlong)iVar14) && (this->Head - this->Tail <= uVar8)) {
    iVar12 = (int)uVar8;
    if (iVar14 < 1) {
      this->IndexMask = iVar12 - 1;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar12,&pTVar1->AllocatorInstance,piVar2,&(this->Storage).ArrayMax);
    }
    else {
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = (ulonglong)(uint)local_40;
      if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar8 & 0xffffffff);
      }
      local_40 = 0;
      if (iVar12 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar12,&local_48,0,(int *)((longlong)&local_40 + 4));
      }
      _Src = (pTVar1->AllocatorInstance).Data;
      uVar11 = this->IndexMask & this->Tail;
      uVar13 = this->IndexMask & this->Head;
      uVar15 = this->Head - this->Tail;
      pFVar3 = _Src + (ulonglong)uVar11 * 4;
      if (uVar15 == 0 || uVar11 < uVar13) {
        if (((pFVar3 == (FScriptContainerElement *)0x0) && (uVar15 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (uVar15 != 0) {
          memcpy(local_48.Data + (longlong)iVar14 * 4,pFVar3,(longlong)(int)uVar15 << 2);
        }
      }
      else {
        iVar14 = (this->Storage).ArrayNum - uVar11;
        if (((pFVar3 == (FScriptContainerElement *)0x0) && (iVar14 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar14,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (iVar14 != 0) {
          memcpy(local_48.Data + (longlong)iVar7 * 4,pFVar3,(longlong)iVar14 << 2);
        }
        if (((_Src == (FScriptContainerElement *)0x0) && (uVar13 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar13,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        if (uVar13 != 0) {
          memcpy(local_48.Data + (longlong)iVar14 * 4,_Src,(longlong)(int)uVar13 << 2);
        }
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar12 - uVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
      if (pTVar1 != (TArray<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>
                     *)&local_48) {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar1->AllocatorInstance).Data = local_48.Data;
        (this->Storage).ArrayNum = (uint)local_40;
        (this->Storage).ArrayMax = local_40._4_4_;
        local_40 = 0;
        local_48.Data = (FScriptContainerElement *)0x0;
      }
      this->Head = uVar15;
      this->IndexMask = iVar12 - 1;
      this->Tail = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
        return;
      }
    }
  }
  return;
}

// TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_> @ 148013310

TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_> *
__thiscall
TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>::
TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>
           *this,ulong64 param_1)

{
  this->Head = 0;
  this->Tail = 0;
  this->IndexMask = 0;
  (this->Storage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ArrayNum = 0;
  (this->Storage).ArrayMax = 0;
  if (param_1 != 0) {
    SetCapacity(this,param_1);
  }
  return this;
}

// TResizableCircularQueue<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> @ 148013350

TResizableCircularQueue<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
TResizableCircularQueue<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
::
TResizableCircularQueue<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
          (TResizableCircularQueue<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
           *this,ulong64 param_1)

{
  this->Head = 0;
  this->Tail = 0;
  this->IndexMask = 0;
  (this->Storage).AllocatorInstance.SecondaryData =
       (ForElementType<FNetPacketNotify::FSentAckData>)0x0;
  (this->Storage).ArrayNum = 0;
  (this->Storage).ArrayMax = 0x80;
  if (param_1 != 0) {
    SetCapacity(this,param_1);
  }
  return this;
}

// ~TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_> @ 148016e90

void __thiscall
TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>::
~TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = this->Head - this->Tail;
  if (0xffffffff < (ulonglong)uVar4 + (ulonglong)this->Tail) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Tail = this->Tail + uVar4;
  (this->Storage).ArrayNum = 0;
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// Enqueue @ 14802e600

void __thiscall
TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>::
Enqueue(TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>
        *this,FDataStreamChannelRecord *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  
  uVar4 = (ulonglong)(this->Head - this->Tail) + 1;
  if ((ulonglong)(longlong)(this->Storage).ArrayNum < uVar4) {
    SetCapacity(this,uVar4);
  }
  uVar2 = this->Head;
  this->Head = uVar2 + 1;
  uVar3 = *(undefined8 *)&param_1->PacketId;
  pFVar1 = (this->Storage).AllocatorInstance.Data + (ulonglong)(this->IndexMask & uVar2) * 0x10;
  *(void **)pFVar1 = param_1->Record;
  *(undefined8 *)(pFVar1 + 8) = uVar3;
  return;
}

// Enqueue @ 14802e660

void __thiscall
TResizableCircularQueue<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
::Enqueue(TResizableCircularQueue<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
          *this,FSentAckData *param_1)

{
  uint uVar1;
  ulong64 uVar2;
  ForElementType<FNetPacketNotify::FSentAckData> FVar3;
  
  uVar2 = (ulonglong)(this->Head - this->Tail) + 1;
  if ((ulonglong)(longlong)(this->Storage).ArrayNum < uVar2) {
    SetCapacity(this,uVar2);
  }
  uVar1 = this->Head;
  this->Head = uVar1 + 1;
  FVar3 = (this->Storage).AllocatorInstance.SecondaryData;
  if (FVar3 == (ForElementType<FNetPacketNotify::FSentAckData>)0x0) {
    FVar3 = (ForElementType<FNetPacketNotify::FSentAckData>)&this->Storage;
  }
  *(FSentAckData *)((longlong)FVar3 + (ulonglong)(this->IndexMask & uVar1) * 4) = *param_1;
  return;
}

// Pop @ 148048e80

void __thiscall
TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>::
Pop(TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>
    *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Head == this->Tail) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1638566698149740322>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0xde,"Count() > 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->Tail = this->Tail + 1;
  }
  return;
}

// PopNoCheck @ 148048ed0

void __thiscall
TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>::
PopNoCheck(TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>
           *this)

{
  this->Tail = this->Tail + 1;
  return;
}

// PopNoCheck @ 148048ee0

void __thiscall
TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>::
PopNoCheck(TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>
           *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (0xffffffff < this->Tail + param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Tail = this->Tail + (int)param_1;
  return;
}

// PopNoCheck @ 148048f40

void __thiscall
TResizableCircularQueue<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
::PopNoCheck(TResizableCircularQueue<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
             *this)

{
  this->Tail = this->Tail + 1;
  return;
}

// Reset @ 148053c10

void __thiscall
TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>::
Reset(TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>
      *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((ulonglong)(this->Head - this->Tail) + (ulonglong)this->Tail < 0x100000000) {
    this->Head = 0;
    this->Tail = 0;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                     ,0x107,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Head = 0;
  this->Tail = 0;
  return;
}

// SetCapacity @ 14805e3a0

void __thiscall
TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>::
SetCapacity(TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>
            *this,ulong64 param_1)

{
  TArray<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  char cVar11;
  FScriptContainerElement *_Src;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulong64 uVar10;
  
  uVar10 = 1;
  if (param_1 != 0) {
    uVar10 = param_1;
  }
  uVar9 = uVar10 - 1;
  pTVar1 = &this->Storage;
  lVar4 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  piVar2 = &(this->Storage).ArrayNum;
  cVar11 = (char)lVar4;
  if (uVar9 == 0) {
    cVar11 = -1;
  }
  uVar9 = 1L << (0x40U - ('?' - cVar11) & 0x3f);
  iVar13 = *piVar2;
  if ((uVar9 != (longlong)iVar13) && (this->Head - this->Tail <= uVar9)) {
    iVar12 = (int)uVar9;
    if (iVar13 < 1) {
      this->IndexMask = iVar12 - 1;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar12,&pTVar1->AllocatorInstance,piVar2,&(this->Storage).ArrayMax);
    }
    else {
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = (ulonglong)(uint)local_40;
      if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar9 & 0xffffffff);
      }
      local_40 = 0;
      if (iVar12 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar12,&local_48,0,(int *)((longlong)&local_40 + 4));
      }
      uVar7 = this->IndexMask & this->Tail;
      uVar14 = this->IndexMask & this->Head;
      uVar15 = this->Head - this->Tail;
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      _Src = pFVar3 + (ulonglong)uVar7 * 0x10;
      if (uVar15 == 0 || uVar7 < uVar14) {
        if (((_Src == (FScriptContainerElement *)0x0) && (uVar15 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar13 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,uVar15,&local_48,(int *)&local_40,
                            (int *)((longlong)&local_40 + 4));
        if (uVar15 != 0) {
          memcpy(local_48.Data + (longlong)iVar13 * 0x10,_Src,(longlong)(int)uVar15 << 4);
        }
      }
      else {
        iVar13 = (this->Storage).ArrayNum - uVar7;
        if (((_Src == (FScriptContainerElement *)0x0) && (iVar13 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,iVar13,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4)
                          );
        if (iVar13 != 0) {
          memcpy(local_48.Data + (longlong)iVar8 * 0x10,_Src,(longlong)iVar13 << 4);
        }
        if (((pFVar3 == (FScriptContainerElement *)0x0) && (uVar14 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar13 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,uVar14,&local_48,(int *)&local_40,
                            (int *)((longlong)&local_40 + 4));
        if (uVar14 != 0) {
          memcpy(local_48.Data + (longlong)iVar13 * 0x10,pFVar3,(longlong)(int)uVar14 << 4);
        }
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar12 - uVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4))
      ;
      if (pTVar1 != (TArray<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>
                     *)&local_48) {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar1->AllocatorInstance).Data = local_48.Data;
        (this->Storage).ArrayNum = (uint)local_40;
        (this->Storage).ArrayMax = local_40._4_4_;
        local_40 = 0;
        local_48.Data = (FScriptContainerElement *)0x0;
      }
      this->Head = uVar15;
      this->IndexMask = iVar12 - 1;
      this->Tail = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
        return;
      }
    }
  }
  return;
}

// SetCapacity @ 14805e780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TResizableCircularQueue<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
::SetCapacity(TResizableCircularQueue<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
              *this,ulong64 param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ForElementType<FNetPacketNotify::FSentAckData> *pFVar13;
  char cVar14;
  void *_Dst;
  TArray<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  *pTVar15;
  ForElementType<FNetPacketNotify::FSentAckData> FVar16;
  ForElementType<FNetPacketNotify::FSentAckData> FVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined1 auStackY_2a8 [32];
  ForElementType<FNetPacketNotify::FSentAckData> local_258;
  int local_50;
  int local_4c;
  ulonglong local_48;
  ulong64 uVar12;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  uVar12 = 1;
  if (param_1 != 0) {
    uVar12 = param_1;
  }
  uVar11 = uVar12 - 1;
  pTVar15 = &this->Storage;
  lVar18 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  piVar1 = &(this->Storage).ArrayNum;
  cVar14 = (char)lVar18;
  if (uVar11 == 0) {
    cVar14 = -1;
  }
  uVar11 = 1L << (0x40U - ('?' - cVar14) & 0x3f);
  iVar22 = *piVar1;
  if (uVar11 == (longlong)iVar22) {
    return;
  }
  if (uVar11 < this->Head - this->Tail) {
    return;
  }
  iVar19 = (int)uVar11;
  if (iVar22 < 1) {
    this->IndexMask = iVar19 - 1;
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FNetPacketNotify::FSentAckData>_>
              (4,2,iVar19,&pTVar15->AllocatorInstance,piVar1,&(this->Storage).ArrayMax);
    return;
  }
  local_4c = 0x80;
  local_258.SecondaryData = (ForElementType<FNetPacketNotify::FSentAckData>)0x0;
  if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar11 & 0xffffffff);
  }
  lVar18 = 4;
  local_50 = 0;
  if (iVar19 != 0x80) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FNetPacketNotify::FSentAckData>_>
              (4,2,iVar19,&local_258,0,&local_4c);
  }
  uVar9 = this->IndexMask & this->Tail;
  uVar21 = this->IndexMask & this->Head;
  FVar17 = (this->Storage).AllocatorInstance.SecondaryData;
  if (FVar17 == (ForElementType<FNetPacketNotify::FSentAckData>)0x0) {
    FVar17 = (ForElementType<FNetPacketNotify::FSentAckData>)pTVar15;
  }
  uVar20 = this->Head - this->Tail;
  lVar2 = (longlong)FVar17 + (ulonglong)uVar9 * 4;
  if (uVar20 == 0 || uVar9 < uVar21) {
    if (((lVar2 == 0) && (uVar20 != 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar22 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FNetPacketNotify::FSentAckData>_>
                       (4,2,uVar20,&local_258,&local_50,&local_4c);
    FVar16 = (ForElementType<FNetPacketNotify::FSentAckData>)&local_258;
    if (local_258.SecondaryData != (ForElementType<FNetPacketNotify::FSentAckData>)0x0) {
      FVar16 = local_258.SecondaryData;
    }
    if (uVar20 == 0) goto LAB_14805ea7b;
    _Dst = (void *)((longlong)FVar16 + (longlong)iVar22 * 4);
    FVar17 = (ForElementType<FNetPacketNotify::FSentAckData>)
             ((longlong)FVar17 + (ulonglong)uVar9 * 4);
    uVar21 = uVar20;
  }
  else {
    iVar22 = (this->Storage).ArrayNum - uVar9;
    if (((lVar2 == 0) && (iVar22 != 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar10 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FNetPacketNotify::FSentAckData>_>
                       (4,2,iVar22,&local_258,&local_50,&local_4c);
    FVar16 = (ForElementType<FNetPacketNotify::FSentAckData>)&local_258;
    if (local_258.SecondaryData != (ForElementType<FNetPacketNotify::FSentAckData>)0x0) {
      FVar16 = local_258.SecondaryData;
    }
    if (iVar22 != 0) {
      memcpy((void *)((longlong)FVar16 + (longlong)iVar10 * 4),
             (void *)((longlong)FVar17 + (ulonglong)uVar9 * 4),(longlong)iVar22 << 2);
    }
    if (((FVar17 == (ForElementType<FNetPacketNotify::FSentAckData>)0x0) && (uVar21 != 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar22 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FNetPacketNotify::FSentAckData>_>
                       (4,2,uVar21,&local_258,&local_50,&local_4c);
    FVar16 = (ForElementType<FNetPacketNotify::FSentAckData>)&local_258;
    if (local_258.SecondaryData != (ForElementType<FNetPacketNotify::FSentAckData>)0x0) {
      FVar16 = local_258.SecondaryData;
    }
    if (uVar21 == 0) goto LAB_14805ea7b;
    _Dst = (void *)((longlong)FVar16 + (longlong)iVar22 * 4);
  }
  memcpy(_Dst,(void *)FVar17,(longlong)(int)uVar21 << 2);
LAB_14805ea7b:
  UE::Core::Private::
  ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FNetPacketNotify::FSentAckData>_>
            (4,2,iVar19 - uVar20,&local_258,&local_50,&local_4c);
  if (pTVar15 !=
      (TArray<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
       *)&local_258) {
    if (local_258.SecondaryData == (ForElementType<FNetPacketNotify::FSentAckData>)0x0) {
      pFVar13 = &local_258;
      do {
        uVar4 = *(undefined8 *)(pFVar13->InlineData + 8);
        uVar5 = *(undefined8 *)(pFVar13->InlineData + 0x10);
        uVar6 = *(undefined8 *)(pFVar13->InlineData + 0x18);
        *(undefined8 *)(pTVar15->AllocatorInstance).InlineData = *(undefined8 *)pFVar13->InlineData;
        *(undefined8 *)((pTVar15->AllocatorInstance).InlineData + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar13->InlineData + 0x20);
        uVar7 = *(undefined8 *)(pFVar13->InlineData + 0x28);
        *(undefined8 *)((pTVar15->AllocatorInstance).InlineData + 0x10) = uVar5;
        *(undefined8 *)((pTVar15->AllocatorInstance).InlineData + 0x18) = uVar6;
        uVar5 = *(undefined8 *)(pFVar13->InlineData + 0x30);
        uVar6 = *(undefined8 *)(pFVar13->InlineData + 0x38);
        *(undefined8 *)((pTVar15->AllocatorInstance).InlineData + 0x20) = uVar4;
        *(undefined8 *)((pTVar15->AllocatorInstance).InlineData + 0x28) = uVar7;
        uVar4 = *(undefined8 *)(pFVar13->InlineData + 0x40);
        uVar7 = *(undefined8 *)(pFVar13->InlineData + 0x48);
        *(undefined8 *)((pTVar15->AllocatorInstance).InlineData + 0x30) = uVar5;
        *(undefined8 *)((pTVar15->AllocatorInstance).InlineData + 0x38) = uVar6;
        uVar5 = *(undefined8 *)(pFVar13->InlineData + 0x50);
        uVar6 = *(undefined8 *)(pFVar13->InlineData + 0x58);
        *(undefined8 *)((pTVar15->AllocatorInstance).InlineData + 0x40) = uVar4;
        *(undefined8 *)((pTVar15->AllocatorInstance).InlineData + 0x48) = uVar7;
        uVar4 = *(undefined8 *)(pFVar13->InlineData + 0x60);
        uVar7 = *(undefined8 *)(pFVar13->InlineData + 0x68);
        *(undefined8 *)((pTVar15->AllocatorInstance).InlineData + 0x50) = uVar5;
        *(undefined8 *)((pTVar15->AllocatorInstance).InlineData + 0x58) = uVar6;
        uVar5 = *(undefined8 *)(pFVar13->InlineData + 0x70);
        uVar6 = *(undefined8 *)(pFVar13->InlineData + 0x78);
        *(undefined8 *)((pTVar15->AllocatorInstance).InlineData + 0x60) = uVar4;
        *(undefined8 *)((pTVar15->AllocatorInstance).InlineData + 0x68) = uVar7;
        *(undefined8 *)((pTVar15->AllocatorInstance).InlineData + 0x70) = uVar5;
        *(undefined8 *)((pTVar15->AllocatorInstance).InlineData + 0x78) = uVar6;
        lVar18 = lVar18 + -1;
        pFVar13 = (ForElementType<FNetPacketNotify::FSentAckData> *)(pFVar13->InlineData + 0x80);
        pTVar15 = (TArray<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
                   *)((pTVar15->AllocatorInstance).InlineData + 0x80);
      } while (lVar18 != 0);
    }
    FVar17 = (this->Storage).AllocatorInstance.SecondaryData;
    if (FVar17 != (ForElementType<FNetPacketNotify::FSentAckData>)0x0) {
      FMemory::Free((void *)FVar17);
    }
    (this->Storage).AllocatorInstance.SecondaryData = local_258.SecondaryData;
    (this->Storage).ArrayNum = local_50;
    (this->Storage).ArrayMax = local_4c;
    local_4c = 0x80;
    local_258.SecondaryData = (ForElementType<FNetPacketNotify::FSentAckData>)0x0;
    local_50 = 0;
  }
  this->Head = uVar20;
  this->IndexMask = iVar19 - 1;
  this->Tail = 0;
  if (local_258.SecondaryData != (ForElementType<FNetPacketNotify::FSentAckData>)0x0) {
    FMemory::Free((void *)local_258.SecondaryData);
  }
  return;
}

// TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_> @ 148087d40

TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_> * __thiscall
TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_>::
TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_>
          (TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_> *this,ulong64 param_1)

{
  this->Head = 0;
  this->Tail = 0;
  this->IndexMask = 0;
  (this->Storage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ArrayNum = 0;
  (this->Storage).ArrayMax = 0;
  if (param_1 != 0) {
    SetCapacity(this,param_1);
  }
  return this;
}

// Enqueue @ 14809f800

void __thiscall
TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_>::Enqueue
          (TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_> *this,FSeqSample *param_1
          )

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  
  uVar4 = (ulonglong)(this->Head - this->Tail) + 1;
  if ((ulonglong)(longlong)(this->Storage).ArrayNum < uVar4) {
    SetCapacity(this,uVar4);
  }
  uVar2 = this->Head;
  this->Head = uVar2 + 1;
  uVar3 = *(undefined8 *)&param_1->Seq;
  pFVar1 = (this->Storage).AllocatorInstance.Data + (ulonglong)(this->IndexMask & uVar2) * 0x10;
  *(double *)pFVar1 = param_1->Timestamp;
  *(undefined8 *)(pFVar1 + 8) = uVar3;
  return;
}

// Pop @ 1480bcbf0

void __thiscall
TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_>::Pop
          (TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Head == this->Tail) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1638566698149740322>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0xde,"Count() > 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->Tail = this->Tail + 1;
  }
  return;
}

// PopNoCheck @ 1480bcc40

void __thiscall
TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_>::PopNoCheck
          (TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_> *this)

{
  this->Tail = this->Tail + 1;
  return;
}

// SetCapacity @ 1480d2920

void __thiscall
TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_>::SetCapacity
          (TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_> *this,ulong64 param_1)

{
  TArray<FSeqSample,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  char cVar11;
  FScriptContainerElement *_Src;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulong64 uVar10;
  
  uVar10 = 1;
  if (param_1 != 0) {
    uVar10 = param_1;
  }
  uVar9 = uVar10 - 1;
  pTVar1 = &this->Storage;
  lVar4 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  piVar2 = &(this->Storage).ArrayNum;
  cVar11 = (char)lVar4;
  if (uVar9 == 0) {
    cVar11 = -1;
  }
  uVar9 = 1L << (0x40U - ('?' - cVar11) & 0x3f);
  iVar13 = *piVar2;
  if ((uVar9 != (longlong)iVar13) && (this->Head - this->Tail <= uVar9)) {
    iVar12 = (int)uVar9;
    if (iVar13 < 1) {
      this->IndexMask = iVar12 - 1;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar12,&pTVar1->AllocatorInstance,piVar2,&(this->Storage).ArrayMax);
    }
    else {
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = (ulonglong)(uint)local_40;
      if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar9 & 0xffffffff);
      }
      local_40 = 0;
      if (iVar12 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar12,&local_48,0,(int *)((longlong)&local_40 + 4));
      }
      uVar7 = this->IndexMask & this->Tail;
      uVar14 = this->IndexMask & this->Head;
      uVar15 = this->Head - this->Tail;
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      _Src = pFVar3 + (ulonglong)uVar7 * 0x10;
      if (uVar15 == 0 || uVar7 < uVar14) {
        if (((_Src == (FScriptContainerElement *)0x0) && (uVar15 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar13 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,uVar15,&local_48,(int *)&local_40,
                            (int *)((longlong)&local_40 + 4));
        if (uVar15 != 0) {
          memcpy(local_48.Data + (longlong)iVar13 * 0x10,_Src,(longlong)(int)uVar15 << 4);
        }
      }
      else {
        iVar13 = (this->Storage).ArrayNum - uVar7;
        if (((_Src == (FScriptContainerElement *)0x0) && (iVar13 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,iVar13,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4)
                          );
        if (iVar13 != 0) {
          memcpy(local_48.Data + (longlong)iVar8 * 0x10,_Src,(longlong)iVar13 << 4);
        }
        if (((pFVar3 == (FScriptContainerElement *)0x0) && (uVar14 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar13 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,uVar14,&local_48,(int *)&local_40,
                            (int *)((longlong)&local_40 + 4));
        if (uVar14 != 0) {
          memcpy(local_48.Data + (longlong)iVar13 * 0x10,pFVar3,(longlong)(int)uVar14 << 4);
        }
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar12 - uVar15,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4))
      ;
      if (pTVar1 != (TArray<FSeqSample,TSizedDefaultAllocator<32>_> *)&local_48) {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar1->AllocatorInstance).Data = local_48.Data;
        (this->Storage).ArrayNum = (uint)local_40;
        (this->Storage).ArrayMax = local_40._4_4_;
        local_40 = 0;
        local_48.Data = (FScriptContainerElement *)0x0;
      }
      this->Head = uVar15;
      this->IndexMask = iVar12 - 1;
      this->Tail = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
        return;
      }
    }
  }
  return;
}


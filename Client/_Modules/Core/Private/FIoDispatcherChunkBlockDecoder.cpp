// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// ~FIoDispatcherChunkBlockDecoder @ 1417a6eb0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::FIoDispatcherChunkBlockDecoder::~FIoDispatcherChunkBlockDecoder
          (FIoDispatcherChunkBlockDecoder *this)

{
  FSlab *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  pFVar1 = (this->QueueEntryAllocator).CurrentSlab;
  if (pFVar1->Allocated != pFVar1->Freed) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSlab->Allocated == CurrentSlab->Freed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                       ,0x23,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::operator_delete((this->QueueEntryAllocator).CurrentSlab,0x14010);
  DestructItems<UE::FIoDispatcherChunkBlockDecoder::FDecodeContext,int>
            ((FDecodeContext *)(this->DecodeContexts).AllocatorInstance.Data,
             (this->DecodeContexts).ArrayNum);
  pFVar2 = (this->DecodeContexts).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// operator() @ 1417ac4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`UE::FIoDispatcherChunkBlockDecoder::LaunchDecodeTask'::__l2::<lambda_1>::operator()(void *this)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  bool bVar13;
  ushort uVar14;
  FQueueEntry *pFVar15;
  longlong *plVar16;
  uint uVar17;
  undefined1 auStack_d8 [48];
  undefined1 local_a8 [120];
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 8) != 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Ctx.Next == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcherChunkDecoder.cpp"
                          ,0xa5,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(longlong *)((longlong)this + 0x60) == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("DecodeRequest.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcherChunkDecoder.cpp"
                          ,0xa6,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar17 = 0;
  lVar3 = *(longlong *)((longlong)this + 0x60);
  while ((lVar3 != 0 && (uVar17 <= *(uint *)(*(longlong *)this + 0x3c)))) {
    bVar13 = -1 < CpuChannel->Enabled;
    if (bVar13) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId171,"IoDispatcherDecodeBlock",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcherChunkDecoder.cpp"
                 ,0xab);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId171);
    }
    local_a8._32_4_ = 0;
    local_a8._36_4_ = 0;
    local_a8._0_8_ = (void *)0x0;
    local_a8._8_8_ = 0;
    local_a8._16_8_ = (void *)0x0;
    local_a8._24_8_ = 0;
    local_a8._48_8_ = (void *)0x0;
    local_a8._56_8_ = 0;
    local_a8._64_8_ = (void *)0x0;
    local_a8._72_8_ = 0;
    local_a8[0x28] = Sha1;
    local_a8._80_8_ = 0;
    uStack_30 = (longlong *)0x0;
    UE::FIoDispatcherChunkBlockDecoder::ProcessDecodeRequest
              (*(FIoDispatcherChunkBlockDecoder **)this,
               (FIoChunkBlockDecodeRequest *)((longlong)this + 0x10),
               (FIoChunkBlockDecodeRequest *)local_a8);
    uVar17 = uVar17 + 1;
    *(undefined8 *)((longlong)this + 0x10) = local_a8._0_8_;
    *(undefined8 *)((longlong)this + 0x18) = local_a8._8_8_;
    *(undefined8 *)((longlong)this + 0x20) = local_a8._16_8_;
    *(undefined8 *)((longlong)this + 0x28) = local_a8._24_8_;
    ((FName *)((longlong)this + 0x30))->ComparisonIndex = (FNameEntryId)local_a8._32_4_;
    ((FName *)((longlong)this + 0x30))->Number = local_a8._36_4_;
    *(ulonglong *)((longlong)this + 0x38) = CONCAT71(local_a8._41_7_,local_a8[0x28]);
    *(undefined8 *)((longlong)this + 0x50) = local_a8._64_8_;
    *(undefined8 *)((longlong)this + 0x58) = local_a8._72_8_;
    *(undefined8 *)((longlong)this + 0x40) = local_a8._48_8_;
    *(undefined8 *)((longlong)this + 0x48) = local_a8._56_8_;
    lVar3 = *(longlong *)((longlong)this + 0x60);
    uVar12 = *(undefined8 *)((longlong)this + 0x68);
    uVar6 = *(undefined4 *)((longlong)this + 0x70);
    uVar7 = *(undefined4 *)((longlong)this + 0x74);
    uVar8 = *(undefined4 *)((longlong)this + 0x78);
    uVar9 = *(undefined4 *)((longlong)this + 0x7c);
    uVar10 = *(undefined8 *)((longlong)this + 0x80);
    plVar11 = *(longlong **)((longlong)this + 0x88);
    *(undefined8 *)((longlong)this + 0x60) = local_a8._80_8_;
    *(undefined8 *)((longlong)this + 0x68) = local_a8._88_8_;
    *(undefined4 *)((longlong)this + 0x70) = local_a8._96_4_;
    *(undefined4 *)((longlong)this + 0x74) = local_a8._100_4_;
    *(undefined4 *)((longlong)this + 0x78) = local_a8._104_4_;
    *(undefined4 *)((longlong)this + 0x7c) = local_a8._108_4_;
    *(undefined4 *)((longlong)this + 0x80) = local_a8._112_4_;
    *(undefined4 *)((longlong)this + 0x84) = local_a8._116_4_;
    *(undefined4 *)((longlong)this + 0x88) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)this + 0x8c) = uStack_30._4_4_;
    local_a8._96_4_ = uVar6;
    local_a8._100_4_ = uVar7;
    local_a8._104_4_ = uVar8;
    local_a8._108_4_ = uVar9;
    local_a8._112_8_ = uVar10;
    uStack_30 = plVar11;
    local_a8._80_8_ = lVar3;
    local_a8._88_8_ = uVar12;
    if (lVar3 != 0) {
      plVar16 = (longlong *)(local_a8 + 0x60);
      if (plVar11 != (longlong *)0x0) {
        plVar16 = plVar11;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    lVar3 = *(longlong *)((longlong)this + 0x60);
  }
  lVar3 = *(longlong *)this;
  LOCK();
  bVar13 = *(char *)(lVar3 + 0x40) == '\0';
  if (bVar13) {
    *(char *)(lVar3 + 0x40) = '\x01';
  }
  UNLOCK();
  if (!bVar13) {
    UE::FMutex::LockSlow((FMutex *)(lVar3 + 0x40));
  }
  *(undefined8 *)(*(longlong *)((longlong)this + 8) + 8) = *(undefined8 *)(*(longlong *)this + 0x18)
  ;
  *(undefined8 *)(*(longlong *)this + 0x18) = *(undefined8 *)((longlong)this + 8);
  UE::__GTraceCounterAvailableChunkDecoderWorkerCount.Value =
       UE::__GTraceCounterAvailableChunkDecoderWorkerCount.Value + 1;
  if (-1 < CountersChannel->Enabled) {
    if (UE::__GTraceCounterAvailableChunkDecoderWorkerCount.CounterId == (atomic<unsigned_int>)0x0)
    {
      uVar14 = FCountersTrace::OutputInitCounter
                         (UE::__GTraceCounterAvailableChunkDecoderWorkerCount.CounterName,
                          TraceCounterType_Int,
                          UE::__GTraceCounterAvailableChunkDecoderWorkerCount.CounterFlags & 0xf);
      LOCK();
      if (UE::__GTraceCounterAvailableChunkDecoderWorkerCount.CounterId == (atomic<unsigned_int>)0x0
         ) {
        UE::__GTraceCounterAvailableChunkDecoderWorkerCount.CounterId._2_2_ = 0;
        UE::__GTraceCounterAvailableChunkDecoderWorkerCount.CounterId._0_2_ = uVar14;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (UE::__GTraceCounterAvailableChunkDecoderWorkerCount.CounterId._0_2_,
               UE::__GTraceCounterAvailableChunkDecoderWorkerCount.Value);
  }
  if (*(longlong *)((longlong)this + 0x60) != 0) {
    lVar4 = *(longlong *)this;
    pFVar15 = TSingleThreadedSlabAllocator<UE::FIoDispatcherChunkBlockDecoder::FQueueEntry,512>::
              Construct<FIoChunkBlockDecodeRequest>
                        ((TSingleThreadedSlabAllocator<UE::FIoDispatcherChunkBlockDecoder::FQueueEntry,512>
                          *)(lVar4 + 0x20),(FIoChunkBlockDecodeRequest *)((longlong)this + 0x10));
    TIntrusiveList<UE::FIoDispatcherChunkBlockDecoder::FQueueEntry>::AddTail
              ((TIntrusiveList<UE::FIoDispatcherChunkBlockDecoder::FQueueEntry> *)(lVar4 + 0x28),
               pFVar15);
    UE::__GTraceCounterChunkDecoderQueueCount.Value =
         UE::__GTraceCounterChunkDecoderQueueCount.Value + 1;
    if (-1 < CountersChannel->Enabled) {
      if (UE::__GTraceCounterChunkDecoderQueueCount.CounterId == (atomic<unsigned_int>)0x0) {
        uVar14 = FCountersTrace::OutputInitCounter
                           (UE::__GTraceCounterChunkDecoderQueueCount.CounterName,
                            TraceCounterType_Int,
                            UE::__GTraceCounterChunkDecoderQueueCount.CounterFlags & 0xf);
        LOCK();
        if (UE::__GTraceCounterChunkDecoderQueueCount.CounterId == (atomic<unsigned_int>)0x0) {
          UE::__GTraceCounterChunkDecoderQueueCount.CounterId._2_2_ = 0;
          UE::__GTraceCounterChunkDecoderQueueCount.CounterId._0_2_ = uVar14;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (UE::__GTraceCounterChunkDecoderQueueCount.CounterId._0_2_,
                 UE::__GTraceCounterChunkDecoderQueueCount.Value);
    }
  }
  lVar4 = *(longlong *)(*(longlong *)this + 0x28);
  LOCK();
  pbVar1 = (byte *)(lVar3 + 0x40);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 - 1;
  UNLOCK();
  if ((bVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread((FMutex *)(lVar3 + 0x40));
  }
  if (lVar4 != 0) {
    UE::FIoDispatcherChunkBlockDecoder::TryDequeueAndLaunchDecodeTasks
              (*(FIoDispatcherChunkBlockDecoder **)this);
  }
  return;
}

// Enqueue @ 1417c50a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::FIoDispatcherChunkBlockDecoder::Enqueue
          (FIoDispatcherChunkBlockDecoder *this,FIoChunkBlockDecodeRequest *param_1)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  FDecodeContext *pFVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  FQueueEntry *pFVar7;
  long64 lVar8;
  FDecodeContext *pFVar9;
  
  if ((*(longlong *)&param_1->OnDecoded == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DecodeRequest.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcherChunkDecoder.cpp"
                         ,0xe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar9 = (FDecodeContext *)0x0;
  LOCK();
  bVar5 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    FMutex::LockSlow(&this->Mutex);
  }
  pFVar3 = this->NextFreeContext;
  if (pFVar3 == (FDecodeContext *)0x0) {
    pFVar7 = TSingleThreadedSlabAllocator<UE::FIoDispatcherChunkBlockDecoder::FQueueEntry,512>::
             Construct<FIoChunkBlockDecodeRequest>(&this->QueueEntryAllocator,param_1);
    TIntrusiveList<UE::FIoDispatcherChunkBlockDecoder::FQueueEntry>::AddTail
              (&this->QueueEntries,pFVar7);
    __GTraceCounterChunkDecoderQueueCount.Value = __GTraceCounterChunkDecoderQueueCount.Value + 1;
    if (CountersChannel->Enabled < 0) goto LAB_1417c51ee;
    if (__GTraceCounterChunkDecoderQueueCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar6 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterChunkDecoderQueueCount.CounterName,TraceCounterType_Int,
                         __GTraceCounterChunkDecoderQueueCount.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterChunkDecoderQueueCount.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterChunkDecoderQueueCount.CounterId._2_2_ = 0;
        __GTraceCounterChunkDecoderQueueCount.CounterId._0_2_ = uVar6;
      }
      UNLOCK();
    }
    uVar6 = __GTraceCounterChunkDecoderQueueCount.CounterId._0_2_;
    lVar8 = __GTraceCounterChunkDecoderQueueCount.Value;
  }
  else {
    this->NextFreeContext = pFVar3->Next;
    pFVar3->Next = (FDecodeContext *)0x0;
    __GTraceCounterAvailableChunkDecoderWorkerCount.Value =
         __GTraceCounterAvailableChunkDecoderWorkerCount.Value + -1;
    pFVar9 = pFVar3;
    if (CountersChannel->Enabled < 0) goto LAB_1417c51ee;
    if (__GTraceCounterAvailableChunkDecoderWorkerCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar6 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterAvailableChunkDecoderWorkerCount.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterAvailableChunkDecoderWorkerCount.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterAvailableChunkDecoderWorkerCount.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterAvailableChunkDecoderWorkerCount.CounterId._2_2_ = 0;
        __GTraceCounterAvailableChunkDecoderWorkerCount.CounterId._0_2_ = uVar6;
      }
      UNLOCK();
    }
    uVar6 = __GTraceCounterAvailableChunkDecoderWorkerCount.CounterId._0_2_;
    lVar8 = __GTraceCounterAvailableChunkDecoderWorkerCount.Value;
  }
  FCountersTrace::OutputSetValue(uVar6,lVar8);
LAB_1417c51ee:
  LOCK();
  pFVar1 = &this->Mutex;
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  if (pFVar9 != (FDecodeContext *)0x0) {
    LaunchDecodeTask(this,pFVar9,param_1);
  }
  return;
}

// Initialize @ 1417db410

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::FIoDispatcherChunkBlockDecoder::Initialize
          (FIoDispatcherChunkBlockDecoder *this,uint param_1,uint param_2,ETaskPriority param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  FDecodeContext *pFVar10;
  uint uVar11;
  FDecodeContext *pFVar12;
  undefined1 local_res20 [8];
  
  uVar8 = 0x10;
  if (param_1 < 0x10) {
    uVar8 = param_1;
  }
  this->TaskPriority = param_3;
  uVar11 = 1;
  if (1 < uVar8) {
    uVar11 = uVar8;
  }
  this->MaxWorkerCount = uVar11;
  uVar8 = 0x10;
  if (param_2 < 0x10) {
    uVar8 = param_2;
  }
  uVar5 = 1;
  if (1 < uVar8) {
    uVar5 = uVar8;
  }
  this->MaxConsecutiveDecodeJobs = uVar5;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &(this->DecodeContexts).ArrayNum;
  piVar2 = &(this->DecodeContexts).ArrayMax;
  if ((this->DecodeContexts).ArrayMax < (int)uVar11) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar11,&(this->DecodeContexts).AllocatorInstance,*piVar1,piVar2);
  }
  uVar8 = this->MaxWorkerCount;
  iVar3 = *piVar1;
  if (iVar3 < (int)uVar8) {
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar8 - iVar3,&(this->DecodeContexts).AllocatorInstance,piVar1,piVar2)
    ;
    DefaultConstructItems<UE::FIoDispatcherChunkBlockDecoder::FDecodeContext,int>
              ((this->DecodeContexts).AllocatorInstance.Data + (longlong)iVar9 * 0x10,uVar8 - iVar3)
    ;
  }
  else {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < iVar3) {
      uVar11 = iVar3 - uVar8;
      if (((int)(uVar11 | uVar8) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar11 != 0) {
        TArray<UE::FIoDispatcherChunkBlockDecoder::FDecodeContext,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(&this->DecodeContexts,uVar8,uVar11);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->DecodeContexts).AllocatorInstance,(this->DecodeContexts).ArrayNum,
                   piVar2);
      }
    }
  }
  iVar3 = (this->DecodeContexts).ArrayNum;
  pFVar10 = (FDecodeContext *)(this->DecodeContexts).AllocatorInstance.Data;
  pFVar12 = pFVar10 + iVar3;
  while( true ) {
    if ((this->DecodeContexts).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::FIoDispatcherChunkBlockDecoder::FDecodeContext,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar10 == pFVar12) break;
    pFVar10->Next = this->NextFreeContext;
    this->NextFreeContext = pFVar10;
    __GTraceCounterAvailableChunkDecoderWorkerCount.Value =
         __GTraceCounterAvailableChunkDecoderWorkerCount.Value + 1;
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterAvailableChunkDecoderWorkerCount.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterAvailableChunkDecoderWorkerCount.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterAvailableChunkDecoderWorkerCount.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterAvailableChunkDecoderWorkerCount.CounterId == (atomic<unsigned_int>)0x0)
        {
          __GTraceCounterAvailableChunkDecoderWorkerCount.CounterId._2_2_ = 0;
          __GTraceCounterAvailableChunkDecoderWorkerCount.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterAvailableChunkDecoderWorkerCount.CounterId._0_2_,
                 __GTraceCounterAvailableChunkDecoderWorkerCount.Value);
    }
    pFVar10 = pFVar10 + 1;
  }
  return;
}

// LaunchDecodeTask @ 1417df2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::FIoDispatcherChunkBlockDecoder::LaunchDecodeTask
          (FIoDispatcherChunkBlockDecoder *this,FDecodeContext *param_1,
          FIoChunkBlockDecodeRequest *param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FTaskBase *pFVar7;
  FTask *pFVar8;
  undefined8 *puVar9;
  FTaskBase *this_00;
  longlong *plVar10;
  undefined1 auStack_108 [32];
  uint local_e8;
  FDecodeContext local_d8;
  FIoDispatcherChunkBlockDecoder *local_c8;
  FDecodeContext *local_c0;
  void *local_b8;
  ulong64 uStack_b0;
  void *local_a8;
  ulong64 uStack_a0;
  FName local_98;
  undefined8 uStack_90;
  void *local_88;
  atomic<unsigned___int64> aStack_80;
  void *local_78;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FStack_70;
  longlong local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  pFVar3 = (param_1->Task).Pimpl.Reference;
  this_00 = (FTaskBase *)0x0;
  (param_1->Task).Pimpl.Reference = (FTaskBase *)0x0;
  local_b8 = (param_2->Params).EncryptionKey.Data;
  uStack_b0 = (param_2->Params).EncryptionKey.Size;
  local_40 = *(longlong **)&(param_2->OnDecoded).field_0x28;
  local_a8 = (param_2->Params).BlockHash.Data;
  uStack_a0 = (param_2->Params).BlockHash.Size;
  local_68 = *(longlong *)&param_2->OnDecoded;
  local_98 = (param_2->Params).CompressionFormat;
  uStack_90 = *(undefined8 *)&(param_2->Params).HashFunction;
  local_88 = (param_2->EncodedBlock).Data;
  aStack_80 = (atomic<unsigned___int64>)(param_2->EncodedBlock).Size;
  local_78 = (param_2->DecodedBlock).Data;
  FStack_70 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)(param_2->DecodedBlock).Size;
  *(undefined8 *)&(param_2->OnDecoded).field_0x28 = 0;
  local_48 = *(undefined8 *)&(param_2->OnDecoded).field_0x20;
  local_58 = *(longlong *)&(param_2->OnDecoded).field_0x10;
  uStack_50 = *(undefined8 *)&(param_2->OnDecoded).field_0x18;
  if (local_68 != 0) {
    *(undefined8 *)&param_2->OnDecoded = 0;
  }
  local_c8 = this;
  local_c0 = param_1;
  pFVar7 = FMemory::Malloc(0x180,0x40);
  if (pFVar7 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::FIoDispatcherChunkBlockDecoder::LaunchDecodeTask'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    if ((*(ulonglong *)&(pFVar7->LowLevelTask).field_0x38 & 0x20) == 0) {
      local_e8 = (uint)*(undefined8 *)&(pFVar7->LowLevelTask).field_0x38 & 0x3f;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (**(code **)(*(longlong *)&(pFVar7->LowLevelTask).field_0x28 + 0x18))
              (&(pFVar7->LowLevelTask).field_0x28,&pFVar7->LowLevelTask);
    *(FTaskBase **)&pFVar7->LowLevelTask = pFVar7;
    *(undefined ***)&(pFVar7->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(pFVar7->LowLevelTask).field_0x8 = pFVar7;
    pFVar8 = LowLevelTasks::FTask::GetActiveTask();
    if (pFVar8 != (FTask *)0x0) {
      this_00 = *(FTaskBase **)&pFVar8->field_0x30;
    }
    *(FTaskBase **)&(pFVar7->LowLevelTask).field_0x30 = this_00;
    *(undefined8 *)&(pFVar7->LowLevelTask).field_0x38 = 0xc800005419ff5c00;
    pFVar7->ExtendedPriority = None;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar7->_padding_);
    pFVar7[1]._padding_ = (longlong)local_c8;
    pFVar7[1]._padding_ = (longlong)local_c0;
    pFVar7[1]._padding_ = (longlong)local_b8;
    pFVar7[1]._padding_ = uStack_b0;
    pFVar7[1]._padding_ = (longlong)local_a8;
    pFVar7[1].RefCount = (atomic<unsigned_int>)(undefined4)uStack_a0;
    pFVar7[1].NumLocks = (atomic<unsigned_int>)uStack_a0._4_4_;
    pFVar7[1].Pipe = (FPipe *)local_98;
    pFVar7[1].StateChangeEvent = (TEventCount<unsigned_int>)(undefined4)uStack_90;
    pFVar7[1].ExtendedPriority = uStack_90._4_1_;
    pFVar7[1].TaskTriggered = (atomic<bool>)uStack_90._5_1_;
    pFVar7[1]._padding_ = uStack_90._6_2_;
    *(void **)&pFVar7[1].ExecutingThreadId = local_88;
    pFVar7[1].TraceId = aStack_80;
    *(void **)pFVar7[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData = local_78;
    pFVar7[1].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData = FStack_70;
    pFVar7[1].Prerequisites.Prerequisites.ArrayNum = (undefined4)local_68;
    pFVar7[1].Prerequisites.Prerequisites.ArrayMax = local_68._4_4_;
    *(longlong **)&pFVar7[1].LowLevelTask.field_0x18 = local_40;
    local_40 = (longlong *)0x0;
    *(longlong *)&pFVar7[1].LowLevelTask = local_58;
    *(undefined8 *)&pFVar7[1].LowLevelTask.field_0x8 = uStack_50;
    *(undefined8 *)&pFVar7[1].LowLevelTask.field_0x10 = local_48;
    lVar4._0_4_ = pFVar7[1].Prerequisites.Prerequisites.ArrayNum;
    lVar4._4_4_ = pFVar7[1].Prerequisites.Prerequisites.ArrayMax;
    if (lVar4 != 0) {
      local_68 = 0;
    }
    pFVar7->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::FIoDispatcherChunkBlockDecoder::LaunchDecodeTask'::`2'::<lambda_1>_>
          ::_vftable_;
    this_00 = pFVar7;
  }
  Tasks::Private::FTaskBase::TryLaunch(this_00,0x180);
  if (param_1 == &local_d8) {
    if (this_00 == (FTaskBase *)0x0) goto LAB_1417df54b;
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 != (atomic<unsigned_int>)0x1) goto LAB_1417df54b;
    puVar9 = (undefined8 *)this_00->_padding_;
  }
  else {
    pFVar7 = (param_1->Task).Pimpl.Reference;
    (param_1->Task).Pimpl.Reference = this_00;
    if (pFVar7 == (FTaskBase *)0x0) goto LAB_1417df54b;
    LOCK();
    paVar1 = &pFVar7->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 != (atomic<unsigned_int>)0x1) goto LAB_1417df54b;
    puVar9 = (undefined8 *)pFVar7->_padding_;
    this_00 = pFVar7;
  }
  (*(code *)*puVar9)(this_00,1);
LAB_1417df54b:
  if (local_68 != 0) {
    plVar10 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar10 = local_40;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (pFVar3 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar3->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  return;
}

// ProcessDecodeRequest @ 1417ed600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::FIoDispatcherChunkBlockDecoder::ProcessDecodeRequest
          (FIoDispatcherChunkBlockDecoder *this,FIoChunkBlockDecodeRequest *param_1,
          FIoChunkBlockDecodeRequest *param_2)

{
  code *pcVar1;
  bool bVar2;
  FIoChunkBlockDecodeResult *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  TMemoryView<void> local_d8;
  TMemoryView<void> local_c8;
  void *local_b8;
  ulong64 uStack_b0;
  undefined8 local_a8;
  FIoChunkBlockDecodingParams local_98;
  FIoChunkBlockDecodeResult local_68;
  code *local_48;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d8.Data = (param_1->DecodedBlock).Data;
  local_d8.Size = (param_1->DecodedBlock).Size;
  local_c8.Data = (param_1->EncodedBlock).Data;
  local_c8.Size = (param_1->EncodedBlock).Size;
  local_98.EncryptionKey.Data = (param_1->Params).EncryptionKey.Data;
  local_98.EncryptionKey.Size = (param_1->Params).EncryptionKey.Size;
  local_98.BlockHash.Data = (param_1->Params).BlockHash.Data;
  local_98.BlockHash.Size = (param_1->Params).BlockHash.Size;
  local_98.CompressionFormat = (param_1->Params).CompressionFormat;
  local_98.HashFunction = (param_1->Params).HashFunction;
  local_98._41_7_ = *(undefined7 *)&(param_1->Params).field_0x29;
  pFVar3 = FIoChunkEncoding::DecodeBlock(&local_68,&local_98,&local_c8,&local_d8);
  local_48 = *(code **)&param_1->OnDecoded;
  local_b8 = (pFVar3->DecodedBlock).Data;
  uStack_b0 = (pFVar3->DecodedBlock).Size;
  local_a8 = *(undefined8 *)&pFVar3->ErrorCode;
  local_20 = *(longlong **)&(param_1->OnDecoded).field_0x28;
  *(undefined8 *)&(param_1->OnDecoded).field_0x28 = 0;
  local_28 = *(undefined8 *)&(param_1->OnDecoded).field_0x20;
  local_38 = *(longlong *)&(param_1->OnDecoded).field_0x10;
  uStack_30 = *(undefined8 *)&(param_1->OnDecoded).field_0x18;
  if (local_48 == (code *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OnDecoded.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcherChunkDecoder.cpp"
                       ,0xcc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    *(undefined8 *)&param_1->OnDecoded = 0;
  }
  Core::Private::Function::CheckCallable(local_48);
  pcVar1 = local_48;
  plVar5 = &local_38;
  if (local_20 != (longlong *)0x0) {
    plVar5 = local_20;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,&local_b8,param_2);
  if (local_48 != (code *)0x0) {
    plVar5 = &local_38;
    if (local_20 != (longlong *)0x0) {
      plVar5 = local_20;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

// TryDequeueAndLaunchDecodeTasks @ 1418099e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::FIoDispatcherChunkBlockDecoder::TryDequeueAndLaunchDecodeTasks
          (FIoDispatcherChunkBlockDecoder *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  FDecodeContext *pFVar2;
  FQueueEntry *pFVar3;
  FQueueEntry *pFVar4;
  short *psVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ushort uVar14;
  longlong *plVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 auStack_e8 [48];
  undefined1 local_b8 [120];
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  this_00 = &this->Mutex;
  while( true ) {
    local_b8._32_4_ = 0;
    local_b8._36_4_ = 0;
    local_b8._0_8_ = (void *)0x0;
    local_b8._8_8_ = 0;
    local_b8._16_8_ = (void *)0x0;
    local_b8._24_8_ = 0;
    local_b8._48_8_ = (void *)0x0;
    local_b8._56_8_ = 0;
    local_b8._64_8_ = (void *)0x0;
    local_b8._72_8_ = 0;
    local_b8._40_8_ = local_b8._40_8_ & 0xffffffffffffff00;
    local_b8._80_8_ = 0;
    plStack_40 = (longlong *)0x0;
    LOCK();
    bVar17 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar17) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar17) {
      FMutex::LockSlow(this_00);
    }
    pFVar2 = this->NextFreeContext;
    if ((pFVar2 == (FDecodeContext *)0x0) || ((this->QueueEntries).Head == (FQueueEntry *)0x0)) {
      LOCK();
      aVar1 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar1 & 2) != 0) {
        FMutex::WakeWaitingThread(this_00);
      }
      if (local_b8._80_8_ != 0) {
        plVar16 = (longlong *)(local_b8 + 0x60);
        if (plStack_40 != (longlong *)0x0) {
          plVar16 = plStack_40;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      return;
    }
    this->NextFreeContext = pFVar2->Next;
    pFVar2->Next = (FDecodeContext *)0x0;
    pFVar3 = (this->QueueEntries).Head;
    if (pFVar3 != (FQueueEntry *)0x0) {
      pFVar4 = pFVar3->Next;
      (this->QueueEntries).Head = pFVar4;
      if (pFVar4 == (FQueueEntry *)0x0) {
        (this->QueueEntries).Tail = (FQueueEntry *)0x0;
      }
      pFVar3->Next = (FQueueEntry *)0x0;
    }
    local_b8._0_8_ = (pFVar3->Request).Params.EncryptionKey.Data;
    local_b8._8_8_ = (pFVar3->Request).Params.EncryptionKey.Size;
    uVar13 = CONCAT44(local_b8._116_4_,local_b8._112_4_);
    local_b8._16_8_ = (pFVar3->Request).Params.BlockHash.Data;
    local_b8._24_8_ = (pFVar3->Request).Params.BlockHash.Size;
    local_b8._32_8_ = (pFVar3->Request).Params.CompressionFormat;
    local_b8._40_8_ = *(undefined8 *)&(pFVar3->Request).Params.HashFunction;
    local_b8._48_8_ = (pFVar3->Request).EncodedBlock.Data;
    local_b8._56_8_ = (pFVar3->Request).EncodedBlock.Size;
    local_b8._64_8_ = (pFVar3->Request).DecodedBlock.Data;
    local_b8._72_8_ = (pFVar3->Request).DecodedBlock.Size;
    lVar11 = *(longlong *)&(pFVar3->Request).OnDecoded;
    uVar12 = *(undefined8 *)&(pFVar3->Request).OnDecoded.field_0x8;
    uVar7 = *(undefined4 *)&(pFVar3->Request).OnDecoded.field_0x10;
    uVar8 = *(undefined4 *)&(pFVar3->Request).OnDecoded.field_0x14;
    uVar9 = *(undefined4 *)&(pFVar3->Request).OnDecoded.field_0x18;
    uVar10 = *(undefined4 *)&(pFVar3->Request).OnDecoded.field_0x1c;
    local_b8._112_4_ = *(undefined4 *)&(pFVar3->Request).OnDecoded.field_0x20;
    local_b8._116_4_ = *(undefined4 *)&(pFVar3->Request).OnDecoded.field_0x24;
    plVar16 = *(longlong **)&(pFVar3->Request).OnDecoded.field_0x28;
    *(undefined4 *)&(pFVar3->Request).OnDecoded = local_b8._80_4_;
    *(undefined4 *)&(pFVar3->Request).OnDecoded.field_0x4 = local_b8._84_4_;
    *(undefined4 *)&(pFVar3->Request).OnDecoded.field_0x8 = local_b8._88_4_;
    *(undefined4 *)&(pFVar3->Request).OnDecoded.field_0xc = local_b8._92_4_;
    *(undefined4 *)&(pFVar3->Request).OnDecoded.field_0x10 = local_b8._96_4_;
    *(undefined4 *)&(pFVar3->Request).OnDecoded.field_0x14 = local_b8._100_4_;
    *(undefined4 *)&(pFVar3->Request).OnDecoded.field_0x18 = local_b8._104_4_;
    *(undefined4 *)&(pFVar3->Request).OnDecoded.field_0x1c = local_b8._108_4_;
    *(undefined8 *)&(pFVar3->Request).OnDecoded.field_0x20 = uVar13;
    *(longlong **)&(pFVar3->Request).OnDecoded.field_0x28 = plStack_40;
    local_b8._80_8_ = lVar11;
    local_b8._88_8_ = uVar12;
    local_b8._96_4_ = uVar7;
    local_b8._100_4_ = uVar8;
    local_b8._104_4_ = uVar9;
    local_b8._108_4_ = uVar10;
    plStack_40 = plVar16;
    if (*(longlong *)&(pFVar3->Request).OnDecoded != 0) {
      plVar16 = *(longlong **)&(pFVar3->Request).OnDecoded.field_0x28;
      plVar15 = (longlong *)&(pFVar3->Request).OnDecoded.field_0x10;
      if (plVar16 != (longlong *)0x0) {
        plVar15 = plVar16;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    psVar5 = pFVar3[1].Request.Params.EncryptionKey.Data;
    psVar5[1] = psVar5[1] + 1;
    if (psVar5[1] == 0x200) {
      if ((*psVar5 != 0x200) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Slab->Freed == Slab->Allocated",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                              ,0x48,L""), bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      ::operator_delete(psVar5,0x14010);
    }
    __GTraceCounterChunkDecoderQueueCount.Value = __GTraceCounterChunkDecoderQueueCount.Value + -1;
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterChunkDecoderQueueCount.CounterId == (atomic<unsigned_int>)0x0) {
        uVar14 = FCountersTrace::OutputInitCounter
                           (__GTraceCounterChunkDecoderQueueCount.CounterName,TraceCounterType_Int,
                            __GTraceCounterChunkDecoderQueueCount.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterChunkDecoderQueueCount.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterChunkDecoderQueueCount.CounterId._2_2_ = 0;
          __GTraceCounterChunkDecoderQueueCount.CounterId._0_2_ = uVar14;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterChunkDecoderQueueCount.CounterId._0_2_,
                 __GTraceCounterChunkDecoderQueueCount.Value);
    }
    __GTraceCounterAvailableChunkDecoderWorkerCount.Value =
         __GTraceCounterAvailableChunkDecoderWorkerCount.Value + -1;
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterAvailableChunkDecoderWorkerCount.CounterId == (atomic<unsigned_int>)0x0) {
        uVar14 = FCountersTrace::OutputInitCounter
                           (__GTraceCounterAvailableChunkDecoderWorkerCount.CounterName,
                            TraceCounterType_Int,
                            __GTraceCounterAvailableChunkDecoderWorkerCount.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterAvailableChunkDecoderWorkerCount.CounterId == (atomic<unsigned_int>)0x0)
        {
          __GTraceCounterAvailableChunkDecoderWorkerCount.CounterId._2_2_ = 0;
          __GTraceCounterAvailableChunkDecoderWorkerCount.CounterId._0_2_ = uVar14;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterAvailableChunkDecoderWorkerCount.CounterId._0_2_,
                 __GTraceCounterAvailableChunkDecoderWorkerCount.Value);
    }
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      FMutex::WakeWaitingThread(this_00);
    }
    if ((local_b8._80_8_ == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("DecodeRequest.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcherChunkDecoder.cpp"
                            ,0x99,L""), bVar17)) break;
    LaunchDecodeTask(this,pFVar2,(FIoChunkBlockDecodeRequest *)local_b8);
    if (local_b8._80_8_ != 0) {
      plVar16 = (longlong *)(local_b8 + 0x60);
      if (plStack_40 != (longlong *)0x0) {
        plVar16 = plStack_40;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// TryExecuteDecodeRequest @ 141809d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::FIoDispatcherChunkBlockDecoder::TryExecuteDecodeRequest(FIoDispatcherChunkBlockDecoder *this)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  FQueueEntry *pFVar3;
  FQueueEntry *pFVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  ushort uVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_e8 [48];
  undefined1 local_b8 [120];
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  LOCK();
  bVar14 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar14) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar14) {
    FMutex::LockSlow(&this->Mutex);
  }
  pFVar3 = (this->QueueEntries).Head;
  if (pFVar3 != (FQueueEntry *)0x0) {
    pFVar4 = pFVar3->Next;
    (this->QueueEntries).Head = pFVar4;
    if (pFVar4 == (FQueueEntry *)0x0) {
      (this->QueueEntries).Tail = (FQueueEntry *)0x0;
    }
    pFVar3->Next = (FQueueEntry *)0x0;
    __GTraceCounterChunkDecoderQueueCount.Value = __GTraceCounterChunkDecoderQueueCount.Value + -1;
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterChunkDecoderQueueCount.CounterId == (atomic<unsigned_int>)0x0) {
        uVar12 = FCountersTrace::OutputInitCounter
                           (__GTraceCounterChunkDecoderQueueCount.CounterName,TraceCounterType_Int,
                            __GTraceCounterChunkDecoderQueueCount.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterChunkDecoderQueueCount.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterChunkDecoderQueueCount.CounterId._2_2_ = 0;
          __GTraceCounterChunkDecoderQueueCount.CounterId._0_2_ = uVar12;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterChunkDecoderQueueCount.CounterId._0_2_,
                 __GTraceCounterChunkDecoderQueueCount.Value);
    }
  }
  LOCK();
  pFVar1 = &this->Mutex;
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  if (pFVar3 == (FQueueEntry *)0x0) {
    bVar14 = false;
  }
  else {
    local_b8._0_8_ = (void *)0x0;
    local_b8._8_8_ = 0;
    local_b8._16_8_ = (void *)0x0;
    local_b8._24_8_ = 0;
    local_b8._32_4_ = 0;
    local_b8._36_4_ = 0;
    local_b8[0x28] = Sha1;
    local_b8._48_8_ = (void *)0x0;
    local_b8._56_8_ = 0;
    local_b8._64_8_ = (void *)0x0;
    local_b8._72_8_ = 0;
    local_b8._80_8_ = 0;
    plStack_40 = (longlong *)0x0;
    if (CpuChannel->Enabled < 0) {
      ProcessDecodeRequest(this,&pFVar3->Request,(FIoChunkBlockDecodeRequest *)local_b8);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId101,"IoDispatcherDecodeBlock",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcherChunkDecoder.cpp"
                 ,0x65);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId101);
      ProcessDecodeRequest(this,&pFVar3->Request,(FIoChunkBlockDecodeRequest *)local_b8);
      FCpuProfilerTrace::OutputEndEvent();
    }
    LOCK();
    bVar14 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
    if (bVar14) {
      (this->Mutex).State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar14) {
      FMutex::LockSlow(&this->Mutex);
    }
    if (local_b8._80_8_ == 0) {
      TSingleThreadedSlabAllocator<UE::FIoDispatcherChunkBlockDecoder::FQueueEntry,512>::Destroy
                (&this->QueueEntryAllocator,pFVar3);
    }
    else {
      (pFVar3->Request).Params.EncryptionKey.Data = (void *)local_b8._0_8_;
      (pFVar3->Request).Params.EncryptionKey.Size = local_b8._8_8_;
      (pFVar3->Request).Params.BlockHash.Data = (void *)local_b8._16_8_;
      (pFVar3->Request).Params.BlockHash.Size = local_b8._24_8_;
      (pFVar3->Request).Params.CompressionFormat.ComparisonIndex = (FNameEntryId)local_b8._32_4_;
      (pFVar3->Request).Params.CompressionFormat.Number = local_b8._36_4_;
      *(ulonglong *)&(pFVar3->Request).Params.HashFunction =
           CONCAT71(local_b8._41_7_,local_b8[0x28]);
      (pFVar3->Request).EncodedBlock.Data = (void *)local_b8._48_8_;
      (pFVar3->Request).EncodedBlock.Size = local_b8._56_8_;
      (pFVar3->Request).DecodedBlock.Data = (void *)local_b8._64_8_;
      (pFVar3->Request).DecodedBlock.Size = local_b8._72_8_;
      lVar6 = *(longlong *)&(pFVar3->Request).OnDecoded;
      uVar7 = *(undefined8 *)&(pFVar3->Request).OnDecoded.field_0x8;
      uVar8 = *(undefined8 *)&(pFVar3->Request).OnDecoded.field_0x10;
      uVar9 = *(undefined8 *)&(pFVar3->Request).OnDecoded.field_0x18;
      uVar10 = *(undefined8 *)&(pFVar3->Request).OnDecoded.field_0x20;
      plVar13 = *(longlong **)&(pFVar3->Request).OnDecoded.field_0x28;
      *(undefined8 *)&(pFVar3->Request).OnDecoded = local_b8._80_8_;
      *(undefined8 *)&(pFVar3->Request).OnDecoded.field_0x8 = local_b8._88_8_;
      *(undefined8 *)&(pFVar3->Request).OnDecoded.field_0x10 = local_b8._96_8_;
      *(undefined8 *)&(pFVar3->Request).OnDecoded.field_0x18 = local_b8._104_8_;
      *(undefined8 *)&(pFVar3->Request).OnDecoded.field_0x20 = local_b8._112_8_;
      *(longlong **)&(pFVar3->Request).OnDecoded.field_0x28 = plStack_40;
      local_b8._96_8_ = uVar8;
      local_b8._104_8_ = uVar9;
      local_b8._112_8_ = uVar10;
      plStack_40 = plVar13;
      local_b8._80_8_ = lVar6;
      local_b8._88_8_ = uVar7;
      if ((pFVar3->Next != (FQueueEntry *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                              ,0x72,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      pFVar4 = (this->QueueEntries).Head;
      if ((this->QueueEntries).Tail == (FQueueEntry *)0x0) {
        if ((pFVar4 != (FQueueEntry *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Head == nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                ,0x7c,L""), bVar14)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        (this->QueueEntries).Head = pFVar3;
      }
      else {
        if ((pFVar4 == (FQueueEntry *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Head != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                ,0x76,L""), bVar14)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        ((this->QueueEntries).Tail)->Next = pFVar3;
      }
      (this->QueueEntries).Tail = pFVar3;
      __GTraceCounterChunkDecoderQueueCount.Value = __GTraceCounterChunkDecoderQueueCount.Value + 1;
      if (-1 < CountersChannel->Enabled) {
        if (__GTraceCounterChunkDecoderQueueCount.CounterId == (atomic<unsigned_int>)0x0) {
          uVar12 = FCountersTrace::OutputInitCounter
                             (__GTraceCounterChunkDecoderQueueCount.CounterName,TraceCounterType_Int
                              ,__GTraceCounterChunkDecoderQueueCount.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterChunkDecoderQueueCount.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterChunkDecoderQueueCount.CounterId._2_2_ = 0;
            __GTraceCounterChunkDecoderQueueCount.CounterId._0_2_ = uVar12;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterChunkDecoderQueueCount.CounterId._0_2_,
                   __GTraceCounterChunkDecoderQueueCount.Value);
      }
    }
    pFVar3 = (this->QueueEntries).Head;
    LOCK();
    pFVar1 = &this->Mutex;
    aVar2 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      FMutex::WakeWaitingThread(&this->Mutex);
    }
    if (pFVar3 != (FQueueEntry *)0x0) {
      TryDequeueAndLaunchDecodeTasks(this);
    }
    if (local_b8._80_8_ != 0) {
      plVar13 = (longlong *)(local_b8 + 0x60);
      if (plStack_40 != (longlong *)0x0) {
        plVar13 = plStack_40;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    bVar14 = true;
  }
  return bVar14;
}

// TryRetractAndExecuteDecodeTasks @ 14180ab00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::FIoDispatcherChunkBlockDecoder::TryRetractAndExecuteDecodeTasks
          (FIoDispatcherChunkBlockDecoder *this)

{
  FMutex *pFVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_char> aVar3;
  atomic<unsigned_int> aVar4;
  FTaskBase *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  FTaskBase *this_00;
  longlong lVar11;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_38;
  undefined8 local_30;
  
  uVar10 = 0;
  bVar7 = LowLevelTasks::FScheduler::IsOversubscriptionLimitReached
                    (&LowLevelTasks::FScheduler::Singleton,this->TaskPriority);
  if (bVar7) {
    lVar11 = 0;
    do {
      if ((this->DecodeContexts).ArrayNum <= (int)uVar10) {
        return false;
      }
      LOCK();
      bVar7 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
      if (bVar7) {
        (this->Mutex).State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar7) {
        FMutex::LockSlow(&this->Mutex);
      }
      uVar9 = 0;
      if ((int)uVar10 < (this->DecodeContexts).ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      pFVar5 = *(FTaskBase **)((this->DecodeContexts).AllocatorInstance.Data + lVar11);
      this_00 = (FTaskBase *)0x0;
      if (pFVar5 != (FTaskBase *)0x0) {
        LOCK();
        pFVar5->RefCount = (atomic<unsigned_int>)((int)pFVar5->RefCount + 1);
        UNLOCK();
        this_00 = pFVar5;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x10;
      LOCK();
      pFVar1 = &this->Mutex;
      aVar3 = pFVar1->State;
      pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        FMutex::WakeWaitingThread(&this->Mutex);
      }
      if (this_00 == (FTaskBase *)0x0) {
        bVar7 = LowLevelTasks::FScheduler::IsOversubscriptionLimitReached
                          (&LowLevelTasks::FScheduler::Singleton,this->TaskPriority);
      }
      else {
        QueryPerformanceCounter(&local_res10);
        local_38 = local_res10;
        local_30 = 0xffffffffffffffff;
        Tasks::Private::FTaskBase::TryRetractAndExecute(this_00,(FTimeout *)&local_38.s,0);
        bVar7 = LowLevelTasks::FScheduler::IsOversubscriptionLimitReached
                          (&LowLevelTasks::FScheduler::Singleton,this->TaskPriority);
        LOCK();
        paVar2 = &this_00->RefCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_00->_padding_)(this_00,1);
        }
      }
    } while (bVar7 != false);
  }
  return false;
}


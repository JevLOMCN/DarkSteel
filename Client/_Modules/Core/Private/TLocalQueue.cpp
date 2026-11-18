// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// TLocalQueue @ 14147f8d0

TLocalQueue * __thiscall
LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::TLocalQueue
          (TLocalQueue *this,TLocalQueueRegistry<1024,1024> *param_1,ELocalQueueType param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)&this->LocalQueues[0].field_0x100;
  lVar3 = 5;
  do {
    lVar3 = lVar3 + -1;
    *(undefined4 *)(_Dst + -0x20) = 0xffffffff;
    *(undefined4 *)(_Dst + -0x10) = 0;
    memset(_Dst,0,0x20000);
    lVar2 = 0x400;
    puVar1 = _Dst;
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    _Dst = _Dst + 0x4020;
  } while (lVar3 != 0);
  *(undefined8 *)this->DequeueHazards = 0;
  *(undefined8 *)&this->DequeueHazards[0].field_0x8 = 0;
  *(undefined8 *)(this->DequeueHazards + 1) = 0;
  *(undefined8 *)&this->DequeueHazards[1].field_0x8 = 0;
  *(undefined8 *)(this->DequeueHazards + 2) = 0;
  *(undefined8 *)&this->DequeueHazards[2].field_0x8 = 0;
  *(undefined8 *)(this->DequeueHazards + 3) = 0;
  *(undefined8 *)&this->DequeueHazards[3].field_0x8 = 0;
  *(undefined8 *)(this->DequeueHazards + 4) = 0;
  *(undefined8 *)&this->DequeueHazards[4].field_0x8 = 0;
  this->bIsInitialized = (atomic<bool>)0x0;
  this->Registry = (TLocalQueueRegistry<1024,1024> *)0x0;
  this->CachedRandomIndex = 0xffffffff;
  this->CachedPriorityIndex = 0;
  Init(this,param_1,param_2);
  return this;
}

// ~TLocalQueue @ 141481ec0

void __thiscall
LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::~TLocalQueue(TLocalQueue *this)

{
  undefined8 *puVar1;
  longlong *plVar2;
  atomic<bool> aVar3;
  FTask *pFVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  FAAArrayQueue<LowLevelTasks::FTask> *this_00;
  TLocalQueue *pTVar8;
  longlong lVar9;
  bool bVar10;
  THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0> local_38;
  
  lVar9 = 0;
  LOCK();
  aVar3 = this->bIsInitialized;
  this->bIsInitialized = (atomic<bool>)0x0;
  UNLOCK();
  lVar5 = lVar9;
  pTVar8 = this;
  if (aVar3 != (atomic<bool>)0x0) {
LAB_141481f20:
    do {
      lVar6 = (ulonglong)(*(uint *)pTVar8->LocalQueues & 0x3ff) * 0x80 + 0x100 + lVar9 * 0x80;
      pFVar4 = *(FTask **)(&this->LocalQueues[0].field_0x100 + lVar6 + -0x100);
      if ((FTask *)&DAT_00000002 <= pFVar4) {
        plVar2 = (longlong *)(&this->LocalQueues[0].field_0x100 + lVar6 + -0x100);
        LOCK();
        bVar10 = pFVar4 == (FTask *)*plVar2;
        if (bVar10) {
          *plVar2 = 0;
        }
        UNLOCK();
        if (bVar10) {
          *(int *)pTVar8->LocalQueues = *(int *)pTVar8->LocalQueues + -1;
          this_00 = (FAAArrayQueue<LowLevelTasks::FTask> *)
                    (&this->Registry->OverflowQueues[0].head.field_0x0 + lVar5);
          THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0>::
          THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0>
                    (&local_38,&this_00->tail,&this_00->Hazards);
          FAAArrayQueue<LowLevelTasks::FTask>::
          enqueueInternal<THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0>_>
                    (this_00,pFVar4,&local_38);
          if (local_38.Record != (FHazardRecord *)0x0) {
            (local_38.Record)->Hazard = (atomic<unsigned___int64>)0xffffffffffffffff;
          }
          goto LAB_141481f20;
        }
      }
      lVar9 = lVar9 + 0x402;
      lVar5 = lVar5 + 0x1200;
      pTVar8 = (TLocalQueue *)(pTVar8->LocalQueues + 1);
    } while (lVar9 < 0x140a);
  }
  puVar7 = &this->CachedRandomIndex;
  lVar5 = 5;
  do {
    puVar1 = (undefined8 *)(puVar7 + -4);
    puVar7 = puVar7 + -4;
    lVar5 = lVar5 + -1;
    if ((undefined8 *)*puVar1 != (undefined8 *)0x0) {
      *(undefined8 *)*puVar1 = 0xffffffffffffffff;
    }
  } while (lVar5 != 0);
  return;
}

// Dequeue @ 141491070

/* WARNING: Type propagation algorithm not settling */

FTask * __thiscall
LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::Dequeue
          (TLocalQueue *this,bool param_1)

{
  FHazardRecord **ppFVar1;
  undefined8 *puVar2;
  atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *paVar3;
  FTask *pFVar4;
  TLocalQueueRegistry<1024,1024> *pTVar5;
  longlong lVar6;
  int iVar7;
  atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> aVar8;
  longlong lVar9;
  THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,1> *this_00;
  longlong lVar10;
  TLocalQueue *pTVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  FHazardDeleter local_38;
  
  this_00 = (THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,1> *)this->DequeueHazards;
  lVar12 = 2;
  if (param_1) {
    lVar12 = 5;
  }
  lVar10 = 0;
  pTVar11 = this;
  lVar13 = lVar10;
  lVar14 = lVar10;
  do {
    lVar9 = lVar14 * 0x80 + 0x100 + (ulonglong)(*(uint *)pTVar11->LocalQueues & 0x3ff) * 0x80;
    pFVar4 = *(FTask **)(&this->LocalQueues[0].field_0x100 + lVar9 + -0x100);
    if ((FTask *)&DAT_00000001 < pFVar4) {
      puVar2 = (undefined8 *)(&this->LocalQueues[0].field_0x100 + lVar9 + -0x100);
      LOCK();
      bVar15 = pFVar4 == (FTask *)*puVar2;
      if (bVar15) {
        *puVar2 = 0;
      }
      UNLOCK();
      if (bVar15) {
        *(int *)pTVar11->LocalQueues = *(int *)pTVar11->LocalQueues + -1;
        return pFVar4;
      }
    }
    pTVar5 = this->Registry;
    while ((aVar8 = (atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*>)
                    THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,1>::Get(this_00),
           *(int *)aVar8 < (int)*(atomic<int> *)((longlong)aVar8 + 0x2008) ||
           (*(atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *)((longlong)aVar8 + 0x2010) !=
            (atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*>)0x0))) {
      LOCK();
      iVar7 = *(int *)aVar8;
      *(int *)aVar8 = *(int *)aVar8 + 1;
      UNLOCK();
      if (iVar7 < 0x400) {
        lVar9 = (longlong)aVar8 + (longlong)iVar7 * 8;
        if ((*(longlong *)((longlong)aVar8 + 8 + (longlong)iVar7 * 8) == 0) &&
           (iVar7 <= *(int *)((longlong)aVar8 + 0x2008))) {
          lVar6 = *(longlong *)(lVar9 + 8);
          for (iVar7 = 0; (lVar6 == 0 && (iVar7 < 10)); iVar7 = iVar7 + 1) {
            lVar6 = *(longlong *)(lVar9 + 8);
          }
        }
        LOCK();
        pFVar4 = *(FTask **)(lVar9 + 8);
        *(longlong *)(lVar9 + 8) = -1;
        UNLOCK();
        if (pFVar4 != (FTask *)0x0) {
          this_00->Record->Hazard = (atomic<unsigned___int64>)0x0;
          return pFVar4;
        }
      }
      else {
        if (*(atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *)((longlong)aVar8 + 0x2010) ==
            (atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*>)0x0) break;
        paVar3 = (atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *)
                 (&pTVar5->OverflowQueues[0].head.field_0x0 + lVar13);
        LOCK();
        bVar15 = aVar8 == *paVar3;
        if (bVar15) {
          *paVar3 = *(atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *)
                     ((longlong)aVar8 + 0x2010);
        }
        UNLOCK();
        if (bVar15) {
          this_00->Record->Hazard = (atomic<unsigned___int64>)0x0;
          local_38._padding_ = 0x1506141e8;
          local_38.Pointer = (void *)aVar8;
          FHazardPointerCollection::Delete
                    ((FHazardPointerCollection *)
                     (&pTVar5->OverflowQueues[0].Hazards.Head.Records[0].Hazard.field_0x0 + lVar13),
                     &local_38,-1);
        }
      }
    }
    ppFVar1 = &this_00->Record;
    lVar10 = lVar10 + 1;
    this_00 = this_00 + 1;
    pTVar11 = (TLocalQueue *)(pTVar11->LocalQueues + 1);
    lVar14 = lVar14 + 0x402;
    lVar13 = lVar13 + 0x1200;
    (*ppFVar1)->Hazard = (atomic<unsigned___int64>)0x0;
    if (lVar12 <= lVar10) {
      return (FTask *)0x0;
    }
  } while( true );
}

// DequeueSteal @ 1414913f0

FTask * __thiscall
LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::DequeueSteal
          (TLocalQueue *this,bool param_1)

{
  atomic<unsigned_int> aVar1;
  TLocalQueueRegistry<1024,1024> *pTVar2;
  FTask *pFVar3;
  uint uVar4;
  atomic<unsigned_int> aVar5;
  atomic<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue_*> aVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  LARGE_INTEGER local_res8;
  
  if (this->CachedRandomIndex == 0xffffffff) {
    QueryPerformanceCounter(&local_res8);
    uVar9 = local_res8.s.LowPart * 0x2c9277b5 + 0xac564b05;
    uVar9 = (uVar9 >> (byte)(uVar9 >> 0x1c) + 4 ^ uVar9) * 0x108ef2d9;
    this->CachedRandomIndex = uVar9 >> 0x16 ^ uVar9;
  }
  pTVar2 = this->Registry;
  uVar9 = 2;
  if (param_1) {
    uVar9 = 5;
  }
  aVar1 = pTVar2->NumLocalQueues;
  this->CachedRandomIndex = this->CachedRandomIndex % (uint)aVar1;
  uVar8 = 0;
  if (pTVar2->NumLocalQueues != (atomic<unsigned_int>)0x0) {
    do {
      aVar6 = pTVar2->LocalQueues[uVar8];
      uVar11 = 0;
      if (aVar6 != (atomic<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue_*>)
                   0x0) {
        do {
          do {
            while( true ) {
              uVar4 = *(uint *)((longlong)aVar6 + 0x80);
              lVar7 = ((ulonglong)(uVar4 & 0x3ff) + 2) * 0x80;
              pFVar3 = *(FTask **)((longlong)aVar6 + lVar7);
              if (pFVar3 == (FTask *)0x0) break;
              if (pFVar3 != (FTask *)&DAT_00000001) {
                LOCK();
                bVar12 = pFVar3 == *(FTask **)((longlong)aVar6 + lVar7);
                if (bVar12) {
                  *(undefined8 *)((longlong)aVar6 + lVar7) = 1;
                }
                UNLOCK();
                if (bVar12) {
                  if (uVar4 == *(uint *)((longlong)aVar6 + 0x80)) {
                    LOCK();
                    *(int *)((longlong)aVar6 + 0x80) = *(int *)((longlong)aVar6 + 0x80) + 1;
                    UNLOCK();
                    *(undefined8 *)((longlong)aVar6 + lVar7) = 0;
                    return pFVar3;
                  }
                  *(FTask **)((longlong)aVar6 + lVar7) = pFVar3;
                }
              }
            }
          } while (uVar4 != *(uint *)((longlong)aVar6 + 0x80));
          uVar4 = this->CachedPriorityIndex + 1;
          if (uVar9 <= uVar4) {
            uVar4 = 0;
          }
          uVar10 = (int)uVar11 + 1;
          aVar6 = (atomic<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue_*>)
                  ((longlong)aVar6 + 0x20100);
          this->CachedPriorityIndex = uVar4;
          uVar11 = (ulonglong)uVar10;
        } while (uVar10 < uVar9);
        aVar5 = (atomic<unsigned_int>)(this->CachedRandomIndex + 1);
        if ((uint)aVar1 <= (uint)aVar5) {
          aVar5 = (atomic<unsigned_int>)0x0;
        }
        this->CachedRandomIndex = (uint)aVar5;
      }
      aVar5 = (atomic<unsigned_int>)((int)uVar8 + 1);
      uVar8 = (ulonglong)(uint)aVar5;
    } while ((uint)aVar5 < (uint)pTVar2->NumLocalQueues);
  }
  this->CachedPriorityIndex = 0;
  this->CachedRandomIndex = 0xffffffff;
  return (FTask *)0x0;
}

// Init @ 14149baa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::Init
          (TLocalQueue *this,TLocalQueueRegistry<1024,1024> *param_1,ELocalQueueType param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<bool> aVar2;
  atomic<unsigned_int> aVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  FHazardRecord *pFVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  
  LOCK();
  aVar2 = this->bIsInitialized;
  this->bIsInitialized = (atomic<bool>)0x1;
  UNLOCK();
  if (aVar2 == (atomic<bool>)0x0) {
    this->Registry = param_1;
    this->QueueType = param_2;
    LOCK();
    paVar1 = &param_1->NumLocalQueues;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
    UNLOCK();
    if (0x3ff < (uint)aVar3) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`private:_void___cdecl_LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::AddLocalQueue(LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue*___ptr64)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LowLevelTasks);
    }
    uVar13 = (ulonglong)_tls_index;
    param_1->LocalQueues[(uint)aVar3] =
         (atomic<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue_*>)this;
    puVar11 = (undefined8 *)&this->DequeueHazards[0].field_0x8;
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8);
    uVar13 = 0;
    do {
      puVar12 = &this->Registry->OverflowQueues[0].head.field_0x0 + uVar13;
      if ((*(uint *)(lVar4 + 0xbc) & 1) == 0) {
        *(uint *)(lVar4 + 0xbc) = *(uint *)(lVar4 + 0xbc) | 1;
        LOCK();
        UNLOCK();
        uVar8 = ((uint)`public:_static_unsigned_int___cdecl_`public:_class_FHazardPointerCollection::FHazardRecord*___ptr64___cdecl_FHazardPointerCollection::Acquire<1>(void)___ptr64'::`2'::FPseudo::GetThreadId(void)'
                       ::__l2::counter >> 0x10 ^
                (uint)`public:_static_unsigned_int___cdecl_`public:_class_FHazardPointerCollection::FHazardRecord*___ptr64___cdecl_FHazardPointerCollection::Acquire<1>(void)___ptr64'::`2'::FPseudo::GetThreadId(void)'
                      ::__l2::counter) * 0x45d9f3b;
        uVar8 = (uVar8 >> 0x10 ^ uVar8) * 0x45d9f3b;
        `public:_static_unsigned_int___cdecl_`public:_class_FHazardPointerCollection::FHazardRecord*___ptr64___cdecl_FHazardPointerCollection::Acquire<1>(void)___ptr64'::`2'::FPseudo::GetThreadId(void)'
        ::__l2::counter =
             (atomic<unsigned_int>)
             ((int)`public:_static_unsigned_int___cdecl_`public:_class_FHazardPointerCollection::FHazardRecord*___ptr64___cdecl_FHazardPointerCollection::Acquire<1>(void)___ptr64'::`2'::FPseudo::GetThreadId(void)'
                   ::__l2::counter + 1);
        *(uint *)(lVar4 + 0xb8) = uVar8 >> 0x10 ^ uVar8;
      }
      for (lVar5 = *(longlong *)(puVar12 + 0x1100); uVar9 = 0, lVar5 != 0;
          lVar5 = *(longlong *)(lVar5 + 0x1000)) {
        do {
          pFVar10 = (FHazardRecord *)
                    ((ulonglong)(*(int *)(lVar4 + 0xb8) + (int)uVar9 & 0x1f) * 0x80 + lVar5);
          LOCK();
          bVar7 = pFVar10->Hazard == (atomic<unsigned___int64>)0xffffffffffffffff;
          if (bVar7) {
            pFVar10->Hazard = (atomic<unsigned___int64>)0x0;
          }
          UNLOCK();
          if (bVar7) goto LAB_14149bc46;
          uVar9 = uVar9 + 1;
        } while (uVar9 < 0x20);
      }
      pFVar10 = FHazardPointerCollection::Grow<1>((FHazardPointerCollection *)(puVar12 + 0x100));
LAB_14149bc46:
      if ((undefined8 *)*puVar11 != (undefined8 *)0x0) {
        *(undefined8 *)*puVar11 = 0xffffffffffffffff;
      }
      puVar11[-1] = puVar12;
      uVar13 = uVar13 + 0x1200;
      *puVar11 = pFVar10;
      puVar11 = puVar11 + 2;
    } while ((longlong)uVar13 < 0x5a00);
  }
  else {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\LocalQueue.h"
                       ,0xc0,L"Trying to initialize local queue more than once");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// StealLocal @ 1414b1990

FTask * __thiscall
LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::StealLocal
          (TLocalQueue *this,bool param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  FTask *pFVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar7 = 2;
  if (param_1) {
    lVar7 = 5;
  }
  lVar6 = 0;
  while( true ) {
    do {
      do {
        while( true ) {
          uVar3 = *(uint *)&this->LocalQueues[0].field_0x80;
          lVar5 = (ulonglong)(uVar3 & 0x3ff) * 0x80;
          pFVar4 = *(FTask **)(&this->LocalQueues[0].field_0x100 + lVar5);
          if (pFVar4 != (FTask *)0x0) break;
          if (uVar3 == *(uint *)&this->LocalQueues[0].field_0x80) {
            lVar6 = lVar6 + 1;
            this = (TLocalQueue *)(this->LocalQueues + 1);
            if (lVar7 <= lVar6) {
              return (FTask *)0x0;
            }
          }
        }
      } while (pFVar4 == (FTask *)&DAT_00000001);
      puVar2 = (undefined8 *)(&this->LocalQueues[0].field_0x100 + lVar5);
      LOCK();
      bVar8 = pFVar4 == (FTask *)*puVar2;
      if (bVar8) {
        *puVar2 = 1;
      }
      UNLOCK();
    } while (!bVar8);
    if (uVar3 == *(uint *)&this->LocalQueues[0].field_0x80) break;
    *(FTask **)(&this->LocalQueues[0].field_0x100 + lVar5) = pFVar4;
  }
  LOCK();
  puVar1 = &this->LocalQueues[0].field_0x80;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  UNLOCK();
  *(undefined8 *)(&this->LocalQueues[0].field_0x100 + lVar5) = 0;
  return pFVar4;
}


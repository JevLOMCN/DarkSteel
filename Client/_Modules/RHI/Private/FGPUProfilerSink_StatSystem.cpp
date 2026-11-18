// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 5

// InitializeQueues @ 145c392d0

void __thiscall
UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::InitializeQueues
          (FGPUProfilerSink_StatSystem *this,
          TArrayView<UE::RHI::GPUProfiler::FQueue_const_,int> *param_1)

{
  TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState> *this_00;
  FQueue *pFVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  FNextSharedBuffer *pFVar7;
  longlong lVar8;
  FQueueState *pFVar9;
  FQueueState *pFVar10;
  int iVar11;
  FSharedBuffer *pFVar12;
  undefined1 *puVar13;
  FQueue_u_0 *pFVar14;
  uint uVar15;
  FQueue_u_0 local_res10 [2];
  int local_res18 [2];
  FQueue_u_0 *local_res20;
  TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState> local_68 [8];
  FQueue_u_0 *local_60;
  int local_58;
  undefined4 local_54;
  FNextSharedBuffer local_50;
  
  if ((::bInitialized) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3482707779674702181>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GpuProfilerTrace.cpp"
                         ,0x165,"!bInitialized"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (-1 < GpuChannel->Enabled) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerInitFields::GetUid(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerInitFields::GetUid(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerInitFields::GetUid(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerInitFields::GetUid(void)'
      ::__l2::Uid = FGpuProfilerInitFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerInitFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    pFVar12 = Trace::Private::GSharedBuffer;
    uVar15 = `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerInitFields::GetUid(void)'
             ::__l2::Uid >> 1;
    LOCK();
    iVar11 = Trace::Private::GSharedBuffer->Cursor;
    Trace::Private::GSharedBuffer->Cursor = Trace::Private::GSharedBuffer->Cursor + -0x1401;
    UNLOCK();
    if (iVar11 + -0x1401 < 0) {
      pFVar7 = Trace::Private::Writer_NextSharedBuffer(&local_50,pFVar12,iVar11,-0x1401);
      pFVar12 = pFVar7->Buffer;
      iVar11 = pFVar7->RegionStart;
    }
    local_60 = (FQueue_u_0 *)((longlong)pFVar12 - ((longlong)iVar11 >> 10));
    local_54 = 0;
    local_res10[0].Value._2_2_ = 1;
    local_res10[0].Value._0_2_ = (short)uVar15;
    *local_60 = local_res10[0];
    local_60 = local_60 + 1;
    local_58 = (int)pFVar12 - (int)local_60;
    (local_60->_s_0).Type = Copy;
    LOCK();
    *(int *)((longlong)local_58 + (longlong)local_60) =
         *(int *)((longlong)local_58 + (longlong)local_60) + 1;
    UNLOCK();
  }
  pFVar14 = &param_1->DataPtr->field0_0x0;
  ::bInitialized = true;
  pFVar1 = (FQueue *)(pFVar14 + param_1->ArrayNum);
  do {
    if (pFVar14 == (FQueue_u_0 *)pFVar1) {
      return;
    }
    local_res10[0] = (FQueue_u_0)pFVar14->Value;
    if (*(int *)&(this->QueueStates).field_0x8 != *(int *)&(this->QueueStates).field_0x34) {
      puVar2 = *(undefined1 **)&(this->QueueStates).field_0x40;
      puVar13 = &(this->QueueStates).field_0x38;
      if (puVar2 != (undefined1 *)0x0) {
        puVar13 = puVar2;
      }
      iVar11 = *(int *)(puVar13 +
                       (ulonglong)
                       (*(int *)&(this->QueueStates).field_0x48 - 1U & local_res10[0].Value) * 4);
      if (iVar11 != -1) {
        do {
          lVar8 = *(longlong *)&this->QueueStates + (longlong)iVar11 * 0x18;
          if (((FQueue_u_0 *)(*(longlong *)&this->QueueStates + (longlong)iVar11 * 0x18))->Value ==
              local_res10[0].Value) {
            if (lVar8 != 0) goto LAB_145c394c1;
            break;
          }
          iVar11 = *(int *)(lVar8 + 0x10);
        } while (iVar11 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>_>,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<UE::RHI::GPUProfiler::FQueue_const_&>_>
              ((TSet<TTuple<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>_>,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>,0>,FDefaultSetAllocator>
                *)&this->QueueStates,(uint)local_res18,
               (TKeyInitializer<UE::RHI::GPUProfiler::FQueue_const_&> *)
               (ulonglong)local_res10[0].Value,(bool *)&local_res20);
    lVar8 = *(longlong *)&this->QueueStates + (longlong)local_res18[0] * 0x18;
LAB_145c394c1:
    this_00 = (TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState> *)
              (lVar8 + 8);
    if (*(longlong *)(lVar8 + 8) == 0) {
      pFVar9 = ::operator_new(0x1b0);
      pFVar10 = (FQueueState *)0x0;
      if (pFVar9 != (FQueueState *)0x0) {
        pFVar10 = FQueueState::FQueueState(pFVar9,(FQueue *)&local_res10[0]._s_0);
      }
      if (this_00 == local_68) {
        if (pFVar10 != (FQueueState *)0x0) {
          DestructItems<TUniquePtr<UE::RHI::GPUProfiler::FNode,TDefaultDelete<UE::RHI::GPUProfiler::FNode>_>,int>
                    ((TUniquePtr<UE::RHI::GPUProfiler::FNode,TDefaultDelete<UE::RHI::GPUProfiler::FNode>_>
                      *)(pFVar10->Profile).Nodes.AllocatorInstance.Data,
                     (pFVar10->Profile).Nodes.ArrayNum);
          pFVar3 = (pFVar10->Profile).Nodes.AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar10->Breadcrumb).AllocatorRef.SharedReferenceCount.ReferenceController);
          pFVar3 = (pFVar10->ActiveStatsStack).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          *(undefined4 *)&(pFVar10->ActiveStats).field_0x48 = 0;
          pvVar4 = *(void **)&(pFVar10->ActiveStats).field_0x40;
          if (pvVar4 != (void *)0x0) {
            FMemory::Free(pvVar4);
          }
          TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbData_Stats,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbData_Stats,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbData_Stats,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&pFVar10->ActiveStats);
          *(undefined4 *)&(pFVar10->Timestamps).Stats.field_0x48 = 0;
          pvVar4 = *(void **)&(pFVar10->Timestamps).Stats.field_0x40;
          if (pvVar4 != (void *)0x0) {
            FMemory::Free(pvVar4);
          }
          TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&(pFVar10->Timestamps).Stats);
          pFVar3 = (pFVar10->Timestamps).Queue.Values.AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          pFVar3 = (pFVar10->Signals).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>::
          ~TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>(&pFVar10->PendingStreams)
          ;
          ::operator_delete(pFVar10,0x1b0);
        }
      }
      else {
        pFVar9 = *(FQueueState **)this_00;
        *(FQueueState **)this_00 = pFVar10;
        TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>::operator()
                  (this_00,pFVar9);
      }
    }
    pFVar14 = pFVar14 + 1;
  } while( true );
}

// ProcessStreams @ 145c39640

void __thiscall
UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::ProcessStreams
          (FGPUProfilerSink_StatSystem *this,
          TArrayView<TSharedRef<UE::RHI::GPUProfiler::FEventStream,1>_const_,int> *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEventStream *pFVar4;
  FChunk *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  atomic<int> *paVar12;
  longlong lVar13;
  TSharedRef<UE::RHI::GPUProfiler::FEventStream,1> *pTVar14;
  TSharedRef<UE::RHI::GPUProfiler::FEventStream,1> *pTVar15;
  
  pTVar15 = param_1->DataPtr;
  pTVar14 = pTVar15 + param_1->ArrayNum;
  do {
    if (pTVar15 == pTVar14) {
      ProcessAllQueues(this);
      return;
    }
    lVar13 = 0;
    uVar1 = (pTVar15->Object->Queue).field0_0x0.Value;
    lVar11 = lVar13;
    if (*(int *)&(this->QueueStates).field_0x8 != *(int *)&(this->QueueStates).field_0x34) {
      puVar2 = *(undefined1 **)&(this->QueueStates).field_0x40;
      puVar10 = &(this->QueueStates).field_0x38;
      if (puVar2 != (undefined1 *)0x0) {
        puVar10 = puVar2;
      }
      iVar8 = *(int *)(puVar10 +
                      (ulonglong)(*(int *)&(this->QueueStates).field_0x48 - 1U & uVar1) * 4);
      if (iVar8 != -1) {
        do {
          lVar11 = *(longlong *)&this->QueueStates + (longlong)iVar8 * 0x18;
          if (*(uint *)(*(longlong *)&this->QueueStates + (longlong)iVar8 * 0x18) == uVar1) {
            if (lVar11 != 0) goto LAB_145c39704;
            break;
          }
          iVar8 = *(int *)(lVar11 + 0x10);
          lVar11 = lVar13;
        } while (iVar8 != -1);
      }
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
LAB_145c39704:
    pTVar3 = (pTVar15->SharedReferenceCount).ReferenceController;
    lVar11 = *(longlong *)(lVar11 + 8);
    pFVar4 = pTVar15->Object;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      paVar12 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar12 = &pTVar3->SharedReferenceCount;
      LOCK();
      *paVar12 = (atomic<int>)((int)*paVar12 + 1);
      UNLOCK();
    }
    puVar9 = *(undefined8 **)(lVar11 + 0x18);
    pFVar5 = pTVar15->Object->First;
    if (puVar9 == *(undefined8 **)(lVar11 + 0x20)) {
      puVar9 = *(undefined8 **)(lVar11 + 0x18);
      *(undefined8 **)(lVar11 + 0x20) = *(undefined8 **)(lVar11 + 8);
      if (puVar9 == *(undefined8 **)(lVar11 + 8)) {
        puVar9 = FMemory::Malloc(0x28,8);
        puVar9[3] = 0;
        puVar9[4] = 0;
        *puVar9 = 0;
      }
      else {
        *(undefined8 *)(lVar11 + 0x18) = *puVar9;
        *puVar9 = 0;
      }
    }
    else {
      *(undefined8 *)(lVar11 + 0x18) = *puVar9;
      *puVar9 = 0;
    }
    puVar9[1] = pFVar4;
    puVar9[2] = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar12 = (atomic<int>)((int)*paVar12 + 1);
      UNLOCK();
    }
    puVar9[3] = pFVar5;
    *(undefined4 *)(puVar9 + 4) = 0;
    **(undefined8 **)(lVar11 + 0x10) = puVar9;
    *(undefined8 **)(lVar11 + 0x10) = puVar9;
    LOCK();
    *(int *)(lVar11 + 0x28) = *(int *)(lVar11 + 0x28) + 1;
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pTVar15 = pTVar15 + 1;
  } while( true );
}

// ProcessAllQueues @ 145c6c440

void __thiscall
UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::ProcessAllQueues
          (FGPUProfilerSink_StatSystem *this)

{
  ulonglong uVar1;
  int iVar2;
  uint *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  TTypeCompatibleBytes<UE::RHI::GPUProfiler::FEvent> *pTVar14;
  FIterator *pFVar15;
  atomic<int> *paVar16;
  uint uVar17;
  TTypeCompatibleBytes<UE::RHI::GPUProfiler::FEvent> *pTVar18;
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  int iVar22;
  uint *puVar23;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  int local_res20;
  undefined4 local_ac;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  do {
    puVar21 = &(this->QueueStates).field_0x10;
    iVar2 = *(int *)&(this->QueueStates).field_0x28;
    bVar9 = false;
    iVar20 = 0;
    iVar22 = 0;
    uVar11 = 1;
    iVar12 = 0;
    if (iVar2 != 0) {
      puVar3 = *(uint **)&(this->QueueStates).field_0x20;
      puVar23 = (uint *)puVar21;
      if (puVar3 != (uint *)0x0) {
        puVar23 = puVar3;
      }
      uVar19 = *puVar23;
      while (uVar19 == 0) {
        lVar13 = (longlong)iVar20;
        iVar22 = iVar22 + 0x20;
        iVar20 = iVar20 + 1;
        iVar12 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_145c6c4ed;
        uVar19 = puVar23[lVar13 + 1];
      }
      uVar11 = -uVar19 & uVar19;
      uVar1 = (ulonglong)uVar11 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res18 = (int)lVar13;
      iVar12 = iVar22 + -1 + local_res18;
      if (iVar2 < iVar12) {
        iVar12 = iVar2;
      }
    }
LAB_145c6c4ed:
    uVar19 = *(uint *)&(this->QueueStates).field_0x28;
    uVar17 = uVar19 & 0xffffffe0;
    TStack_70._padding_ = CONCAT44(uVar11,iVar20);
    TStack_70.CurrentBitIndex = iVar12;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iVar20 = (int)uVar19 >> 5;
    TStack_70._28_4_ = local_ac;
    TStack_70.BaseBitIndex = iVar22;
    uStack_50 = CONCAT44(uStack_7c,
                         *(int *)&(this->QueueStates).field_0x8 -
                         *(int *)&(this->QueueStates).field_0x34);
    local_res10 = uVar19;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar21;
    if ((((int)uVar19 < 0) || (iVar2 < (int)uVar19)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar11 = *(uint *)&(this->QueueStates).field_0x28;
    if (uVar19 != uVar11) {
      puVar4 = *(undefined1 **)&(this->QueueStates).field_0x20;
      if (puVar4 != (undefined1 *)0x0) {
        puVar21 = puVar4;
      }
      uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar20 * 4);
      while (uVar19 == 0) {
        lVar13 = (longlong)iVar20;
        uVar17 = uVar17 + 0x20;
        iVar20 = iVar20 + 1;
        uVar19 = uVar11;
        local_res10 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_145c6c600;
        uVar19 = *(uint *)(puVar21 + lVar13 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res20 = (int)lVar13;
      uVar19 = local_res20 + -1 + uVar17;
      local_res10 = uVar19;
      if ((int)uVar11 < (int)uVar19) {
        uVar19 = uVar11;
        local_res10 = uVar11;
      }
    }
LAB_145c6c600:
    while( true ) {
      if (*(int *)&(this->QueueStates).field_0x8 - *(int *)&(this->QueueStates).field_0x34 !=
          (int)uStack_50) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_70.CurrentBitIndex == uVar19) &&
         (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->QueueStates).field_0x10
         )) break;
      lVar13 = *(longlong *)&this->QueueStates + (longlong)TStack_70.CurrentBitIndex * 0x18;
      while( true ) {
        lVar5 = **(longlong **)(*(longlong *)(lVar13 + 8) + 8);
        pFVar15 = (FIterator *)0x0;
        if (lVar5 != 0) {
          pFVar15 = (FIterator *)(lVar5 + 8);
        }
        if (pFVar15 == (FIterator *)0x0) goto LAB_145c6c757;
        if (pFVar15->Current == (FChunk *)0x0) {
          pTVar18 = (TTypeCompatibleBytes<UE::RHI::GPUProfiler::FEvent> *)0x0;
        }
        else {
          pTVar18 = (pFVar15->Current->Elements).Elements + pFVar15->Index;
        }
        bVar10 = ProcessQueue(this,*(FQueueState **)(lVar13 + 8),pFVar15);
        if (pFVar15->Current == (FChunk *)0x0) {
          pTVar14 = (TTypeCompatibleBytes<UE::RHI::GPUProfiler::FEvent> *)0x0;
        }
        else {
          pTVar14 = (pFVar15->Current->Elements).Elements + pFVar15->Index;
        }
        bVar9 = (bool)(bVar9 | pTVar14 != pTVar18);
        if (!bVar10) break;
        if (pTVar14 == (TTypeCompatibleBytes<UE::RHI::GPUProfiler::FEvent> *)0x0) {
          lVar5 = *(longlong *)(lVar13 + 8);
          lVar6 = **(longlong **)(lVar5 + 8);
          if (lVar6 != 0) {
            pTVar7 = *(TReferenceControllerBase<1> **)(lVar6 + 0x10);
            if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
              paVar16 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar16 = &pTVar7->SharedReferenceCount;
              LOCK();
              *paVar16 = (atomic<int>)((int)*paVar16 + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(lVar6 + 0x10));
            *(longlong *)(lVar5 + 8) = lVar6;
            LOCK();
            *(int *)(lVar5 + 0x28) = *(int *)(lVar5 + 0x28) + -1;
            UNLOCK();
            if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar16 = (atomic<int>)((int)*paVar16 + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar7);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar7);
          }
        }
      }
      if ((pTVar14 == (TTypeCompatibleBytes<UE::RHI::GPUProfiler::FEvent> *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("End",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUProfiler.cpp"
                              ,0xa3f,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
LAB_145c6c757:
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
      uVar19 = local_res10;
    }
    if (!bVar9) {
      return;
    }
  } while( true );
}

// ProcessFrame @ 145c6cac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::ProcessFrame
          (FGPUProfilerSink_StatSystem *this,FFrameState *param_1)

{
  ulonglong uVar1;
  uchar *puVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TConsoleVariableData<int> *pTVar8;
  FCsvProfiler *pFVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  FCsvProfiler *pFVar13;
  longlong lVar14;
  ulong64 uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong *plVar21;
  FQueue_u_0 *pFVar22;
  ForElementType<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::FState> FVar23
  ;
  ulonglong uVar24;
  FQueue_u_0 *pFVar25;
  FQueue_u_0 *pFVar26;
  undefined1 auStackY_3d8 [32];
  undefined1 local_3a7;
  undefined1 local_3a6;
  undefined1 local_3a5;
  uint local_3a4;
  int local_3a0;
  ulonglong local_398;
  FQueue_u_0 *local_390;
  uint uStack_388;
  uint uStack_384;
  FQueue_u_0 *local_380;
  undefined4 uStack_378;
  uint uStack_374;
  uint local_370;
  int iStack_36c;
  int iStack_368;
  undefined4 uStack_364;
  ulonglong local_360;
  FQueue_u_0 *local_358;
  FFrameState *local_350;
  int iStack_348;
  uint uStack_344;
  longlong *local_340;
  undefined4 uStack_338;
  int iStack_334;
  int local_330;
  undefined4 uStack_32c;
  int iStack_328;
  undefined4 uStack_324;
  int local_320;
  int local_31c;
  int local_318;
  int local_314;
  int local_310;
  int local_30c;
  FCsvProfiler *local_308;
  FQueue_u_0 *local_300;
  FStatMessage local_2f8;
  FQueue_u_0 *local_2e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2e0;
  undefined8 uStack_2c0;
  FQueue_u_0 *local_2b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b0;
  undefined8 uStack_290;
  FQueue_u_0 *local_288;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_280;
  undefined8 uStack_260;
  ForElementType<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::FState>
  local_258;
  int iStack_250;
  undefined4 uStack_24c;
  TArrayView<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::FState,int>
  local_248 [2];
  undefined4 local_21c;
  int local_1fc;
  ForElementType<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::FState>
  local_1f8;
  int local_70;
  int local_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  local_358 = (FQueue_u_0 *)param_1;
  if (((((param_1->StatsFrame).bIsSet != false) &&
       (CONCAT44(FStatConstants::AdvanceFrame.Number,FStatConstants::AdvanceFrame.Index.Value) != 0)
       ) && (!FThreadStats::bPrimaryDisableForever)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    local_2f8.NameAndInfo.Index.Value = FStatConstants::AdvanceFrame.Index.Value;
    local_2f8.NameAndInfo.Number = FStatConstants::AdvanceFrame.Number & 0xffff4fffU | 0x4000;
    local_2f8.StatData.Pad = (uchar  [8])(param_1->StatsFrame).TypedValue;
    FThreadStats::AddStatMessage((FThreadStats *)&FEndOfPipeStats::EndOfPipeStats,&local_2f8);
    if (FEndOfPipeStats::EndOfPipeStats._68_4_ == 0) {
      FThreadStats::Flush((FThreadStats *)&FEndOfPipeStats::EndOfPipeStats,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats((FThreadStats *)&FEndOfPipeStats::EndOfPipeStats,false,false);
    }
  }
  pTVar8 = CVarGPUCsvStatsEnabled.Ref;
  bVar10 = IsInParallelGameThread();
  if ((bVar10) || (bVar10 = IsInGameThread(), bVar10)) {
    lVar12 = 0;
  }
  else {
    lVar12 = 4;
  }
  local_3a0 = *(int *)((longlong)pTVar8->ShadowedValue + lVar12);
  local_308 = FCsvProfiler::Get();
  FCsvProfiler::BeginFrameEOP(local_308);
  iVar17 = (int)param_1->_padding_;
  pFVar25 = (FQueue_u_0 *)&param_1->_padding_;
  bVar10 = false;
  iStack_348 = 0;
  local_398 = 1;
  local_330 = 0;
  uStack_344 = 1;
  iStack_334 = 0;
  if (iVar17 != 0) {
    plVar21 = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      plVar21 = (longlong *)pFVar25;
    }
    uStack_344 = (uint)*plVar21;
    while (uStack_344 == 0) {
      lVar12 = (longlong)iStack_348;
      local_330 = local_330 + 0x20;
      iStack_348 = iStack_348 + 1;
      uStack_344 = 1;
      iStack_334 = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_348) goto LAB_145c6cc5d;
      uStack_344 = *(uint *)((longlong)plVar21 + (lVar12 + 1) * 4);
    }
    uStack_344 = -uStack_344 & uStack_344;
    uVar24 = (ulonglong)uStack_344 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_320 = (int)lVar12;
    iStack_334 = local_330 + -1 + local_320;
    if (iVar17 < iStack_334) {
      iStack_334 = iVar17;
    }
  }
LAB_145c6cc5d:
  uVar20 = (uint)param_1->_padding_;
  uVar18 = uVar20 & 0xffffffe0;
  uStack_32c = local_21c;
  iStack_328 = (int)param_1->_padding_ - *(int *)((longlong)&param_1->_padding_ + 4);
  uStack_338 = 0xffffffff;
  TStack_2b0._padding_ = CONCAT44(uStack_344,iStack_348);
  TStack_2b0.CurrentBitIndex = iStack_334;
  TStack_2b0.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar20 >> 5;
  TStack_2b0._28_4_ = local_21c;
  TStack_2b0.BaseBitIndex = local_330;
  uStack_290 = CONCAT44(uStack_324,iStack_328);
  local_3a4 = uVar20;
  local_350 = param_1;
  local_340 = (longlong *)pFVar25;
  local_300 = pFVar25;
  local_2b8 = (FQueue_u_0 *)param_1;
  TStack_2b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)pFVar25;
  if ((((int)uVar20 < 0) || (iVar17 < (int)uVar20)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar19 = (uint)param_1->_padding_;
  uVar24 = local_360;
  if (uVar20 != uVar19) {
    plVar21 = (longlong *)pFVar25;
    if ((longlong *)param_1->_padding_ != (longlong *)0x0) {
      plVar21 = (longlong *)param_1->_padding_;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)((longlong)plVar21 + (longlong)iVar16 * 4);
    while (uVar20 == 0) {
      lVar12 = (longlong)iVar16;
      uVar18 = uVar18 + 0x20;
      iVar16 = iVar16 + 1;
      uVar20 = uVar19;
      local_3a4 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_145c6cd70;
      uVar20 = *(uint *)((longlong)plVar21 + (lVar12 + 1) * 4);
    }
    uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_31c = (int)lVar12;
    uVar20 = local_31c + -1 + uVar18;
    local_3a4 = uVar20;
    if ((int)uVar19 < (int)uVar20) {
      uVar20 = uVar19;
      local_3a4 = uVar19;
    }
  }
LAB_145c6cd70:
  while( true ) {
    pFVar26 = local_2b8;
    if (local_2b8[2].Value - local_2b8[0xd].Value != (int)uStack_290) {
      local_3a7 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3a7);
    }
    if (((TStack_2b0.CurrentBitIndex == uVar20) && ((FQueue_u_0 *)TStack_2b0.Array == pFVar25)) &&
       (pFVar26 == (FQueue_u_0 *)param_1)) break;
    uStack_388 = 0;
    local_370 = 0;
    pFVar26 = (FQueue_u_0 *)((longlong)TStack_2b0.CurrentBitIndex * 0xb8 + *(longlong *)pFVar26);
    pFVar25 = pFVar26 + 0x1c;
    uVar20 = pFVar26[0x22].Value;
    local_390 = pFVar26 + 0x18;
    uStack_384 = (uint)local_398;
    uStack_374 = 0;
    if (uVar20 != 0) {
      pFVar22 = pFVar25;
      if (*(FQueue_u_0 **)(pFVar26 + 0x20) != (FQueue_u_0 *)0x0) {
        pFVar22 = *(FQueue_u_0 **)(pFVar26 + 0x20);
      }
      uVar18 = pFVar22->Value;
      while (uVar18 == 0) {
        lVar12 = (longlong)(int)uStack_388;
        local_370 = local_370 + 0x20;
        uStack_388 = uStack_388 + 1;
        uStack_374 = uVar20;
        if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_388)
        goto LAB_145c6ce3d;
        uVar18 = pFVar22[lVar12 + 1].Value;
      }
      uStack_384 = -uVar18 & uVar18;
      uVar24 = (ulonglong)uStack_384 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_318 = (int)lVar12;
      uStack_374 = (local_370 - 1) + local_318;
      if ((int)uVar20 < (int)uStack_374) {
        uStack_374 = uVar20;
      }
    }
LAB_145c6ce3d:
    uVar18 = pFVar26[0x22].Value;
    iStack_36c = local_1fc;
    iStack_368 = pFVar26[0x1a].Value - pFVar26[0x25].Value;
    uVar19 = uVar18 & 0xffffffe0;
    TStack_2e0._padding_ = CONCAT44(uStack_384,uStack_388);
    uStack_378 = 0xffffffff;
    TStack_2e0.CurrentBitIndex = uStack_374;
    TStack_2e0.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)uVar18 >> 5;
    TStack_2e0._28_4_ = local_1fc;
    TStack_2e0.BaseBitIndex = local_370;
    uStack_2c0 = CONCAT44(uStack_364,iStack_368);
    local_380 = pFVar25;
    local_2e8 = local_390;
    TStack_2e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)pFVar25;
    if ((((int)uVar18 < 0) || ((int)uVar20 < (int)uVar18)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar9 = local_308;
    iVar16 = local_3a0;
    uVar20 = pFVar26[0x22].Value;
    if (uVar18 != uVar20) {
      pFVar22 = pFVar25;
      if (*(FQueue_u_0 **)(pFVar26 + 0x20) != (FQueue_u_0 *)0x0) {
        pFVar22 = *(FQueue_u_0 **)(pFVar26 + 0x20);
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & pFVar22[iVar17].Value;
      while (uVar18 == 0) {
        lVar12 = (longlong)iVar17;
        uVar19 = uVar19 + 0x20;
        iVar17 = iVar17 + 1;
        uVar18 = uVar20;
        if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_145c6cf4d;
        uVar18 = pFVar22[lVar12 + 1].Value;
      }
      uVar24 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_314 = (int)lVar12;
      uVar18 = (uVar19 - 1) + local_314;
      if ((int)uVar20 < (int)uVar18) {
        uVar18 = uVar20;
      }
    }
LAB_145c6cf4d:
    while( true ) {
      pFVar22 = local_2e8;
      if (local_2e8[2].Value - local_2e8[0xd].Value != (int)uStack_2c0) {
        local_3a6 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_3a6);
      }
      if (((TStack_2e0.CurrentBitIndex == uVar18) && ((FQueue_u_0 *)TStack_2e0.Array == pFVar25)) &&
         (pFVar22 == pFVar26 + 0x18)) break;
      lVar12 = *(longlong *)pFVar22;
      pFVar13 = (FCsvProfiler *)0x0;
      if (iVar16 != 0) {
        pFVar13 = pFVar9;
      }
      FStatState::EmitResults
                ((FStatState *)(lVar12 + 8 + (longlong)TStack_2e0.CurrentBitIndex * 0x40),
                 (FQueue)pFVar26->_s_0,
                 *(FGPUStat **)((longlong)TStack_2e0.CurrentBitIndex * 0x40 + lVar12),
                 &FEndOfPipeStats::EndOfPipeStats,pFVar13);
      TStack_2e0.UnvisitedBitMask = TStack_2e0.UnvisitedBitMask & ~TStack_2e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2e0);
    }
    pFVar13 = (FCsvProfiler *)0x0;
    if (iVar16 != 0) {
      pFVar13 = pFVar9;
    }
    FStatState::EmitResults
              ((FStatState *)&pFVar26[6]._s_0,(FQueue)pFVar26->_s_0,&GPUStat_Total,
               &FEndOfPipeStats::EndOfPipeStats,pFVar13);
    uVar24 = local_360;
    if (pFVar26[0x16]._s_0.Type != Graphics) {
      if (!bVar10) {
        local_360 = 0;
      }
      bVar10 = true;
      uVar24 = *(ulonglong *)(pFVar26 + 0x14);
      if (*(ulonglong *)(pFVar26 + 0x14) < local_360) {
        uVar24 = local_360;
      }
    }
    local_360 = uVar24;
    uVar24 = local_360;
    TStack_2b0.UnvisitedBitMask = TStack_2b0.UnvisitedBitMask & ~TStack_2b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b0);
    pFVar25 = local_300;
    param_1 = (FFrameState *)local_358;
    uVar20 = local_3a4;
  }
  if (bVar10) {
    dVar5 = __real_3ff0000000000000 / FGenericPlatformTime::SecondsPerCycle64;
    dVar6 = (double)uVar24 / dVar5;
    dVar7 = dVar6 / FGenericPlatformTime::SecondsPerCycle;
    EnterCriticalSection((LPCRITICAL_SECTION)&GRHIGPUFrameTimeHistory.CS);
    lVar12 = 0;
    dVar5 = dVar5 * dVar6;
    uVar20 = (uint)GRHIGPUFrameTimeHistory.NextIndex;
    if ((__real_43e0000000000000 <= dVar5) &&
       (dVar5 = dVar5 - __real_43e0000000000000, dVar5 < __real_43e0000000000000)) {
      lVar12 = -0x8000000000000000;
    }
    GRHIGPUFrameTimeHistory.NextIndex = GRHIGPUFrameTimeHistory.NextIndex + 1;
    GRHIGPUFrameTimeHistory.History.Elements[uVar20 & 0xf] = (longlong)dVar5 + lVar12;
    LeaveCriticalSection((LPCRITICAL_SECTION)&GRHIGPUFrameTimeHistory.CS);
    GGPUFrameTime = (uint)dVar7;
    LOCK();
    UNLOCK();
  }
  else {
    local_6c = 0x10;
    uStack_388 = 0;
    local_1f8.SecondaryData =
         (ForElementType<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::FState>
          )0x0;
    local_70 = 0;
    uVar20 = pFVar25[6].Value;
    local_370 = 0;
    uStack_374 = uStack_388;
    if (uVar20 != 0) {
      pFVar26 = *(FQueue_u_0 **)(pFVar25 + 4);
      if (*(FQueue_u_0 **)(pFVar25 + 4) == (FQueue_u_0 *)0x0) {
        pFVar26 = pFVar25;
      }
      uVar18 = pFVar26->Value;
      local_370 = 0;
      uStack_388 = 0;
      while (uVar18 == 0) {
        lVar12 = (longlong)(int)uStack_388;
        local_370 = local_370 + 0x20;
        uStack_388 = uStack_388 + 1;
        uStack_374 = uVar20;
        if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_388)
        goto LAB_145c6d1d1;
        uVar18 = pFVar26[lVar12 + 1].Value;
      }
      local_398 = (ulonglong)(-uVar18 & uVar18);
      uVar24 = local_398 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_310 = (int)lVar12;
      uStack_374 = (local_370 - 1) + local_310;
      if ((int)uVar20 < (int)uStack_374) {
        uStack_374 = uVar20;
      }
    }
LAB_145c6d1d1:
    uStack_384 = (uint)local_398;
    iStack_36c = iStack_334;
    iStack_368 = ((FQueue_u_0 *)((longlong)param_1 + 8))->Value -
                 ((FQueue_u_0 *)((longlong)param_1 + 0x34))->Value;
    uVar18 = ((FQueue_u_0 *)((longlong)param_1 + 0x28))->Value;
    uStack_378 = 0xffffffff;
    TStack_280._padding_ = CONCAT44(uStack_384,uStack_388);
    uVar19 = uVar18 & 0xffffffe0;
    TStack_280.CurrentBitIndex = uStack_374;
    TStack_280.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)uVar18 >> 5;
    TStack_280._28_4_ = iStack_334;
    TStack_280.BaseBitIndex = local_370;
    uStack_260 = CONCAT44(uStack_364,iStack_368);
    local_390 = (FQueue_u_0 *)param_1;
    local_380 = pFVar25;
    local_288 = (FQueue_u_0 *)param_1;
    TStack_280.Array = (TBitArray<FDefaultBitArrayAllocator> *)pFVar25;
    if ((((int)uVar18 < 0) || ((int)uVar20 < (int)uVar18)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar26 = local_358;
    uVar20 = pFVar25[6].Value;
    if (uVar18 != uVar20) {
      pFVar22 = pFVar25;
      if (*(FQueue_u_0 **)(pFVar25 + 4) != (FQueue_u_0 *)0x0) {
        pFVar22 = *(FQueue_u_0 **)(pFVar25 + 4);
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & pFVar22[iVar17].Value;
      while (uVar18 == 0) {
        lVar12 = (longlong)iVar17;
        uVar19 = uVar19 + 0x20;
        iVar17 = iVar17 + 1;
        uVar18 = uVar20;
        if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_145c6d300;
        uVar18 = pFVar22[lVar12 + 1].Value;
      }
      uVar24 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_30c = (int)lVar12;
      uVar18 = (uVar19 - 1) + local_30c;
      if ((int)uVar20 < (int)uVar18) {
        uVar18 = uVar20;
      }
    }
LAB_145c6d300:
    while( true ) {
      pFVar22 = local_288;
      if (local_288[2].Value - local_288[0xd].Value != (int)uStack_260) {
        local_3a5 = 0;
        `TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3a5);
      }
      iVar17 = local_70;
      lVar12 = (longlong)TStack_280.CurrentBitIndex;
      if (((TStack_280.CurrentBitIndex == uVar18) && ((FQueue_u_0 *)TStack_280.Array == pFVar25)) &&
         (pFVar22 == pFVar26)) break;
      lVar3 = *(longlong *)pFVar22;
      if (local_70 == local_6c) {
        local_70 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::FState>_>
                             (0x818,&local_1f8,&local_6c);
      }
      lVar14 = (longlong)local_70;
      FVar23 = (ForElementType<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::FState>
                )&local_1f8;
      if (local_1f8.SecondaryData !=
          (ForElementType<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::FState>
           )0x0) {
        FVar23 = local_1f8.SecondaryData;
      }
      puVar2 = (uchar *)((longlong)FVar23 + 8) + lVar14 * 0x18;
      local_70 = local_70 + 1;
      puVar2[0] = '\0';
      puVar2[1] = '\0';
      puVar2[2] = '\0';
      puVar2[3] = '\0';
      puVar2 = (uchar *)((longlong)FVar23 + 0x10) + lVar14 * 0x18;
      puVar2[0] = '\0';
      puVar2[1] = '\0';
      puVar2[2] = '\0';
      puVar2[3] = '\0';
      puVar2[4] = '\0';
      puVar2[5] = '\0';
      puVar2[6] = '\0';
      puVar2[7] = '\0';
      *(longlong *)((longlong)FVar23 + lVar14 * 0x18) = lVar12 * 0xb8 + 8 + lVar3;
      TStack_280.UnvisitedBitMask = TStack_280.UnvisitedBitMask & ~TStack_280._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_280);
    }
    local_258 = (ForElementType<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::FState>
                 )&local_1f8;
    if (local_1f8.SecondaryData !=
        (ForElementType<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::FState>
        )0x0) {
      local_258 = local_1f8.SecondaryData;
    }
    if ((local_70 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_248[0]._12_4_ = uStack_24c;
    local_248[0].ArrayNum = iVar17;
    local_248[0].DataPtr = (FState *)local_258;
    iStack_250 = iVar17;
    uVar15 = FTimestampStream::ComputeUnion(local_248);
    dVar5 = __real_3ff0000000000000 / FGenericPlatformTime::SecondsPerCycle64;
    dVar6 = (double)uVar15 / dVar5;
    dVar7 = dVar6 / FGenericPlatformTime::SecondsPerCycle;
    EnterCriticalSection((LPCRITICAL_SECTION)&GRHIGPUFrameTimeHistory.CS);
    lVar12 = 0;
    dVar6 = dVar6 * dVar5;
    uVar20 = (uint)GRHIGPUFrameTimeHistory.NextIndex;
    if ((__real_43e0000000000000 <= dVar6) &&
       (dVar6 = dVar6 - __real_43e0000000000000, dVar6 < __real_43e0000000000000)) {
      lVar12 = -0x8000000000000000;
    }
    GRHIGPUFrameTimeHistory.NextIndex = GRHIGPUFrameTimeHistory.NextIndex + 1;
    GRHIGPUFrameTimeHistory.History.Elements[uVar20 & 0xf] = (longlong)dVar6 + lVar12;
    LeaveCriticalSection((LPCRITICAL_SECTION)&GRHIGPUFrameTimeHistory.CS);
    GGPUFrameTime = (uint)dVar7;
    LOCK();
    UNLOCK();
    if (local_1f8.SecondaryData !=
        (ForElementType<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::FState>
        )0x0) {
      FMemory::Free((void *)local_1f8.SecondaryData);
    }
  }
  FThreadStats::Flush((FThreadStats *)&FEndOfPipeStats::EndOfPipeStats,false,true);
  return;
}

// ProcessQueue @ 145c6d560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::ProcessQueue
          (FGPUProfilerSink_StatSystem *this,FQueueState *param_1,FIterator *param_2)

{
  int *piVar1;
  longlong *plVar2;
  TMap<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>,0>_>
  *pTVar3;
  TOptional<unsigned___int64> *pTVar4;
  FFrameBoundary *pFVar5;
  atomic<bool> aVar6;
  EType EVar7;
  char cVar8;
  FQueue_u_0 FVar9;
  FQueue_u_0 FVar10;
  FQueue_u_0 FVar11;
  FNode *pFVar12;
  FQueueState *pFVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  code *pcVar17;
  FGPUProfilerSink_StatSystem *pFVar18;
  FFrameState *pFVar19;
  TMap<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>,0>_>
  *pTVar20;
  bool bVar21;
  undefined1 uVar22;
  int iVar23;
  uint uVar24;
  size_t sVar25;
  uint *puVar26;
  ulonglong uVar27;
  TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>
  *pTVar28;
  FFrameState *pFVar29;
  uint uVar30;
  ulonglong uVar31;
  FScriptContainerElement *pFVar32;
  long64 *plVar33;
  longlong lVar34;
  FChunk *pFVar35;
  long64 lVar36;
  wchar_t *_Str;
  ulong64 uVar37;
  ulong64 uVar38;
  uint uVar39;
  longlong *plVar40;
  undefined1 *puVar41;
  uint uVar42;
  uint *puVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  uint uVar46;
  undefined1 *puVar47;
  undefined1 auStack_238 [32];
  ulonglong local_218;
  ulonglong local_210;
  longlong local_208;
  undefined1 local_1f8;
  undefined1 local_1f7 [7];
  FIterator *local_1f0;
  FGPUProfilerSink_StatSystem *local_1e8;
  FQueueState *local_1e0;
  uint local_1d8 [2];
  FFrameBoundary *local_1d0;
  int local_1c8;
  uint uStack_1c4;
  undefined1 *puStack_1c0;
  undefined4 local_1b8;
  int iStack_1b4;
  int iStack_1b0;
  undefined4 uStack_1ac;
  FFrameState *local_1a8;
  FFrameState *local_1a0;
  longlong lStack_198;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  int local_178;
  undefined4 uStack_174;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_170;
  int local_150;
  int local_14c;
  int local_148;
  FImportantLogScope local_140;
  FFrameState *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  TMap<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>,0>_>
  *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  long64 local_d0;
  undefined1 local_c8;
  long64 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  FQueue_u_0 *local_a8;
  longlong local_a0;
  FQueue_u_0 *local_98;
  longlong local_90;
  FQueue_u_0 *local_88;
  longlong local_80;
  FQueue_u_0 *local_78;
  longlong local_70;
  FQueue_u_0 *local_68;
  longlong local_60;
  FQueue_u_0 *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_238;
  local_1f0 = param_2;
  local_1e8 = this;
  local_1e0 = param_1;
  if ((-1 < GpuChannel->Enabled) && (param_1->bWasTraced == false)) {
    EVar7 = (param_1->Queue).field0_0x0._s_0.Type;
    if (EVar7 == Graphics) {
      _Str = L"Graphics";
    }
    else if (EVar7 == Compute) {
      _Str = L"Compute";
    }
    else if (EVar7 == Copy) {
      _Str = L"Copy";
    }
    else if (EVar7 == SwapChain) {
      _Str = L"Swapchain";
    }
    else {
      _Str = L"<unknown>";
    }
    FVar9 = (param_1->Queue).field0_0x0;
    sVar25 = wcslen(_Str);
    if (-1 < GpuChannel->Enabled) {
      Trace::Private::FImportantLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerQueueSpecFields>
                (&local_140,(int)sVar25 * 2);
      *(FQueue_u_0 *)local_140.Ptr = FVar9;
      Trace::Private::FImportantLogScope::
      FFieldSet<UE::Trace::TField<1,4,enum_UE::Trace::WideString>,enum_UE::Trace::WideString>::Impl
                (&local_140,_Str,(int)sVar25);
      LOCK();
      *(int *)((longlong)local_140.Ptr + (longlong)local_140.BufferOffset) =
           *(int *)((longlong)local_140.Ptr + (longlong)local_140.BufferOffset) + 1;
      UNLOCK();
    }
    param_1->bWasTraced = true;
    param_2 = local_1f0;
  }
  do {
    puVar26 = &param_2->Index;
LAB_145c6d66e:
    if ((param_2->Current == (FChunk *)0x0) ||
       (pFVar5 = (FFrameBoundary *)((param_2->Current->Elements).Elements + *puVar26),
       pFVar5 == (FFrameBoundary *)0x0)) {
      return true;
    }
    cVar8 = (char)pFVar5[1].CPUTimestamp;
    switch(cVar8) {
    case '\0':
      if ((cVar8 != '\0') &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L""), bVar21)) {
        pcVar17 = (code *)swi(3);
        uVar22 = (*pcVar17)();
        return (bool)uVar22;
      }
      pFVar29 = TMapBase<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState,0>_>
                ::FindOrAddImpl<unsigned_int_const_&>
                          ((TMapBase<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState,0>_>
                            *)&this->Frames,pFVar5->FrameNumber,&pFVar5->FrameNumber);
      if (pFVar5->bStatsFrameSet == false) {
        plVar33 = &local_c0;
        local_b8 = 0;
        lVar36 = local_c0;
      }
      else {
        local_d0 = pFVar5->StatsFrame;
        plVar33 = &local_d0;
        local_c8 = 1;
        lVar36 = local_d0;
      }
      if ((TOptional<__int64> *)plVar33 != &pFVar29->StatsFrame) {
        if ((char)plVar33[1] == '\0') {
          if ((pFVar29->StatsFrame).bIsSet != false) {
            (pFVar29->StatsFrame).bIsSet = false;
          }
        }
        else {
          (pFVar29->StatsFrame).TypedValue = lVar36;
          (pFVar29->StatsFrame).bIsSet = true;
        }
      }
      uVar30 = this->MaxFrameNumber;
      if (this->MaxFrameNumber < pFVar5->FrameNumber) {
        uVar30 = pFVar5->FrameNumber;
      }
      this->MaxFrameNumber = uVar30;
      LOCK();
      aVar6 = this->bTriggerProfile;
      this->bTriggerProfile = (atomic<bool>)0x0;
      UNLOCK();
      if (aVar6 != (atomic<bool>)0x0) {
        this->ProfileFrameNumber = this->MaxFrameNumber + 1;
      }
      local_1a8 = pFVar29;
      FQueueState::FrameBoundary(param_1,pFVar5,pFVar29,this->ProfileFrameNumber);
      param_2 = local_1f0;
      if ((int)pFVar29->_padding_ - *(int *)((longlong)&pFVar29->_padding_ + 4) ==
          *(int *)&(this->QueueStates).field_0x8 - *(int *)&(this->QueueStates).field_0x34) {
        plVar2 = &pFVar29->_padding_;
        uVar27 = 0xffffffffffffffff;
        local_170._padding_._0_4_ = 0;
        local_170._padding_._4_4_ = 1;
        local_170.UnvisitedBitMask = 0xffffffff;
        local_170.CurrentBitIndex = 0;
        local_170.BaseBitIndex = 0;
        local_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar2;
        if ((int)pFVar29->_padding_ != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_170);
        }
        uVar30 = (uint)pFVar29->_padding_;
        local_178 = (int)pFVar29->_padding_ - *(int *)((longlong)&pFVar29->_padding_ + 4);
        lStack_198 = CONCAT44(local_170._padding_._4_4_,(undefined4)local_170._padding_);
        uStack_188._4_4_ = local_170.CurrentBitIndex;
        uStack_188._0_4_ = local_170.UnvisitedBitMask;
        uStack_180._4_4_ = local_170._28_4_;
        uStack_180._0_4_ = local_170.BaseBitIndex;
        uVar46 = uVar30 & 0xffffffe0;
        pTStack_190 = local_170.Array;
        iVar23 = (int)uVar30 >> 5;
        uStack_108 = CONCAT44(uStack_174,local_178);
        TStack_128.Array = local_170.Array;
        local_1a0 = pFVar29;
        local_130 = pFVar29;
        TStack_128._padding_ = lStack_198;
        TStack_128._16_8_ = uStack_188;
        TStack_128._24_8_ = uStack_180;
        if (((int)uVar30 < 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar21)) {
          pcVar17 = (code *)swi(3);
          uVar22 = (*pcVar17)();
          return (bool)uVar22;
        }
        pFVar19 = local_1a8;
        uVar39 = (uint)pFVar29->_padding_;
        local_1d0 = pFVar5;
        if (uVar30 != uVar39) {
          plVar40 = plVar2;
          if ((longlong *)pFVar29->_padding_ != (longlong *)0x0) {
            plVar40 = (longlong *)pFVar29->_padding_;
          }
          uVar30 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)((longlong)plVar40 + (longlong)iVar23 * 4)
          ;
          while (uVar30 == 0) {
            lVar34 = (longlong)iVar23;
            uVar46 = uVar46 + 0x20;
            iVar23 = iVar23 + 1;
            uVar30 = uVar39;
            if ((int)((uVar39 - 1) + ((int)(uVar39 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
            goto LAB_145c6e100;
            uVar30 = *(uint *)((longlong)plVar40 + lVar34 * 4 + 4);
          }
          uVar31 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
          lVar34 = 0x3f;
          if (uVar31 != 0) {
            for (; uVar31 >> lVar34 == 0; lVar34 = lVar34 + -1) {
            }
          }
          local_150 = (int)lVar34;
          uVar30 = local_150 + -1 + uVar46;
          if ((int)uVar39 < (int)uVar30) {
            uVar30 = uVar39;
          }
        }
LAB_145c6e100:
        while( true ) {
          pFVar29 = local_130;
          if ((int)local_130->_padding_ - *(int *)((longlong)&local_130->_padding_ + 4) !=
              (int)uStack_108) {
            local_1f8 = 0;
            `TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1f8);
          }
          pFVar18 = local_1e8;
          if (((TStack_128.CurrentBitIndex == uVar30) &&
              (TStack_128.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar2)) &&
             (pFVar29 == pFVar19)) break;
          uVar31 = *(ulonglong *)
                    ((longlong)TStack_128.CurrentBitIndex * 0xb8 + 0x48 + pFVar29->_padding_);
          if (uVar27 < uVar31) {
            uVar31 = uVar27;
          }
          TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
          uVar27 = uVar31;
        }
        local_1c8 = 0;
        uStack_1c4 = 1;
        puStack_1c0 = &(local_1e8->QueueStates).field_0x10;
        iStack_1b4 = 0;
        iStack_1b0 = 0;
        iVar23 = *(int *)&(local_1e8->QueueStates).field_0x28;
        pTVar3 = &local_1e8->QueueStates;
        if (iVar23 != 0) {
          puVar26 = *(uint **)&(local_1e8->QueueStates).field_0x20;
          puVar43 = (uint *)puStack_1c0;
          if (puVar26 != (uint *)0x0) {
            puVar43 = puVar26;
          }
          uVar30 = *puVar43;
          iStack_1b0 = 0;
          local_1c8 = 0;
          while (uVar30 == 0) {
            iStack_1b0 = iStack_1b0 + 0x20;
            lVar34 = (longlong)local_1c8;
            local_1c8 = local_1c8 + 1;
            iStack_1b4 = iVar23;
            if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < local_1c8)
            goto LAB_145c6e213;
            uVar30 = puVar43[lVar34 + 1];
          }
          uStack_1c4 = -uVar30 & uVar30;
          uVar31 = (ulonglong)uStack_1c4 * 2 + 1;
          lVar34 = 0x3f;
          if (uVar31 != 0) {
            for (; uVar31 >> lVar34 == 0; lVar34 = lVar34 + -1) {
            }
          }
          local_14c = (int)lVar34;
          iStack_1b4 = local_14c + -1 + iStack_1b0;
          if (iVar23 < iStack_1b4) {
            iStack_1b4 = iVar23;
          }
        }
LAB_145c6e213:
        local_1b8 = 0xffffffff;
        uVar30 = *(uint *)&(local_1e8->QueueStates).field_0x28;
        lStack_198 = CONCAT44(uStack_1c4,local_1c8);
        local_178 = *(int *)&(local_1e8->QueueStates).field_0x8 -
                    *(int *)&(local_1e8->QueueStates).field_0x34;
        uStack_188._4_4_ = iStack_1b4;
        uStack_188._0_4_ = 0xffffffff;
        uStack_180._4_4_ = uStack_1ac;
        uStack_180._0_4_ = iStack_1b0;
        puVar47 = &(local_1e8->QueueStates).field_0x10;
        iVar23 = (int)uVar30 >> 5;
        uVar46 = uVar30 & 0xffffffe0;
        uStack_d8 = CONCAT44(uStack_174,local_178);
        local_1a0 = (FFrameState *)pTVar3;
        pTStack_190 = (TBitArray<FDefaultBitArrayAllocator> *)puStack_1c0;
        local_100 = pTVar3;
        TStack_f8._padding_ = lStack_198;
        TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_1c0;
        TStack_f8._16_8_ = uStack_188;
        TStack_f8._24_8_ = uStack_180;
        if (((int)uVar30 < 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar21)) {
          pcVar17 = (code *)swi(3);
          uVar22 = (*pcVar17)();
          return (bool)uVar22;
        }
        uVar39 = *(uint *)&(pFVar18->QueueStates).field_0x28;
        if (uVar30 != uVar39) {
          puVar16 = *(undefined1 **)&(pFVar18->QueueStates).field_0x20;
          puVar41 = puVar47;
          if (puVar16 != (undefined1 *)0x0) {
            puVar41 = puVar16;
          }
          uVar30 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)(puVar41 + (longlong)iVar23 * 4);
          while (uVar30 == 0) {
            lVar34 = (longlong)iVar23;
            uVar46 = uVar46 + 0x20;
            iVar23 = iVar23 + 1;
            uVar30 = uVar39;
            if ((int)((uVar39 - 1) + ((int)(uVar39 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
            goto LAB_145c6e30d;
            uVar30 = *(uint *)(puVar41 + lVar34 * 4 + 4);
          }
          uVar31 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
          lVar34 = 0x3f;
          if (uVar31 != 0) {
            for (; uVar31 >> lVar34 == 0; lVar34 = lVar34 + -1) {
            }
          }
          local_148 = (int)lVar34;
          uVar30 = local_148 + -1 + uVar46;
          if ((int)uVar39 < (int)uVar30) {
            uVar30 = uVar39;
          }
        }
LAB_145c6e30d:
        uVar46 = 0;
        while( true ) {
          pTVar20 = local_100;
          if (*(int *)&local_100->field_0x8 - *(int *)&local_100->field_0x34 != (int)uStack_d8) {
            local_1f7[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1f7);
          }
          this = local_1e8;
          if (((TStack_f8.CurrentBitIndex == uVar30) &&
              (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar47)) &&
             (pTVar20 == pTVar3)) break;
          lVar34 = *(longlong *)
                    (*(longlong *)pTVar20 + 8 + (longlong)TStack_f8.CurrentBitIndex * 0x18);
          uVar39 = uVar46;
          uVar24 = *(uint *)(lVar34 + 0x38);
          if ((int)*(uint *)(lVar34 + 0x38) < 1) {
LAB_145c6e38c:
            uVar24 = uVar46;
            if ((int)uVar39 <= *(int *)(lVar34 + 0x38)) {
              uVar24 = ~uVar39 >> 0x1f;
            }
            if (uVar24 == 0) {
              local_210 = (ulonglong)uVar39;
              local_218 = 0;
              local_208 = (longlong)*(int *)(lVar34 + 0x38);
              bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 );
              if (bVar21) {
                pcVar17 = (code *)swi(3);
                uVar22 = (*pcVar17)();
                return (bool)uVar22;
              }
            }
            if (uVar39 != 0) {
              iVar23 = *(int *)(lVar34 + 0x38) - uVar39;
              if (iVar23 != 0) {
                memmove(*(void **)(lVar34 + 0x30),
                        (void *)((ulonglong)uVar39 * 0x10 + (longlong)*(void **)(lVar34 + 0x30)),
                        (longlong)iVar23 << 4);
              }
              *(int *)(lVar34 + 0x38) = *(int *)(lVar34 + 0x38) - uVar39;
            }
          }
          else {
            do {
              uVar42 = uVar24 >> 1;
              if (*(ulonglong *)
                   (*(longlong *)(lVar34 + 0x30) + (longlong)(int)(uVar42 + uVar39) * 0x10) < uVar27
                 ) {
                uVar39 = uVar42 + uVar39 + (uVar24 & 1);
              }
              uVar24 = uVar42;
            } while (uVar42 != 0);
            if (-1 < (int)uVar39) goto LAB_145c6e38c;
          }
          TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
        }
        ProcessFrame(local_1e8,local_1a8);
        pFVar5 = local_1d0;
        local_1d8[0] = local_1d0->FrameNumber;
        if (*(int *)&(this->Frames).field_0x8 != *(int *)&(this->Frames).field_0x34) {
          TSet<TTuple<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState,0>,FDefaultSetAllocator>
          ::RemoveImpl<unsigned_int>
                    ((TSet<TTuple<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState,0>,FDefaultSetAllocator>
                      *)&this->Frames,local_1d8[0],local_1d8);
        }
        param_2 = local_1f0;
        param_1 = local_1e0;
        if (this->ProfileFrameNumber == pFVar5->FrameNumber) {
          LOCK();
          this->bIsProfiling = (atomic<bool>)0x0;
          UNLOCK();
        }
      }
      break;
    case '\x01':
      if ((cVar8 != '\x01') &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L""), param_2 = local_1f0, bVar21)) {
        pcVar17 = (code *)swi(3);
        uVar22 = (*pcVar17)();
        return (bool)uVar22;
      }
      pTVar4 = &(param_1->Timestamps).TotalBusyCycles;
      if ((TOptional<unsigned___int64> *)&local_b0 != pTVar4) {
        pTVar4->TypedValue = pFVar5->CPUTimestamp;
        (param_1->Timestamps).TotalBusyCycles.bIsSet = true;
      }
      break;
    case '\x02':
      if ((param_1->bBusy == false) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("QueueState.bBusy",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUProfiler.cpp"
                              ,0x966,L""), bVar21)) {
        pcVar17 = (code *)swi(3);
        uVar22 = (*pcVar17)();
        return (bool)uVar22;
      }
      if (((char)pFVar5[1].CPUTimestamp != '\x02') &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L""), bVar21)) {
        pcVar17 = (code *)swi(3);
        uVar22 = (*pcVar17)();
        return (bool)uVar22;
      }
      FQueueState::BeginBreadcrumb(param_1,(FBeginBreadcrumb *)pFVar5);
      param_2 = local_1f0;
      break;
    case '\x03':
      if ((param_1->bBusy == false) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("QueueState.bBusy",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUProfiler.cpp"
                              ,0x96d,L""), bVar21)) {
        pcVar17 = (code *)swi(3);
        uVar22 = (*pcVar17)();
        return (bool)uVar22;
      }
      if (((char)pFVar5[1].CPUTimestamp != '\x03') &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L""), bVar21)) {
        pcVar17 = (code *)swi(3);
        uVar22 = (*pcVar17)();
        return (bool)uVar22;
      }
      FQueueState::EndBreadcrumb(param_1,(FEndBreadcrumb *)pFVar5);
      param_2 = local_1f0;
      break;
    case '\x04':
      if ((param_1->bBusy != false) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("!QueueState.bBusy",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUProfiler.cpp"
                              ,0x955,L""), bVar21)) {
        pcVar17 = (code *)swi(3);
        uVar22 = (*pcVar17)();
        return (bool)uVar22;
      }
      param_1->bBusy = true;
      if (((char)pFVar5[1].CPUTimestamp != '\x04') &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L""), bVar21)) {
        pcVar17 = (code *)swi(3);
        uVar22 = (*pcVar17)();
        return (bool)uVar22;
      }
      uVar38._0_4_ = pFVar5->FrameNumber;
      uVar38._4_1_ = pFVar5->bStatsFrameSet;
      uVar38._5_3_ = *(undefined3 *)&pFVar5->field_0xd;
      FTimestampStream::AddTimestamp(&(param_1->Timestamps).Queue,uVar38,true);
      uVar38 = pFVar5->CPUTimestamp - param_1->LastGPUCycles;
      if (pFVar5->CPUTimestamp <= param_1->LastGPUCycles) {
        uVar38 = 0;
      }
      FQueueState::AccumulateTime(param_1,0,0,uVar38);
      uVar38 = pFVar5->CPUTimestamp;
      uVar15 = *(undefined8 *)&pFVar5->FrameNumber;
      FVar9 = (param_1->Queue).field0_0x0;
      if (-1 < GpuChannel->Enabled) {
        Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerEventBeginWorkFields>
                  ((TLogScope<0> *)&local_a8);
        *local_a8 = FVar9;
        *(undefined8 *)(local_a8 + 1) = uVar15;
        *(ulong64 *)(local_a8 + 3) = uVar38;
        *(undefined8 *)(local_a0 + 0x28) = *(undefined8 *)(local_a0 + 0x20);
      }
      uVar31._0_4_ = pFVar5->FrameNumber;
      uVar31._4_1_ = pFVar5->bStatsFrameSet;
      uVar31._5_3_ = *(undefined3 *)&pFVar5->field_0xd;
      if (uVar31 < param_1->LastGPUCycles) {
        uVar31 = param_1->LastGPUCycles;
      }
      param_1->LastGPUCycles = uVar31;
      param_2 = local_1f0;
      this = local_1e8;
      break;
    case '\x05':
      if ((param_1->bBusy == false) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("QueueState.bBusy",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUProfiler.cpp"
                              ,0x95d,L""), bVar21)) {
        pcVar17 = (code *)swi(3);
        uVar22 = (*pcVar17)();
        return (bool)uVar22;
      }
      param_1->bBusy = false;
      if (((char)pFVar5[1].CPUTimestamp != '\x05') &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L""), bVar21)) {
        pcVar17 = (code *)swi(3);
        uVar22 = (*pcVar17)();
        return (bool)uVar22;
      }
      FTimestampStream::AddTimestamp(&(param_1->Timestamps).Queue,pFVar5->CPUTimestamp,false);
      uVar38 = pFVar5->CPUTimestamp - param_1->LastGPUCycles;
      if (pFVar5->CPUTimestamp <= param_1->LastGPUCycles) {
        uVar38 = 0;
      }
      FQueueState::AccumulateTime(param_1,uVar38,0,0);
      uVar38 = pFVar5->CPUTimestamp;
      FVar9 = (param_1->Queue).field0_0x0;
      if (-1 < GpuChannel->Enabled) {
        Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerEventEndWorkFields>
                  ((TLogScope<0> *)&local_98);
        *local_98 = FVar9;
        *(ulong64 *)(local_98 + 1) = uVar38;
        *(undefined8 *)(local_90 + 0x28) = *(undefined8 *)(local_90 + 0x20);
      }
      uVar27 = pFVar5->CPUTimestamp;
      if (pFVar5->CPUTimestamp < param_1->LastGPUCycles) {
        uVar27 = param_1->LastGPUCycles;
      }
      param_1->LastGPUCycles = uVar27;
      param_2 = local_1f0;
      break;
    case '\x06':
      if ((param_1->bBusy == false) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("QueueState.bBusy",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUProfiler.cpp"
                              ,0x976,L""), bVar21)) {
        pcVar17 = (code *)swi(3);
        uVar22 = (*pcVar17)();
        return (bool)uVar22;
      }
      if (((char)pFVar5[1].CPUTimestamp != '\x06') &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L""), bVar21)) {
        pcVar17 = (code *)swi(3);
        uVar22 = (*pcVar17)();
        return (bool)uVar22;
      }
      pFVar12 = (param_1->Profile).Current;
      if (pFVar12 != (FNode *)0x0) {
        (pFVar12->Exclusive).NumDraws = (pFVar12->Exclusive).NumDraws + (int)pFVar5->CPUTimestamp;
        puVar26 = &(pFVar12->Exclusive).NumDispatches;
        *puVar26 = *puVar26 + *(int *)((longlong)&pFVar5->CPUTimestamp + 4);
        puVar26 = &(pFVar12->Exclusive).NumPrimitives;
        *puVar26 = *puVar26 + pFVar5->FrameNumber;
        puVar26 = &(pFVar12->Exclusive).NumVertices;
        *puVar26 = *puVar26 + *(int *)&pFVar5->bStatsFrameSet;
        for (pFVar12 = (param_1->Profile).Current; pFVar12 != (FNode *)0x0;
            pFVar12 = pFVar12->Parent) {
          (pFVar12->Inclusive).NumDraws = (pFVar12->Inclusive).NumDraws + (int)pFVar5->CPUTimestamp;
          puVar26 = &(pFVar12->Inclusive).NumDispatches;
          *puVar26 = *puVar26 + *(int *)((longlong)&pFVar5->CPUTimestamp + 4);
          puVar26 = &(pFVar12->Inclusive).NumPrimitives;
          *puVar26 = *puVar26 + pFVar5->FrameNumber;
          puVar26 = &(pFVar12->Inclusive).NumVertices;
          *puVar26 = *puVar26 + *(int *)&pFVar5->bStatsFrameSet;
        }
      }
      FVar9 = (FQueue_u_0)pFVar5->FrameNumber;
      FVar11 = *(FQueue_u_0 *)&pFVar5->CPUTimestamp;
      FVar10 = (param_1->Queue).field0_0x0;
      param_2 = local_1f0;
      if (-1 < GpuChannel->Enabled) {
        Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerEventStatsFields>
                  ((TLogScope<0> *)&local_88);
        *local_88 = FVar10;
        local_88[1] = FVar11;
        local_88[2] = FVar9;
        *(undefined8 *)(local_80 + 0x28) = *(undefined8 *)(local_80 + 0x20);
        param_2 = local_1f0;
      }
      break;
    case '\a':
      if ((param_1->bBusy != false) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("!QueueState.bBusy",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUProfiler.cpp"
                              ,0x97e,L""), bVar21)) {
        pcVar17 = (code *)swi(3);
        uVar22 = (*pcVar17)();
        return (bool)uVar22;
      }
      if (((char)pFVar5[1].CPUTimestamp != '\a') &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L""), bVar21)) {
        pcVar17 = (code *)swi(3);
        uVar22 = (*pcVar17)();
        return (bool)uVar22;
      }
      iVar23 = (param_1->Signals).ArrayNum;
      piVar1 = &(param_1->Signals).ArrayMax;
      if (iVar23 == *piVar1) {
        iVar23 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(param_1->Signals).AllocatorInstance,piVar1);
      }
      pFVar32 = (param_1->Signals).AllocatorInstance.Data;
      (param_1->Signals).ArrayNum = iVar23 + 1;
      pFVar32 = pFVar32 + (longlong)iVar23 * 0x10;
      *(ulonglong *)pFVar32 = 0;
      *(ulonglong *)(pFVar32 + 8) = 0;
      uVar27 = pFVar5->CPUTimestamp;
      if (pFVar5->CPUTimestamp < param_1->LastGPUCycles) {
        uVar27 = param_1->LastGPUCycles;
      }
      *(ulonglong *)pFVar32 = uVar27;
      *(ulonglong *)(pFVar32 + 8) = *(ulonglong *)&pFVar5->FrameNumber;
      uVar15 = *(undefined8 *)&pFVar5->FrameNumber;
      FVar9 = (param_1->Queue).field0_0x0;
      if (-1 < GpuChannel->Enabled) {
        Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerSignalFenceFields>
                  ((TLogScope<0> *)&local_78);
        *local_78 = FVar9;
        *(ulonglong *)(local_78 + 1) = uVar27;
        *(undefined8 *)(local_78 + 3) = uVar15;
        *(undefined8 *)(local_70 + 0x28) = *(undefined8 *)(local_70 + 0x20);
      }
      uVar27 = (param_1->MaxSignal).Value + 1;
      if ((*(ulonglong *)(pFVar32 + 8) != uVar27) &&
         (local_218 = *(ulonglong *)(pFVar32 + 8), local_210 = uVar27,
         bVar21 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result.Value == MaxSignal.Value + 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUProfiler.cpp"
                             ,0x800,
                             L"Fence signals must be sequential. Result.Value: %llu, MaxSignal.Value + 1: %llu"
                            ), bVar21)) {
        pcVar17 = (code *)swi(3);
        uVar22 = (*pcVar17)();
        return (bool)uVar22;
      }
      uVar27 = (param_1->MaxSignal).GPUTimestampBOP;
      if ((*(ulonglong *)pFVar32 < uVar27) &&
         (local_218 = *(ulonglong *)pFVar32, local_210 = uVar27,
         bVar21 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result.GPUTimestampBOP >= MaxSignal.GPUTimestampBOP",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUProfiler.cpp"
                             ,0x803,
                             L"Signals should always advance in time. Result.GPUTimestampBOP: %llu, MaxSignal.GPUTimestampBOP: %llu"
                            ), bVar21)) {
        pcVar17 = (code *)swi(3);
        uVar22 = (*pcVar17)();
        return (bool)uVar22;
      }
      uVar27 = *(ulonglong *)(pFVar32 + 8);
      (param_1->MaxSignal).GPUTimestampBOP = *(ulonglong *)pFVar32;
      (param_1->MaxSignal).Value = uVar27;
      param_2 = local_1f0;
      this = local_1e8;
      break;
    case '\b':
      if ((param_1->bBusy != false) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("!QueueState.bBusy",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUProfiler.cpp"
                              ,0x985,L""), bVar21)) {
        pcVar17 = (code *)swi(3);
        uVar22 = (*pcVar17)();
        return (bool)uVar22;
      }
      if ((char)pFVar5[1].CPUTimestamp != '\b') {
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L"");
        if (bVar21) {
          pcVar17 = (code *)swi(3);
          uVar22 = (*pcVar17)();
          return (bool)uVar22;
        }
        if (((char)pFVar5[1].CPUTimestamp != '\b') &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index == TypeIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                ,0x97,L""), bVar21)) {
          pcVar17 = (code *)swi(3);
          uVar22 = (*pcVar17)();
          return (bool)uVar22;
        }
      }
      pTVar28 = TMapBase<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>,0>_>
                ::FindChecked((TMapBase<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>,0>_>
                               *)&this->QueueStates,(FQueue *)&pFVar5->StatsFrame);
      uVar27._0_4_ = pFVar5->FrameNumber;
      uVar27._4_1_ = pFVar5->bStatsFrameSet;
      uVar27._5_3_ = *(undefined3 *)&pFVar5->field_0xd;
      pFVar13 = pTVar28->Ptr;
      if ((pFVar13->MaxSignal).Value < uVar27) {
        return false;
      }
      uVar31 = pFVar5->CPUTimestamp;
      uVar30 = (pFVar13->Signals).ArrayNum;
      uVar44 = local_1e0->LastGPUCycles;
      if (local_1e0->LastGPUCycles < uVar31) {
        uVar44 = uVar31;
      }
      uVar39 = 0;
      uVar46 = uVar30;
      uVar45 = uVar44;
      if ((int)uVar30 < 1) {
LAB_145c6dd4e:
        if ((int)uVar39 < (int)uVar30) {
          if ((int)uVar39 < 0) {
            local_218 = (ulonglong)uVar39;
            local_210 = (longlong)(int)uVar30;
            bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar21) {
              pcVar17 = (code *)swi(3);
              uVar22 = (*pcVar17)();
              return (bool)uVar22;
            }
          }
          pFVar32 = (pFVar13->Signals).AllocatorInstance.Data + (ulonglong)uVar39 * 0x10;
          if (((uVar39 != 0) ||
              (uVar14._0_4_ = pFVar5->FrameNumber, uVar14._4_1_ = pFVar5->bStatsFrameSet,
              uVar14._5_3_ = *(undefined3 *)&pFVar5->field_0xd,
              *(ulonglong *)(pFVar32 + 8) <= uVar14)) &&
             (uVar45 = *(ulonglong *)pFVar32, uVar45 < uVar44)) {
            uVar45 = uVar44;
          }
        }
      }
      else {
        do {
          iVar23 = (uVar46 >> 1) + uVar39;
          if (*(ulonglong *)
               ((pFVar13->Signals).AllocatorInstance.Data + (longlong)iVar23 * 0x10 + 8) < uVar27) {
            uVar39 = (uVar46 & 1) + iVar23;
          }
          uVar24 = uVar46 >> 1;
          uVar46 = uVar46 >> 1;
        } while (uVar24 != 0);
        if (-1 < (int)uVar39) goto LAB_145c6dd4e;
      }
      param_1 = local_1e0;
      uVar15 = *(undefined8 *)&pFVar5->FrameNumber;
      FVar9 = *(FQueue_u_0 *)&pFVar5->StatsFrame;
      uVar27 = local_1e0->LastGPUCycles;
      uVar38 = uVar31 - uVar27;
      if (uVar31 <= uVar27) {
        uVar38 = 0;
        uVar31 = uVar27;
      }
      FVar11 = (local_1e0->Queue).field0_0x0;
      if (-1 < GpuChannel->Enabled) {
        Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerWaitFenceFields>
                  ((TLogScope<0> *)&local_68);
        *local_68 = FVar11;
        *(ulonglong *)(local_68 + 1) = uVar45;
        local_68[3] = FVar9;
        *(undefined8 *)(local_68 + 4) = uVar15;
        *(undefined8 *)(local_60 + 0x28) = *(undefined8 *)(local_60 + 0x20);
      }
      uVar37 = 0;
      if (uVar31 < uVar45) {
        FVar9 = (param_1->Queue).field0_0x0;
        uVar37 = uVar45 - uVar31;
        if (-1 < GpuChannel->Enabled) {
          Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerEventWaitFields>
                    ((TLogScope<0> *)&local_58);
          *local_58 = FVar9;
          *(ulonglong *)(local_58 + 1) = uVar31;
          *(ulonglong *)(local_58 + 3) = uVar45;
          *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
        }
      }
      param_1->LastGPUCycles = uVar45;
      FQueueState::AccumulateTime(param_1,0,uVar37,uVar38);
      param_2 = local_1f0;
      this = local_1e8;
    }
    pFVar35 = param_2->Current;
  } while (pFVar35 == (FChunk *)0x0);
  puVar26 = &param_2->Index;
  if ((pFVar35->Elements).Elements + param_2->Index !=
      (TTypeCompatibleBytes<UE::RHI::GPUProfiler::FEvent> *)0x0) {
    uVar30 = param_2->Index + 1;
    param_2->Index = uVar30;
    do {
      puVar26 = &param_2->Index;
      if (uVar30 < (pFVar35->Header).Num) break;
      pFVar35 = (pFVar35->Header).Next;
      puVar26 = &param_2->Index;
      param_2->Current = pFVar35;
      uVar30 = 0;
      param_2->Index = 0;
    } while (pFVar35 != (FChunk *)0x0);
  }
  goto LAB_145c6d66e;
}


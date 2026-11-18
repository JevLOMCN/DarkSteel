// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 8

// FD3D12LocalOnlineHeap @ 1459a9a60

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12LocalOnlineHeap * __thiscall
FD3D12LocalOnlineHeap::FD3D12LocalOnlineHeap
          (FD3D12LocalOnlineHeap *this,FD3D12DescriptorCache *param_1,FD3D12CommandContext *param_2)

{
  TNode *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  pTVar3 = (TNode *)0x0;
  this->_padding_ = *(longlong *)&param_2->field_0x8;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FD3D12LocalOnlineHeap__6B_;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 1;
  pTVar1 = ::operator_new(0x18);
  pTVar2 = pTVar3;
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Heap.Reference = (FD3D12DescriptorHeap *)0x0;
    (pTVar1->Item).SyncPoint.Reference = (FD3D12SyncPoint *)0x0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Heap.Reference = (FD3D12DescriptorHeap *)0x0;
    *(uint *)&(pTVar1->Item).SyncPoint.Reference = 0;
    pTVar2 = pTVar1;
  }
  (this->SyncPoints).Tail = (TNode *)pTVar2;
  (this->SyncPoints).Head = (TNode *)pTVar2;
  (this->Entry).Heap.Reference = (FD3D12DescriptorHeap *)0x0;
  (this->Entry).SyncPoint.Reference = (FD3D12SyncPoint *)0x0;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).Heap.Reference = (FD3D12DescriptorHeap *)0x0;
    (pTVar2->Item).SyncPoint.Reference = (FD3D12SyncPoint *)0x0;
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).Heap.Reference = (FD3D12DescriptorHeap *)0x0;
    (pTVar2->Item).SyncPoint.Reference = (FD3D12SyncPoint *)0x0;
    pTVar3 = pTVar2;
  }
  (this->ReclaimPool).Tail = pTVar3;
  (this->ReclaimPool).Head = pTVar3;
  this->DescriptorCache = param_1;
  this->Context = param_2;
  return this;
}

// ~FD3D12LocalOnlineHeap @ 1459ac910

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12LocalOnlineHeap::~FD3D12LocalOnlineHeap(FD3D12LocalOnlineHeap *this)

{
  int *piVar1;
  int iVar2;
  TNode *pTVar3;
  undefined8 *puVar4;
  
  pTVar3 = (this->ReclaimPool).Tail;
  while (pTVar3 != (TNode *)0x0) {
    (this->ReclaimPool).Tail = pTVar3->NextNode;
    FPoolEntry::~FPoolEntry(&pTVar3->Item);
    ::operator_delete(pTVar3,0x18);
    pTVar3 = (this->ReclaimPool).Tail;
  }
  FPoolEntry::~FPoolEntry(&this->Entry);
  TQueue<FD3D12LocalOnlineHeap::FSyncPointEntry,1>::
  ~TQueue<FD3D12LocalOnlineHeap::FSyncPointEntry,1>(&this->SyncPoints);
  this->_padding_ = (longlong)&___7FD3D12OnlineHeap__6B_;
  puVar4 = (undefined8 *)this->_padding_;
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  return;
}

// CloseCommandList @ 1459b7570

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12LocalOnlineHeap::CloseCommandList(FD3D12LocalOnlineHeap *this)

{
  longlong *plVar1;
  TNode *pTVar2;
  longlong lVar3;
  FD3D12SyncPoint *pFVar4;
  TNode *pTVar5;
  FD3D12SyncPoint *pFVar6;
  FD3D12SyncPoint *pFVar7;
  
  if ((int)this->_padding_ != 0) {
    pFVar4 = FD3D12ContextCommon::GetContextSyncPoint((FD3D12ContextCommon *)this->Context);
    pFVar7 = (FD3D12SyncPoint *)0x0;
    if (pFVar4 != (FD3D12SyncPoint *)0x0) {
      LOCK();
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
      UNLOCK();
      pFVar7 = pFVar4;
    }
    lVar3 = this->_padding_;
    pTVar5 = ::operator_new(0x18);
    if (pTVar5 != (TNode *)0x0) {
      pTVar5->NextNode = (TNode *)0x0;
      (pTVar5->Item).SyncPoint.Reference = pFVar7;
      if (pFVar7 != (FD3D12SyncPoint *)0x0) {
        LOCK();
        *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
        UNLOCK();
      }
      (pTVar5->Item).LastSlotInUse = (int)lVar3 - 1;
      pTVar2 = (this->SyncPoints).Head;
      (this->SyncPoints).Head = pTVar5;
      pTVar2->NextNode = pTVar5;
    }
    pFVar6 = FD3D12ContextCommon::GetContextSyncPoint((FD3D12ContextCommon *)this->Context);
    pFVar4 = (this->Entry).SyncPoint.Reference;
    if (pFVar4 != pFVar6) {
      (this->Entry).SyncPoint.Reference = pFVar6;
      if (pFVar6 != (FD3D12SyncPoint *)0x0) {
        LOCK();
        *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar4 != (FD3D12SyncPoint *)0x0) {
        plVar1 = &pFVar4->_padding_;
        LOCK();
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
    RecycleSlots(this);
    if (pFVar7 != (FD3D12SyncPoint *)0x0) {
      plVar1 = &pFVar7->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar7->_padding_)(pFVar7,1);
      }
    }
  }
  return;
}

// HeapLoopedAround @ 1459c3920

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12LocalOnlineHeap::HeapLoopedAround(FD3D12LocalOnlineHeap *this)

{
  if (*(char *)(this->_padding_ + 0x3c) == '\x01') {
    FD3D12ConservativeMap<FD3D12SamplerArrayDesc,D3D12_GPU_DESCRIPTOR_HANDLE>::Reset
              (&this->DescriptorCache->SamplerMap);
    return;
  }
  return;
}

// Init @ 1459c4620

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12LocalOnlineHeap::Init(FD3D12LocalOnlineHeap *this,uint param_1,ERHIDescriptorHeapType param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FD3D12DescriptorHeap *pFVar4;
  FName FVar5;
  undefined8 *puVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  FD3D12DescriptorHeap *pFVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_NumViewOnlineDescriptorHeaps> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_ViewOnlineDescriptorHeapMemory> FVar15;
  FThreadSafeStaticStat<FStat_STAT_NumSamplerOnlineDescriptorHeaps> FVar16;
  FThreadSafeStaticStat<FStat_STAT_SamplerOnlineDescriptorHeapMemory> FVar17;
  FThreadSafeStaticStat<FStat_STAT_D3D12MemoryCurrentTotal> FVar18;
  uint uVar19;
  wchar_t *pwVar20;
  uchar auVar21 [8];
  uchar auVar22 [8];
  FName local_res20;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FStatMessage local_a8;
  FStatMessage local_98;
  FStatMessage local_88;
  FStatMessage local_78;
  FStatMessage local_68;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38 [2];
  
  if (param_1 == 0) {
    puVar6 = (undefined8 *)this->_padding_;
    if (puVar6 != (undefined8 *)0x0) {
      this->_padding_ = 0;
      piVar2 = (int *)(puVar6 + 1);
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (piVar2 != (int *)0x0)) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
    pFVar4 = (this->Entry).Heap.Reference;
    if (pFVar4 == (FD3D12DescriptorHeap *)0x0) {
      return;
    }
    (this->Entry).Heap.Reference = (FD3D12DescriptorHeap *)0x0;
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 != 1) {
      return;
    }
    if (plVar1 == (longlong *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001459c4da7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar4->_padding_)(pFVar4,1);
    return;
  }
  pwVar20 = L"Thread Local - Online Sampler Heap";
  if (param_2 == Standard) {
    pwVar20 = L"Thread Local - Online View Heap";
  }
  if ((this->_padding_ == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar10 = FD3D12DescriptorHeapManager::AllocateHeap
                      ((FD3D12DescriptorHeapManager *)(this->_padding_ + 0x610),pwVar20,param_2,
                       param_1,GpuVisible);
  pFVar4 = (FD3D12DescriptorHeap *)this->_padding_;
  if (pFVar4 != pFVar10) {
    this->_padding_ = (longlong)pFVar10;
    if (pFVar10 != (FD3D12DescriptorHeap *)0x0) {
      LOCK();
      *(int *)&pFVar10->_padding_ = (int)pFVar10->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar4 != (FD3D12DescriptorHeap *)0x0) {
      plVar1 = &pFVar4->_padding_;
      LOCK();
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
  }
  pFVar4 = (FD3D12DescriptorHeap *)this->_padding_;
  pFVar10 = (this->Entry).Heap.Reference;
  if (pFVar10 != pFVar4) {
    (this->Entry).Heap.Reference = pFVar4;
    if (pFVar4 != (FD3D12DescriptorHeap *)0x0) {
      LOCK();
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar10 != (FD3D12DescriptorHeap *)0x0) {
      plVar1 = &pFVar10->_padding_;
      LOCK();
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar10->_padding_)(pFVar10,1);
      }
    }
  }
  if (param_2 == Standard) {
    FVar12 = StatPtr_STAT_NumViewOnlineDescriptorHeaps;
    if (StatPtr_STAT_NumViewOnlineDescriptorHeaps ==
        (FThreadSafeStaticStat<FStat_STAT_NumViewOnlineDescriptorHeaps>)0x0) {
      pFVar11 = ::FName::FName(&local_58,"STAT_NumViewOnlineDescriptorHeaps");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_NumViewOnlineDescriptorHeaps>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumViewOnlineDescriptorHeaps,
                          *pFVar11,L"View: Num descriptor heaps","STATGROUP_D3D12DescriptorHeap",
                          "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,
                          ST_int64,false,false,MCR_Invalid);
    }
    FVar5 = *(FName *)FVar12;
    local_res20 = FVar5;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      local_a8.NameAndInfo.Number = FVar5.Number & 0xffffafff | 0xa000;
      local_a8.StatData.Pad[0] = '\x01';
      local_a8.StatData.Pad[1] = '\0';
      local_a8.StatData.Pad[2] = '\0';
      local_a8.StatData.Pad[3] = '\0';
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_res20 = FVar5;
      local_a8.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar13,&local_a8);
      FStatsTrace::Add(&local_res20,1);
      if (pFVar13->ScopeCount == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
    uVar19 = *(int *)(this->_padding_ + 0x38) * *(int *)(this->_padding_ + 0x34);
    auVar22[4] = '\0';
    auVar22[5] = '\0';
    auVar22[6] = '\0';
    auVar22[7] = '\0';
    auVar22._0_4_ = uVar19;
    if (uVar19 == 0) goto LAB_1459c4bf2;
    FVar15 = StatPtr_STAT_ViewOnlineDescriptorHeapMemory;
    if (StatPtr_STAT_ViewOnlineDescriptorHeapMemory ==
        (FThreadSafeStaticStat<FStat_STAT_ViewOnlineDescriptorHeapMemory>)0x0) {
      pFVar11 = ::FName::FName(&local_50,"STAT_ViewOnlineDescriptorHeapMemory");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_ViewOnlineDescriptorHeapMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ViewOnlineDescriptorHeapMemory,
                          *pFVar11,L"View DescriptorHeap Memory (SRV, CBV, UAV)",
                          "STATGROUP_D3D12MemoryDetails","STATCAT_Advanced",
                          L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,MCR_GPUSystem)
      ;
    }
    FVar5 = *(FName *)FVar15;
    local_res20 = FVar5;
    if (((FVar5 == (FName)0x0) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_1459c4bf2;
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    local_98.NameAndInfo.Number = FVar5.Number & 0xffffafff | 0xa000;
    local_c8 = FVar5;
    local_98.StatData.Pad = auVar22;
    local_98.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar13,&local_98);
    pFVar11 = &local_c8;
  }
  else {
    FVar16 = StatPtr_STAT_NumSamplerOnlineDescriptorHeaps;
    if (StatPtr_STAT_NumSamplerOnlineDescriptorHeaps ==
        (FThreadSafeStaticStat<FStat_STAT_NumSamplerOnlineDescriptorHeaps>)0x0) {
      pFVar11 = ::FName::FName(&local_48,"STAT_NumSamplerOnlineDescriptorHeaps");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_NumSamplerOnlineDescriptorHeaps>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumSamplerOnlineDescriptorHeaps
                          ,*pFVar11,L"Sampler: Num descriptor heaps","STATGROUP_D3D12DescriptorHeap"
                          ,"STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,
                          ST_int64,false,false,MCR_Invalid);
    }
    FVar5 = *(FName *)FVar16;
    local_res20 = FVar5;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      local_88.NameAndInfo.Number = FVar5.Number & 0xffffafff | 0xa000;
      local_88.StatData.Pad[0] = '\x01';
      local_88.StatData.Pad[1] = '\0';
      local_88.StatData.Pad[2] = '\0';
      local_88.StatData.Pad[3] = '\0';
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_c0 = FVar5;
      local_88.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar13,&local_88);
      FStatsTrace::Add(&local_c0,1);
      if (pFVar13->ScopeCount == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
    uVar19 = *(int *)(this->_padding_ + 0x38) * *(int *)(this->_padding_ + 0x34);
    auVar22[4] = '\0';
    auVar22[5] = '\0';
    auVar22[6] = '\0';
    auVar22[7] = '\0';
    auVar22._0_4_ = uVar19;
    if (uVar19 == 0) goto LAB_1459c4bf2;
    FVar17 = StatPtr_STAT_SamplerOnlineDescriptorHeapMemory;
    if (StatPtr_STAT_SamplerOnlineDescriptorHeapMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SamplerOnlineDescriptorHeapMemory>)0x0) {
      pFVar11 = ::FName::FName(&local_40,"STAT_SamplerOnlineDescriptorHeapMemory");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_SamplerOnlineDescriptorHeapMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_SamplerOnlineDescriptorHeapMemory,*pFVar11,
                          L"Sampler DescriptorHeap Memory","STATGROUP_D3D12MemoryDetails",
                          "STATCAT_Advanced",L"D3D12RHI: Memory Details",true,false,ST_int64,false,
                          false,MCR_GPUSystem);
    }
    FVar5 = *(FName *)FVar17;
    local_res20 = FVar5;
    if (((FVar5 == (FName)0x0) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_1459c4bf2;
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    local_78.NameAndInfo.Number = FVar5.Number & 0xffffafff | 0xa000;
    local_b8 = FVar5;
    local_78.StatData.Pad = auVar22;
    local_78.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar13,&local_78);
    pFVar11 = &local_b8;
  }
  FStatsTrace::Add(pFVar11,(long64)auVar22);
  if (pFVar13->ScopeCount == 0) {
    FThreadStats::Flush(pFVar13,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(pFVar13,false,false);
  }
LAB_1459c4bf2:
  uVar19 = *(int *)(this->_padding_ + 0x38) * *(int *)(this->_padding_ + 0x34);
  auVar21[4] = '\0';
  auVar21[5] = '\0';
  auVar21[6] = '\0';
  auVar21[7] = '\0';
  auVar21._0_4_ = uVar19;
  if (uVar19 != 0) {
    FVar18 = StatPtr_STAT_D3D12MemoryCurrentTotal;
    if (StatPtr_STAT_D3D12MemoryCurrentTotal ==
        (FThreadSafeStaticStat<FStat_STAT_D3D12MemoryCurrentTotal>)0x0) {
      pFVar11 = ::FName::FName(local_38,"STAT_D3D12MemoryCurrentTotal");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_D3D12MemoryCurrentTotal>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12MemoryCurrentTotal,
                          *pFVar11,L"TOTAL","STATGROUP_D3D12Resources","STATCAT_Advanced",
                          L"D3D12RHI: Resources",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar5 = *(FName *)FVar18;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res20 = FVar5;
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      local_68.NameAndInfo.Number = FVar5.Number & 0xffffafff | 0xa000;
      local_b0 = FVar5;
      local_68.StatData.Pad = auVar21;
      local_68.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar13,&local_68);
      FStatsTrace::Add(&local_b0,(long64)auVar21);
      if (pFVar13->ScopeCount == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  return;
}

// OpenCommandList @ 1459c8da0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12LocalOnlineHeap::OpenCommandList(FD3D12LocalOnlineHeap *this)

{
  FSyncPointEntry *this_00;
  longlong *plVar1;
  TNode *pTVar2;
  FD3D12SyncPoint *pFVar3;
  TNode *pTVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  FD3D12SyncPoint *pFVar8;
  FD3D12SyncPoint *pFVar9;
  FD3D12SyncPoint *pFVar10;
  uint uVar11;
  FSyncPointEntry FStack_48;
  FSyncPointEntry FStack_38;
  
  pFVar10 = (FD3D12SyncPoint *)0x0;
  pFVar9 = pFVar10;
  while (pFVar8 = pFVar9, ((this->SyncPoints).Tail)->NextNode != (TNode *)0x0) {
    pTVar2 = ((this->SyncPoints).Tail)->NextNode;
    pFVar3 = (pTVar2->Item).SyncPoint.Reference;
    if (pFVar9 != pFVar3) {
      if (pFVar3 != (FD3D12SyncPoint *)0x0) {
        LOCK();
        *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
        UNLOCK();
      }
      pFVar8 = pFVar3;
      if (pFVar9 != (FD3D12SyncPoint *)0x0) {
        plVar1 = &pFVar9->_padding_;
        LOCK();
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          if (plVar1 == (longlong *)0x0) {
            pFVar9 = pFVar10;
          }
          if (pFVar9 != (FD3D12SyncPoint *)0x0) {
            (**(code **)pFVar9->_padding_)(pFVar9,1);
          }
        }
      }
    }
    uVar11 = (pTVar2->Item).LastSlotInUse;
    if ((pFVar8->GraphEvent).Reference == (FBaseGraphTask *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphEvent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Submission.h"
                         ,0x6d,
                         L"This sync point was not created with a CPU event. Cannot check completion on the CPU."
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (((pFVar8->GraphEvent).Reference)->field_0xd0 == '\0') break;
    pTVar2 = ((this->SyncPoints).Tail)->NextNode;
    pFVar9 = pFVar8;
    if (pTVar2 != (TNode *)0x0) {
      this_00 = &pTVar2->Item;
      if (&FStack_38 != this_00) {
        pFVar9 = (this_00->SyncPoint).Reference;
        (this_00->SyncPoint).Reference = (FD3D12SyncPoint *)0x0;
        if (pFVar8 != (FD3D12SyncPoint *)0x0) {
          plVar1 = &pFVar8->_padding_;
          LOCK();
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            if (plVar1 == (longlong *)0x0) {
              pFVar8 = pFVar10;
            }
            if (pFVar8 != (FD3D12SyncPoint *)0x0) {
              (**(code **)pFVar8->_padding_)(pFVar8,1);
            }
          }
        }
      }
      uVar11 = (pTVar2->Item).LastSlotInUse;
      pTVar4 = (this->SyncPoints).Tail;
      (this->SyncPoints).Tail = pTVar2;
      FStack_48.LastSlotInUse = 0;
      FStack_48._12_4_ = 0;
      FStack_48.SyncPoint.Reference = (FD3D12SyncPoint *)0x0;
      FSyncPointEntry::operator=(this_00,&FStack_48);
      if (FStack_48.SyncPoint.Reference != (FD3D12SyncPoint *)0x0) {
        plVar1 = &(FStack_48.SyncPoint.Reference)->_padding_;
        LOCK();
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)(FStack_48.SyncPoint.Reference)->_padding_)(FStack_48.SyncPoint.Reference,1);
        }
      }
      if (pTVar4 != (TNode *)0x0) {
        pFVar8 = (pTVar4->Item).SyncPoint.Reference;
        if (pFVar8 != (FD3D12SyncPoint *)0x0) {
          plVar1 = &pFVar8->_padding_;
          LOCK();
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
            (**(code **)pFVar8->_padding_)(pFVar8,1);
          }
        }
        ::operator_delete(pTVar4,0x18);
      }
    }
    *(uint *)((longlong)&this->_padding_ + 4) = uVar11 + 1;
  }
  if (pFVar8 != (FD3D12SyncPoint *)0x0) {
    plVar1 = &pFVar8->_padding_;
    LOCK();
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      if (plVar1 == (longlong *)0x0) {
        pFVar8 = pFVar10;
      }
      if (pFVar8 != (FD3D12SyncPoint *)0x0) {
        (**(code **)pFVar8->_padding_)(pFVar8,1);
      }
    }
  }
  return;
}

// RecycleSlots @ 1459d3170

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12LocalOnlineHeap::RecycleSlots(FD3D12LocalOnlineHeap *this)

{
  FSyncPointEntry *this_00;
  longlong *plVar1;
  TNode *pTVar2;
  FD3D12SyncPoint *pFVar3;
  TNode *pTVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  FD3D12SyncPoint *pFVar8;
  FD3D12SyncPoint *pFVar9;
  FD3D12SyncPoint *pFVar10;
  uint uVar11;
  FSyncPointEntry local_48;
  FSyncPointEntry local_38;
  
  pFVar10 = (FD3D12SyncPoint *)0x0;
  pFVar9 = pFVar10;
  while (pFVar8 = pFVar9, ((this->SyncPoints).Tail)->NextNode != (TNode *)0x0) {
    pTVar2 = ((this->SyncPoints).Tail)->NextNode;
    pFVar3 = (pTVar2->Item).SyncPoint.Reference;
    if (pFVar9 != pFVar3) {
      if (pFVar3 != (FD3D12SyncPoint *)0x0) {
        LOCK();
        *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
        UNLOCK();
      }
      pFVar8 = pFVar3;
      if (pFVar9 != (FD3D12SyncPoint *)0x0) {
        plVar1 = &pFVar9->_padding_;
        LOCK();
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          if (plVar1 == (longlong *)0x0) {
            pFVar9 = pFVar10;
          }
          if (pFVar9 != (FD3D12SyncPoint *)0x0) {
            (**(code **)pFVar9->_padding_)(pFVar9,1);
          }
        }
      }
    }
    uVar11 = (pTVar2->Item).LastSlotInUse;
    if ((pFVar8->GraphEvent).Reference == (FBaseGraphTask *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphEvent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Submission.h"
                         ,0x6d,
                         L"This sync point was not created with a CPU event. Cannot check completion on the CPU."
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (((pFVar8->GraphEvent).Reference)->field_0xd0 == '\0') break;
    pTVar2 = ((this->SyncPoints).Tail)->NextNode;
    pFVar9 = pFVar8;
    if (pTVar2 != (TNode *)0x0) {
      this_00 = &pTVar2->Item;
      if (&local_38 != this_00) {
        pFVar9 = (this_00->SyncPoint).Reference;
        (this_00->SyncPoint).Reference = (FD3D12SyncPoint *)0x0;
        if (pFVar8 != (FD3D12SyncPoint *)0x0) {
          plVar1 = &pFVar8->_padding_;
          LOCK();
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            if (plVar1 == (longlong *)0x0) {
              pFVar8 = pFVar10;
            }
            if (pFVar8 != (FD3D12SyncPoint *)0x0) {
              (**(code **)pFVar8->_padding_)(pFVar8,1);
            }
          }
        }
      }
      uVar11 = (pTVar2->Item).LastSlotInUse;
      pTVar4 = (this->SyncPoints).Tail;
      (this->SyncPoints).Tail = pTVar2;
      local_48.LastSlotInUse = 0;
      local_48._12_4_ = 0;
      local_48.SyncPoint.Reference = (FD3D12SyncPoint *)0x0;
      FSyncPointEntry::operator=(this_00,&local_48);
      if (local_48.SyncPoint.Reference != (FD3D12SyncPoint *)0x0) {
        plVar1 = &(local_48.SyncPoint.Reference)->_padding_;
        LOCK();
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)(local_48.SyncPoint.Reference)->_padding_)(local_48.SyncPoint.Reference,1);
        }
      }
      if (pTVar4 != (TNode *)0x0) {
        pFVar8 = (pTVar4->Item).SyncPoint.Reference;
        if (pFVar8 != (FD3D12SyncPoint *)0x0) {
          plVar1 = &pFVar8->_padding_;
          LOCK();
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
            (**(code **)pFVar8->_padding_)(pFVar8,1);
          }
        }
        ::operator_delete(pTVar4,0x18);
      }
    }
    *(uint *)((longlong)&this->_padding_ + 4) = uVar11 + 1;
  }
  if (pFVar8 != (FD3D12SyncPoint *)0x0) {
    plVar1 = &pFVar8->_padding_;
    LOCK();
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      if (plVar1 == (longlong *)0x0) {
        pFVar8 = pFVar10;
      }
      if (pFVar8 != (FD3D12SyncPoint *)0x0) {
        (**(code **)pFVar8->_padding_)(pFVar8,1);
      }
    }
  }
  return;
}

// RollOver @ 1459d7260

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

bool __thiscall FD3D12LocalOnlineHeap::RollOver(FD3D12LocalOnlineHeap *this)

{
  longlong *plVar1;
  ERHIDescriptorHeapType EVar2;
  FD3D12SyncPoint *pFVar3;
  FD3D12DescriptorHeap *pFVar4;
  TNode *pTVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 uVar9;
  FD3D12SyncPoint *pFVar10;
  TNode *pTVar11;
  FD3D12DescriptorHeap *pFVar12;
  TStatId TVar13;
  uint uVar14;
  wchar_t *pwVar15;
  FPoolEntry local_50;
  
  pFVar10 = FD3D12ContextCommon::GetContextSyncPoint((FD3D12ContextCommon *)this->Context);
  pFVar3 = (this->Entry).SyncPoint.Reference;
  if (pFVar3 != pFVar10) {
    (this->Entry).SyncPoint.Reference = pFVar10;
    if (pFVar10 != (FD3D12SyncPoint *)0x0) {
      LOCK();
      *(int *)&pFVar10->_padding_ = (int)pFVar10->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar3 != (FD3D12SyncPoint *)0x0) {
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)();
      }
    }
  }
  pTVar11 = ::operator_new(0x18);
  if (pTVar11 != (TNode *)0x0) {
    pTVar11->NextNode = (TNode *)0x0;
    (pTVar11->Item).Heap.Reference = (FD3D12DescriptorHeap *)0x0;
    pFVar4 = (this->Entry).Heap.Reference;
    (pTVar11->Item).Heap.Reference = pFVar4;
    if (pFVar4 != (FD3D12DescriptorHeap *)0x0) {
      LOCK();
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
      UNLOCK();
    }
    (pTVar11->Item).SyncPoint.Reference = (FD3D12SyncPoint *)0x0;
    pFVar3 = (this->Entry).SyncPoint.Reference;
    (pTVar11->Item).SyncPoint.Reference = pFVar3;
    if (pFVar3 != (FD3D12SyncPoint *)0x0) {
      LOCK();
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
      UNLOCK();
    }
    pTVar5 = (this->ReclaimPool).Head;
    (this->ReclaimPool).Head = pTVar11;
    pTVar5->NextNode = pTVar11;
  }
  if (((this->ReclaimPool).Tail)->NextNode != (TNode *)0x0) {
    pTVar11 = ((this->ReclaimPool).Tail)->NextNode;
    pFVar4 = (this->Entry).Heap.Reference;
    pFVar12 = (pTVar11->Item).Heap.Reference;
    if (pFVar4 != pFVar12) {
      (this->Entry).Heap.Reference = pFVar12;
      if (pFVar12 != (FD3D12DescriptorHeap *)0x0) {
        LOCK();
        *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar4 != (FD3D12DescriptorHeap *)0x0) {
        plVar1 = &pFVar4->_padding_;
        LOCK();
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar4->_padding_)();
        }
      }
    }
    pFVar3 = (pTVar11->Item).SyncPoint.Reference;
    pFVar10 = (this->Entry).SyncPoint.Reference;
    if (pFVar10 != pFVar3) {
      (this->Entry).SyncPoint.Reference = pFVar3;
      if (pFVar3 != (FD3D12SyncPoint *)0x0) {
        LOCK();
        *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar10 != (FD3D12SyncPoint *)0x0) {
        plVar1 = &pFVar10->_padding_;
        LOCK();
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar10->_padding_)();
        }
      }
    }
    bVar8 = FD3D12SyncPoint::IsComplete((this->Entry).SyncPoint.Reference);
    if (bVar8) {
      pTVar11 = ((this->ReclaimPool).Tail)->NextNode;
      if (pTVar11 != (TNode *)0x0) {
        FPoolEntry::operator=(&this->Entry,&pTVar11->Item);
        pTVar5 = (this->ReclaimPool).Tail;
        (this->ReclaimPool).Tail = pTVar11;
        local_50.Heap.Reference = (FD3D12DescriptorHeap *)0x0;
        local_50.SyncPoint.Reference = (FD3D12SyncPoint *)0x0;
        FPoolEntry::operator=(&pTVar11->Item,&local_50);
        if (local_50.SyncPoint.Reference != (FD3D12SyncPoint *)0x0) {
          plVar1 = &(local_50.SyncPoint.Reference)->_padding_;
          LOCK();
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
            (**(code **)(local_50.SyncPoint.Reference)->_padding_)();
          }
        }
        if (local_50.Heap.Reference != (FD3D12DescriptorHeap *)0x0) {
          FThreadSafeRefCountedObject::Release
                    ((FThreadSafeRefCountedObject *)local_50.Heap.Reference);
        }
        if (pTVar5 != (TNode *)0x0) {
          FPoolEntry::~FPoolEntry(&pTVar5->Item);
          ::operator_delete(pTVar5,0x18);
        }
      }
      pFVar4 = (this->Entry).Heap.Reference;
      pFVar12 = (FD3D12DescriptorHeap *)this->_padding_;
      if (pFVar12 != pFVar4) {
        this->_padding_ = (longlong)pFVar4;
        if (pFVar4 != (FD3D12DescriptorHeap *)0x0) {
          LOCK();
          *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
          UNLOCK();
        }
        if (pFVar12 != (FD3D12DescriptorHeap *)0x0) {
          FThreadSafeRefCountedObject::Release((FThreadSafeRefCountedObject *)pFVar12);
        }
      }
      goto LAB_1459d76cb;
    }
  }
  if (4 < (byte)LogD3D12RHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  pwVar15 = L"Thread Local - Online Sampler Heap";
  EVar2 = *(ERHIDescriptorHeapType *)(this->_padding_ + 0x3c);
  uVar14 = *(uint *)(this->_padding_ + 0x34);
  if (EVar2 == Standard) {
    pwVar15 = L"Thread Local - Online View Heap";
  }
  if (this->_padding_ == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
  }
  pFVar12 = FD3D12DescriptorHeapManager::AllocateHeap
                      ((FD3D12DescriptorHeapManager *)(this->_padding_ + 0x610),pwVar15,EVar2,uVar14
                       ,GpuVisible);
  pFVar4 = (FD3D12DescriptorHeap *)this->_padding_;
  if (pFVar4 != pFVar12) {
    this->_padding_ = (longlong)pFVar12;
    if (pFVar12 != (FD3D12DescriptorHeap *)0x0) {
      LOCK();
      *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar4 != (FD3D12DescriptorHeap *)0x0) {
      plVar1 = &pFVar4->_padding_;
      LOCK();
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
  }
  if (EVar2 == Standard) {
    TVar13 = FThreadSafeStaticStatInner<FStat_STAT_NumViewOnlineDescriptorHeaps,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_NumViewOnlineDescriptorHeaps,1> *)
                        &StatPtr_STAT_NumViewOnlineDescriptorHeaps);
    FThreadStats::AddMessage<__int64>(*(FName *)(TVar13.StatIdPtr)->Name,Add,1,false);
    uVar14 = *(int *)(this->_padding_ + 0x38) * *(int *)(this->_padding_ + 0x34);
    if (uVar14 != 0) {
      TVar13 = FThreadSafeStaticStatInner<FStat_STAT_ViewOnlineDescriptorHeapMemory,1>::GetStatId
                         ((FThreadSafeStaticStatInner<FStat_STAT_ViewOnlineDescriptorHeapMemory,1> *
                          )&StatPtr_STAT_ViewOnlineDescriptorHeapMemory);
LAB_1459d760f:
      FThreadStats::AddMessage<__int64>
                (*(FName *)(TVar13.StatIdPtr)->Name,Add,(ulonglong)uVar14,false);
    }
  }
  else {
    TVar13 = FThreadSafeStaticStatInner<FStat_STAT_NumSamplerOnlineDescriptorHeaps,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_NumSamplerOnlineDescriptorHeaps,1> *)
                        &StatPtr_STAT_NumSamplerOnlineDescriptorHeaps);
    FThreadStats::AddMessage<__int64>(*(FName *)(TVar13.StatIdPtr)->Name,Add,1,false);
    uVar14 = *(int *)(this->_padding_ + 0x38) * *(int *)(this->_padding_ + 0x34);
    if (uVar14 != 0) {
      TVar13 = FThreadSafeStaticStatInner<FStat_STAT_SamplerOnlineDescriptorHeapMemory,1>::GetStatId
                         ((FThreadSafeStaticStatInner<FStat_STAT_SamplerOnlineDescriptorHeapMemory,1>
                           *)&StatPtr_STAT_SamplerOnlineDescriptorHeapMemory);
      goto LAB_1459d760f;
    }
  }
  uVar14 = *(int *)(this->_padding_ + 0x38) * *(int *)(this->_padding_ + 0x34);
  if (uVar14 != 0) {
    TVar13 = FThreadSafeStaticStatInner<FStat_STAT_D3D12MemoryCurrentTotal,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_D3D12MemoryCurrentTotal,1> *)
                        &StatPtr_STAT_D3D12MemoryCurrentTotal);
    FThreadStats::AddMessage<__int64>
              (*(FName *)(TVar13.StatIdPtr)->Name,Add,(ulonglong)uVar14,false);
  }
  pFVar4 = (FD3D12DescriptorHeap *)this->_padding_;
  pFVar12 = (this->Entry).Heap.Reference;
  if (pFVar12 != pFVar4) {
    (this->Entry).Heap.Reference = pFVar4;
    if (pFVar4 != (FD3D12DescriptorHeap *)0x0) {
      LOCK();
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar12 != (FD3D12DescriptorHeap *)0x0) {
      plVar1 = &pFVar12->_padding_;
      LOCK();
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar12->_padding_)();
      }
    }
  }
LAB_1459d76cb:
  this->_padding_ = 0;
  bVar8 = FD3D12DescriptorCache::SetDescriptorHeaps(this->DescriptorCache,None);
  return bVar8;
}


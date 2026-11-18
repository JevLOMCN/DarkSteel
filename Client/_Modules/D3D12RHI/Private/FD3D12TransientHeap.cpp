// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// FD3D12TransientHeap @ 145a8f760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12TransientHeap * __thiscall
FD3D12TransientHeap::FD3D12TransientHeap
          (FD3D12TransientHeap *this,FInitializer *param_1,FD3D12Adapter *param_2,
          FD3D12Device *param_3,FRHIGPUMask param_4)

{
  longlong *plVar1;
  ERHITransientHeapFlags EVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FName FVar6;
  bool bVar7;
  longlong lVar8;
  FName FVar9;
  int iVar10;
  TEventRef<unsigned_int> TVar11;
  ID3D12Device *pIVar12;
  FLowLevelMemTracker *this_00;
  FD3D12Heap *pFVar13;
  FD3D12Heap *pFVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_D3D12TransientHeaps> FVar16;
  FThreadStats *pFVar17;
  FThreadStatsPool *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_D3D12MemoryCurrentTotal> FVar19;
  FWriteBuffer *pFVar20;
  undefined1 auStackY_128 [32];
  FName local_c8 [2];
  ID3D12Pageable *local_b8;
  FName local_b0;
  FLLMScope local_a8 [2];
  FInitializer *local_a0;
  FStatMessage local_98;
  FName local_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_74;
  uint local_70;
  undefined4 local_6c;
  undefined8 local_68;
  uint local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_b0 = (FName)param_2;
  local_a0 = param_1;
  FRHITransientHeap::FRHITransientHeap((FRHITransientHeap *)this,param_1);
  *(undefined4 *)&this->_padding_ = 1;
  pFVar14 = (FD3D12Heap *)0x0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FRHITransientHeap__;
  this->_padding_ = (longlong)&_vftable__for__FRefCountBase__;
  (this->Heap).Reference = (FD3D12Heap *)0x0;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_c8[0].ComparisonIndex.Value = 0;
    local_c8[0].Number = 0;
    TVar11 = (TEventRef<unsigned_int>)local_c8;
  }
  else {
    FLazyName::Resolve(&D3D12TransientHeapName);
    TVar11 = FStringTrace::GetNameRef((FName *)&local_98);
  }
  uVar3 = *(undefined8 *)TVar11;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_c8[0].ComparisonIndex.Value = 0;
    local_c8[0].Number = 0;
    TVar11 = (TEventRef<unsigned_int>)local_c8;
  }
  else {
    FLazyName::Resolve(&D3D12TransientHeapName);
    TVar11 = FStringTrace::GetNameRef((FName *)&local_98);
  }
  uVar4 = *(undefined8 *)TVar11;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_c8[0].ComparisonIndex.Value = 0;
    local_c8[0].Number = 0;
    TVar11 = (TEventRef<unsigned_int>)local_c8;
  }
  else {
    local_c8[0].ComparisonIndex.Value = 0;
    local_c8[0].Number = 0;
    TVar11 = FStringTrace::GetNameRef((FName *)&local_98);
  }
  uVar5 = *(undefined8 *)TVar11;
  bVar7 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_98);
    bVar7 = true;
    *(int *)local_98.StatData.Pad = (int)uVar3;
    *(int *)((longlong)local_98.StatData.Pad + 4) = (int)uVar4;
    *(int *)((longlong)local_98.StatData.Pad + 8) = (int)uVar5;
    *(undefined8 *)((longlong)local_98.NameAndInfo + 0x28) =
         *(undefined8 *)((longlong)local_98.NameAndInfo + 0x20);
  }
  FVar9 = local_b0;
  EVar2 = local_a0->Flags;
  local_60 = 0;
  if (EVar2 != AllowAll) {
    if (EVar2 == AllowBuffers) {
      local_60 = 0xc0;
    }
    else if (EVar2 == AllowTextures) {
      local_60 = 0x44;
    }
    else {
      local_60 = 0;
      if (EVar2 == AllowRenderTargets) {
        local_60 = 0x84;
      }
    }
  }
  local_6c = 0;
  local_88 = (FName)local_a0->Size;
  local_74 = 1 << ((byte)*(undefined4 *)&param_3->field_0x8 & 0x1f);
  if (GVirtualMGPU != 0) {
    local_74 = 1;
  }
  local_5c = 0;
  local_70 = param_4.GPUMask;
  if (GVirtualMGPU != 0) {
    local_70 = 1;
  }
  local_80 = 1;
  local_78 = 0;
  local_68 = 0x400000;
  if (*(bool *)((longlong)local_b0 + 0xc6) != false) {
    local_60 = local_60 | 0x1000;
  }
  local_b8 = (ID3D12Pageable *)0x0;
  pIVar12 = FD3D12Device::GetDevice(param_3);
  FLLMScope::FLLMScope(local_a8,GraphicsPlatform,false,None,Platform,true);
  iVar10 = (**(code **)((longlong)*pIVar12 + 0xe0))
                     (pIVar12,&local_88,&_GUID_6b3b2502_6e51_45b3_90ee_9884265e8df3,&local_b8);
  if (iVar10 < 0) {
    local_98.StatData.Pad = (uchar  [8])0x0;
    local_98.NameAndInfo.Index.Value = 0;
    local_98.NameAndInfo.Number = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar10,"D3DDevice->CreateHeap(&Desc, IID_PPV_ARGS(&D3DHeap))",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12TransientResourceAllocator.cpp"
               ,0x38,(ID3D12Device *)0x0,(FString *)&local_98);
  }
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    this_00 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this_00 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelAlloc
              (this_00,Platform,local_b8,(ulong64)local_88,GraphicsPlatform,None,true);
  }
  MemoryTrace_Alloc((ulong64)local_b8,(ulong64)local_88,0,1,0);
  local_c8[0].ComparisonIndex.Value = 0;
  local_c8[0].Number = 0;
  iVar10 = (**(code **)*pIVar12)(pIVar12,&_GUID_8b4f173b_2fea_4b80_8f58_4307191ab95d,local_c8);
  if (-1 < iVar10) {
    FD3D12Adapter::SetResidencyPriority
              ((FD3D12Adapter *)FVar9,local_b8,D3D12_RESIDENCY_PRIORITY_HIGH,
               *(uint *)&param_3->field_0x8);
  }
  if (local_c8[0] != (FName)0x0) {
    (**(code **)(*(longlong *)local_c8[0] + 0x10))();
  }
  FLLMScope::~FLLMScope(local_a8);
  pFVar13 = ::operator_new(0x88);
  if (pFVar13 != (FD3D12Heap *)0x0) {
    pFVar14 = FD3D12Heap::FD3D12Heap(pFVar13,param_3,param_4,1);
  }
  pFVar13 = (this->Heap).Reference;
  if (pFVar13 != pFVar14) {
    (this->Heap).Reference = pFVar14;
    if (pFVar14 != (FD3D12Heap *)0x0) {
      LOCK();
      *(int *)&pFVar14->_padding_ = (int)pFVar14->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar13 != (FD3D12Heap *)0x0) {
      plVar1 = &pFVar13->_padding_;
      LOCK();
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar13->_padding_)(pFVar13,1);
      }
    }
  }
  FD3D12Heap::SetHeap((this->Heap).Reference,(ID3D12Heap *)local_b8,
                      L"TransientResourceAllocator Backing Heap",true,true);
  ((this->Heap).Reference)->bIsTransient = true;
  FD3D12Heap::DisallowTrackingResidency((this->Heap).Reference);
  FVar9 = local_88;
  if (local_88 != (FName)0x0) {
    FVar16 = StatPtr_STAT_D3D12TransientHeaps;
    if (StatPtr_STAT_D3D12TransientHeaps ==
        (FThreadSafeStaticStat<FStat_STAT_D3D12TransientHeaps>)0x0) {
      pFVar15 = ::FName::FName((FName *)&local_98,"STAT_D3D12TransientHeaps");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_D3D12TransientHeaps>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12TransientHeaps,*pFVar15,
                          L"Transient Heaps","STATGROUP_D3D12Resources","STATCAT_Advanced",
                          L"D3D12RHI: Resources",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar6 = *(FName *)FVar16;
    local_c8[0] = FVar6;
    if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar17 == (FThreadStats *)0x0) {
        pFVar18 = FThreadStatsPool::Get();
        pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
      }
      local_98.StatData.Pad = (uchar  [8])FVar9;
      local_98.NameAndInfo =
           (FStatNameAndInfo)((ulonglong)FVar6 & 0xffffafffffffffff | 0xa00000000000);
      local_b0 = FVar6;
      FThreadStats::AddStatMessage(pFVar17,&local_98);
      FStatsTrace::Add(&local_b0,(long64)FVar9);
      if (pFVar17->ScopeCount == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
  FVar9 = local_88;
  if (local_88 != (FName)0x0) {
    FVar19 = StatPtr_STAT_D3D12MemoryCurrentTotal;
    if (StatPtr_STAT_D3D12MemoryCurrentTotal ==
        (FThreadSafeStaticStat<FStat_STAT_D3D12MemoryCurrentTotal>)0x0) {
      pFVar15 = ::FName::FName((FName *)&local_98,"STAT_D3D12MemoryCurrentTotal");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_D3D12MemoryCurrentTotal>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12MemoryCurrentTotal,
                          *pFVar15,L"TOTAL","STATGROUP_D3D12Resources","STATCAT_Advanced",
                          L"D3D12RHI: Resources",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar6 = *(FName *)FVar19;
    local_c8[0] = FVar6;
    if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar17 == (FThreadStats *)0x0) {
        pFVar18 = FThreadStatsPool::Get();
        pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
      }
      local_98.StatData.Pad = (uchar  [8])FVar9;
      local_98.NameAndInfo =
           (FStatNameAndInfo)((ulonglong)FVar6 & 0xffffafffffffffff | 0xa00000000000);
      local_b0 = FVar6;
      FThreadStats::AddStatMessage(pFVar17,&local_98);
      FStatsTrace::Add(&local_b0,(long64)FVar9);
      if (pFVar17->ScopeCount == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
  if (bVar7) {
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar8 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar20 = *(FWriteBuffer **)(lVar8 + 0x20);
    if ((int)pFVar20 - *(int *)&pFVar20->Cursor < 1) {
      pFVar20 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar20->Cursor = '\n';
    pFVar20->Cursor = pFVar20->Cursor + 1;
    pFVar20->Committed = pFVar20->Cursor;
  }
  return this;
}

// ~FD3D12TransientHeap @ 145a94c60

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D12TransientHeap::~FD3D12TransientHeap(FD3D12TransientHeap *this)

{
  longlong *plVar1;
  FD3D12Heap *pFVar2;
  uchar auVar3 [8];
  FName FVar4;
  longlong lVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_D3D12TransientHeaps> FVar7;
  FThreadStats *pFVar8;
  FThreadStatsPool *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_D3D12MemoryCurrentTotal> FVar10;
  FLowLevelMemTracker *this_00;
  FName local_res8;
  FStatMessage local_68 [4];
  
  this->_padding_ = (longlong)&_vftable__for__FRHITransientHeap__;
  this->_padding_ = (longlong)&_vftable__for__FRefCountBase__;
  pFVar2 = (this->Heap).Reference;
  if (pFVar2 != (FD3D12Heap *)0x0) {
    auVar3 = (uchar  [8])(pFVar2->HeapDesc).SizeInBytes;
    if (auVar3 != (uchar  [8])0x0) {
      FVar7 = StatPtr_STAT_D3D12TransientHeaps;
      if (StatPtr_STAT_D3D12TransientHeaps ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12TransientHeaps>)0x0) {
        pFVar6 = ::FName::FName(&local_res8,"STAT_D3D12TransientHeaps");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_D3D12TransientHeaps>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12TransientHeaps,*pFVar6,
                           L"Transient Heaps","STATGROUP_D3D12Resources","STATCAT_Advanced",
                           L"D3D12RHI: Resources",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar4 = *(FName *)FVar7;
      local_res8 = FVar4;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar8 == (FThreadStats *)0x0) {
          pFVar9 = FThreadStatsPool::Get();
          pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
        }
        local_68[0].NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
        local_res8 = FVar4;
        local_68[0].StatData.Pad = auVar3;
        local_68[0].NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar8,local_68);
        FStatsTrace::Add(&local_res8,-(longlong)auVar3);
        if (pFVar8->ScopeCount == 0) {
          FThreadStats::Flush(pFVar8,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar8,false,false);
        }
      }
      if (auVar3 != (uchar  [8])0x0) {
        FVar10 = StatPtr_STAT_D3D12MemoryCurrentTotal;
        if (StatPtr_STAT_D3D12MemoryCurrentTotal ==
            (FThreadSafeStaticStat<FStat_STAT_D3D12MemoryCurrentTotal>)0x0) {
          pFVar6 = ::FName::FName(&local_res8,"STAT_D3D12MemoryCurrentTotal");
          FVar10 = (FThreadSafeStaticStat<FStat_STAT_D3D12MemoryCurrentTotal>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12MemoryCurrentTotal,
                              *pFVar6,L"TOTAL","STATGROUP_D3D12Resources","STATCAT_Advanced",
                              L"D3D12RHI: Resources",true,false,ST_int64,false,false,MCR_Physical);
        }
        FVar4 = *(FName *)FVar10;
        local_res8 = FVar4;
        if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar8 == (FThreadStats *)0x0) {
            pFVar9 = FThreadStatsPool::Get();
            pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
          }
          local_68[0].NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
          local_res8 = FVar4;
          local_68[0].StatData.Pad = auVar3;
          local_68[0].NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar8,local_68);
          FStatsTrace::Add(&local_res8,-(longlong)auVar3);
          if (pFVar8->ScopeCount == 0) {
            FThreadStats::Flush(pFVar8,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar8,false,false);
          }
        }
      }
    }
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree
                (this_00,Platform,(((this->Heap).Reference)->Heap).Reference,None,true);
    }
    MemoryTrace_Free((ulong64)(((this->Heap).Reference)->Heap).Reference,1,0);
    FD3D12Heap::DeferDelete((this->Heap).Reference);
  }
  pFVar2 = (this->Heap).Reference;
  if (pFVar2 != (FD3D12Heap *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  FD3D12LinkedAdapterObject<FD3D12TransientHeap>::~FD3D12LinkedAdapterObject<FD3D12TransientHeap>
            ((FD3D12LinkedAdapterObject<FD3D12TransientHeap> *)&this->_padding_);
  TRHITransientResourceCache<FRHITransientBuffer>::~TRHITransientResourceCache<FRHITransientBuffer>
            ((TRHITransientResourceCache<FRHITransientBuffer> *)&this->_padding_);
  TRHITransientResourceCache<FRHITransientTexture>::
  ~TRHITransientResourceCache<FRHITransientTexture>
            ((TRHITransientResourceCache<FRHITransientTexture> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}


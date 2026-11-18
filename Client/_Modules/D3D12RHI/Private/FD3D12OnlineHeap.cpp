// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 9

// FD3D12OnlineHeap @ 1459a9cc0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12OnlineHeap * __thiscall
FD3D12OnlineHeap::FD3D12OnlineHeap(FD3D12OnlineHeap *this,FD3D12Device *param_1,bool param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FD3D12OnlineHeap__6B_;
  (this->Heap).Reference = (FD3D12DescriptorHeap *)0x0;
  this->NextSlotIndex = 0;
  this->FirstUsedSlot = 0;
  this->bCanLoopAround = param_2;
  return this;
}

// ~FD3D12OnlineHeap @ 1459aca00

void __thiscall FD3D12OnlineHeap::~FD3D12OnlineHeap(FD3D12OnlineHeap *this)

{
  longlong *plVar1;
  FD3D12DescriptorHeap *pFVar2;
  longlong lVar3;
  
  this->_padding_ = (longlong)&___7FD3D12OnlineHeap__6B_;
  pFVar2 = (this->Heap).Reference;
  if (pFVar2 != (FD3D12DescriptorHeap *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001459aca32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

// CanReserveSlots @ 1459b4350

bool __thiscall FD3D12OnlineHeap::CanReserveSlots(FD3D12OnlineHeap *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x28))();
  if (param_1 == 0) {
    return true;
  }
  if (param_1 <= uVar1) {
    return this->NextSlotIndex + param_1 <= uVar1;
  }
  return false;
}

// CloseCommandList @ 1459b7670

void __thiscall FD3D12OnlineHeap::CloseCommandList(FD3D12OnlineHeap *this)

{
  return;
}

// GetTotalSize @ 1459c3610

uint __thiscall FD3D12OnlineHeap::GetTotalSize(FD3D12OnlineHeap *this)

{
  return ((this->Heap).Reference)->NumDescriptors;
}

// HeapLoopedAround @ 1459c3950

void __thiscall FD3D12OnlineHeap::HeapLoopedAround(FD3D12OnlineHeap *this)

{
  return;
}

// OpenCommandList @ 1459c8db0

void __thiscall FD3D12OnlineHeap::OpenCommandList(FD3D12OnlineHeap *this)

{
  return;
}

// ReserveSlots @ 1459d6320

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FD3D12OnlineHeap::ReserveSlots(FD3D12OnlineHeap *this,uint param_1)

{
  uint *puVar1;
  ERHIDescriptorHeapType EVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_NumReservedViewOnlineDescriptors> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_NumReservedSamplerOnlineDescriptors> FVar11;
  uint uVar12;
  uchar auVar13 [8];
  FName local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_68;
  FStatMessage local_60;
  FStatMessage local_50;
  
  auVar13[4] = '\0';
  auVar13[5] = '\0';
  auVar13[6] = '\0';
  auVar13[7] = '\0';
  auVar13._0_4_ = param_1;
  EVar2 = ((this->Heap).Reference)->Type;
  uVar6 = (**(code **)(this->_padding_ + 0x28))();
  if ((uVar6 < param_1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumSlotsRequested <= HeapSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                         ,0x3c9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar7 = (**(code **)(this->_padding_ + 0x28))(this);
  puVar1 = &this->NextSlotIndex;
  if ((param_1 != 0) &&
     (((uVar7 < param_1 || (uVar7 < *puVar1 + param_1)) &&
      (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("CanReserveSlots(NumSlotsRequested)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                          ,0x3cc,L""), bVar5)))) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar7 = *puVar1;
  uVar12 = uVar7 + param_1;
  if ((this->bCanLoopAround != false) && (uVar6 < uVar12)) {
    uVar7 = 0;
    this->FirstUsedSlot = param_1;
    (**(code **)(this->_padding_ + 0x10))(this);
    uVar12 = param_1;
  }
  *puVar1 = uVar12;
  if (auVar13 == (uchar  [8])0x0) {
    return uVar7;
  }
  if (EVar2 == Standard) {
    if (FThreadStats::bPrimaryEnable == false) {
      return uVar7;
    }
    FVar9 = StatPtr_STAT_NumReservedViewOnlineDescriptors;
    if (StatPtr_STAT_NumReservedViewOnlineDescriptors ==
        (FThreadSafeStaticStat<FStat_STAT_NumReservedViewOnlineDescriptors>)0x0) {
      pFVar8 = ::FName::FName(&local_res20,"STAT_NumReservedViewOnlineDescriptors");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_NumReservedViewOnlineDescriptors>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumReservedViewOnlineDescriptors
                         ,*pFVar8,L"View: Num reserved descriptors","STATGROUP_D3D12DescriptorHeap",
                         "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,true,
                         ST_int64,false,false,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar9;
    if (FVar3 == (FName)0x0) {
      return uVar7;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return uVar7;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return uVar7;
    }
    local_res8[0] = FVar3;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar10 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar10);
    }
    local_60.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
    local_res8[0] = FVar3;
    local_60.StatData.Pad = auVar13;
    local_60.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_60);
    pFVar8 = local_res8;
  }
  else {
    if (FThreadStats::bPrimaryEnable == false) {
      return uVar7;
    }
    FVar11 = StatPtr_STAT_NumReservedSamplerOnlineDescriptors;
    if (StatPtr_STAT_NumReservedSamplerOnlineDescriptors ==
        (FThreadSafeStaticStat<FStat_STAT_NumReservedSamplerOnlineDescriptors>)0x0) {
      pFVar8 = ::FName::FName(&local_68,"STAT_NumReservedSamplerOnlineDescriptors");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_NumReservedSamplerOnlineDescriptors>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_NumReservedSamplerOnlineDescriptors,*pFVar8,
                          L"Sampler: Num reserved descriptors","STATGROUP_D3D12DescriptorHeap",
                          "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,true,
                          ST_int64,false,false,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar11;
    if (FVar3 == (FName)0x0) {
      return uVar7;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return uVar7;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return uVar7;
    }
    local_res8[0] = FVar3;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar10 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar10);
    }
    local_50.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
    local_res18 = FVar3;
    local_50.StatData.Pad = auVar13;
    local_50.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_50);
    pFVar8 = &local_res18;
  }
  FStatsTrace::Add(pFVar8,(long64)auVar13);
  if (this_00->ScopeCount == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
  return uVar7;
}

// SetNextSlot @ 1459d8030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D12OnlineHeap::SetNextSlot(FD3D12OnlineHeap *this,uint param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_NumReservedSamplerOnlineDescriptors> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar6 [8];
  FName local_res8;
  FName local_res18 [2];
  FStatMessage local_38;
  
  if ((this->NextSlotIndex < param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextSlot <= NextSlotIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                         ,0x3f5,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((((this->Heap).Reference)->Type == Standard) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Heap->GetType() != ERHIDescriptorHeapType::Standard",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                         ,0x3f7,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  auVar6._0_4_ = this->NextSlotIndex - param_1;
  auVar6[4] = '\0';
  auVar6[5] = '\0';
  auVar6[6] = '\0';
  auVar6[7] = '\0';
  if ((auVar6._0_4_ != 0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar5 = StatPtr_STAT_NumReservedSamplerOnlineDescriptors;
    if (StatPtr_STAT_NumReservedSamplerOnlineDescriptors ==
        (FThreadSafeStaticStat<FStat_STAT_NumReservedSamplerOnlineDescriptors>)0x0) {
      pFVar4 = ::FName::FName(local_res18,"STAT_NumReservedSamplerOnlineDescriptors");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_NumReservedSamplerOnlineDescriptors>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_NumReservedSamplerOnlineDescriptors,*pFVar4,
                         L"Sampler: Num reserved descriptors","STATGROUP_D3D12DescriptorHeap",
                         "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,true,
                         ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar5;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar6;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar6);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  this->NextSlotIndex = param_1;
  return;
}


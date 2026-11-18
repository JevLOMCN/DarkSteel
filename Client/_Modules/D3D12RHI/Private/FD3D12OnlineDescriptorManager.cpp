// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 7

// FD3D12OnlineDescriptorManager @ 1459eeb30

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12OnlineDescriptorManager * __thiscall
FD3D12OnlineDescriptorManager::FD3D12OnlineDescriptorManager
          (FD3D12OnlineDescriptorManager *this,FD3D12Device *param_1)

{
  TNode *pTVar1;
  
  *(FD3D12Device **)this = param_1;
  *(undefined8 *)&this->Heaps = 0;
  *(undefined8 *)&(this->Heaps).field_0x8 = 0;
  pTVar1 = ::operator_new(0x10);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    pTVar1->Item = (FD3D12OnlineDescriptorBlock *)0x0;
    pTVar1->NextNode = (TNode *)0x0;
  }
  (this->FreeBlocks).Tail = pTVar1;
  (this->FreeBlocks).Head = pTVar1;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  return this;
}

// ~FD3D12OnlineDescriptorManager @ 1459f8590

void __thiscall
FD3D12OnlineDescriptorManager::~FD3D12OnlineDescriptorManager(FD3D12OnlineDescriptorManager *this)

{
  TNode *pTVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  pTVar1 = (this->FreeBlocks).Tail;
  while (pTVar1 != (TNode *)0x0) {
    (this->FreeBlocks).Tail = pTVar1->NextNode;
    ::operator_delete(pTVar1,0x10);
    pTVar1 = (this->FreeBlocks).Tail;
  }
  TStaticArray<TRefCountPtr<FD3D12DescriptorHeap>,2,4294967295>::
  ~TStaticArray<TRefCountPtr<FD3D12DescriptorHeap>,2,4294967295>
            ((TStaticArray<TRefCountPtr<FD3D12DescriptorHeap>,2,4294967295> *)&this->Heaps);
  return;
}

// AllocateHeapBlock @ 145a02ac0

/* WARNING: Enum "Type": Some values do not have unique names */

FD3D12OnlineDescriptorBlock * __thiscall
FD3D12OnlineDescriptorManager::AllocateHeapBlock(FD3D12OnlineDescriptorManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TNode *pTVar1;
  TNode *pTVar2;
  FName FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapBlockAllocations> FVar5;
  FThreadStats *pFVar6;
  FThreadStatsPool *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapFreeDescriptors> FVar8;
  FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapReservedDescriptors> FVar9;
  uchar auVar10 [8];
  FD3D12OnlineDescriptorBlock *pFVar11;
  uchar auVar12 [8];
  bool bVar13;
  FName local_res8;
  FStatMessage local_38;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Silver,"FD3D12OnlineViewHeap_AllocateHeapBlock");
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId279,"FD3D12OnlineViewHeap_AllocateHeapBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Descriptors.cpp"
               ,0x117);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId279);
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar11 = (FD3D12OnlineDescriptorBlock *)0x0;
  pTVar1 = ((this->FreeBlocks).Tail)->NextNode;
  if (pTVar1 != (TNode *)0x0) {
    pFVar11 = pTVar1->Item;
    pTVar2 = (this->FreeBlocks).Tail;
    (this->FreeBlocks).Tail = pTVar1;
    pTVar1->Item = (FD3D12OnlineDescriptorBlock *)0x0;
    ::operator_delete(pTVar2,0x10);
    if (pFVar11 != (FD3D12OnlineDescriptorBlock *)0x0) {
      if (FThreadStats::bPrimaryEnable != false) {
        FVar5 = StatPtr_STAT_GlobalViewHeapBlockAllocations;
        if (StatPtr_STAT_GlobalViewHeapBlockAllocations ==
            (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapBlockAllocations>)0x0) {
          pFVar4 = ::FName::FName(&local_res8,"STAT_GlobalViewHeapBlockAllocations");
          FVar5 = (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapBlockAllocations>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)
                             &StatPtr_STAT_GlobalViewHeapBlockAllocations,*pFVar4,
                             L"View Global: Block Allocations","STATGROUP_D3D12DescriptorHeap",
                             "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,true
                             ,ST_int64,false,false,MCR_Invalid);
        }
        FVar3 = *(FName *)FVar5;
        local_res8 = FVar3;
        if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar6 == (FThreadStats *)0x0) {
            pFVar7 = FThreadStatsPool::Get();
            pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
          }
          local_38.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
          local_38.StatData.Pad[0] = '\x01';
          local_38.StatData.Pad[1] = '\0';
          local_38.StatData.Pad[2] = '\0';
          local_38.StatData.Pad[3] = '\0';
          local_38.StatData.Pad[4] = '\0';
          local_38.StatData.Pad[5] = '\0';
          local_38.StatData.Pad[6] = '\0';
          local_38.StatData.Pad[7] = '\0';
          local_res8 = FVar3;
          local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar6,&local_38);
          FStatsTrace::Add(&local_res8,1);
          if (pFVar6->ScopeCount == 0) {
            FThreadStats::Flush(pFVar6,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar6,false,false);
          }
        }
      }
      auVar10[4] = '\0';
      auVar10[5] = '\0';
      auVar10[6] = '\0';
      auVar10[7] = '\0';
      auVar10._0_4_ = pFVar11->Size;
      if (auVar10 != (uchar  [8])0x0) {
        FVar8 = StatPtr_STAT_GlobalViewHeapFreeDescriptors;
        if (StatPtr_STAT_GlobalViewHeapFreeDescriptors ==
            (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapFreeDescriptors>)0x0) {
          pFVar4 = ::FName::FName(&local_res8,"STAT_GlobalViewHeapFreeDescriptors");
          FVar8 = (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapFreeDescriptors>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)
                             &StatPtr_STAT_GlobalViewHeapFreeDescriptors,*pFVar4,
                             L"View Global: Free Descriptors","STATGROUP_D3D12DescriptorHeap",
                             "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,
                             false,ST_int64,false,false,MCR_Invalid);
        }
        FVar3 = *(FName *)FVar8;
        local_res8 = FVar3;
        if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar6 == (FThreadStats *)0x0) {
            pFVar7 = FThreadStatsPool::Get();
            pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
          }
          local_38.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
          local_res8 = FVar3;
          local_38.StatData.Pad = auVar10;
          local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar6,&local_38);
          FStatsTrace::Add(&local_res8,-(longlong)auVar10);
          if (pFVar6->ScopeCount == 0) {
            FThreadStats::Flush(pFVar6,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar6,false,false);
          }
        }
      }
      auVar12[4] = '\0';
      auVar12[5] = '\0';
      auVar12[6] = '\0';
      auVar12[7] = '\0';
      auVar12._0_4_ = pFVar11->Size;
      if (auVar12 != (uchar  [8])0x0) {
        FVar9 = StatPtr_STAT_GlobalViewHeapReservedDescriptors;
        if (StatPtr_STAT_GlobalViewHeapReservedDescriptors ==
            (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapReservedDescriptors>)0x0) {
          pFVar4 = ::FName::FName(&local_res8,"STAT_GlobalViewHeapReservedDescriptors");
          FVar9 = (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapReservedDescriptors>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)
                             &StatPtr_STAT_GlobalViewHeapReservedDescriptors,*pFVar4,
                             L"View Global: Reserved Descriptors","STATGROUP_D3D12DescriptorHeap",
                             "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,
                             false,ST_int64,false,false,MCR_Invalid);
        }
        FVar3 = *(FName *)FVar9;
        local_res8 = FVar3;
        if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar6 == (FThreadStats *)0x0) {
            pFVar7 = FThreadStatsPool::Get();
            pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
          }
          local_38.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
          local_res8 = FVar3;
          local_38.StatData.Pad = auVar12;
          local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar6,&local_38);
          FStatsTrace::Add(&local_res8,(long64)auVar12);
          if (pFVar6->ScopeCount == 0) {
            FThreadStats::Flush(pFVar6,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar6,false,false);
          }
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return pFVar11;
}

// CleanupResources @ 145a06e20

void __thiscall FD3D12OnlineDescriptorManager::CleanupResources(FD3D12OnlineDescriptorManager *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  byte bVar4;
  longlong lVar5;
  byte bVar6;
  
  bVar6 = 3;
  do {
    bVar4 = ~bVar6 + 1 & bVar6;
    if ((bVar4 == 1) || (lVar5 = 0x10, bVar4 != 2)) {
      lVar5 = 8;
    }
    puVar3 = *(undefined8 **)
              ((longlong)(this->CriticalSection).CriticalSection.Opaque1 + lVar5 + -0x30);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)((longlong)(this->CriticalSection).CriticalSection.Opaque1 + lVar5 + -0x30) = 0
      ;
      piVar1 = (int *)(puVar3 + 1);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    bVar6 = bVar6 & ~(~bVar6 + 1);
  } while (bVar6 != 0);
  return;
}

// FreeHeapBlock @ 145a173e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D12OnlineDescriptorManager::FreeHeapBlock
          (FD3D12OnlineDescriptorManager *this,FD3D12OnlineDescriptorBlock *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  FD3D12DynamicRHI *pFVar4;
  int iVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapReservedDescriptors> FVar7;
  FThreadStats *pFVar8;
  FThreadStatsPool *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapUsedDescriptors> FVar10;
  FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapWastedDescriptors> FVar11;
  longlong lVar12;
  uchar auVar13 [8];
  uchar auVar14 [8];
  uchar auVar15 [8];
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_78;
  FName local_70;
  FStatMessage local_68;
  FStatMessage local_58;
  FStatMessage local_48;
  
  auVar15[4] = '\0';
  auVar15[5] = '\0';
  auVar15[6] = '\0';
  auVar15[7] = '\0';
  auVar15._0_4_ = param_1->Size;
  if (auVar15 != (uchar  [8])0x0) {
    FVar7 = StatPtr_STAT_GlobalViewHeapReservedDescriptors;
    if (StatPtr_STAT_GlobalViewHeapReservedDescriptors ==
        (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapReservedDescriptors>)0x0) {
      pFVar6 = ::FName::FName(&local_res20,"STAT_GlobalViewHeapReservedDescriptors");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapReservedDescriptors>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_GlobalViewHeapReservedDescriptors,*pFVar6,
                         L"View Global: Reserved Descriptors","STATGROUP_D3D12DescriptorHeap",
                         "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,
                         ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar7;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_68.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar2;
      local_68.StatData.Pad = auVar15;
      local_68.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_68);
      FStatsTrace::Add(&local_res8,-(longlong)auVar15);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  auVar13[4] = '\0';
  auVar13[5] = '\0';
  auVar13[6] = '\0';
  auVar13[7] = '\0';
  auVar13._0_4_ = param_1->SizeUsed;
  if (auVar13 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_GlobalViewHeapUsedDescriptors;
    if (StatPtr_STAT_GlobalViewHeapUsedDescriptors ==
        (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapUsedDescriptors>)0x0) {
      pFVar6 = ::FName::FName(&local_78,"STAT_GlobalViewHeapUsedDescriptors");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapUsedDescriptors>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GlobalViewHeapUsedDescriptors,
                          *pFVar6,L"View Global: Used Descriptors","STATGROUP_D3D12DescriptorHeap",
                          "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,
                          ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar10;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_58.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_res10 = FVar2;
      local_58.StatData.Pad = auVar13;
      local_58.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_58);
      FStatsTrace::Add(&local_res10,(long64)auVar13);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  auVar14._0_4_ = param_1->Size - param_1->SizeUsed;
  auVar14[4] = '\0';
  auVar14[5] = '\0';
  auVar14[6] = '\0';
  auVar14[7] = '\0';
  if (auVar14._0_4_ != 0) {
    FVar11 = StatPtr_STAT_GlobalViewHeapWastedDescriptors;
    if (StatPtr_STAT_GlobalViewHeapWastedDescriptors ==
        (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapWastedDescriptors>)0x0) {
      pFVar6 = ::FName::FName(&local_70,"STAT_GlobalViewHeapWastedDescriptors");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapWastedDescriptors>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GlobalViewHeapWastedDescriptors
                          ,*pFVar6,L"View Global: Wasted Descriptors",
                          "STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
                          L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,false,false
                          ,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar11;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_48.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_res18 = FVar2;
      local_48.StatData.Pad = auVar14;
      local_48.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_48);
      FStatsTrace::Add(&local_res18,(long64)auVar14);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  pFVar4 = FD3D12DynamicRHI::SingleD3DRHI;
  lpCriticalSection = &FD3D12DynamicRHI::SingleD3DRHI->ObjectsToDeleteCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar5 = (pFVar4->ObjectsToDelete).ArrayNum;
  piVar1 = &(pFVar4->ObjectsToDelete).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(pFVar4->ObjectsToDelete).AllocatorInstance,piVar1);
  }
  lVar12 = (longlong)iVar5;
  (pFVar4->ObjectsToDelete).ArrayNum = iVar5 + 1;
  pFVar3 = (pFVar4->ObjectsToDelete).AllocatorInstance.Data;
  *(undefined4 *)(pFVar3 + lVar12 * 0x30) = 7;
  *(FD3D12OnlineDescriptorBlock **)(pFVar3 + lVar12 * 0x30 + 8) = param_1;
  *(FD3D12OnlineDescriptorManager **)(pFVar3 + lVar12 * 0x30 + 0x10) = this;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// Init @ 145a1dc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D12OnlineDescriptorManager::Init
          (FD3D12OnlineDescriptorManager *this,uint param_1,uint param_2,bool param_3)

{
  longlong *plVar1;
  FName FVar2;
  FD3D12DescriptorHeap *pFVar3;
  TNode *pTVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  FD3D12DescriptorHeap *pFVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_NumViewOnlineDescriptorHeaps> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_ViewOnlineDescriptorHeapMemory> FVar15;
  longlong lVar16;
  FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapFreeDescriptors> FVar17;
  FD3D12OnlineDescriptorBlock *pFVar18;
  TNode *pTVar19;
  uint uVar20;
  byte bVar21;
  uint uVar22;
  uchar auVar23 [8];
  uchar auVar24 [8];
  FName local_88;
  FName local_80;
  FName local_78;
  FStatMessage local_70;
  FStatMessage local_60;
  FStatMessage local_50;
  FName local_40;
  FName local_38;
  FName local_30;
  
  if (!param_3) {
    auVar23[4] = '\0';
    auVar23[5] = '\0';
    auVar23[6] = '\0';
    auVar23[7] = '\0';
    auVar23._0_4_ = param_1;
    if ((*(longlong *)this == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar10 = FD3D12DescriptorHeapManager::AllocateHeap
                        ((FD3D12DescriptorHeapManager *)(*(longlong *)this + 0x610),
                         L"Device Global - Online View Heap",Standard,param_1,GpuVisible);
    if (pFVar10 != (FD3D12DescriptorHeap *)0x0) {
      LOCK();
      *(int *)&pFVar10->_padding_ = (int)pFVar10->_padding_ + 1;
      UNLOCK();
    }
    FVar12 = StatPtr_STAT_NumViewOnlineDescriptorHeaps;
    if (StatPtr_STAT_NumViewOnlineDescriptorHeaps ==
        (FThreadSafeStaticStat<FStat_STAT_NumViewOnlineDescriptorHeaps>)0x0) {
      pFVar11 = ::FName::FName(&local_40,"STAT_NumViewOnlineDescriptorHeaps");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_NumViewOnlineDescriptorHeaps>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumViewOnlineDescriptorHeaps,
                          *pFVar11,L"View: Num descriptor heaps","STATGROUP_D3D12DescriptorHeap",
                          "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,
                          ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar12;
    local_88 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      local_70.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_70.StatData.Pad[0] = '\x01';
      local_70.StatData.Pad[1] = '\0';
      local_70.StatData.Pad[2] = '\0';
      local_70.StatData.Pad[3] = '\0';
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_88 = FVar2;
      local_70.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar13,&local_70);
      FStatsTrace::Add(&local_88,1);
      if (pFVar13->ScopeCount == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
    uVar9 = pFVar10->DescriptorSize * pFVar10->NumDescriptors;
    auVar24[4] = '\0';
    auVar24[5] = '\0';
    auVar24[6] = '\0';
    auVar24[7] = '\0';
    auVar24._0_4_ = uVar9;
    if (uVar9 != 0) {
      FVar15 = StatPtr_STAT_ViewOnlineDescriptorHeapMemory;
      if (StatPtr_STAT_ViewOnlineDescriptorHeapMemory ==
          (FThreadSafeStaticStat<FStat_STAT_ViewOnlineDescriptorHeapMemory>)0x0) {
        pFVar11 = ::FName::FName(&local_38,"STAT_ViewOnlineDescriptorHeapMemory");
        FVar15 = (FThreadSafeStaticStat<FStat_STAT_ViewOnlineDescriptorHeapMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_ViewOnlineDescriptorHeapMemory,*pFVar11,
                            L"View DescriptorHeap Memory (SRV, CBV, UAV)",
                            "STATGROUP_D3D12MemoryDetails","STATCAT_Advanced",
                            L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,
                            MCR_GPUSystem);
      }
      FVar2 = *(FName *)FVar15;
      local_88 = FVar2;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar13 == (FThreadStats *)0x0) {
          pFVar14 = FThreadStatsPool::Get();
          pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
        }
        local_60.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
        local_80 = FVar2;
        local_60.StatData.Pad = auVar24;
        local_60.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar13,&local_60);
        FStatsTrace::Add(&local_80,(long64)auVar24);
        if (pFVar13->ScopeCount == 0) {
          FThreadStats::Flush(pFVar13,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
        }
      }
    }
    bVar21 = 3;
    do {
      bVar8 = ~bVar21 + 1 & bVar21;
      if ((bVar8 == 1) || (lVar16 = 0x10, bVar8 != 2)) {
        lVar16 = 8;
      }
      pFVar3 = *(FD3D12DescriptorHeap **)
                ((longlong)(this->CriticalSection).CriticalSection.Opaque1 + lVar16 + -0x30);
      if (pFVar3 != pFVar10) {
        *(FD3D12DescriptorHeap **)
         ((longlong)(this->CriticalSection).CriticalSection.Opaque1 + lVar16 + -0x30) = pFVar10;
        LOCK();
        *(int *)&pFVar10->_padding_ = (int)pFVar10->_padding_ + 1;
        UNLOCK();
        if (pFVar3 != (FD3D12DescriptorHeap *)0x0) {
          plVar1 = &pFVar3->_padding_;
          LOCK();
          lVar16 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if (((int)lVar16 == 1) && (plVar1 != (longlong *)0x0)) {
            (**(code **)pFVar3->_padding_)();
          }
        }
      }
      bVar21 = bVar21 ^ bVar8;
    } while (bVar21 != 0);
    plVar1 = &pFVar10->_padding_;
    LOCK();
    lVar16 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar16 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar10->_padding_)(pFVar10);
    }
    if (param_1 != 0) {
      FVar17 = StatPtr_STAT_GlobalViewHeapFreeDescriptors;
      if (StatPtr_STAT_GlobalViewHeapFreeDescriptors ==
          (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapFreeDescriptors>)0x0) {
        pFVar11 = ::FName::FName(&local_30,"STAT_GlobalViewHeapFreeDescriptors");
        FVar17 = (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapFreeDescriptors>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GlobalViewHeapFreeDescriptors
                            ,*pFVar11,L"View Global: Free Descriptors",
                            "STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
                            L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,false,
                            false,MCR_Invalid);
      }
      FVar2 = *(FName *)FVar17;
      local_88 = FVar2;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar13 == (FThreadStats *)0x0) {
          pFVar14 = FThreadStatsPool::Get();
          pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
        }
        local_50.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
        local_78 = FVar2;
        local_50.StatData.Pad = auVar23;
        local_50.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar13,&local_50);
        FStatsTrace::Add(&local_78,(long64)auVar23);
        if (pFVar13->ScopeCount == 0) {
          FThreadStats::Flush(pFVar13,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
        }
      }
    }
    uVar20 = 0;
    uVar9 = param_1 / param_2;
    uVar22 = 0;
    if (uVar9 != 0) {
      do {
        uVar6 = param_2;
        if (uVar22 == uVar9 - 1) {
          uVar6 = param_1 - uVar20;
        }
        pFVar18 = ::operator_new(0xc);
        if (pFVar18 == (FD3D12OnlineDescriptorBlock *)0x0) {
          pFVar18 = (FD3D12OnlineDescriptorBlock *)0x0;
        }
        else {
          pFVar18->BaseSlot = uVar20;
          pFVar18->Size = uVar6;
          pFVar18->SizeUsed = 0;
        }
        pTVar19 = ::operator_new(0x10);
        if (pTVar19 != (TNode *)0x0) {
          pTVar19->NextNode = (TNode *)0x0;
          pTVar19->Item = pFVar18;
          pTVar4 = (this->FreeBlocks).Head;
          (this->FreeBlocks).Head = pTVar19;
          pTVar4->NextNode = pTVar19;
        }
        uVar20 = uVar20 + uVar6;
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar9);
    }
  }
  return;
}

// Recycle @ 145a28110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D12OnlineDescriptorManager::Recycle
          (FD3D12OnlineDescriptorManager *this,FD3D12OnlineDescriptorBlock *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar1;
  TNode *pTVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapUsedDescriptors> FVar4;
  FThreadStats *pFVar5;
  FThreadStatsPool *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapWastedDescriptors> FVar7;
  FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapFreeDescriptors> FVar8;
  TNode *pTVar9;
  uchar auVar10 [8];
  uchar auVar11 [8];
  uchar auVar12 [8];
  FName local_res8;
  FStatMessage local_38;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  auVar10[4] = '\0';
  auVar10[5] = '\0';
  auVar10[6] = '\0';
  auVar10[7] = '\0';
  auVar10._0_4_ = param_1->SizeUsed;
  if (auVar10 != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_GlobalViewHeapUsedDescriptors;
    if (StatPtr_STAT_GlobalViewHeapUsedDescriptors ==
        (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapUsedDescriptors>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_GlobalViewHeapUsedDescriptors");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapUsedDescriptors>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GlobalViewHeapUsedDescriptors,
                         *pFVar3,L"View Global: Used Descriptors","STATGROUP_D3D12DescriptorHeap",
                         "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,
                         ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar4;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar10;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar10);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
  }
  auVar11._0_4_ = param_1->Size - param_1->SizeUsed;
  auVar11[4] = '\0';
  auVar11[5] = '\0';
  auVar11[6] = '\0';
  auVar11[7] = '\0';
  if (auVar11._0_4_ != 0) {
    FVar7 = StatPtr_STAT_GlobalViewHeapWastedDescriptors;
    if (StatPtr_STAT_GlobalViewHeapWastedDescriptors ==
        (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapWastedDescriptors>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_GlobalViewHeapWastedDescriptors");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapWastedDescriptors>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GlobalViewHeapWastedDescriptors,
                         *pFVar3,L"View Global: Wasted Descriptors","STATGROUP_D3D12DescriptorHeap",
                         "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,
                         ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar7;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar11;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar11);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
  }
  auVar12[4] = '\0';
  auVar12[5] = '\0';
  auVar12[6] = '\0';
  auVar12[7] = '\0';
  auVar12._0_4_ = param_1->Size;
  if (auVar12 != (uchar  [8])0x0) {
    FVar8 = StatPtr_STAT_GlobalViewHeapFreeDescriptors;
    if (StatPtr_STAT_GlobalViewHeapFreeDescriptors ==
        (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapFreeDescriptors>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_GlobalViewHeapFreeDescriptors");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_GlobalViewHeapFreeDescriptors>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GlobalViewHeapFreeDescriptors,
                         *pFVar3,L"View Global: Free Descriptors","STATGROUP_D3D12DescriptorHeap",
                         "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,
                         ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar8;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar12;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar12);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
  }
  param_1->SizeUsed = 0;
  pTVar9 = ::operator_new(0x10);
  if (pTVar9 != (TNode *)0x0) {
    pTVar9->NextNode = (TNode *)0x0;
    pTVar9->Item = param_1;
    pTVar2 = (this->FreeBlocks).Head;
    (this->FreeBlocks).Head = pTVar9;
    pTVar2->NextNode = pTVar9;
  }
                    /* WARNING: Could not recover jumptable at 0x000145a285ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}


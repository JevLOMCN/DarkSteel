// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 20

// FD3D12BindlessResourceManager @ 1459a7c10

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12BindlessResourceManager * __thiscall
FD3D12BindlessResourceManager::FD3D12BindlessResourceManager
          (FD3D12BindlessResourceManager *this,FD3D12Device *param_1,
          FD3D12BindlessDescriptorAllocator *param_2)

{
  ERHIBindlessConfiguration EVar1;
  int iVar2;
  FD3D12DescriptorHeap *pFVar3;
  
  this->_padding_ = (longlong)param_1;
  this->HeapsCS = &param_2->ResourceHeapsCS;
  pFVar3 = UE::D3D12BindlessDescriptors::CreateCpuHeap
                     (param_1,Standard,(uint)param_2->ResourceAllocator->_padding_);
  (this->CpuHeap).Reference = pFVar3;
  if (pFVar3 != (FD3D12DescriptorHeap *)0x0) {
    LOCK();
    *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
    UNLOCK();
  }
  EVar1 = param_2->BindlessConfiguration;
  (this->MovingWindowMaxInUseGPUHeaps).RemoveNextIdx = 0;
  (this->MovingWindowMaxInUseGPUHeaps).NumValuesUsed = 0;
  this->ActiveGpuHeapIndex = -1;
  (this->ActiveGpuHeaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveGpuHeaps).ArrayNum = 0;
  (this->ActiveGpuHeaps).ArrayMax = 0;
  (this->PooledGpuHeaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PooledGpuHeaps).ArrayNum = 0;
  (this->PooledGpuHeaps).ArrayMax = 0;
  this->Configuration = EVar1;
  this->GarbageCollectCycle = 0;
  this->LastUsedExplicitHeapCycle = 0;
  this->bRequestNewActiveGpuHeap = false;
  this->bCPUHeapResized = false;
  this->InUseGPUHeaps = 0;
  this->MaxInUseGPUHeaps = 0;
  if (1 < (int)EVar1) {
    iVar2 = AddActiveGPUHeap(this);
    this->ActiveGpuHeapIndex = iVar2;
  }
  return this;
}

// AddActiveGPUHeap @ 1459af3a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

int __thiscall FD3D12BindlessResourceManager::AddActiveGPUHeap(FD3D12BindlessResourceManager *this)

{
  TArray<FRHIDescriptorHandle,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRHIDescriptorHandle,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  int *piVar4;
  FGpuHeapData *pFVar5;
  ERHIDescriptorHeapType EVar6;
  FScriptContainerElement *pFVar7;
  FName FVar8;
  code *pcVar9;
  longlong lVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FGpuHeapData *pFVar14;
  FD3D12DescriptorHeap *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsAllocated> FVar16;
  FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapGPUMemoryUsage> FVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsActive> FVar19;
  FThreadStats *pFVar20;
  FThreadStatsPool *pFVar21;
  uint uVar22;
  FD3D12DescriptorHeap *pFVar23;
  uchar auVar24 [8];
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FStatMessage local_b8;
  FStatMessage local_a8;
  FStatMessage local_98;
  FName local_88;
  FName local_80;
  FName local_78;
  FGpuHeapData local_70;
  
  iVar13 = (this->ActiveGpuHeaps).ArrayNum;
  piVar4 = &(this->ActiveGpuHeaps).ArrayMax;
  iVar12 = iVar13;
  if (iVar13 == *piVar4) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&(this->ActiveGpuHeaps).AllocatorInstance,piVar4);
    (this->ActiveGpuHeaps).ArrayNum = iVar12;
  }
  (this->ActiveGpuHeaps).ArrayNum = iVar12 + 1;
  pFVar5 = (FGpuHeapData *)((this->ActiveGpuHeaps).AllocatorInstance.Data + (longlong)iVar12 * 0x28)
  ;
  DefaultConstructItems<FD3D12BindlessResourceManager::FGpuHeapData,int>(pFVar5,1);
  if ((this->PooledGpuHeaps).ArrayNum == 0) {
    pFVar23 = (this->CpuHeap).Reference;
    uVar22 = pFVar23->NumDescriptors;
    EVar6 = pFVar23->Type;
    if (this->_padding_ == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L"");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        iVar13 = (*pcVar9)();
        return iVar13;
      }
    }
    pFVar15 = UE::D3D12BindlessDescriptors::CreateGpuHeap
                        ((FD3D12Device *)this->_padding_,EVar6,uVar22);
    pFVar23 = (pFVar5->GpuHeap).Reference;
    if (pFVar23 != pFVar15) {
      (pFVar5->GpuHeap).Reference = pFVar15;
      if (pFVar15 != (FD3D12DescriptorHeap *)0x0) {
        LOCK();
        *(int *)&pFVar15->_padding_ = (int)pFVar15->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar23 != (FD3D12DescriptorHeap *)0x0) {
        plVar3 = &pFVar23->_padding_;
        LOCK();
        lVar10 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if (((int)lVar10 == 1) && (plVar3 != (longlong *)0x0)) {
          (**(code **)pFVar23->_padding_)(pFVar23,1);
        }
      }
    }
    FVar16 = StatPtr_STAT_D3D12BindlessResourceHeapsAllocated;
    if (StatPtr_STAT_D3D12BindlessResourceHeapsAllocated ==
        (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsAllocated>)0x0) {
      pFVar18 = ::FName::FName(&local_88,"STAT_D3D12BindlessResourceHeapsAllocated");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsAllocated>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_D3D12BindlessResourceHeapsAllocated,*pFVar18,
                          L"Resource Heaps Allocated","STATGROUP_D3D12Bindless","STATCAT_Advanced",
                          L"D3D12RHI: Bindless",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar8 = *(FName *)FVar16;
    local_res10 = FVar8;
    if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar20 == (FThreadStats *)0x0) {
        pFVar21 = FThreadStatsPool::Get();
        pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
      }
      local_b8.NameAndInfo.Number = FVar8.Number & 0xffffafff | 0xa000;
      local_b8.StatData.Pad[0] = '\x01';
      local_b8.StatData.Pad[1] = '\0';
      local_b8.StatData.Pad[2] = '\0';
      local_b8.StatData.Pad[3] = '\0';
      local_b8.StatData.Pad[4] = '\0';
      local_b8.StatData.Pad[5] = '\0';
      local_b8.StatData.Pad[6] = '\0';
      local_b8.StatData.Pad[7] = '\0';
      local_res10 = FVar8;
      local_b8.NameAndInfo.Index.Value = FVar8.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar20,&local_b8);
      FStatsTrace::Add(&local_res10,1);
      if (pFVar20->ScopeCount == 0) {
        FThreadStats::Flush(pFVar20,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar20,false,false);
      }
    }
    pFVar23 = (pFVar5->GpuHeap).Reference;
    uVar22 = pFVar23->DescriptorSize * pFVar23->NumDescriptors;
    auVar24[4] = '\0';
    auVar24[5] = '\0';
    auVar24[6] = '\0';
    auVar24[7] = '\0';
    auVar24._0_4_ = uVar22;
    if (uVar22 != 0) {
      FVar17 = StatPtr_STAT_D3D12BindlessResourceHeapGPUMemoryUsage;
      if (StatPtr_STAT_D3D12BindlessResourceHeapGPUMemoryUsage ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapGPUMemoryUsage>)0x0) {
        pFVar18 = ::FName::FName(&local_80,"STAT_D3D12BindlessResourceHeapGPUMemoryUsage");
        FVar17 = (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapGPUMemoryUsage>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_D3D12BindlessResourceHeapGPUMemoryUsage,*pFVar18,
                            L"Resource Heaps GPU Memory Usage","STATGROUP_D3D12Bindless",
                            "STATCAT_Advanced",L"D3D12RHI: Bindless",true,false,ST_int64,false,false
                            ,MCR_Physical);
      }
      FVar8 = *(FName *)FVar17;
      local_res10 = FVar8;
      if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar20 == (FThreadStats *)0x0) {
          pFVar21 = FThreadStatsPool::Get();
          pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
        }
        local_a8.NameAndInfo.Number = FVar8.Number & 0xffffafff | 0xa000;
        local_res18 = FVar8;
        local_a8.StatData.Pad = auVar24;
        local_a8.NameAndInfo.Index.Value = FVar8.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar20,&local_a8);
        FStatsTrace::Add(&local_res18,(long64)auVar24);
        if (pFVar20->ScopeCount == 0) {
          FThreadStats::Flush(pFVar20,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar20,false,false);
        }
      }
    }
  }
  else {
    pFVar14 = TArray<FD3D12BindlessResourceManager::FGpuHeapData,TSizedDefaultAllocator<32>_>::Pop
                        (&this->PooledGpuHeaps,&local_70,No);
    if (pFVar5 != pFVar14) {
      pFVar23 = (pFVar5->GpuHeap).Reference;
      (pFVar5->GpuHeap).Reference = (pFVar14->GpuHeap).Reference;
      (pFVar14->GpuHeap).Reference = (FD3D12DescriptorHeap *)0x0;
      if (pFVar23 != (FD3D12DescriptorHeap *)0x0) {
        plVar3 = &pFVar23->_padding_;
        LOCK();
        lVar10 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          if (plVar3 == (longlong *)0x0) {
            pFVar23 = (FD3D12DescriptorHeap *)0x0;
          }
          if (pFVar23 != (FD3D12DescriptorHeap *)0x0) {
            (**(code **)pFVar23->_padding_)(pFVar23,1);
          }
        }
      }
    }
    pTVar1 = &pFVar14->UpdatedHandles;
    pTVar2 = &pFVar5->UpdatedHandles;
    if (pTVar2 != pTVar1) {
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar5->UpdatedHandles).ArrayNum = (pFVar14->UpdatedHandles).ArrayNum;
      (pFVar5->UpdatedHandles).ArrayMax = (pFVar14->UpdatedHandles).ArrayMax;
      (pFVar14->UpdatedHandles).ArrayNum = 0;
      (pFVar14->UpdatedHandles).ArrayMax = 0;
    }
    pFVar5->bInUse = pFVar14->bInUse;
    pFVar5->LastUsedGarbageCollectCycle = pFVar14->LastUsedGarbageCollectCycle;
    if (local_70.UpdatedHandles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.UpdatedHandles.AllocatorInstance.Data);
    }
    if (local_70.GpuHeap.Reference != (FD3D12DescriptorHeap *)0x0) {
      plVar3 = &(local_70.GpuHeap.Reference)->_padding_;
      LOCK();
      lVar10 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if (((int)lVar10 == 1) && (plVar3 != (longlong *)0x0)) {
        (**(code **)(local_70.GpuHeap.Reference)->_padding_)(local_70.GpuHeap.Reference,1);
      }
    }
  }
  FVar19 = StatPtr_STAT_D3D12BindlessResourceHeapsActive;
  if (StatPtr_STAT_D3D12BindlessResourceHeapsActive ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsActive>)0x0) {
    pFVar18 = ::FName::FName(&local_78,"STAT_D3D12BindlessResourceHeapsActive");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsActive>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BindlessResourceHeapsActive,
                        *pFVar18,L"Resource Heaps Active","STATGROUP_D3D12Bindless",
                        "STATCAT_Advanced",L"D3D12RHI: Bindless",true,false,ST_int64,false,false,
                        MCR_Invalid);
  }
  FVar8 = *(FName *)FVar19;
  local_res10 = FVar8;
  if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    local_98.NameAndInfo.Number = FVar8.Number & 0xffffafff | 0xa000;
    local_98.StatData.Pad[0] = '\x01';
    local_98.StatData.Pad[1] = '\0';
    local_98.StatData.Pad[2] = '\0';
    local_98.StatData.Pad[3] = '\0';
    local_98.StatData.Pad[4] = '\0';
    local_98.StatData.Pad[5] = '\0';
    local_98.StatData.Pad[6] = '\0';
    local_98.StatData.Pad[7] = '\0';
    local_res20 = FVar8;
    local_98.NameAndInfo.Index.Value = FVar8.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar20,&local_98);
    FStatsTrace::Add(&local_res20,1);
    if (pFVar20->ScopeCount == 0) {
      FThreadStats::Flush(pFVar20,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar20,false,false);
    }
  }
  CopyCpuHeap(this,(pFVar5->GpuHeap).Reference);
  pFVar5->bInUse = true;
  UpdateInUseGPUHeaps(this,true);
  return iVar13;
}

// AssignHeapToState @ 1459b2420

void __thiscall
FD3D12BindlessResourceManager::AssignHeapToState
          (FD3D12BindlessResourceManager *this,FD3D12ContextBindlessState *param_1)

{
  longlong *plVar1;
  uint uVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  FD3D12DescriptorHeap *pFVar3;
  FD3D12DescriptorHeap *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  
  if ((param_1->CurrentGpuHeap).Reference != (FD3D12DescriptorHeap *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.CurrentGpuHeap == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                       ,0x27f,L"FinalizeHeapOnState was not called before AssignHeapToState");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)this->HeapsCS;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    uVar2 = this->ActiveGpuHeapIndex;
    if ((int)uVar2 < 0) {
      if (this->Configuration == All) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetConfiguration() != ERHIBindlessConfiguration::All",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                           ,0x28c,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    else {
      uVar8 = 0;
      if ((int)uVar2 < (this->ActiveGpuHeaps).ArrayNum) {
        uVar8 = ~uVar2 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar3 = *(FD3D12DescriptorHeap **)
                ((this->ActiveGpuHeaps).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x28);
      pFVar4 = (param_1->CurrentGpuHeap).Reference;
      if (pFVar4 != pFVar3) {
        (param_1->CurrentGpuHeap).Reference = pFVar3;
        if (pFVar3 != (FD3D12DescriptorHeap *)0x0) {
          LOCK();
          *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
          UNLOCK();
        }
        if (pFVar4 != (FD3D12DescriptorHeap *)0x0) {
          plVar1 = &pFVar4->_padding_;
          LOCK();
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
            (**(code **)pFVar4->_padding_)(pFVar4,1);
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001459b2564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CheckRequestNewActiveGPUHeap @ 1459b4540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12BindlessResourceManager::CheckRequestNewActiveGPUHeap(FD3D12BindlessResourceManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  LPCRITICAL_SECTION lpCriticalSection_00;
  FName FVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  FD3D12DescriptorHeap *pFVar6;
  FD3D12DescriptorHeap *pFVar7;
  code *pcVar8;
  FD3D12DynamicRHI *pFVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsVersioned> FVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  uchar auVar21 [8];
  FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceGPUDescriptorsCopied> FVar22;
  ulonglong uVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  bool bVar26;
  FName local_res18;
  FName local_res20;
  FName local_98;
  FName local_90;
  FStatMessage local_88;
  FStatMessage local_78;
  FRHIDescriptorHandle *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<FRHIDescriptorHandle_const_,int> local_58;
  
  if (this->bRequestNewActiveGpuHeap != false) {
    bVar26 = -1 < CpuChannel->Enabled;
    if (bVar26) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId673,
                 "FD3D12BindlessResourceManager::RequestNewActiveGPUHeap",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                 ,0x2a1);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId673);
    }
    lpCriticalSection_00 = (LPCRITICAL_SECTION)this->HeapsCS;
    if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) {
LAB_1459b4e40:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection_00);
    if (this->bRequestNewActiveGpuHeap != false) {
      if (this->bCPUHeapResized == false) {
        uVar16 = this->ActiveGpuHeapIndex;
        uVar4 = this->GarbageCollectCycle;
        uVar11 = 0;
        if ((int)uVar16 < (this->ActiveGpuHeaps).ArrayNum) {
          uVar11 = ~uVar16 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(ulong64 *)
         ((this->ActiveGpuHeaps).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x28 + 0x20) =
             uVar4;
        uVar16 = this->ActiveGpuHeapIndex;
        uVar11 = 0;
        if ((int)uVar16 < (this->ActiveGpuHeaps).ArrayNum) {
          uVar11 = ~uVar16 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar5 = *(undefined8 *)
                 ((this->ActiveGpuHeaps).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x28);
        if ((this->_padding_ == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Parent != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                                ,0x59,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar9 = FD3D12DynamicRHI::SingleD3DRHI;
        lpCriticalSection = &FD3D12DynamicRHI::SingleD3DRHI->ObjectsToDeleteCS;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) goto LAB_1459b4e40;
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        iVar12 = (pFVar9->ObjectsToDelete).ArrayNum;
        piVar1 = &(pFVar9->ObjectsToDelete).ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&(pFVar9->ObjectsToDelete).AllocatorInstance,piVar1);
        }
        (pFVar9->ObjectsToDelete).ArrayNum = iVar12 + 1;
        pFVar24 = (pFVar9->ObjectsToDelete).AllocatorInstance.Data;
        *(undefined4 *)(pFVar24 + (longlong)iVar12 * 0x30) = 5;
        *(undefined8 *)(pFVar24 + (longlong)iVar12 * 0x30 + 8) = uVar5;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        uVar16 = (this->ActiveGpuHeaps).ArrayNum;
        uVar23 = (ulonglong)(int)uVar16;
        uVar11 = 0;
        if (0 < (int)uVar16) {
          lVar25 = 0;
          do {
            if (uVar11 != this->ActiveGpuHeapIndex) {
              uVar15 = 0;
              if ((int)uVar11 < (this->ActiveGpuHeaps).ArrayNum) {
                uVar15 = ~uVar11 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar15 = this->ActiveGpuHeapIndex;
              pFVar24 = (this->ActiveGpuHeaps).AllocatorInstance.Data + lVar25 + 8;
              uVar13 = 0;
              if ((int)uVar15 < (this->ActiveGpuHeaps).ArrayNum) {
                uVar13 = ~uVar15 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar2 = (this->ActiveGpuHeaps).AllocatorInstance.Data +
                       ((longlong)(int)uVar15 * 5 + 1) * 8;
              if ((pFVar24 == pFVar2) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(void*)this != (void*)&Source",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x96e,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar12 = *(int *)&pFVar2[8].field_0x0;
              if (iVar12 != 0) {
                iVar14 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (8,4,iVar12,(ForAnyElementType *)pFVar24,(int *)(pFVar24 + 8),
                                    (int *)(pFVar24 + 0xc));
                memcpy((void *)(*(longlong *)&pFVar24->field_0x0 + (longlong)iVar14 * 8),
                       *(void **)&pFVar2->field_0x0,(longlong)iVar12 << 3);
              }
            }
            uVar11 = uVar11 + 1;
            lVar25 = lVar25 + 0x28;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
          uVar23 = (ulonglong)uVar16;
        }
        iVar12 = 1;
        if (1 < (int)uVar23) {
          do {
            uVar11 = (this->ActiveGpuHeapIndex + iVar12) % (int)uVar23;
            if (uVar11 != this->ActiveGpuHeapIndex) {
              uVar15 = 0;
              if ((int)uVar11 < (this->ActiveGpuHeaps).ArrayNum) {
                uVar15 = ~uVar11 >> 0x1f;
              }
              if (uVar15 == 0) {
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar10) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar23 = (ulonglong)uVar16;
              }
              if ((this->ActiveGpuHeaps).AllocatorInstance.Data[(longlong)(int)uVar11 * 0x28 + 0x18]
                  == (FScriptContainerElement)0x0) {
                if (-1 < (int)uVar11) {
                  uVar16 = 0;
                  if ((int)uVar11 < (this->ActiveGpuHeaps).ArrayNum) {
                    uVar16 = ~uVar11 >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pFVar24 = (this->ActiveGpuHeaps).AllocatorInstance.Data +
                            (longlong)(int)uVar11 * 0x28;
                  auVar21 = (uchar  [8])(longlong)*(int *)(pFVar24 + 0x10);
                  if ((auVar21 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
                    FVar22 = StatPtr_STAT_D3D12BindlessResourceGPUDescriptorsCopied;
                    if (StatPtr_STAT_D3D12BindlessResourceGPUDescriptorsCopied ==
                        (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceGPUDescriptorsCopied>
                        )0x0) {
                      pFVar17 = ::FName::FName(&local_98,
                                               "STAT_D3D12BindlessResourceGPUDescriptorsCopied");
                      FVar22 = (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceGPUDescriptorsCopied>
                                )FThreadSafeStaticStatBase::DoSetup
                                           ((FThreadSafeStaticStatBase *)
                                            &StatPtr_STAT_D3D12BindlessResourceGPUDescriptorsCopied,
                                            *pFVar17,L"Resource GPU Descriptors Copied",
                                            "STATGROUP_D3D12Bindless","STATCAT_Advanced",
                                            L"D3D12RHI: Bindless",true,true,ST_int64,false,false,
                                            MCR_Invalid);
                    }
                    FVar3 = *(FName *)FVar22;
                    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false))
                       && (FThreadStats::TlsSlot != 0xffffffff)) {
                      pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
                      if (pFVar19 == (FThreadStats *)0x0) {
                        pFVar20 = FThreadStatsPool::Get();
                        pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
                      }
                      local_88.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
                      local_res18 = FVar3;
                      local_88.StatData.Pad = auVar21;
                      local_88.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
                      FThreadStats::AddStatMessage(pFVar19,&local_88);
                      FStatsTrace::Add(&local_res18,(long64)auVar21);
                      if (pFVar19->ScopeCount == 0) {
                        FThreadStats::Flush(pFVar19,false,false);
                      }
                      else if (FThreadStats::bIsRawStatsActive != false) {
                        FThreadStats::FlushRawStats(pFVar19,false,false);
                      }
                    }
                  }
                  local_68 = *(FRHIDescriptorHandle **)(pFVar24 + 8);
                  iVar12 = *(int *)(pFVar24 + 0x10);
                  if ((iVar12 < 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InCount >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0xeb,L""), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pFVar6 = *(FD3D12DescriptorHeap **)pFVar24;
                  pFVar7 = (this->CpuHeap).Reference;
                  iStack_60 = iVar12;
                  if ((this->_padding_ == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Parent != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                                          ,0x59,L""), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  local_58._12_4_ = uStack_5c;
                  local_58.ArrayNum = iStack_60;
                  local_58.DataPtr = local_68;
                  UE::D3D12Descriptors::CopyDescriptors
                            ((FD3D12Device *)this->_padding_,pFVar6,pFVar7,&local_58);
                  *(undefined4 *)(pFVar24 + 0x10) = 0;
                  if (*(int *)(pFVar24 + 0x14) < 0) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,4,0,(ForAnyElementType *)(pFVar24 + 8),0,(int *)(pFVar24 + 0x14));
                  }
                  pFVar24[0x18] = (FScriptContainerElement)0x1;
                  UpdateInUseGPUHeaps(this,true);
                  goto LAB_1459b4615;
                }
                break;
              }
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)uVar23);
        }
      }
      else {
        ReleaseGPUHeaps(this);
      }
      uVar11 = AddActiveGPUHeap(this);
LAB_1459b4615:
      this->bRequestNewActiveGpuHeap = false;
      this->bCPUHeapResized = false;
      this->ActiveGpuHeapIndex = uVar11;
      if (FThreadStats::bPrimaryEnable != false) {
        FVar18 = StatPtr_STAT_D3D12BindlessResourceHeapsVersioned;
        if (StatPtr_STAT_D3D12BindlessResourceHeapsVersioned ==
            (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsVersioned>)0x0) {
          pFVar17 = ::FName::FName(&local_90,"STAT_D3D12BindlessResourceHeapsVersioned");
          FVar18 = (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsVersioned>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_D3D12BindlessResourceHeapsVersioned,*pFVar17,
                              L"Resource Heaps Versioned","STATGROUP_D3D12Bindless",
                              "STATCAT_Advanced",L"D3D12RHI: Bindless",true,true,ST_int64,false,
                              false,MCR_Invalid);
        }
        FVar3 = *(FName *)FVar18;
        if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar19 == (FThreadStats *)0x0) {
            pFVar20 = FThreadStatsPool::Get();
            pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
          }
          local_78.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
          local_78.StatData.Pad[0] = '\x01';
          local_78.StatData.Pad[1] = '\0';
          local_78.StatData.Pad[2] = '\0';
          local_78.StatData.Pad[3] = '\0';
          local_78.StatData.Pad[4] = '\0';
          local_78.StatData.Pad[5] = '\0';
          local_78.StatData.Pad[6] = '\0';
          local_78.StatData.Pad[7] = '\0';
          local_res20 = FVar3;
          local_78.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar19,&local_78);
          FStatsTrace::Add(&local_res20,1);
          if (pFVar19->ScopeCount == 0) {
            FThreadStats::Flush(pFVar19,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar19,false,false);
          }
        }
      }
    }
    LeaveCriticalSection(lpCriticalSection_00);
    if (bVar26) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// CleanupResources @ 1459b6350

void __thiscall FD3D12BindlessResourceManager::CleanupResources(FD3D12BindlessResourceManager *this)

{
  longlong *plVar1;
  FD3D12DescriptorHeap *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->CpuHeap).Reference;
  if (pFVar2 != (FD3D12DescriptorHeap *)0x0) {
    (this->CpuHeap).Reference = (FD3D12DescriptorHeap *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  ReleaseGPUHeaps(this);
  return;
}

// CloseCommandList @ 1459b6dd0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12BindlessResourceManager::CloseCommandList
          (FD3D12BindlessResourceManager *this,FD3D12CommandContext *param_1)

{
  longlong *plVar1;
  FD3D12DescriptorHeap *pFVar2;
  longlong lVar3;
  
  CheckRequestNewActiveGPUHeap(this);
  pFVar2 = (param_1->BindlessState).CurrentGpuHeap.Reference;
  if (pFVar2 != (FD3D12DescriptorHeap *)0x0) {
    (param_1->BindlessState).CurrentGpuHeap.Reference = (FD3D12DescriptorHeap *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)();
    }
  }
  (param_1->BindlessState).bRefreshHeap = false;
  if (1 < (int)this->Configuration) {
    FD3D12StateCache::SetNewBindlessResourcesHeap(&param_1->StateCache,(FD3D12DescriptorHeap *)0x0);
  }
  return;
}

// CopyCpuHeap @ 1459b8bf0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12BindlessResourceManager::CopyCpuHeap
          (FD3D12BindlessResourceManager *this,FD3D12DescriptorHeap *param_1)

{
  FD3D12DescriptorHeap *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceGPUDescriptorsCopied> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  uchar auVar8 [8];
  FRHIDescriptorAllocatorRange local_res8;
  FName local_res18;
  FName local_res20;
  FStatMessage local_28;
  
  local_res8.First = 0;
  local_res8.Last = 0;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = FRHIDescriptorAllocator::GetAllocatedRange
                    (*(FRHIDescriptorAllocator **)(*(longlong *)(this->_padding_ + 0x728) + 0x40),
                     &local_res8);
  if (bVar4) {
    uVar7 = (local_res8.Last - local_res8.First) + 1;
    pFVar1 = (this->CpuHeap).Reference;
    if ((this->_padding_ == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UE::D3D12Descriptors::CopyDescriptors
              ((FD3D12Device *)this->_padding_,param_1,pFVar1,local_res8.First,uVar7);
    auVar8[4] = '\0';
    auVar8[5] = '\0';
    auVar8[6] = '\0';
    auVar8[7] = '\0';
    auVar8._0_4_ = uVar7;
    if ((uVar7 != 0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar6 = StatPtr_STAT_D3D12BindlessResourceGPUDescriptorsCopied;
      if (StatPtr_STAT_D3D12BindlessResourceGPUDescriptorsCopied ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceGPUDescriptorsCopied>)0x0) {
        pFVar5 = ::FName::FName(&local_res20,"STAT_D3D12BindlessResourceGPUDescriptorsCopied");
        FVar6 = (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceGPUDescriptorsCopied>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &StatPtr_STAT_D3D12BindlessResourceGPUDescriptorsCopied,*pFVar5,
                           L"Resource GPU Descriptors Copied","STATGROUP_D3D12Bindless",
                           "STATCAT_Advanced",L"D3D12RHI: Bindless",true,true,ST_int64,false,false,
                           MCR_Invalid);
      }
      FVar2 = *(FName *)FVar6;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        local_res18 = FVar2;
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_28.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
        local_res18 = FVar2;
        local_28.StatData.Pad = auVar8;
        local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_28);
        FStatsTrace::Add(&local_res18,(long64)auVar8);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  return;
}

// FinalizeContext @ 1459bfe50

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12BindlessResourceManager::FinalizeContext
          (FD3D12BindlessResourceManager *this,FD3D12CommandContext *param_1)

{
  longlong *plVar1;
  FD3D12DescriptorHeap *pFVar2;
  longlong lVar3;
  
  if (*(longlong *)&param_1->field_0x188 != 0) {
    FD3D12CommandContext::CloseCommandList(param_1);
  }
  CheckRequestNewActiveGPUHeap(this);
  pFVar2 = (param_1->BindlessState).CurrentGpuHeap.Reference;
  if (pFVar2 != (FD3D12DescriptorHeap *)0x0) {
    (param_1->BindlessState).CurrentGpuHeap.Reference = (FD3D12DescriptorHeap *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  (param_1->BindlessState).bRefreshHeap = false;
  return;
}

// FinalizeHeapOnState @ 1459bfed0

void __thiscall
FD3D12BindlessResourceManager::FinalizeHeapOnState
          (FD3D12BindlessResourceManager *this,FD3D12ContextBindlessState *param_1)

{
  longlong *plVar1;
  FD3D12DescriptorHeap *pFVar2;
  longlong lVar3;
  
  CheckRequestNewActiveGPUHeap(this);
  pFVar2 = (param_1->CurrentGpuHeap).Reference;
  if (pFVar2 != (FD3D12DescriptorHeap *)0x0) {
    (param_1->CurrentGpuHeap).Reference = (FD3D12DescriptorHeap *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  param_1->bRefreshHeap = false;
  return;
}

// FlushPendingDescriptorUpdates @ 1459c08c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12BindlessResourceManager::FlushPendingDescriptorUpdates
          (FD3D12BindlessResourceManager *this,FD3D12CommandContext *param_1)

{
  longlong *plVar1;
  FD3D12ContextBindlessState *pFVar2;
  FD3D12DescriptorHeap *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  
  pFVar2 = &param_1->BindlessState;
  if (((param_1->BindlessState).bRefreshHeap != false) || (this->bRequestNewActiveGpuHeap != false))
  {
    CheckRequestNewActiveGPUHeap(this);
    pFVar3 = (pFVar2->CurrentGpuHeap).Reference;
    if (pFVar3 != (FD3D12DescriptorHeap *)0x0) {
      (pFVar2->CurrentGpuHeap).Reference = (FD3D12DescriptorHeap *)0x0;
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    (param_1->BindlessState).bRefreshHeap = false;
    AssignHeapToState(this,pFVar2);
    if (1 < (int)this->Configuration) {
      if (*(longlong *)&param_1->field_0x188 == 0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7454976178223316442>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                           ,0x226,"Context.IsOpen()");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        FD3D12StateCache::SetNewBindlessResourcesHeap
                  (&param_1->StateCache,(pFVar2->CurrentGpuHeap).Reference);
      }
    }
  }
  return;
}

// GarbageCollect @ 1459c1180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D12BindlessResourceManager::GarbageCollect(FD3D12BindlessResourceManager *this)

{
  TArray<FD3D12BindlessResourceManager::FGpuHeapData,TSizedDefaultAllocator<32>_> *pTVar1;
  uint *puVar2;
  FGpuHeapData *pFVar3;
  FName FVar4;
  undefined8 *puVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsActive> FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsAllocated> FVar18;
  FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapGPUMemoryUsage> FVar19;
  longlong lVar20;
  int *piVar21;
  uint uVar22;
  uint uVar23;
  FGpuHeapData *pFVar24;
  ulonglong uVar25;
  FScriptContainerElement *pFVar26;
  ulonglong uVar27;
  uchar auVar28 [8];
  bool bVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  longlong local_res20;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  LPCRITICAL_SECTION local_a0;
  FStatMessage local_98;
  FStatMessage local_88;
  FStatMessage local_78;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  
  local_a0 = (LPCRITICAL_SECTION)this->HeapsCS;
  if (local_a0 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_a0);
  if ((this->Configuration == RayTracing) &&
     ((longlong)GBindlessResourceDescriptorGarbageCollectLatency + this->LastUsedExplicitHeapCycle <
      this->GarbageCollectCycle)) {
    ReleaseGPUHeaps(this);
  }
  else {
    bVar29 = -1 < CpuChannel->Enabled;
    if (bVar29) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId397,"FD3D12BindlessResourceManager::GarbageCollect",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                 ,0x18d);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId397);
    }
    uVar23 = (this->MovingWindowMaxInUseGPUHeaps).NumValuesUsed;
    if (uVar23 == 100) {
      (this->MovingWindowMaxInUseGPUHeaps).ValuesArray.Elements
      [(uint)(this->MovingWindowMaxInUseGPUHeaps).RemoveNextIdx] = this->MaxInUseGPUHeaps;
      (this->MovingWindowMaxInUseGPUHeaps).RemoveNextIdx =
           ((this->MovingWindowMaxInUseGPUHeaps).RemoveNextIdx + 1) % 100;
    }
    else {
      (this->MovingWindowMaxInUseGPUHeaps).ValuesArray.Elements[uVar23] = this->MaxInUseGPUHeaps;
      piVar21 = &(this->MovingWindowMaxInUseGPUHeaps).NumValuesUsed;
      *piVar21 = *piVar21 + 1;
    }
    uVar25 = 0;
    this->MaxInUseGPUHeaps = this->InUseGPUHeaps;
    uVar23 = (this->MovingWindowMaxInUseGPUHeaps).NumValuesUsed;
    uVar22 = 0;
    uVar27 = uVar25;
    if (((0 < (int)uVar23) && (uVar27 = 0, 7 < uVar23)) && (1 < __isa_available)) {
      uVar12 = uVar23 & 0x80000007;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
      }
      uVar30 = 0;
      uVar31 = 0;
      uVar32 = 0;
      uVar33 = 0;
      uVar34 = 0;
      uVar35 = 0;
      uVar36 = 0;
      uVar37 = 0;
      uVar27 = uVar25;
      do {
        iVar13 = (int)uVar27;
        puVar2 = (this->MovingWindowMaxInUseGPUHeaps).ValuesArray.Elements + uVar27;
        uVar7 = *puVar2;
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        uVar22 = iVar13 + 8;
        uVar27 = (ulonglong)uVar22;
        uVar30 = (uVar30 < uVar7) * uVar7 | (uVar30 >= uVar7) * uVar30;
        uVar31 = (uVar31 < uVar8) * uVar8 | (uVar31 >= uVar8) * uVar31;
        uVar32 = (uVar32 < uVar9) * uVar9 | (uVar32 >= uVar9) * uVar32;
        uVar33 = (uVar33 < uVar10) * uVar10 | (uVar33 >= uVar10) * uVar33;
        puVar2 = (this->MovingWindowMaxInUseGPUHeaps).ValuesArray.Elements + (iVar13 + 4);
        uVar7 = *puVar2;
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        uVar34 = (uVar34 < uVar7) * uVar7 | (uVar34 >= uVar7) * uVar34;
        uVar35 = (uVar35 < uVar8) * uVar8 | (uVar35 >= uVar8) * uVar35;
        uVar36 = (uVar36 < uVar9) * uVar9 | (uVar36 >= uVar9) * uVar36;
        uVar37 = (uVar37 < uVar10) * uVar10 | (uVar37 >= uVar10) * uVar37;
      } while ((int)uVar22 < (int)(uVar23 - uVar12));
      uVar12 = (uVar30 < uVar34) * uVar34 | (uVar30 >= uVar34) * uVar30;
      uVar30 = (uVar31 < uVar35) * uVar35 | (uVar31 >= uVar35) * uVar31;
      uVar31 = (uVar32 < uVar36) * uVar36 | (uVar32 >= uVar36) * uVar32;
      uVar32 = (uVar33 < uVar37) * uVar37 | (uVar33 >= uVar37) * uVar33;
      uVar12 = (uVar12 < uVar31) * uVar31 | (uVar12 >= uVar31) * uVar12;
      uVar30 = (uVar30 < uVar32) * uVar32 | (uVar30 >= uVar32) * uVar30;
      uVar27 = (ulonglong)((uVar12 < uVar30) * uVar30 | (uVar12 >= uVar30) * uVar12);
    }
    uVar12 = (uint)uVar27;
    for (lVar20 = (longlong)(int)uVar22; lVar20 < (int)uVar23; lVar20 = lVar20 + 1) {
      uVar12 = (this->MovingWindowMaxInUseGPUHeaps).ValuesArray.Elements[lVar20];
      if (uVar12 < (uint)uVar27) {
        uVar12 = (uint)uVar27;
      }
      uVar27 = (ulonglong)uVar12;
    }
    iVar13 = (this->ActiveGpuHeaps).ArrayNum;
    if (((int)(uVar12 + 4) < iVar13) && (uVar27 = uVar25, 0 < iVar13)) {
      do {
        uVar22 = (uint)uVar25;
        uVar23 = 0;
        if ((int)uVar22 < (this->ActiveGpuHeaps).ArrayNum) {
          uVar23 = ~uVar22 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar24 = (FGpuHeapData *)((this->ActiveGpuHeaps).AllocatorInstance.Data + uVar27);
        if (pFVar24->bInUse == false) {
          piVar21 = &(pFVar24->UpdatedHandles).ArrayMax;
          (pFVar24->UpdatedHandles).ArrayNum = 0;
          if (*piVar21 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,0,&(pFVar24->UpdatedHandles).AllocatorInstance,0,piVar21);
          }
          pTVar1 = &this->PooledGpuHeaps;
          pFVar24->LastUsedGarbageCollectCycle = this->GarbageCollectCycle;
          pFVar3 = (FGpuHeapData *)(pTVar1->AllocatorInstance).Data;
          if (((pFVar3 <= pFVar24) && (pFVar24 < pFVar3 + (this->PooledGpuHeaps).ArrayMax)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar13 = (this->PooledGpuHeaps).ArrayNum;
          piVar21 = &(this->PooledGpuHeaps).ArrayMax;
          if (iVar13 == *piVar21) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&pTVar1->AllocatorInstance,piVar21);
          }
          (this->PooledGpuHeaps).ArrayNum = iVar13 + 1;
          FGpuHeapData::FGpuHeapData
                    ((FGpuHeapData *)((pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 0x28),
                     pFVar24);
          uVar23 = 0;
          if ((int)uVar22 < (this->ActiveGpuHeaps).ArrayNum) {
            uVar23 = ~uVar22 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          TArray<FD3D12BindlessResourceManager::FGpuHeapData,TSizedDefaultAllocator<32>_>::
          RemoveAtSwapImpl(&this->ActiveGpuHeaps,uVar22);
          FVar15 = StatPtr_STAT_D3D12BindlessResourceHeapsActive;
          if (StatPtr_STAT_D3D12BindlessResourceHeapsActive ==
              (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsActive>)0x0) {
            pFVar14 = ::FName::FName(&local_68,"STAT_D3D12BindlessResourceHeapsActive");
            FVar15 = (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsActive>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_D3D12BindlessResourceHeapsActive,*pFVar14,
                                L"Resource Heaps Active","STATGROUP_D3D12Bindless",
                                "STATCAT_Advanced",L"D3D12RHI: Bindless",true,false,ST_int64,false,
                                false,MCR_Invalid);
          }
          FVar4 = *(FName *)FVar15;
          if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar16 == (FThreadStats *)0x0) {
              pFVar17 = FThreadStatsPool::Get();
              pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
            }
            local_98.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
            local_98.StatData.Pad[0] = '\x01';
            local_98.StatData.Pad[1] = '\0';
            local_98.StatData.Pad[2] = '\0';
            local_98.StatData.Pad[3] = '\0';
            local_98.StatData.Pad[4] = '\0';
            local_98.StatData.Pad[5] = '\0';
            local_98.StatData.Pad[6] = '\0';
            local_98.StatData.Pad[7] = '\0';
            local_b8 = FVar4;
            local_98.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar16,&local_98);
            FStatsTrace::Add(&local_b8,-1);
            if (pFVar16->ScopeCount == 0) {
              FThreadStats::Flush(pFVar16,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar16,false,false);
            }
          }
          iVar13 = (this->ActiveGpuHeaps).ArrayNum;
          if (this->ActiveGpuHeapIndex == iVar13) {
            this->ActiveGpuHeapIndex = uVar22;
          }
          uVar22 = uVar22 - 1;
          uVar27 = uVar27 - 0x28;
          if (iVar13 <= (int)(uVar12 + 4)) break;
        }
        uVar25 = (ulonglong)(uVar22 + 1);
        uVar27 = uVar27 + 0x28;
      } while ((int)(uVar22 + 1) < (this->ActiveGpuHeaps).ArrayNum);
    }
    uVar23 = 0;
    if ((0 < GBindlessResourceDescriptorGarbageCollectLatency) &&
       (0 < (this->PooledGpuHeaps).ArrayNum)) {
      local_res20 = 0;
      do {
        uVar22 = 0;
        if ((int)uVar23 < (this->PooledGpuHeaps).ArrayNum) {
          uVar22 = ~uVar23 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar26 = (this->PooledGpuHeaps).AllocatorInstance.Data + local_res20;
        if ((pFVar26[0x18] != (FScriptContainerElement)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("!GpuHeap.bInUse",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                                ,0x1bb,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((ulonglong)
            ((longlong)GBindlessResourceDescriptorGarbageCollectLatency +
            *(longlong *)(pFVar26 + 0x20)) <= this->GarbageCollectCycle) {
          FVar18 = StatPtr_STAT_D3D12BindlessResourceHeapsAllocated;
          if (StatPtr_STAT_D3D12BindlessResourceHeapsAllocated ==
              (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsAllocated>)0x0) {
            pFVar14 = ::FName::FName(&local_60,"STAT_D3D12BindlessResourceHeapsAllocated");
            FVar18 = (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsAllocated>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_D3D12BindlessResourceHeapsAllocated,*pFVar14,
                                L"Resource Heaps Allocated","STATGROUP_D3D12Bindless",
                                "STATCAT_Advanced",L"D3D12RHI: Bindless",true,false,ST_int64,false,
                                false,MCR_Invalid);
          }
          FVar4 = *(FName *)FVar18;
          if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar16 == (FThreadStats *)0x0) {
              pFVar17 = FThreadStatsPool::Get();
              pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
            }
            local_88.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
            local_88.StatData.Pad[0] = '\x01';
            local_88.StatData.Pad[1] = '\0';
            local_88.StatData.Pad[2] = '\0';
            local_88.StatData.Pad[3] = '\0';
            local_88.StatData.Pad[4] = '\0';
            local_88.StatData.Pad[5] = '\0';
            local_88.StatData.Pad[6] = '\0';
            local_88.StatData.Pad[7] = '\0';
            local_b0 = FVar4;
            local_88.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar16,&local_88);
            FStatsTrace::Add(&local_b0,-1);
            if (pFVar16->ScopeCount == 0) {
              FThreadStats::Flush(pFVar16,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar16,false,false);
            }
          }
          uVar22 = *(int *)(*(longlong *)pFVar26 + 0x38) * *(int *)(*(longlong *)pFVar26 + 0x34);
          auVar28[4] = '\0';
          auVar28[5] = '\0';
          auVar28[6] = '\0';
          auVar28[7] = '\0';
          auVar28._0_4_ = uVar22;
          if (uVar22 != 0) {
            FVar19 = StatPtr_STAT_D3D12BindlessResourceHeapGPUMemoryUsage;
            if (StatPtr_STAT_D3D12BindlessResourceHeapGPUMemoryUsage ==
                (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapGPUMemoryUsage>)0x0) {
              pFVar14 = ::FName::FName(local_58,"STAT_D3D12BindlessResourceHeapGPUMemoryUsage");
              FVar19 = (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapGPUMemoryUsage>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_D3D12BindlessResourceHeapGPUMemoryUsage,*pFVar14,
                                  L"Resource Heaps GPU Memory Usage","STATGROUP_D3D12Bindless",
                                  "STATCAT_Advanced",L"D3D12RHI: Bindless",true,false,ST_int64,false
                                  ,false,MCR_Physical);
            }
            FVar4 = *(FName *)FVar19;
            if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar16 == (FThreadStats *)0x0) {
                pFVar17 = FThreadStatsPool::Get();
                pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
              }
              local_78.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
              local_a8 = FVar4;
              local_78.StatData.Pad = auVar28;
              local_78.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
              FThreadStats::AddStatMessage(pFVar16,&local_78);
              FStatsTrace::Add(&local_a8,-(longlong)auVar28);
              if (pFVar16->ScopeCount == 0) {
                FThreadStats::Flush(pFVar16,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar16,false,false);
              }
            }
          }
          puVar5 = *(undefined8 **)pFVar26;
          if (puVar5 != (undefined8 *)0x0) {
            *(longlong *)pFVar26 = 0;
            piVar21 = (int *)(puVar5 + 1);
            LOCK();
            iVar13 = *piVar21;
            *piVar21 = *piVar21 + -1;
            UNLOCK();
            if (((iVar13 == 1) && (piVar21 != (int *)0x0)) && (puVar5 != (undefined8 *)0x0)) {
              (**(code **)*puVar5)(puVar5,1);
            }
          }
          uVar22 = 0;
          if ((int)uVar23 < (this->PooledGpuHeaps).ArrayNum) {
            uVar22 = ~uVar23 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          TArray<FD3D12BindlessResourceManager::FGpuHeapData,TSizedDefaultAllocator<32>_>::
          RemoveAtSwapImpl(&this->PooledGpuHeaps,uVar23);
          uVar23 = uVar23 - 1;
          local_res20 = local_res20 + -0x28;
        }
        local_res20 = local_res20 + 0x28;
        uVar23 = uVar23 + 1;
      } while ((int)uVar23 < (this->PooledGpuHeaps).ArrayNum);
    }
    if (bVar29) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  this->GarbageCollectCycle = this->GarbageCollectCycle + 1;
                    /* WARNING: Could not recover jumptable at 0x0001459c1b4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(local_a0);
  return;
}

// GetExplicitHeapForContext @ 1459c2010

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12DescriptorHeap * __thiscall
FD3D12BindlessResourceManager::GetExplicitHeapForContext
          (FD3D12BindlessResourceManager *this,FD3D12CommandContext *param_1)

{
  longlong *plVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  FD3D12DescriptorHeap *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  FD3D12DescriptorHeap *pFVar7;
  uint uVar8;
  
  if (((param_1->BindlessState).CurrentGpuHeap.Reference == (FD3D12DescriptorHeap *)0x0) &&
     (this->Configuration == RayTracing)) {
    lpCriticalSection = (LPCRITICAL_SECTION)this->HeapsCS;
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    uVar6 = AddActiveGPUHeap(this);
    this->ActiveGpuHeapIndex = uVar6;
    uVar8 = 0;
    if ((int)uVar6 < (this->ActiveGpuHeaps).ArrayNum) {
      uVar8 = ~uVar6 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FD3D12DescriptorHeap *)(*pcVar3)();
        return pFVar7;
      }
    }
    pFVar7 = *(FD3D12DescriptorHeap **)
              ((this->ActiveGpuHeaps).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x28);
    pFVar2 = (param_1->BindlessState).CurrentGpuHeap.Reference;
    if (pFVar2 != pFVar7) {
      (param_1->BindlessState).CurrentGpuHeap.Reference = pFVar7;
      if (pFVar7 != (FD3D12DescriptorHeap *)0x0) {
        LOCK();
        *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar2 != (FD3D12DescriptorHeap *)0x0) {
        plVar1 = &pFVar2->_padding_;
        LOCK();
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar2->_padding_)(pFVar2,1);
        }
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  this->LastUsedExplicitHeapCycle = this->GarbageCollectCycle;
  if ((param_1->BindlessState).CurrentGpuHeap.Reference == (FD3D12DescriptorHeap *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.CurrentGpuHeap",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FD3D12DescriptorHeap *)(*pcVar3)();
      return pFVar7;
    }
  }
  return (param_1->BindlessState).CurrentGpuHeap.Reference;
}

// GetHeap @ 1459c2510

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FD3D12DescriptorHeap * __thiscall
FD3D12BindlessResourceManager::GetHeap(FD3D12BindlessResourceManager *this,ERHIPipeline param_1)

{
  code *pcVar1;
  bool bVar2;
  FD3D12DescriptorHeap *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                     ,0x25b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FD3D12DescriptorHeap *)(*pcVar1)();
    return pFVar3;
  }
  return (FD3D12DescriptorHeap *)0x0;
}

// GrowCPUHeap @ 1459c3720

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12BindlessResourceManager::GrowCPUHeap
          (FD3D12BindlessResourceManager *this,uint param_1,uint param_2)

{
  longlong *plVar1;
  FD3D12DescriptorHeap *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  FD3D12DescriptorHeap *pFVar6;
  
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = UE::D3D12BindlessDescriptors::CreateCpuHeap
                     ((FD3D12Device *)this->_padding_,Standard,param_2);
  if (pFVar6 != (FD3D12DescriptorHeap *)0x0) {
    LOCK();
    *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
    UNLOCK();
  }
  pFVar2 = (this->CpuHeap).Reference;
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  UE::D3D12Descriptors::CopyDescriptors((FD3D12Device *)this->_padding_,pFVar6,pFVar2,0,param_1);
  pFVar2 = (this->CpuHeap).Reference;
  if (pFVar2 != pFVar6) {
    (this->CpuHeap).Reference = pFVar6;
    if (pFVar6 != (FD3D12DescriptorHeap *)0x0) {
      LOCK();
      *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar2 != (FD3D12DescriptorHeap *)0x0) {
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
  }
  if (-1 < this->ActiveGpuHeapIndex) {
    this->bRequestNewActiveGpuHeap = true;
    this->bCPUHeapResized = true;
  }
  if (pFVar6 != (FD3D12DescriptorHeap *)0x0) {
    plVar1 = &pFVar6->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  return;
}

// InitializeDescriptor @ 1459c55e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12BindlessResourceManager::InitializeDescriptor
          (FD3D12BindlessResourceManager *this,FRHIDescriptorHandle param_1,FD3D12View *param_2)

{
  uint uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  FD3D12DescriptorHeap *pFVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  code *pcVar5;
  FRHIDescriptorHandle FVar6;
  D3D12_CPU_DESCRIPTOR_HANDLE DVar7;
  bool bVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceDescriptorsInitialized> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  FRHIDescriptorHandle local_res10 [2];
  FName local_res20;
  FName local_58;
  FStatMessage local_50;
  D3D12_CPU_DESCRIPTOR_HANDLE local_40;
  undefined8 uStack_38;
  
  if ((param_1.Index != 0xffffffff) && (param_1.Type != Invalid)) {
    bVar14 = -1 < CpuChannel->Enabled;
    local_res10[0] = param_1;
    if (bVar14) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId484,"FD3D12BindlessResourceManager::InitializeDescriptor",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                 ,0x1e4);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId484);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)this->HeapsCS;
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    if (((param_2->ResourceInfo).ResourceLocation == (FD3D12ResourceLocation *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                           ,0x103,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar6 = local_res10[0];
    local_40.ptr = (param_2->OfflineCpuHandle)._padding_;
    uStack_38._0_4_ = (param_2->OfflineCpuHandle).HeapIndex;
    uStack_38._4_4_ = (param_2->OfflineCpuHandle).Version;
    pFVar2 = (this->CpuHeap).Reference;
    if ((this->_padding_ == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    DVar7.ptr = local_40.ptr;
    UE::D3D12Descriptors::CopyDescriptor((FD3D12Device *)this->_padding_,pFVar2,FVar6,local_40);
    FVar6 = local_res10[0];
    uVar1 = this->ActiveGpuHeapIndex;
    if ((-1 < (int)uVar1) && (this->bCPUHeapResized == false)) {
      uVar12 = 0;
      if ((int)uVar1 < (this->ActiveGpuHeaps).ArrayNum) {
        uVar12 = ~uVar1 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = *(FD3D12DescriptorHeap **)
                ((this->ActiveGpuHeaps).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x28);
      if ((this->_padding_ == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Parent != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                             ,0x59,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::D3D12Descriptors::CopyDescriptor((FD3D12Device *)this->_padding_,pFVar2,FVar6,DVar7);
      uVar1 = this->ActiveGpuHeapIndex;
      lVar13 = (longlong)(int)uVar1;
      uVar12 = 0;
      if ((int)uVar1 < (this->ActiveGpuHeaps).ArrayNum) {
        uVar12 = ~uVar1 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (this->ActiveGpuHeaps).AllocatorInstance.Data;
      if (((*(FRHIDescriptorHandle **)(pFVar3 + lVar13 * 0x28 + 8) <= local_res10) &&
          (local_res10 <
           *(FRHIDescriptorHandle **)(pFVar3 + lVar13 * 0x28 + 8) +
           *(int *)(pFVar3 + lVar13 * 0x28 + 0x14))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = *(int *)(pFVar3 + lVar13 * 0x28 + 0x10);
      if (iVar9 == *(int *)(pFVar3 + lVar13 * 0x28 + 0x14)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,(ForAnyElementType *)(pFVar3 + lVar13 * 0x28 + 8),
                           (int *)(pFVar3 + lVar13 * 0x28 + 0x14));
      }
      *(int *)(pFVar3 + lVar13 * 0x28 + 0x10) = iVar9 + 1;
      *(FRHIDescriptorHandle *)(*(longlong *)(pFVar3 + lVar13 * 0x28 + 8) + (longlong)iVar9 * 8) =
           local_res10[0];
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar11 = StatPtr_STAT_D3D12BindlessResourceDescriptorsInitialized;
      if (StatPtr_STAT_D3D12BindlessResourceDescriptorsInitialized ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceDescriptorsInitialized>)0x0) {
        pFVar10 = ::FName::FName(&local_58,"STAT_D3D12BindlessResourceDescriptorsInitialized");
        FVar11 = (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceDescriptorsInitialized>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_D3D12BindlessResourceDescriptorsInitialized,*pFVar10,
                            L"Resource Descriptors Initialized","STATGROUP_D3D12Bindless",
                            "STATCAT_Advanced",L"D3D12RHI: Bindless",true,true,ST_int64,false,false,
                            MCR_Invalid);
      }
      FVar4 = *(FName *)FVar11;
      local_res20 = FVar4;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_50.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
        local_50.StatData.Pad[0] = '\x01';
        local_50.StatData.Pad[1] = '\0';
        local_50.StatData.Pad[2] = '\0';
        local_50.StatData.Pad[3] = '\0';
        local_50.StatData.Pad[4] = '\0';
        local_50.StatData.Pad[5] = '\0';
        local_50.StatData.Pad[6] = '\0';
        local_50.StatData.Pad[7] = '\0';
        local_res20 = FVar4;
        local_50.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_50);
        FStatsTrace::Add(&local_res20,1);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// OpenCommandList @ 1459c88f0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12BindlessResourceManager::OpenCommandList
          (FD3D12BindlessResourceManager *this,FD3D12CommandContext *param_1)

{
  AssignHeapToState(this,&param_1->BindlessState);
  if (1 < (int)this->Configuration) {
    FD3D12StateCache::SetNewBindlessResourcesHeap
              (&param_1->StateCache,(param_1->BindlessState).CurrentGpuHeap.Reference);
  }
  return;
}

// Recycle @ 1459d3090

void __thiscall
FD3D12BindlessResourceManager::Recycle
          (FD3D12BindlessResourceManager *this,FD3D12DescriptorHeap *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  lpCriticalSection = (LPCRITICAL_SECTION)this->HeapsCS;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  iVar2 = (this->ActiveGpuHeaps).ArrayNum;
  pFVar5 = (this->ActiveGpuHeaps).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->ActiveGpuHeaps).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FD3D12BindlessResourceManager::FGpuHeapData,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) goto LAB_1459d3142;
    if (*(FD3D12DescriptorHeap **)pFVar5 == param_1) break;
    pFVar5 = pFVar5 + 0x28;
  }
  if (pFVar5[0x18] == (FScriptContainerElement)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GpuHeap.bInUse",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                       ,0x1d5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5[0x18] = (FScriptContainerElement)0x0;
  UpdateInUseGPUHeaps(this,false);
LAB_1459d3142:
                    /* WARNING: Could not recover jumptable at 0x0001459d315b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// ReleaseGPUHeaps @ 1459d4690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D12BindlessResourceManager::ReleaseGPUHeaps(FD3D12BindlessResourceManager *this)

{
  int *piVar1;
  TArray<FD3D12BindlessResourceManager::FGpuHeapData,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  FName FVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsInUseByGPU> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsAllocated> FVar15;
  FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsActive> FVar16;
  FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapGPUMemoryUsage> FVar17;
  FScriptContainerElement *pFVar18;
  FNameEntryId FVar19;
  uint local_res8;
  uint uStackX_c;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  FName local_b8;
  FName local_b0;
  FStatMessage local_a8;
  FStatMessage local_98;
  FStatMessage local_88;
  FStatMessage local_78;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  
  pTVar2 = &this->ActiveGpuHeaps;
  iVar5 = (this->ActiveGpuHeaps).ArrayNum;
  pFVar18 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar18 + (longlong)iVar5 * 0x28;
  while( true ) {
    if ((this->ActiveGpuHeaps).ArrayNum != iVar5) {
      local_res8 = local_res8 & 0xffffff00;
      `TCheckedPointerIterator<FD3D12BindlessResourceManager::FGpuHeapData,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar18 == pFVar3) break;
    if (pFVar18[0x18] == (FScriptContainerElement)0x0) {
      puVar6 = *(undefined8 **)pFVar18;
      if (puVar6 != (undefined8 *)0x0) {
        *(longlong *)pFVar18 = 0;
        piVar1 = (int *)(puVar6 + 1);
        LOCK();
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (piVar1 != (int *)0x0)) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      pFVar18 = pFVar18 + 0x28;
    }
    else {
      if (this->_padding_ == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L"");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      FD3D12DescriptorHeapManager::DeferredFreeHeap
                ((FD3D12DescriptorHeapManager *)(this->_padding_ + 0x610),
                 *(FD3D12DescriptorHeap **)pFVar18);
      pFVar18 = pFVar18 + 0x28;
    }
  }
  DestructItems<FD3D12BindlessResourceManager::FGpuHeapData,int>
            ((FGpuHeapData *)(pTVar2->AllocatorInstance).Data,(this->ActiveGpuHeaps).ArrayNum);
  piVar1 = &(this->ActiveGpuHeaps).ArrayMax;
  (this->ActiveGpuHeaps).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pTVar2 = &this->PooledGpuHeaps;
  iVar5 = (this->PooledGpuHeaps).ArrayNum;
  pFVar18 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar18 + (longlong)iVar5 * 0x28;
  while( true ) {
    if ((this->PooledGpuHeaps).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FD3D12BindlessResourceManager::FGpuHeapData,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res10);
    }
    if (pFVar18 == pFVar3) break;
    puVar6 = *(undefined8 **)pFVar18;
    if (puVar6 != (undefined8 *)0x0) {
      *(longlong *)pFVar18 = 0;
      piVar1 = (int *)(puVar6 + 1);
      LOCK();
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (piVar1 != (int *)0x0)) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
    pFVar18 = pFVar18 + 0x28;
  }
  DestructItems<FD3D12BindlessResourceManager::FGpuHeapData,int>
            ((FGpuHeapData *)(pTVar2->AllocatorInstance).Data,(this->PooledGpuHeaps).ArrayNum);
  piVar1 = &(this->PooledGpuHeaps).ArrayMax;
  (this->PooledGpuHeaps).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  FVar12 = StatPtr_STAT_D3D12BindlessResourceHeapsInUseByGPU;
  if (StatPtr_STAT_D3D12BindlessResourceHeapsInUseByGPU ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsInUseByGPU>)0x0) {
    pFVar11 = ::FName::FName(&local_68,"STAT_D3D12BindlessResourceHeapsInUseByGPU");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsInUseByGPU>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_D3D12BindlessResourceHeapsInUseByGPU,*pFVar11,
                        L"Resource Heaps in use by GPU","STATGROUP_D3D12Bindless","STATCAT_Advanced"
                        ,L"D3D12RHI: Bindless",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar7 = *(FName *)FVar12;
  FVar19 = FVar7.ComparisonIndex.Value;
  uVar10 = FVar7.Number;
  local_res8 = FVar19.Value;
  uStackX_c = uVar10;
  if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    local_a8.NameAndInfo.Number = uVar10 & 0xffff8fff | 0x8000;
    local_a8.StatData.Pad[0] = '\0';
    local_a8.StatData.Pad[1] = '\0';
    local_a8.StatData.Pad[2] = '\0';
    local_a8.StatData.Pad[3] = '\0';
    local_a8.StatData.Pad[4] = '\0';
    local_a8.StatData.Pad[5] = '\0';
    local_a8.StatData.Pad[6] = '\0';
    local_a8.StatData.Pad[7] = '\0';
    local_res18 = FVar7;
    local_a8.NameAndInfo.Index.Value = FVar19.Value;
    FThreadStats::AddStatMessage(pFVar13,&local_a8);
    FStatsTrace::Set(&local_res18,0);
    if (pFVar13->ScopeCount == 0) {
      FThreadStats::Flush(pFVar13,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar13,false,false);
    }
  }
  FVar15 = StatPtr_STAT_D3D12BindlessResourceHeapsAllocated;
  if (StatPtr_STAT_D3D12BindlessResourceHeapsAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsAllocated>)0x0) {
    pFVar11 = ::FName::FName(&local_60,"STAT_D3D12BindlessResourceHeapsAllocated");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsAllocated>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_D3D12BindlessResourceHeapsAllocated,*pFVar11,
                        L"Resource Heaps Allocated","STATGROUP_D3D12Bindless","STATCAT_Advanced",
                        L"D3D12RHI: Bindless",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar7 = *(FName *)FVar15;
  FVar19 = FVar7.ComparisonIndex.Value;
  uVar10 = FVar7.Number;
  local_res8 = FVar19.Value;
  uStackX_c = uVar10;
  if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    local_98.NameAndInfo.Number = uVar10 & 0xffff8fff | 0x8000;
    local_98.StatData.Pad[0] = '\0';
    local_98.StatData.Pad[1] = '\0';
    local_98.StatData.Pad[2] = '\0';
    local_98.StatData.Pad[3] = '\0';
    local_98.StatData.Pad[4] = '\0';
    local_98.StatData.Pad[5] = '\0';
    local_98.StatData.Pad[6] = '\0';
    local_98.StatData.Pad[7] = '\0';
    local_res20 = FVar7;
    local_98.NameAndInfo.Index.Value = FVar19.Value;
    FThreadStats::AddStatMessage(pFVar13,&local_98);
    FStatsTrace::Set(&local_res20,0);
    if (pFVar13->ScopeCount == 0) {
      FThreadStats::Flush(pFVar13,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar13,false,false);
    }
  }
  FVar16 = StatPtr_STAT_D3D12BindlessResourceHeapsActive;
  if (StatPtr_STAT_D3D12BindlessResourceHeapsActive ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsActive>)0x0) {
    pFVar11 = ::FName::FName(&local_58,"STAT_D3D12BindlessResourceHeapsActive");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsActive>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BindlessResourceHeapsActive,
                        *pFVar11,L"Resource Heaps Active","STATGROUP_D3D12Bindless",
                        "STATCAT_Advanced",L"D3D12RHI: Bindless",true,false,ST_int64,false,false,
                        MCR_Invalid);
  }
  FVar7 = *(FName *)FVar16;
  FVar19 = FVar7.ComparisonIndex.Value;
  uVar10 = FVar7.Number;
  local_res8 = FVar19.Value;
  uStackX_c = uVar10;
  if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    local_88.NameAndInfo.Number = uVar10 & 0xffff8fff | 0x8000;
    local_88.StatData.Pad[0] = '\0';
    local_88.StatData.Pad[1] = '\0';
    local_88.StatData.Pad[2] = '\0';
    local_88.StatData.Pad[3] = '\0';
    local_88.StatData.Pad[4] = '\0';
    local_88.StatData.Pad[5] = '\0';
    local_88.StatData.Pad[6] = '\0';
    local_88.StatData.Pad[7] = '\0';
    local_b8 = FVar7;
    local_88.NameAndInfo.Index.Value = FVar19.Value;
    FThreadStats::AddStatMessage(pFVar13,&local_88);
    FStatsTrace::Set(&local_b8,0);
    if (pFVar13->ScopeCount == 0) {
      FThreadStats::Flush(pFVar13,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar13,false,false);
    }
  }
  FVar17 = StatPtr_STAT_D3D12BindlessResourceHeapGPUMemoryUsage;
  if (StatPtr_STAT_D3D12BindlessResourceHeapGPUMemoryUsage ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapGPUMemoryUsage>)0x0) {
    pFVar11 = ::FName::FName(local_50,"STAT_D3D12BindlessResourceHeapGPUMemoryUsage");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapGPUMemoryUsage>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_D3D12BindlessResourceHeapGPUMemoryUsage,*pFVar11,
                        L"Resource Heaps GPU Memory Usage","STATGROUP_D3D12Bindless",
                        "STATCAT_Advanced",L"D3D12RHI: Bindless",true,false,ST_int64,false,false,
                        MCR_Physical);
  }
  FVar7 = *(FName *)FVar17;
  if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar7.ComparisonIndex.Value.Value;
    uStackX_c = FVar7.Number;
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    local_78.NameAndInfo.Number = FVar7.Number & 0xffff8fff | 0x8000;
    local_78.StatData.Pad[0] = '\0';
    local_78.StatData.Pad[1] = '\0';
    local_78.StatData.Pad[2] = '\0';
    local_78.StatData.Pad[3] = '\0';
    local_78.StatData.Pad[4] = '\0';
    local_78.StatData.Pad[5] = '\0';
    local_78.StatData.Pad[6] = '\0';
    local_78.StatData.Pad[7] = '\0';
    local_b0 = FVar7;
    local_78.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar13,&local_78);
    FStatsTrace::Set(&local_b0,0);
    if (pFVar13->ScopeCount == 0) {
      FThreadStats::Flush(pFVar13,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar13,false,false);
    }
  }
  this->ActiveGpuHeapIndex = -1;
  this->InUseGPUHeaps = 0;
  this->bRequestNewActiveGpuHeap = false;
  return;
}

// UpdateDescriptor @ 1459ddb60

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FD3D12BindlessResourceManager::UpdateDescriptor
          (FD3D12BindlessResourceManager *this,FD3D12ContextArray *param_1,
          FRHIDescriptorHandle param_2,FD3D12View *param_3)

{
  FD3D12ContextArray *pFVar1;
  undefined4 uVar2;
  uint uVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  FD3D12DescriptorHeap *pFVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  FName FVar7;
  code *pcVar8;
  FRHIDescriptorHandle FVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceDescriptorsUpdated> FVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  bool bVar16;
  FRHIDescriptorHandle local_res18 [2];
  FName local_58;
  FName local_50;
  FStatMessage local_48;
  D3D12_CPU_DESCRIPTOR_HANDLE local_38;
  undefined8 uStack_30;
  
  if ((param_2.Index != 0xffffffff) && (param_2.Type != Invalid)) {
    bVar16 = -1 < CpuChannel->Enabled;
    local_res18[0] = param_2;
    if (bVar16) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId507,"FD3D12BindlessResourceManager::UpdateDescriptor",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                 ,0x1fb);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId507);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)this->HeapsCS;
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    if (((param_3->ResourceInfo).ResourceLocation == (FD3D12ResourceLocation *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                            ,0x103,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar9 = local_res18[0];
    local_38.ptr = (param_3->OfflineCpuHandle)._padding_;
    uStack_30._0_4_ = (param_3->OfflineCpuHandle).HeapIndex;
    uStack_30._4_4_ = (param_3->OfflineCpuHandle).Version;
    pFVar4 = (this->CpuHeap).Reference;
    if ((this->_padding_ == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x59,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    UE::D3D12Descriptors::CopyDescriptor((FD3D12Device *)this->_padding_,pFVar4,FVar9,local_38);
    if (-1 < this->ActiveGpuHeapIndex) {
      if ((this->_padding_ == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Parent != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                              ,0x59,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar1 = param_1 + 1;
      uVar2 = *(undefined4 *)(this->_padding_ + 8);
      for (; param_1 != pFVar1; param_1 = (FD3D12ContextArray *)&param_1->field_0x8) {
        plVar5 = *(longlong **)param_1;
        if (plVar5 != (longlong *)0x0) {
          lVar13 = (**(code **)(*plVar5 + 0x290))(plVar5,uVar2);
          *(undefined1 *)(lVar13 + 0x3dd0) = 1;
          if ((*(longlong *)(lVar13 + 0x1d8) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ExecutingCmdList",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                                  ,0x221,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar13 = *(longlong *)(lVar13 + 0x1d8);
          if ((((*(char *)(lVar13 + 0x65) != '\0') && ((*(byte *)(lVar13 + 0x29b) & 0x20) == 0)) &&
              (*(char *)(lVar13 + 0x68) == '\0')) &&
             (((*(char *)(lVar13 + 0x67) == '\0' ||
               (GRHIGlobals.ShaderBundles.SupportsParallel != false)) &&
              (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!Context.GetExecutingCommandList().AllowParallelTranslate()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                                   ,0x20d,L""), bVar10)))) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
      }
      uVar3 = this->ActiveGpuHeapIndex;
      lVar13 = (longlong)(int)uVar3;
      this->bRequestNewActiveGpuHeap = true;
      uVar11 = 0;
      if ((int)uVar3 < (this->ActiveGpuHeaps).ArrayNum) {
        uVar11 = ~uVar3 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (this->ActiveGpuHeaps).AllocatorInstance.Data;
      if (((*(FRHIDescriptorHandle **)(pFVar6 + lVar13 * 0x28 + 8) <= local_res18) &&
          (local_res18 <
           *(FRHIDescriptorHandle **)(pFVar6 + lVar13 * 0x28 + 8) +
           *(int *)(pFVar6 + lVar13 * 0x28 + 0x14))) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = *(int *)(pFVar6 + lVar13 * 0x28 + 0x10);
      if (iVar12 == *(int *)(pFVar6 + lVar13 * 0x28 + 0x14)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,(ForAnyElementType *)(pFVar6 + lVar13 * 0x28 + 8),
                            (int *)(pFVar6 + lVar13 * 0x28 + 0x14));
      }
      *(int *)(pFVar6 + lVar13 * 0x28 + 0x10) = iVar12 + 1;
      *(FRHIDescriptorHandle *)(*(longlong *)(pFVar6 + lVar13 * 0x28 + 8) + (longlong)iVar12 * 8) =
           local_res18[0];
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar15 = StatPtr_STAT_D3D12BindlessResourceDescriptorsUpdated;
      if (StatPtr_STAT_D3D12BindlessResourceDescriptorsUpdated ==
          (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceDescriptorsUpdated>)0x0) {
        pFVar14 = ::FName::FName(&local_50,"STAT_D3D12BindlessResourceDescriptorsUpdated");
        FVar15 = (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceDescriptorsUpdated>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_D3D12BindlessResourceDescriptorsUpdated,*pFVar14,
                            L"Resource Descriptors Updated","STATGROUP_D3D12Bindless",
                            "STATCAT_Advanced",L"D3D12RHI: Bindless",true,true,ST_int64,false,false,
                            MCR_Invalid);
      }
      FVar7 = *(FName *)FVar15;
      local_58 = FVar7;
      if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_48.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
        local_48.StatData.Pad[0] = '\x01';
        local_48.StatData.Pad[1] = '\0';
        local_48.StatData.Pad[2] = '\0';
        local_48.StatData.Pad[3] = '\0';
        local_48.StatData.Pad[4] = '\0';
        local_48.StatData.Pad[5] = '\0';
        local_48.StatData.Pad[6] = '\0';
        local_48.StatData.Pad[7] = '\0';
        local_58 = FVar7;
        local_48.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_48);
        FStatsTrace::Add(&local_58,1);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    if (bVar16) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// UpdateInUseGPUHeaps @ 1459de120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D12BindlessResourceManager::UpdateInUseGPUHeaps(FD3D12BindlessResourceManager *this,bool param_1)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsInUseByGPU> FVar3;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar4;
  uint uVar5;
  long64 lVar6;
  FName local_res18 [2];
  FStatMessage local_18;
  
  if (param_1) {
    uVar5 = this->InUseGPUHeaps + 1;
    this->InUseGPUHeaps = uVar5;
    if (uVar5 < this->MaxInUseGPUHeaps) {
      uVar5 = this->MaxInUseGPUHeaps;
    }
    this->MaxInUseGPUHeaps = uVar5;
    FVar3 = StatPtr_STAT_D3D12BindlessResourceHeapsInUseByGPU;
    if (StatPtr_STAT_D3D12BindlessResourceHeapsInUseByGPU ==
        (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsInUseByGPU>)0x0) {
      pFVar2 = ::FName::FName(local_res18,"STAT_D3D12BindlessResourceHeapsInUseByGPU");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsInUseByGPU>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_D3D12BindlessResourceHeapsInUseByGPU,*pFVar2,
                         L"Resource Heaps in use by GPU","STATGROUP_D3D12Bindless",
                         "STATCAT_Advanced",L"D3D12RHI: Bindless",true,false,ST_int64,false,false,
                         MCR_Invalid);
    }
    FVar1 = *(FName *)FVar3;
    if (FVar1 == (FName)0x0) {
      return;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return;
    }
    local_res18[0] = FVar1;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar4 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar4);
    }
    local_18.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_18.StatData.Pad[0] = '\x01';
    local_18.StatData.Pad[1] = '\0';
    local_18.StatData.Pad[2] = '\0';
    local_18.StatData.Pad[3] = '\0';
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_res18[0] = FVar1;
    local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_18);
    lVar6 = 1;
  }
  else {
    this->InUseGPUHeaps = this->InUseGPUHeaps - 1;
    FVar3 = StatPtr_STAT_D3D12BindlessResourceHeapsInUseByGPU;
    if (StatPtr_STAT_D3D12BindlessResourceHeapsInUseByGPU ==
        (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsInUseByGPU>)0x0) {
      pFVar2 = ::FName::FName(local_res18,"STAT_D3D12BindlessResourceHeapsInUseByGPU");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsInUseByGPU>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_D3D12BindlessResourceHeapsInUseByGPU,*pFVar2,
                         L"Resource Heaps in use by GPU","STATGROUP_D3D12Bindless",
                         "STATCAT_Advanced",L"D3D12RHI: Bindless",true,false,ST_int64,false,false,
                         MCR_Invalid);
    }
    FVar1 = *(FName *)FVar3;
    if (FVar1 == (FName)0x0) {
      return;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return;
    }
    local_res18[0] = FVar1;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar4 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar4);
    }
    local_18.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_18.StatData.Pad[0] = '\x01';
    local_18.StatData.Pad[1] = '\0';
    local_18.StatData.Pad[2] = '\0';
    local_18.StatData.Pad[3] = '\0';
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_res18[0] = FVar1;
    local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_18);
    lVar6 = -1;
  }
  FStatsTrace::Add(local_res18,lVar6);
  if (this_00->ScopeCount != 0) {
    if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
    return;
  }
  FThreadStats::Flush(this_00,false,false);
  return;
}


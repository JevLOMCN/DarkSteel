// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 16

// FD3D12BindlessDescriptorManager @ 1459a7bf0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12BindlessDescriptorManager * __thiscall
FD3D12BindlessDescriptorManager::FD3D12BindlessDescriptorManager
          (FD3D12BindlessDescriptorManager *this,FD3D12Device *param_1,
          FD3D12BindlessDescriptorAllocator *param_2)

{
  this->_padding_ = (longlong)param_1;
  (this->ResourceManager).Ptr = (FD3D12BindlessResourceManager *)0x0;
  (this->SamplerManager).Ptr = (FD3D12BindlessSamplerManager *)0x0;
  this->Configuration = Disabled;
  this->Allocator = param_2;
  return this;
}

// ~FD3D12BindlessDescriptorManager @ 1459abe40

void __thiscall
FD3D12BindlessDescriptorManager::~FD3D12BindlessDescriptorManager
          (FD3D12BindlessDescriptorManager *this)

{
  longlong *plVar1;
  FD3D12BindlessSamplerManager *pFVar2;
  FD3D12DescriptorHeap *pFVar3;
  FD3D12BindlessResourceManager *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  
  pFVar2 = (this->SamplerManager).Ptr;
  if (pFVar2 != (FD3D12BindlessSamplerManager *)0x0) {
    pFVar3 = (pFVar2->GpuHeap).Reference;
    if (pFVar3 != (FD3D12DescriptorHeap *)0x0) {
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    ::operator_delete(pFVar2,0x18);
  }
  pFVar4 = (this->ResourceManager).Ptr;
  if (pFVar4 != (FD3D12BindlessResourceManager *)0x0) {
    DestructItems<FD3D12BindlessResourceManager::FGpuHeapData,int>
              ((FGpuHeapData *)(pFVar4->PooledGpuHeaps).AllocatorInstance.Data,
               (pFVar4->PooledGpuHeaps).ArrayNum);
    pFVar5 = (pFVar4->PooledGpuHeaps).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    DestructItems<FD3D12BindlessResourceManager::FGpuHeapData,int>
              ((FGpuHeapData *)(pFVar4->ActiveGpuHeaps).AllocatorInstance.Data,
               (pFVar4->ActiveGpuHeaps).ArrayNum);
    pFVar5 = (pFVar4->ActiveGpuHeaps).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    pFVar3 = (pFVar4->CpuHeap).Reference;
    if (pFVar3 != (FD3D12DescriptorHeap *)0x0) {
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    ::operator_delete(pFVar4,0x1f8);
  }
  return;
}

// CleanupResources @ 1459b62b0

void __thiscall
FD3D12BindlessDescriptorManager::CleanupResources(FD3D12BindlessDescriptorManager *this)

{
  longlong *plVar1;
  FD3D12BindlessResourceManager *this_00;
  FD3D12DescriptorHeap *pFVar2;
  FD3D12BindlessSamplerManager *pFVar3;
  longlong lVar4;
  
  this_00 = (this->ResourceManager).Ptr;
  if (this_00 != (FD3D12BindlessResourceManager *)0x0) {
    pFVar2 = (this_00->CpuHeap).Reference;
    if (pFVar2 != (FD3D12DescriptorHeap *)0x0) {
      (this_00->CpuHeap).Reference = (FD3D12DescriptorHeap *)0x0;
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
    FD3D12BindlessResourceManager::ReleaseGPUHeaps(this_00);
  }
  pFVar3 = (this->SamplerManager).Ptr;
  if ((pFVar3 != (FD3D12BindlessSamplerManager *)0x0) &&
     (pFVar2 = (pFVar3->GpuHeap).Reference, pFVar2 != (FD3D12DescriptorHeap *)0x0)) {
    (pFVar3->GpuHeap).Reference = (FD3D12DescriptorHeap *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  return;
}

// CloseCommandList @ 1459b6d20

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12BindlessDescriptorManager::CloseCommandList
          (FD3D12BindlessDescriptorManager *this,FD3D12CommandContext *param_1)

{
  longlong *plVar1;
  FD3D12BindlessResourceManager *this_00;
  FD3D12DescriptorHeap *pFVar2;
  FD3D12BindlessSamplerManager *pFVar3;
  longlong lVar4;
  
  this_00 = (this->ResourceManager).Ptr;
  if (this_00 != (FD3D12BindlessResourceManager *)0x0) {
    FD3D12BindlessResourceManager::CheckRequestNewActiveGPUHeap(this_00);
    pFVar2 = (param_1->BindlessState).CurrentGpuHeap.Reference;
    if (pFVar2 != (FD3D12DescriptorHeap *)0x0) {
      (param_1->BindlessState).CurrentGpuHeap.Reference = (FD3D12DescriptorHeap *)0x0;
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)();
      }
    }
    (param_1->BindlessState).bRefreshHeap = false;
    if (1 < (int)this_00->Configuration) {
      FD3D12StateCache::SetNewBindlessResourcesHeap
                (&param_1->StateCache,(FD3D12DescriptorHeap *)0x0);
    }
  }
  pFVar3 = (this->SamplerManager).Ptr;
  if ((pFVar3 != (FD3D12BindlessSamplerManager *)0x0) && (1 < (int)pFVar3->Configuration)) {
    FD3D12StateCache::SetNewBindlessSamplerHeap(&param_1->StateCache,(FD3D12DescriptorHeap *)0x0);
  }
  return;
}

// DeferredFreeFromDestructor @ 1459bcf70

void __thiscall
FD3D12BindlessDescriptorManager::DeferredFreeFromDestructor
          (FD3D12BindlessDescriptorManager *this,FRHIDescriptorHandle param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FD3D12DynamicRHI *pFVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  
  pFVar5 = FD3D12DynamicRHI::SingleD3DRHI;
  if ((param_1.Index != 0xffffffff) && (param_1.Type != Invalid)) {
    if ((this->_padding_ == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar2 = this->_padding_;
    lpCriticalSection = &pFVar5->ObjectsToDeleteCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar7 = (pFVar5->ObjectsToDelete).ArrayNum;
    piVar1 = &(pFVar5->ObjectsToDelete).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(pFVar5->ObjectsToDelete).AllocatorInstance,piVar1);
    }
    (pFVar5->ObjectsToDelete).ArrayNum = iVar7 + 1;
    lVar8 = (longlong)iVar7;
    pFVar3 = (pFVar5->ObjectsToDelete).AllocatorInstance.Data;
    *(undefined4 *)(pFVar3 + lVar8 * 0x30) = 4;
    *(FRHIDescriptorHandle *)(pFVar3 + lVar8 * 0x30 + 8) = param_1;
    *(longlong *)(pFVar3 + lVar8 * 0x30 + 0x10) = lVar2;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// FinalizeContext @ 1459bfdd0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12BindlessDescriptorManager::FinalizeContext
          (FD3D12BindlessDescriptorManager *this,FD3D12CommandContext *param_1)

{
  longlong *plVar1;
  FD3D12BindlessResourceManager *this_00;
  FD3D12DescriptorHeap *pFVar2;
  longlong lVar3;
  
  this_00 = (this->ResourceManager).Ptr;
  if (this_00 != (FD3D12BindlessResourceManager *)0x0) {
    if (*(longlong *)&param_1->field_0x188 != 0) {
      FD3D12CommandContext::CloseCommandList(param_1);
    }
    FD3D12BindlessResourceManager::CheckRequestNewActiveGPUHeap(this_00);
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
  }
  return;
}

// FlushPendingDescriptorUpdates @ 1459c07d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12BindlessDescriptorManager::FlushPendingDescriptorUpdates
          (FD3D12BindlessDescriptorManager *this,FD3D12CommandContext *param_1)

{
  longlong *plVar1;
  FD3D12ContextBindlessState *pFVar2;
  FD3D12BindlessResourceManager *this_00;
  FD3D12DescriptorHeap *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  
  this_00 = (this->ResourceManager).Ptr;
  if ((this_00 != (FD3D12BindlessResourceManager *)0x0) &&
     ((pFVar2 = &param_1->BindlessState, (param_1->BindlessState).bRefreshHeap != false ||
      (this_00->bRequestNewActiveGpuHeap != false)))) {
    FD3D12BindlessResourceManager::CheckRequestNewActiveGPUHeap(this_00);
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
    FD3D12BindlessResourceManager::AssignHeapToState(this_00,pFVar2);
    if (1 < (int)this_00->Configuration) {
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

// GarbageCollect @ 1459c1160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D12BindlessDescriptorManager::GarbageCollect(FD3D12BindlessDescriptorManager *this)

{
  TArray<FD3D12BindlessResourceManager::FGpuHeapData,TSizedDefaultAllocator<32>_> *pTVar1;
  uint *puVar2;
  FD3D12BindlessResourceManager *this_00;
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
  longlong lStackX_20;
  FName FStack_b8;
  FName FStack_b0;
  FName FStack_a8;
  LPCRITICAL_SECTION p_Stack_a0;
  FStatMessage FStack_98;
  FStatMessage FStack_88;
  FStatMessage FStack_78;
  FName FStack_68;
  FName FStack_60;
  FName aFStack_58 [3];
  
  this_00 = (this->ResourceManager).Ptr;
  if (this_00 == (FD3D12BindlessResourceManager *)0x0) {
    return;
  }
  p_Stack_a0 = (LPCRITICAL_SECTION)this_00->HeapsCS;
  if (p_Stack_a0 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(p_Stack_a0);
  if ((this_00->Configuration == RayTracing) &&
     ((longlong)GBindlessResourceDescriptorGarbageCollectLatency +
      this_00->LastUsedExplicitHeapCycle < this_00->GarbageCollectCycle)) {
    FD3D12BindlessResourceManager::ReleaseGPUHeaps(this_00);
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
    uVar23 = (this_00->MovingWindowMaxInUseGPUHeaps).NumValuesUsed;
    if (uVar23 == 100) {
      (this_00->MovingWindowMaxInUseGPUHeaps).ValuesArray.Elements
      [(uint)(this_00->MovingWindowMaxInUseGPUHeaps).RemoveNextIdx] = this_00->MaxInUseGPUHeaps;
      (this_00->MovingWindowMaxInUseGPUHeaps).RemoveNextIdx =
           ((this_00->MovingWindowMaxInUseGPUHeaps).RemoveNextIdx + 1) % 100;
    }
    else {
      (this_00->MovingWindowMaxInUseGPUHeaps).ValuesArray.Elements[uVar23] =
           this_00->MaxInUseGPUHeaps;
      piVar21 = &(this_00->MovingWindowMaxInUseGPUHeaps).NumValuesUsed;
      *piVar21 = *piVar21 + 1;
    }
    uVar25 = 0;
    this_00->MaxInUseGPUHeaps = this_00->InUseGPUHeaps;
    uVar23 = (this_00->MovingWindowMaxInUseGPUHeaps).NumValuesUsed;
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
        puVar2 = (this_00->MovingWindowMaxInUseGPUHeaps).ValuesArray.Elements + uVar27;
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
        puVar2 = (this_00->MovingWindowMaxInUseGPUHeaps).ValuesArray.Elements + (iVar13 + 4);
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
      uVar12 = (this_00->MovingWindowMaxInUseGPUHeaps).ValuesArray.Elements[lVar20];
      if (uVar12 < (uint)uVar27) {
        uVar12 = (uint)uVar27;
      }
      uVar27 = (ulonglong)uVar12;
    }
    iVar13 = (this_00->ActiveGpuHeaps).ArrayNum;
    if (((int)(uVar12 + 4) < iVar13) && (uVar27 = uVar25, 0 < iVar13)) {
      do {
        uVar22 = (uint)uVar25;
        uVar23 = 0;
        if ((int)uVar22 < (this_00->ActiveGpuHeaps).ArrayNum) {
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
        pFVar24 = (FGpuHeapData *)((this_00->ActiveGpuHeaps).AllocatorInstance.Data + uVar27);
        if (pFVar24->bInUse == false) {
          piVar21 = &(pFVar24->UpdatedHandles).ArrayMax;
          (pFVar24->UpdatedHandles).ArrayNum = 0;
          if (*piVar21 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,0,&(pFVar24->UpdatedHandles).AllocatorInstance,0,piVar21);
          }
          pTVar1 = &this_00->PooledGpuHeaps;
          pFVar24->LastUsedGarbageCollectCycle = this_00->GarbageCollectCycle;
          pFVar3 = (FGpuHeapData *)(pTVar1->AllocatorInstance).Data;
          if (((pFVar3 <= pFVar24) && (pFVar24 < pFVar3 + (this_00->PooledGpuHeaps).ArrayMax)) &&
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
          iVar13 = (this_00->PooledGpuHeaps).ArrayNum;
          piVar21 = &(this_00->PooledGpuHeaps).ArrayMax;
          if (iVar13 == *piVar21) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&pTVar1->AllocatorInstance,piVar21);
          }
          (this_00->PooledGpuHeaps).ArrayNum = iVar13 + 1;
          FD3D12BindlessResourceManager::FGpuHeapData::FGpuHeapData
                    ((FGpuHeapData *)((pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 0x28),
                     pFVar24);
          uVar23 = 0;
          if ((int)uVar22 < (this_00->ActiveGpuHeaps).ArrayNum) {
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
          RemoveAtSwapImpl(&this_00->ActiveGpuHeaps,uVar22);
          FVar15 = StatPtr_STAT_D3D12BindlessResourceHeapsActive;
          if (StatPtr_STAT_D3D12BindlessResourceHeapsActive ==
              (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsActive>)0x0) {
            pFVar14 = ::FName::FName(&FStack_68,"STAT_D3D12BindlessResourceHeapsActive");
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
            FStack_98.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
            FStack_98.StatData.Pad[0] = '\x01';
            FStack_98.StatData.Pad[1] = '\0';
            FStack_98.StatData.Pad[2] = '\0';
            FStack_98.StatData.Pad[3] = '\0';
            FStack_98.StatData.Pad[4] = '\0';
            FStack_98.StatData.Pad[5] = '\0';
            FStack_98.StatData.Pad[6] = '\0';
            FStack_98.StatData.Pad[7] = '\0';
            FStack_b8 = FVar4;
            FStack_98.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar16,&FStack_98);
            FStatsTrace::Add(&FStack_b8,-1);
            if (pFVar16->ScopeCount == 0) {
              FThreadStats::Flush(pFVar16,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar16,false,false);
            }
          }
          iVar13 = (this_00->ActiveGpuHeaps).ArrayNum;
          if (this_00->ActiveGpuHeapIndex == iVar13) {
            this_00->ActiveGpuHeapIndex = uVar22;
          }
          uVar22 = uVar22 - 1;
          uVar27 = uVar27 - 0x28;
          if (iVar13 <= (int)(uVar12 + 4)) break;
        }
        uVar25 = (ulonglong)(uVar22 + 1);
        uVar27 = uVar27 + 0x28;
      } while ((int)(uVar22 + 1) < (this_00->ActiveGpuHeaps).ArrayNum);
    }
    uVar23 = 0;
    if ((0 < GBindlessResourceDescriptorGarbageCollectLatency) &&
       (0 < (this_00->PooledGpuHeaps).ArrayNum)) {
      lStackX_20 = 0;
      do {
        uVar22 = 0;
        if ((int)uVar23 < (this_00->PooledGpuHeaps).ArrayNum) {
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
        pFVar26 = (this_00->PooledGpuHeaps).AllocatorInstance.Data + lStackX_20;
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
            *(longlong *)(pFVar26 + 0x20)) <= this_00->GarbageCollectCycle) {
          FVar18 = StatPtr_STAT_D3D12BindlessResourceHeapsAllocated;
          if (StatPtr_STAT_D3D12BindlessResourceHeapsAllocated ==
              (FThreadSafeStaticStat<FStat_STAT_D3D12BindlessResourceHeapsAllocated>)0x0) {
            pFVar14 = ::FName::FName(&FStack_60,"STAT_D3D12BindlessResourceHeapsAllocated");
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
            FStack_88.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
            FStack_88.StatData.Pad[0] = '\x01';
            FStack_88.StatData.Pad[1] = '\0';
            FStack_88.StatData.Pad[2] = '\0';
            FStack_88.StatData.Pad[3] = '\0';
            FStack_88.StatData.Pad[4] = '\0';
            FStack_88.StatData.Pad[5] = '\0';
            FStack_88.StatData.Pad[6] = '\0';
            FStack_88.StatData.Pad[7] = '\0';
            FStack_b0 = FVar4;
            FStack_88.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar16,&FStack_88);
            FStatsTrace::Add(&FStack_b0,-1);
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
              pFVar14 = ::FName::FName(aFStack_58,"STAT_D3D12BindlessResourceHeapGPUMemoryUsage");
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
              FStack_78.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
              FStack_a8 = FVar4;
              FStack_78.StatData.Pad = auVar28;
              FStack_78.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
              FThreadStats::AddStatMessage(pFVar16,&FStack_78);
              FStatsTrace::Add(&FStack_a8,-(longlong)auVar28);
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
            *(undefined8 *)pFVar26 = 0;
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
          if ((int)uVar23 < (this_00->PooledGpuHeaps).ArrayNum) {
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
          RemoveAtSwapImpl(&this_00->PooledGpuHeaps,uVar23);
          uVar23 = uVar23 - 1;
          lStackX_20 = lStackX_20 + -0x28;
        }
        lStackX_20 = lStackX_20 + 0x28;
        uVar23 = uVar23 + 1;
      } while ((int)uVar23 < (this_00->PooledGpuHeaps).ArrayNum);
    }
    if (bVar29) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  this_00->GarbageCollectCycle = this_00->GarbageCollectCycle + 1;
                    /* WARNING: Could not recover jumptable at 0x0001459c1b4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(p_Stack_a0);
  return;
}

// GetExplicitHeapsForContext @ 1459c2190

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12DescriptorHeapPair * __thiscall
FD3D12BindlessDescriptorManager::GetExplicitHeapsForContext
          (FD3D12BindlessDescriptorManager *this,FD3D12DescriptorHeapPair *__return_storage_ptr__,
          FD3D12CommandContext *param_1,ERHIBindlessConfiguration param_2)

{
  longlong *plVar1;
  ERHIBindlessConfiguration EVar2;
  FD3D12BindlessResourceManager *this_00;
  LPCRITICAL_SECTION lpCriticalSection;
  FD3D12DescriptorHeap *pFVar3;
  FD3D12DescriptorHeap *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  FD3D12DescriptorHeapPair *pFVar9;
  uint uVar10;
  
  EVar2 = this->Configuration;
  __return_storage_ptr__->SamplerHeap = (FD3D12DescriptorHeap *)0x0;
  __return_storage_ptr__->ResourceHeap = (FD3D12DescriptorHeap *)0x0;
  if ((EVar2 != Disabled) && ((int)param_2 <= (int)EVar2)) {
    this_00 = (this->ResourceManager).Ptr;
    if (((param_1->BindlessState).CurrentGpuHeap.Reference == (FD3D12DescriptorHeap *)0x0) &&
       (this_00->Configuration == RayTracing)) {
      lpCriticalSection = (LPCRITICAL_SECTION)this_00->HeapsCS;
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      uVar8 = FD3D12BindlessResourceManager::AddActiveGPUHeap(this_00);
      this_00->ActiveGpuHeapIndex = uVar8;
      uVar10 = 0;
      if ((int)uVar8 < (this_00->ActiveGpuHeaps).ArrayNum) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FD3D12DescriptorHeapPair *)(*pcVar5)();
          return pFVar9;
        }
      }
      pFVar3 = *(FD3D12DescriptorHeap **)
                ((this_00->ActiveGpuHeaps).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x28);
      pFVar4 = (param_1->BindlessState).CurrentGpuHeap.Reference;
      if (pFVar4 != pFVar3) {
        (param_1->BindlessState).CurrentGpuHeap.Reference = pFVar3;
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
      LeaveCriticalSection(lpCriticalSection);
    }
    this_00->LastUsedExplicitHeapCycle = this_00->GarbageCollectCycle;
    if ((param_1->BindlessState).CurrentGpuHeap.Reference == (FD3D12DescriptorHeap *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.CurrentGpuHeap",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                         ,0x26c,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FD3D12DescriptorHeapPair *)(*pcVar5)();
        return pFVar9;
      }
    }
    __return_storage_ptr__->ResourceHeap = (param_1->BindlessState).CurrentGpuHeap.Reference;
    __return_storage_ptr__->SamplerHeap = (((this->SamplerManager).Ptr)->GpuHeap).Reference;
  }
  return __return_storage_ptr__;
}

// ImmediateFree @ 1459c3970

void __thiscall
FD3D12BindlessDescriptorManager::ImmediateFree
          (FD3D12BindlessDescriptorManager *this,FRHIDescriptorHandle param_1)

{
  FRHIHeapDescriptorAllocator *pFVar1;
  code *pcVar2;
  ERHIDescriptorType EVar3;
  bool bVar4;
  
  if ((param_1.Index != 0xffffffff) && (EVar3 = param_1.Type, EVar3 != Invalid)) {
    pFVar1 = this->Allocator->SamplerAllocator;
    if ((pFVar1 != (FRHIHeapDescriptorAllocator *)0x0) &&
       ((pFVar1->TypeMask & 1 << (EVar3 & 0x1f)) != None)) {
      FRHIHeapDescriptorAllocator::Free(pFVar1,param_1);
      return;
    }
    pFVar1 = this->Allocator->ResourceAllocator;
    if ((pFVar1 != (FRHIHeapDescriptorAllocator *)0x0) &&
       ((pFVar1->TypeMask & 1 << (EVar3 & 0x1f)) != None)) {
      FRHIHeapDescriptorAllocator::Free(pFVar1,param_1);
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                       ,0x106,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Init @ 1459c3e30

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12BindlessDescriptorManager::Init(FD3D12BindlessDescriptorManager *this)

{
  TUniquePtr<FD3D12BindlessResourceManager,TDefaultDelete<FD3D12BindlessResourceManager>_> *this_00;
  longlong *plVar1;
  TUniquePtr<FD3D12BindlessSamplerManager,TDefaultDelete<FD3D12BindlessSamplerManager>_> *pTVar2;
  ERHIBindlessConfiguration EVar3;
  FD3D12BindlessDescriptorAllocator *pFVar4;
  FD3D12Device *pFVar5;
  FD3D12BindlessResourceManager *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  longlong lVar9;
  bool bVar10;
  FD3D12BindlessResourceManager *pFVar11;
  FD3D12BindlessSamplerManager *pFVar12;
  FD3D12DescriptorHeap *pFVar13;
  FD3D12BindlessSamplerManager *pFVar14;
  TDefaultDelete<FD3D12BindlessResourceManager> local_18 [8];
  undefined8 local_10;
  
  pFVar4 = this->Allocator;
  EVar3 = pFVar4->BindlessConfiguration;
  this->Configuration = EVar3;
  if (EVar3 != Disabled) {
    if ((this->_padding_ == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x59,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar5 = (FD3D12Device *)this->_padding_;
    pFVar11 = ::operator_new(0x1f8);
    if (pFVar11 == (FD3D12BindlessResourceManager *)0x0) {
      pFVar11 = (FD3D12BindlessResourceManager *)0x0;
    }
    else {
      pFVar11 = FD3D12BindlessResourceManager::FD3D12BindlessResourceManager(pFVar11,pFVar5,pFVar4);
    }
    this_00 = &this->ResourceManager;
    if ((TDefaultDelete<FD3D12BindlessResourceManager> *)this_00 == local_18) {
      if (pFVar11 != (FD3D12BindlessResourceManager *)0x0) {
        DestructItems<FD3D12BindlessResourceManager::FGpuHeapData,int>
                  ((FGpuHeapData *)(pFVar11->PooledGpuHeaps).AllocatorInstance.Data,
                   (pFVar11->PooledGpuHeaps).ArrayNum);
        pFVar7 = (pFVar11->PooledGpuHeaps).AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        DestructItems<FD3D12BindlessResourceManager::FGpuHeapData,int>
                  ((FGpuHeapData *)(pFVar11->ActiveGpuHeaps).AllocatorInstance.Data,
                   (pFVar11->ActiveGpuHeaps).ArrayNum);
        pFVar7 = (pFVar11->ActiveGpuHeaps).AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        pFVar13 = (pFVar11->CpuHeap).Reference;
        if (pFVar13 != (FD3D12DescriptorHeap *)0x0) {
          plVar1 = &pFVar13->_padding_;
          LOCK();
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if (((int)lVar9 == 1) && (plVar1 != (longlong *)0x0)) {
            (**(code **)pFVar13->_padding_)(pFVar13,1);
          }
        }
        ::operator_delete(pFVar11,0x1f8);
      }
    }
    else {
      pFVar6 = this_00->Ptr;
      this_00->Ptr = pFVar11;
      TDefaultDelete<FD3D12BindlessResourceManager>::operator()
                ((TDefaultDelete<FD3D12BindlessResourceManager> *)this_00,pFVar6);
    }
    pFVar4 = this->Allocator;
    if ((this->_padding_ == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x59,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar5 = (FD3D12Device *)this->_padding_;
    pFVar12 = ::operator_new(0x18);
    if (pFVar12 == (FD3D12BindlessSamplerManager *)0x0) {
      pFVar12 = (FD3D12BindlessSamplerManager *)0x0;
    }
    else {
      pFVar12->_padding_ = (longlong)pFVar5;
      pFVar13 = UE::D3D12BindlessDescriptors::CreateGpuHeap
                          (pFVar5,Sampler,(uint)pFVar4->SamplerAllocator->_padding_);
      (pFVar12->GpuHeap).Reference = pFVar13;
      if (pFVar13 != (FD3D12DescriptorHeap *)0x0) {
        LOCK();
        *(int *)&pFVar13->_padding_ = (int)pFVar13->_padding_ + 1;
        UNLOCK();
      }
      pFVar12->Configuration = pFVar4->BindlessConfiguration;
    }
    pTVar2 = &this->SamplerManager;
    if (pTVar2 == (TUniquePtr<FD3D12BindlessSamplerManager,TDefaultDelete<FD3D12BindlessSamplerManager>_>
                   *)&local_10) {
      if (pFVar12 == (FD3D12BindlessSamplerManager *)0x0) {
        return;
      }
      pFVar13 = (pFVar12->GpuHeap).Reference;
      pFVar14 = pFVar12;
      if (pFVar13 != (FD3D12DescriptorHeap *)0x0) {
        plVar1 = &pFVar13->_padding_;
        LOCK();
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar9 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar13->_padding_)(pFVar13,1);
        }
      }
    }
    else {
      pFVar14 = pTVar2->Ptr;
      pTVar2->Ptr = pFVar12;
      if (pFVar14 == (FD3D12BindlessSamplerManager *)0x0) {
        return;
      }
      pFVar13 = (pFVar14->GpuHeap).Reference;
      if (pFVar13 != (FD3D12DescriptorHeap *)0x0) {
        plVar1 = &pFVar13->_padding_;
        LOCK();
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar9 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar13->_padding_)(pFVar13,1);
        }
      }
    }
    ::operator_delete(pFVar14,0x18);
  }
  return;
}

// InitializeDescriptor @ 1459c5480

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12BindlessDescriptorManager::InitializeDescriptor
          (FD3D12BindlessDescriptorManager *this,FRHIDescriptorHandle param_1,
          FD3D12SamplerState *param_2)

{
  FD3D12BindlessSamplerManager *pFVar1;
  D3D12_CPU_DESCRIPTOR_HANDLE DVar2;
  FD3D12DescriptorHeap *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  pFVar1 = (this->SamplerManager).Ptr;
  if (pFVar1 == (FD3D12BindlessSamplerManager *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                       ,0x33a,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    return;
  }
  if (param_1.Type != Sampler) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DstHandle.GetType() == ERHIDescriptorType::Sampler",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                       ,0x53,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  DVar2.ptr = (param_2->OfflineDescriptor)._padding_;
  pFVar3 = (pFVar1->GpuHeap).Reference;
  if (pFVar1->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  UE::D3D12Descriptors::CopyDescriptor((FD3D12Device *)pFVar1->_padding_,pFVar3,param_1,DVar2);
  return;
}

// InitializeDescriptor @ 1459c5570

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12BindlessDescriptorManager::InitializeDescriptor
          (FD3D12BindlessDescriptorManager *this,FRHIDescriptorHandle param_1,FD3D12View *param_2)

{
  FD3D12BindlessResourceManager *this_00;
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  this_00 = (this->ResourceManager).Ptr;
  if (this_00 != (FD3D12BindlessResourceManager *)0x0) {
    if (param_1.Type == Invalid) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1 << (param_1.Type & 0x1f);
    }
    if ((uVar3 & 0x7f) != 0) {
      FD3D12BindlessResourceManager::InitializeDescriptor(this_00,param_1,param_2);
      return;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                     ,0x346,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OpenCommandList @ 1459c8860

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12BindlessDescriptorManager::OpenCommandList
          (FD3D12BindlessDescriptorManager *this,FD3D12CommandContext *param_1)

{
  FD3D12BindlessResourceManager *this_00;
  FD3D12BindlessSamplerManager *pFVar1;
  
  this_00 = (this->ResourceManager).Ptr;
  if ((this_00 != (FD3D12BindlessResourceManager *)0x0) &&
     (FD3D12BindlessResourceManager::AssignHeapToState(this_00,&param_1->BindlessState),
     1 < (int)this_00->Configuration)) {
    FD3D12StateCache::SetNewBindlessResourcesHeap
              (&param_1->StateCache,(param_1->BindlessState).CurrentGpuHeap.Reference);
  }
  pFVar1 = (this->SamplerManager).Ptr;
  if ((pFVar1 != (FD3D12BindlessSamplerManager *)0x0) && (1 < (int)pFVar1->Configuration)) {
    FD3D12StateCache::SetNewBindlessSamplerHeap(&param_1->StateCache,(pFVar1->GpuHeap).Reference);
    return;
  }
  return;
}

// Recycle @ 1459d2fa0

void __thiscall
FD3D12BindlessDescriptorManager::Recycle
          (FD3D12BindlessDescriptorManager *this,FD3D12DescriptorHeap *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FD3D12BindlessResourceManager *this_00;
  LPCRITICAL_SECTION lpCriticalSection;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  this_00 = (this->ResourceManager).Ptr;
  if (this_00 != (FD3D12BindlessResourceManager *)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)this_00->HeapsCS;
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    iVar2 = (this_00->ActiveGpuHeaps).ArrayNum;
    pFVar5 = (this_00->ActiveGpuHeaps).AllocatorInstance.Data;
    pFVar1 = pFVar5 + (longlong)iVar2 * 0x28;
    while( true ) {
      if ((this_00->ActiveGpuHeaps).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FD3D12BindlessResourceManager::FGpuHeapData,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar1) goto LAB_1459d3059;
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
    FD3D12BindlessResourceManager::UpdateInUseGPUHeaps(this_00,false);
LAB_1459d3059:
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// UpdateDescriptor @ 1459ddb10

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12BindlessDescriptorManager::UpdateDescriptor
          (FD3D12BindlessDescriptorManager *this,FD3D12ContextArray *param_1,
          FRHIDescriptorHandle param_2,FD3D12View *param_3)

{
  FD3D12BindlessResourceManager *this_00;
  code *pcVar1;
  bool bVar2;
  
  this_00 = (this->ResourceManager).Ptr;
  if (this_00 != (FD3D12BindlessResourceManager *)0x0) {
    FD3D12BindlessResourceManager::UpdateDescriptor(this_00,param_1,param_2,param_3);
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                     ,0x352,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}


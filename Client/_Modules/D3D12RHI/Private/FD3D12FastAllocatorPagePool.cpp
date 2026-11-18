// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 6

// FD3D12FastAllocatorPagePool @ 1459a9770

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12FastAllocatorPagePool * __thiscall
FD3D12FastAllocatorPagePool::FD3D12FastAllocatorPagePool
          (FD3D12FastAllocatorPagePool *this,FD3D12Device *param_1,FRHIGPUMask param_2,
          D3D12_HEAP_PROPERTIES *param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  D3D12_CPU_PAGE_PROPERTY DVar3;
  D3D12_MEMORY_POOL DVar4;
  bool bVar5;
  FD3D12FastAllocatorPagePool *pFVar6;
  
  this->_padding_ = (longlong)param_1;
  uVar1 = *(uint *)param_1;
  *(uint *)&this->_padding_ = uVar1;
  *(uint *)((longlong)&this->_padding_ + 4) = param_2.GPUMask;
  if ((param_2.GPUMask & uVar1) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeMask.Intersects(VisibiltyMask)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x9e,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FD3D12FastAllocatorPagePool *)(*pcVar2)();
      return pFVar6;
    }
  }
  this->PageSize = param_4;
  DVar3 = param_3->CPUPageProperty;
  DVar4 = param_3->MemoryPoolPreference;
  uVar1 = param_3->CreationNodeMask;
  (this->HeapProperties).Type = param_3->Type;
  (this->HeapProperties).CPUPageProperty = DVar3;
  (this->HeapProperties).MemoryPoolPreference = DVar4;
  (this->HeapProperties).CreationNodeMask = uVar1;
  (this->HeapProperties).VisibleNodeMask = param_3->VisibleNodeMask;
  (this->Pool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pool).ArrayNum = 0;
  (this->Pool).ArrayMax = 0;
  return this;
}

// FD3D12FastAllocatorPagePool @ 1459a97f0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12FastAllocatorPagePool * __thiscall
FD3D12FastAllocatorPagePool::FD3D12FastAllocatorPagePool
          (FD3D12FastAllocatorPagePool *this,FD3D12Device *param_1,FRHIGPUMask param_2,
          D3D12_HEAP_TYPE param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  FD3D12FastAllocatorPagePool *pFVar3;
  uint uVar4;
  
  this->_padding_ = (longlong)param_1;
  uVar4 = *(uint *)param_1;
  *(uint *)&this->_padding_ = uVar4;
  *(uint *)((longlong)&this->_padding_ + 4) = param_2.GPUMask;
  if (((param_2.GPUMask & uVar4) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeMask.Intersects(VisibiltyMask)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x9e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FD3D12FastAllocatorPagePool *)(*pcVar1)();
    return pFVar3;
  }
  uVar4 = 1;
  this->PageSize = param_4;
  if (GVirtualMGPU == 0) {
    uVar4 = *(uint *)param_1;
  }
  else {
    param_2.GPUMask = 1;
  }
  (this->HeapProperties).Type = param_3;
  (this->HeapProperties).CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
  (this->HeapProperties).MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;
  (this->HeapProperties).CreationNodeMask = uVar4;
  (this->HeapProperties).VisibleNodeMask = param_2.GPUMask;
  (this->Pool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pool).ArrayNum = 0;
  (this->Pool).ArrayMax = 0;
  return this;
}

// CleanupPages @ 1459b5fd0

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FD3D12FastAllocatorPagePool::CleanupPages(FD3D12FastAllocatorPagePool *this,ulong64 param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulong64 uVar8;
  uint uVar9;
  longlong lVar10;
  
  if (GD3D12FastAllocatorMinPagesToRetain < (this->Pool).ArrayNum) {
    if ((this->_padding_ == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar10 = this->_padding_;
    if ((*(longlong *)(lVar10 + 0x10) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParentAdapter != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x41,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar10 = *(longlong *)(lVar10 + 0x10);
    if ((*(longlong *)(lVar10 + 0x548) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("FrameFence",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                           ,0xff,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar8 = FD3D12ManualFence::GetCompletedFenceValue(*(FD3D12ManualFence **)(lVar10 + 0x548),true);
    uVar9 = 0;
    if (0 < (this->Pool).ArrayNum) {
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->Pool).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar3 = *(void **)((this->Pool).AllocatorInstance.Data + lVar10);
        if ((*(int *)(*(longlong *)((longlong)pvVar3 + 8) + 8) == 1) &&
           (*(longlong *)((longlong)pvVar3 + 0x20) + param_1 <= uVar8)) {
          TArray<FD3D12FastAllocatorPage_*,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->Pool,uVar9,Default);
          MemoryTrace_Free(*(ulong64 *)(*(longlong *)((longlong)pvVar3 + 8) + 0x38),1,0);
          puVar4 = *(undefined8 **)((longlong)pvVar3 + 8);
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
          ::operator_delete(pvVar3,0x28);
          return;
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 8;
      } while ((int)uVar9 < (this->Pool).ArrayNum);
    }
  }
  return;
}

// Destroy @ 1459bd300

void __thiscall FD3D12FastAllocatorPagePool::Destroy(FD3D12FastAllocatorPagePool *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < (this->Pool).ArrayNum) {
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->Pool).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pvVar3 = *(void **)((this->Pool).AllocatorInstance.Data + lVar9);
      if (pvVar3 != (void *)0x0) {
        MemoryTrace_Free(*(ulong64 *)(*(longlong *)((longlong)pvVar3 + 8) + 0x38),1,0);
        puVar4 = *(undefined8 **)((longlong)pvVar3 + 8);
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
        ::operator_delete(pvVar3,0x28);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->Pool).ArrayNum);
  }
  (this->Pool).ArrayNum = 0;
  if ((this->Pool).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Pool).AllocatorInstance,0,&(this->Pool).ArrayMax);
  }
  return;
}

// RequestFastAllocatorPage @ 1459d6050

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FD3D12FastAllocatorPage * __thiscall
FD3D12FastAllocatorPagePool::RequestFastAllocatorPage(FD3D12FastAllocatorPagePool *this)

{
  TRefCountPtr<FD3D12Resource> *pTVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  longlong lVar4;
  FD3D12Adapter *this_00;
  FD3D12Resource *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ED3D12Access EVar9;
  int iVar10;
  FD3D12FastAllocatorPage *pFVar11;
  ulong64 uVar12;
  void *pvVar13;
  uint uVar14;
  FD3D12FastAllocatorPage *pFVar15;
  FD3D12FastAllocatorPage *pFVar16;
  FString local_38;
  
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FD3D12FastAllocatorPage *)(*pcVar6)();
    return pFVar11;
  }
  lVar4 = this->_padding_;
  if ((*(longlong *)(lVar4 + 0x10) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FD3D12FastAllocatorPage *)(*pcVar6)();
    return pFVar11;
  }
  this_00 = *(FD3D12Adapter **)(lVar4 + 0x10);
  if (((this_00->FrameFence).Ptr == (FD3D12ManualFence *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("FrameFence",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                         ,0xff,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FD3D12FastAllocatorPage *)(*pcVar6)();
    return pFVar11;
  }
  uVar12 = FD3D12ManualFence::GetCompletedFenceValue((this_00->FrameFence).Ptr,true);
  pFVar15 = (FD3D12FastAllocatorPage *)0x0;
  pFVar11 = pFVar15;
  pFVar16 = pFVar15;
  if (0 < (this->Pool).ArrayNum) {
    do {
      uVar14 = (uint)pFVar11;
      uVar8 = 0;
      if ((int)uVar14 < (this->Pool).ArrayNum) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FD3D12FastAllocatorPage *)(*pcVar6)();
        return pFVar11;
      }
      pFVar11 = *(FD3D12FastAllocatorPage **)
                 ((longlong)&pFVar16->PageSize + (longlong)(this->Pool).AllocatorInstance.Data);
      if (((int)((pFVar11->FastAllocBuffer).Reference)->_padding_ == 1) &&
         (pFVar11->FrameFence <= uVar12)) {
        pFVar11->NextFastAllocOffset = 0;
        pFVar11->FrameFence = 0;
        TArray<FD3D12FastAllocatorPage_*,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&this->Pool,uVar14,Default);
        return pFVar11;
      }
      pFVar11 = (FD3D12FastAllocatorPage *)(ulonglong)(uVar14 + 1);
      pFVar16 = (FD3D12FastAllocatorPage *)&pFVar16->FastAllocBuffer;
    } while ((int)(uVar14 + 1) < (this->Pool).ArrayNum);
  }
  pFVar11 = ::operator_new(0x28);
  if (pFVar11 != (FD3D12FastAllocatorPage *)0x0) {
    pFVar11->PageSize = this->PageSize;
    (pFVar11->FastAllocBuffer).Reference = (FD3D12Resource *)0x0;
    pFVar11->NextFastAllocOffset = 0;
    pFVar11->FastAllocData = (void *)0x0;
    pFVar11->FrameFence = 0;
    pFVar15 = pFVar11;
  }
  EVar9 = DetermineInitialBufferD3D12Access((this->HeapProperties).Type,&this->HeapProperties);
  pFVar5 = (pFVar15->FastAllocBuffer).Reference;
  pTVar1 = &pFVar15->FastAllocBuffer;
  if (pFVar5 != (FD3D12Resource *)0x0) {
    pTVar1->Reference = (FD3D12Resource *)0x0;
    plVar2 = &pFVar5->_padding_;
    LOCK();
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar5->_padding_)();
    }
  }
  iVar10 = FD3D12Adapter::CreateBuffer
                     (this_00,&this->HeapProperties,(FRHIGPUMask)(uint)this->_padding_,EVar9,
                      SingleState,EVar9,(ulonglong)this->PageSize,&pTVar1->Reference,
                      L"Fast Allocator Page",D3D12_RESOURCE_FLAG_NONE);
  if (iVar10 < 0) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar10,
               "Adapter->CreateBuffer( HeapProperties, GetGPUMask(), InitialD3D12Access, ED3D12ResourceStateMode::SingleState, InitialD3D12Access, PageSize, Page->FastAllocBuffer.GetInitReference(), TEXT(\"Fast Allocator Page\"))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
               ,0x927,(ID3D12Device *)0x0,&local_38);
  }
  pTVar1->Reference->bDeferDelete = false;
  pvVar13 = FD3D12Resource::Map(pTVar1->Reference,(D3D12_RANGE *)0x0);
  pFVar15->FastAllocData = pvVar13;
  return pFVar15;
}

// ReturnFastAllocatorPage @ 1459d7150

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12FastAllocatorPagePool::ReturnFastAllocatorPage
          (FD3D12FastAllocatorPagePool *this,FD3D12FastAllocatorPage *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FD3D12FastAllocatorPage *local_res10 [3];
  
  local_res10[0] = param_1;
  FD3D12FastAllocatorPage::UpdateFence(param_1);
  pFVar2 = (this->Pool).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->Pool).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Pool).ArrayNum;
  piVar1 = &(this->Pool).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Pool).AllocatorInstance,piVar1);
  }
  (this->Pool).ArrayNum = iVar5 + 1;
  *(FD3D12FastAllocatorPage **)((this->Pool).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_res10[0];
  return;
}


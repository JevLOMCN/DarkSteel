// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 5

// FD3D12FastAllocator @ 1459a95a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12FastAllocator * __thiscall
FD3D12FastAllocator::FD3D12FastAllocator
          (FD3D12FastAllocator *this,FD3D12Device *param_1,FRHIGPUMask param_2,
          D3D12_HEAP_PROPERTIES *param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  D3D12_CPU_PAGE_PROPERTY DVar3;
  D3D12_MEMORY_POOL DVar4;
  bool bVar5;
  FD3D12FastAllocator *pFVar6;
  
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
      pFVar6 = (FD3D12FastAllocator *)(*pcVar2)();
      return pFVar6;
    }
  }
  (this->PagePool)._padding_ = (longlong)param_1;
  uVar1 = *(uint *)param_1;
  *(uint *)&(this->PagePool)._padding_ = uVar1;
  *(uint *)((longlong)&(this->PagePool)._padding_ + 4) = param_2.GPUMask;
  if ((param_2.GPUMask & uVar1) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeMask.Intersects(VisibiltyMask)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x9e,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FD3D12FastAllocator *)(*pcVar2)();
      return pFVar6;
    }
  }
  (this->PagePool).PageSize = param_4;
  DVar3 = param_3->CPUPageProperty;
  DVar4 = param_3->MemoryPoolPreference;
  uVar1 = param_3->CreationNodeMask;
  (this->PagePool).HeapProperties.Type = param_3->Type;
  (this->PagePool).HeapProperties.CPUPageProperty = DVar3;
  (this->PagePool).HeapProperties.MemoryPoolPreference = DVar4;
  (this->PagePool).HeapProperties.CreationNodeMask = uVar1;
  (this->PagePool).HeapProperties.VisibleNodeMask = param_3->VisibleNodeMask;
  (this->PagePool).Pool.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PagePool).Pool.ArrayNum = 0;
  (this->PagePool).Pool.ArrayMax = 0;
  this->CurrentAllocatorPage = (FD3D12FastAllocatorPage *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CS,4000);
  return this;
}

// FD3D12FastAllocator @ 1459a9680

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12FastAllocator * __thiscall
FD3D12FastAllocator::FD3D12FastAllocator
          (FD3D12FastAllocator *this,FD3D12Device *param_1,FRHIGPUMask param_2,
          D3D12_HEAP_TYPE param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  FD3D12FastAllocator *pFVar3;
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
    pFVar3 = (FD3D12FastAllocator *)(*pcVar1)();
    return pFVar3;
  }
  (this->PagePool)._padding_ = (longlong)param_1;
  uVar4 = *(uint *)param_1;
  *(uint *)&(this->PagePool)._padding_ = uVar4;
  *(uint *)((longlong)&(this->PagePool)._padding_ + 4) = param_2.GPUMask;
  if (((param_2.GPUMask & uVar4) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeMask.Intersects(VisibiltyMask)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x9e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FD3D12FastAllocator *)(*pcVar1)();
    return pFVar3;
  }
  uVar4 = 1;
  (this->PagePool).PageSize = param_4;
  if (GVirtualMGPU == 0) {
    uVar4 = *(uint *)param_1;
  }
  else {
    param_2.GPUMask = 1;
  }
  (this->PagePool).HeapProperties.Type = param_3;
  (this->PagePool).HeapProperties.CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
  (this->PagePool).HeapProperties.MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;
  (this->PagePool).HeapProperties.CreationNodeMask = uVar4;
  (this->PagePool).HeapProperties.VisibleNodeMask = param_2.GPUMask;
  (this->PagePool).Pool.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PagePool).Pool.ArrayNum = 0;
  (this->PagePool).Pool.ArrayMax = 0;
  this->CurrentAllocatorPage = (FD3D12FastAllocatorPage *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CS,4000);
  return this;
}

// Allocate @ 1459b0b40

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

void * __thiscall
FD3D12FastAllocator::Allocate
          (FD3D12FastAllocator *this,uint param_1,uint param_2,FD3D12ResourceLocation *param_3)

{
  D3D12_HEAP_PROPERTIES *pDVar1;
  uint *puVar2;
  D3D12_CPU_PAGE_PROPERTY DVar3;
  longlong lVar4;
  FD3D12Adapter *this_00;
  FD3D12Resource *pFVar5;
  ulong64 uVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  int iVar10;
  void *pvVar11;
  ulonglong uVar12;
  FD3D12FastAllocatorPage *pFVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  FD3D12Resource *local_res8;
  FString local_48;
  FString local_38;
  
  uVar12 = (ulonglong)param_2;
  if ((param_3->Type != eUndefined) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ResourceLocation->IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                         ,0x8a3,
                         L"The supplied resource location already has a valid resource. You should Clear() it first or it may leak."
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    pvVar11 = (void *)(*pcVar7)();
    return pvVar11;
  }
  if (param_1 <= (this->PagePool).PageSize) {
    EnterCriticalSection((LPCRITICAL_SECTION)&this->CS);
    pFVar13 = this->CurrentAllocatorPage;
    puVar2 = &(this->PagePool).PageSize;
    if (pFVar13 != (FD3D12FastAllocatorPage *)0x0) {
      uVar15 = (int)((((ulonglong)pFVar13->NextFastAllocOffset - 1) + uVar12) / uVar12) * param_2;
      if (uVar15 + param_1 <= *puVar2) goto LAB_1459b0df0;
      FD3D12FastAllocatorPagePool::ReturnFastAllocatorPage(&this->PagePool,pFVar13);
    }
    pFVar13 = FD3D12FastAllocatorPagePool::RequestFastAllocatorPage(&this->PagePool);
    this->CurrentAllocatorPage = pFVar13;
    uVar15 = (int)((((ulonglong)pFVar13->NextFastAllocOffset - 1) + uVar12) / uVar12) * param_2;
LAB_1459b0df0:
    uVar12 = (ulonglong)uVar15;
    if ((*puVar2 - param_1 < uVar15) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("PagePool.GetPageSize() - Size >= CurrentOffset",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                           ,0x8d4,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pvVar11 = (void *)(*pcVar7)();
      return pvVar11;
    }
    pFVar5 = (this->CurrentAllocatorPage->FastAllocBuffer).Reference;
    pvVar11 = this->CurrentAllocatorPage->FastAllocData;
    uVar6 = pFVar5->GPUVirtualAddress;
    param_3->Type = eFastAllocation;
    FD3D12ResourceLocation::SetResource(param_3,pFVar5);
    param_3->OffsetFromBaseOfResource = uVar12;
    param_3->Size = (ulonglong)param_1;
    if (pvVar11 != (void *)0x0) {
      param_3->MappedBaseAddress = (void *)(uVar12 + (longlong)pvVar11);
    }
    param_3->GPUVirtualAddress = uVar12 + uVar6;
    this->CurrentAllocatorPage->NextFastAllocOffset = uVar15 + param_1;
    FD3D12FastAllocatorPage::UpdateFence(this->CurrentAllocatorPage);
    if ((param_3->MappedBaseAddress == (void *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ResourceLocation->GetMappedBaseAddress()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                           ,0x8e1,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pvVar11 = (void *)(*pcVar7)();
      return pvVar11;
    }
    pvVar11 = param_3->MappedBaseAddress;
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->CS);
    return pvVar11;
  }
  if ((this->_padding_ == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pvVar11 = (void *)(*pcVar7)();
    return pvVar11;
  }
  lVar4 = this->_padding_;
  if ((*(longlong *)(lVar4 + 0x10) == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pvVar11 = (void *)(*pcVar7)();
    return pvVar11;
  }
  pDVar1 = &(this->PagePool).HeapProperties;
  this_00 = *(FD3D12Adapter **)(lVar4 + 0x10);
  if ((this->PagePool).HeapProperties.Type == D3D12_HEAP_TYPE_UPLOAD) {
    uVar15 = 0;
    bVar9 = (int)this->_padding_ != 0;
    if (bVar9) {
      for (; ((uint)this->_padding_ >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
      }
    }
    uVar12 = 0x20;
    if (bVar9) {
      uVar12 = (ulonglong)uVar15;
    }
    pvVar11 = FD3D12UploadHeapAllocator::AllocUploadResource
                        (this_00->UploadHeapAllocator[uVar12],param_1,param_2,param_3);
    return pvVar11;
  }
  pvVar11 = (void *)0x0;
  if ((param_2 != 0) && ((int)(0x10000 % uVar12) == 0)) {
    param_2 = 0;
  }
  local_res8 = (FD3D12Resource *)0x0;
  LOCK();
  ID = ID + 1;
  UNLOCK();
  ::FString::PrintfImpl(&local_48,L"Stand Alone Fast Allocation %lld");
  FVar8.Data = local_48.Data.AllocatorInstance.Data;
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar14.Data = local_48.Data.AllocatorInstance.Data;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  iVar10 = FD3D12Adapter::CreateBuffer
                     (this_00,pDVar1->Type,(FRHIGPUMask)(uint)this->_padding_,
                      (FRHIGPUMask)*(uint *)((longlong)&this->_padding_ + 4),
                      (ulonglong)(param_2 + param_1),&local_res8,(wchar_t *)FVar14.Data,
                      D3D12_RESOURCE_FLAG_NONE);
  if (iVar10 < 0) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar10,
               "Adapter->CreateBuffer(PagePool.GetHeapType(), GetGPUMask(), GetVisibilityMask(), Size + Alignment, &Resource, *ResourceName)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
               ,0x8bc,(ID3D12Device *)0x0,&local_38);
  }
  FD3D12ResourceLocation::AsStandAlone
            (param_3,local_res8,(ulonglong)(param_2 + param_1),false,(D3D12_HEAP_PROPERTIES *)0x0);
  if (pDVar1->Type == D3D12_HEAP_TYPE_CUSTOM) {
    if ((pDVar1 == (D3D12_HEAP_PROPERTIES *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("HeapType == D3D12_HEAP_TYPE_CUSTOM ? pCustomHeapProperties != nullptr : true"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                           ,0x16e,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pvVar11 = (void *)(*pcVar7)();
      return pvVar11;
    }
    DVar3 = (this->PagePool).HeapProperties.CPUPageProperty;
    if (DVar3 != D3D12_CPU_PAGE_PROPERTY_WRITE_COMBINE) {
      bVar9 = DVar3 == D3D12_CPU_PAGE_PROPERTY_WRITE_BACK;
      goto LAB_1459b0d5f;
    }
  }
  else {
    bVar9 = pDVar1->Type == D3D12_HEAP_TYPE_UPLOAD;
LAB_1459b0d5f:
    if (!bVar9) goto LAB_1459b0d71;
  }
  pvVar11 = FD3D12Resource::GetResourceBaseAddress(local_res8);
LAB_1459b0d71:
  if (FVar8.Data == (FScriptContainerElement *)0x0) {
    return pvVar11;
  }
  FMemory::Free(FVar8.Data);
  return pvVar11;
}

// CleanupPages @ 1459b5f80

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12FastAllocator::CleanupPages(FD3D12FastAllocator *this,ulong64 param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CS);
  FD3D12FastAllocatorPagePool::CleanupPages(&this->PagePool,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001459b5fbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CS);
  return;
}

// Destroy @ 1459bd190

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12FastAllocator::Destroy(FD3D12FastAllocator *this)

{
  TArray<FD3D12FastAllocatorPage_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CS);
  if (this->CurrentAllocatorPage != (FD3D12FastAllocatorPage *)0x0) {
    FD3D12FastAllocatorPagePool::ReturnFastAllocatorPage(&this->PagePool,this->CurrentAllocatorPage)
    ;
    this->CurrentAllocatorPage = (FD3D12FastAllocatorPage *)0x0;
  }
  uVar9 = 0;
  pTVar1 = &(this->PagePool).Pool;
  if (0 < (this->PagePool).Pool.ArrayNum) {
    lVar10 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < (this->PagePool).Pool.ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pvVar4 = *(void **)((pTVar1->AllocatorInstance).Data + lVar10);
      if (pvVar4 != (void *)0x0) {
        MemoryTrace_Free(*(ulong64 *)(*(longlong *)((longlong)pvVar4 + 8) + 0x38),1,0);
        puVar5 = *(undefined8 **)((longlong)pvVar4 + 8);
        if (puVar5 != (undefined8 *)0x0) {
          piVar2 = (int *)(puVar5 + 1);
          LOCK();
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if ((iVar3 == 1) && (piVar2 != (int *)0x0)) {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
        ::operator_delete(pvVar4,0x28);
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar9 < (this->PagePool).Pool.ArrayNum);
  }
  iVar3 = (this->PagePool).Pool.ArrayMax;
  (this->PagePool).Pool.ArrayNum = 0;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->PagePool).Pool.ArrayMax);
  }
                    /* WARNING: Could not recover jumptable at 0x0001459bd2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CS);
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// FD3D12RenderQuery @ 1459f4f90

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12RenderQuery * __thiscall
FD3D12RenderQuery::FD3D12RenderQuery
          (FD3D12RenderQuery *this,FD3D12Device *param_1,ERenderQueryType param_2)

{
  ulong64 *puVar1;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_RenderQuery);
  this->_padding_ = (longlong)param_1;
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FD3D12RenderQuery__6B_;
  (this->SyncPoint).Reference = (FD3D12SyncPoint *)0x0;
  this->Type = param_2;
  puVar1 = FMemory::Malloc(8,8);
  this->Result = puVar1;
  (this->ActiveLocation).Heap = (FD3D12QueryHeap *)0x0;
  (this->ActiveLocation).Index = 0;
  (this->ActiveLocation).Type = None;
  (this->ActiveLocation).Target = (void *)0x0;
  return this;
}

// ~FD3D12RenderQuery @ 1459f9830

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12RenderQuery::~FD3D12RenderQuery(FD3D12RenderQuery *this)

{
  longlong *plVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar2;
  ulong64 *puVar3;
  FD3D12SyncPoint *pFVar4;
  longlong lVar5;
  FD3D12DynamicRHI *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  this->_padding_ = (longlong)&___7FD3D12RenderQuery__6B_;
  pFVar6 = FD3D12DynamicRHI::SingleD3DRHI;
  lpCriticalSection = &FD3D12DynamicRHI::SingleD3DRHI->ObjectsToDeleteCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar7 = (pFVar6->ObjectsToDelete).ArrayNum;
    piVar2 = &(pFVar6->ObjectsToDelete).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(pFVar6->ObjectsToDelete).AllocatorInstance,piVar2);
    }
    (pFVar6->ObjectsToDelete).ArrayNum = iVar7 + 1;
    puVar3 = this->Result;
    pFVar8 = (pFVar6->ObjectsToDelete).AllocatorInstance.Data + (longlong)iVar7 * 0x30;
    *(undefined4 *)pFVar8 = 6;
    *(ulong64 **)(pFVar8 + 8) = puVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->Result = (ulong64 *)0x0;
    pFVar4 = (this->SyncPoint).Reference;
    if (pFVar4 != (FD3D12SyncPoint *)0x0) {
      plVar1 = &pFVar4->_padding_;
      LOCK();
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
    FD3D12LinkedAdapterObject<FD3D12RenderQuery>::~FD3D12LinkedAdapterObject<FD3D12RenderQuery>
              ((FD3D12LinkedAdapterObject<FD3D12RenderQuery> *)&this->_padding_);
    FRHIResource::~FRHIResource((FRHIResource *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}


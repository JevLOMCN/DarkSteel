// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// FD3D12ResourceAllocator @ 1459a9cf0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12ResourceAllocator * __thiscall
FD3D12ResourceAllocator::FD3D12ResourceAllocator
          (FD3D12ResourceAllocator *this,FD3D12Device *param_1,FRHIGPUMask param_2,
          FD3D12ResourceInitConfig *param_3,FString *param_4,uint param_5)

{
  uint uVar1;
  code *pcVar2;
  D3D12_HEAP_FLAGS DVar3;
  D3D12_RESOURCE_FLAGS DVar4;
  ED3D12Access EVar5;
  bool bVar6;
  FD3D12ResourceAllocator *pFVar7;
  
  this->_padding_ = (longlong)param_1;
  uVar1 = *(uint *)param_1;
  *(uint *)&this->_padding_ = uVar1;
  *(uint *)((longlong)&this->_padding_ + 4) = param_2.GPUMask;
  if ((param_2.GPUMask & uVar1) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeMask.Intersects(VisibiltyMask)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x9e,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FD3D12ResourceAllocator *)(*pcVar2)();
      return pFVar7;
    }
  }
  DVar3 = param_3->HeapFlags;
  DVar4 = param_3->ResourceFlags;
  EVar5 = param_3->InitialD3D12Access;
  (this->InitConfig).HeapType = param_3->HeapType;
  (this->InitConfig).HeapFlags = DVar3;
  (this->InitConfig).ResourceFlags = DVar4;
  (this->InitConfig).InitialD3D12Access = EVar5;
  ::FString::FString(&this->DebugName,param_4);
  this->MaximumAllocationSizeForPooling = param_5;
  this->Initialized = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CS,4000);
  this->SpaceAlignedUsed = 0;
  this->SpaceActualUsed = 0;
  this->NumBlocksInDeferredDeletionQueue = 0;
  this->PeakUsage = 0;
  this->FailedAllocationSpace = 0;
  return this;
}

// ~FD3D12ResourceAllocator @ 1459aca40

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12ResourceAllocator::~FD3D12ResourceAllocator(FD3D12ResourceAllocator *this)

{
  FScriptContainerElement *pFVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CS);
  pFVar1 = (this->DebugName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}


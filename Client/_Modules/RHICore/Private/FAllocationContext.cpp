// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 1

// FAllocationContext @ 1446cebc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FAllocationContext * __thiscall
FRHITransientPagePool::FAllocationContext::FAllocationContext
          (FAllocationContext *this,FRHITransientResource *param_1,
          FRHITransientAllocationFences *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  TArray<FRHITransientPagePoolAllocation,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Src;
  TArray<FRHITransientPageSpan,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  TInterval<unsigned_int> TVar6;
  uint uVar7;
  ERHIPipeline EVar8;
  undefined3 uVar9;
  bool bVar10;
  FAllocationContext *pFVar11;
  ulonglong uVar12;
  ForElementType<FRHITransientPagePoolAllocation> _Dst;
  ulonglong uVar13;
  
  this->Resource = param_1;
  uVar13 = (ulonglong)param_3;
  if (param_1->AllocationType != Page) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsPageAllocated()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                        ,0x126,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FAllocationContext *)(*pcVar5)();
      return pFVar11;
    }
  }
  this->Allocations = &(param_1->PageAllocation).PoolAllocations;
  if (param_1->AllocationType != Page) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsPageAllocated()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                        ,0x126,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FAllocationContext *)(*pcVar5)();
      return pFVar11;
    }
  }
  this->Spans = &(param_1->PageAllocation).Spans;
  pTVar3 = this->Allocations;
  (this->AllocationsBefore).AllocatorInstance.SecondaryData =
       (ForElementType<FRHITransientPagePoolAllocation>)0x0;
  iVar2 = pTVar3->ArrayNum;
  _Src = (pTVar3->AllocatorInstance).Data;
  piVar1 = &(this->AllocationsBefore).ArrayMax;
  (this->AllocationsBefore).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 8;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransientPagePoolAllocation>_>
              (0x18,8,iVar2,0,&(this->AllocationsBefore).AllocatorInstance,iVar2,piVar1);
    _Dst = (this->AllocationsBefore).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<FRHITransientPagePoolAllocation>)0x0) {
      _Dst = (ForElementType<FRHITransientPagePoolAllocation>)&this->AllocationsBefore;
    }
    memcpy((void *)_Dst,_Src,(longlong)iVar2 * 0x18);
  }
  pTVar3 = this->Allocations;
  this->GpuVirtualAddress = this->Resource->GpuVirtualAddress;
  uVar12 = (this->Resource->Size - 1) + uVar13 & -uVar13;
  this->Size = uVar12;
  uVar7 = param_2->AsyncCompute;
  TVar6 = param_2->GraphicsForkJoin;
  (this->Fences).Graphics = param_2->Graphics;
  (this->Fences).AsyncCompute = uVar7;
  (this->Fences).GraphicsForkJoin = TVar6;
  EVar8 = param_2->Pipelines;
  uVar9 = *(undefined3 *)&param_2->field_0x11;
  this->PagesRemaining = (uint)(uVar12 / uVar13);
  (this->Fences).Pipelines = EVar8;
  *(undefined3 *)&(this->Fences).field_0x11 = uVar9;
  this->AllocationCount = 0;
  this->AllocationMatchingCount = 0;
  this->MaxAllocationPage = 0;
  this->PagesAllocated = 0;
  this->PageSpansAllocated = 0;
  this->PagesMapped = 0;
  pTVar3->ArrayNum = 0;
  if (pTVar3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&pTVar3->AllocatorInstance,0,&pTVar3->ArrayMax);
  }
  pTVar4 = this->Spans;
  pTVar4->ArrayNum = 0;
  if (pTVar4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,0,&pTVar4->AllocatorInstance,0,&pTVar4->ArrayMax);
  }
  return this;
}


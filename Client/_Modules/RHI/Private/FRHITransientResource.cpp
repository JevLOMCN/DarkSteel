// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// FRHITransientResource @ 145cd1360

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHITransientResource * __thiscall
FRHITransientResource::FRHITransientResource
          (FRHITransientResource *this,TTask<FRHITransientResource::FResourceTaskResult> *param_1,
          ulong64 param_2,ulong64 param_3,ERHITransientAllocationType param_4,
          ERHITransientResourceType param_5)

{
  TTask<FRHITransientResource::FResourceTaskResult> TVar1;
  
  this->_padding_ = (longlong)&___7FRHITransientResource__6B_;
  (this->Resource).Reference = (FRHIResource *)0x0;
  this->ResourceTask = (TTask<FRHITransientResource::FResourceTaskResult>)0x0;
  TVar1 = *param_1;
  this->ResourceTask = TVar1;
  if (TVar1 != (TTask<FRHITransientResource::FResourceTaskResult>)0x0) {
    LOCK();
    *(int *)((longlong)TVar1 + 0x30) = *(int *)((longlong)TVar1 + 0x30) + 1;
    UNLOCK();
  }
  this->AllocationType = param_4;
  this->ResourceType = param_5;
  this->GpuVirtualAddress = 0;
  this->Hash = param_2;
  this->Size = param_3;
  this->AcquireCount = 0;
  this->AcquireCycle = 0;
  this->Name = (wchar_t *)0x0;
  (this->HeapAllocation).Heap = (FRHITransientHeap *)0x0;
  (this->HeapAllocation).Size = 0;
  (this->HeapAllocation).Offset = 0;
  (this->HeapAllocation).AlignmentPad = 0;
  (this->PageAllocation).PoolAllocations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PageAllocation).PoolAllocations.ArrayNum = 0;
  (this->PageAllocation).PoolAllocations.ArrayMax = 0;
  (this->PageAllocation).Spans.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PageAllocation).Spans.ArrayNum = 0;
  (this->PageAllocation).Spans.ArrayMax = 0;
  (this->AliasingOverlaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AliasingOverlaps).ArrayNum = 0;
  (this->AliasingOverlaps).ArrayMax = 0;
  (this->AcquirePasses).Min = 0;
  (this->AcquirePasses).Max = 0;
  this->DiscardPass = 0;
  this->AcquirePipeline = None;
  this->bAcquired = false;
  this->bDiscardOnGraphicsWorkaround = false;
  return this;
}

// FRHITransientResource @ 145cd1410

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHITransientResource * __thiscall
FRHITransientResource::FRHITransientResource
          (FRHITransientResource *this,FRHIResource *param_1,ulong64 param_2,ulong64 param_3,
          ulong64 param_4,ERHITransientAllocationType param_5,ERHITransientResourceType param_6)

{
  this->_padding_ = (longlong)&___7FRHITransientResource__6B_;
  (this->Resource).Reference = param_1;
  if (param_1 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(param_1);
  }
  this->Size = param_4;
  this->AllocationType = param_5;
  this->ResourceType = param_6;
  this->GpuVirtualAddress = param_2;
  this->ResourceTask = (TTask<FRHITransientResource::FResourceTaskResult>)0x0;
  this->Hash = param_3;
  this->AcquireCount = 0;
  this->AcquireCycle = 0;
  this->Name = (wchar_t *)0x0;
  (this->HeapAllocation).Heap = (FRHITransientHeap *)0x0;
  (this->HeapAllocation).Size = 0;
  (this->HeapAllocation).Offset = 0;
  (this->HeapAllocation).AlignmentPad = 0;
  (this->PageAllocation).PoolAllocations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PageAllocation).PoolAllocations.ArrayNum = 0;
  (this->PageAllocation).PoolAllocations.ArrayMax = 0;
  (this->PageAllocation).Spans.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PageAllocation).Spans.ArrayNum = 0;
  (this->PageAllocation).Spans.ArrayMax = 0;
  (this->AliasingOverlaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AliasingOverlaps).ArrayNum = 0;
  (this->AliasingOverlaps).ArrayMax = 0;
  (this->AcquirePasses).Min = 0;
  (this->AcquirePasses).Max = 0;
  this->DiscardPass = 0;
  this->AcquirePipeline = None;
  this->bAcquired = false;
  this->bDiscardOnGraphicsWorkaround = false;
  return this;
}

// ~FRHITransientResource @ 145cd2a90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRHITransientResource::~FRHITransientResource(FRHITransientResource *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TTask<FRHITransientResource::FResourceTaskResult> TVar4;
  FRHIResource *this_00;
  
  this->_padding_ = (longlong)&___7FRHITransientResource__6B_;
  pFVar3 = (this->AliasingOverlaps).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PageAllocation).Spans.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PageAllocation).PoolAllocations.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TVar4 = this->ResourceTask;
  if (TVar4 != (TTask<FRHITransientResource::FResourceTaskResult>)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)TVar4 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)TVar4)(TVar4,1);
    }
  }
  this_00 = (this->Resource).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
    return;
  }
  return;
}


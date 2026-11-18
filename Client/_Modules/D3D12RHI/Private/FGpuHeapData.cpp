// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// FGpuHeapData @ 1459aa700

FGpuHeapData * __thiscall
FD3D12BindlessResourceManager::FGpuHeapData::FGpuHeapData(FGpuHeapData *this,FGpuHeapData *param_1)

{
  TArray<FRHIDescriptorHandle,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FD3D12DescriptorHeap *pFVar4;
  FScriptContainerElement *_Src;
  
  (this->GpuHeap).Reference = (FD3D12DescriptorHeap *)0x0;
  pFVar4 = (param_1->GpuHeap).Reference;
  (this->GpuHeap).Reference = pFVar4;
  if (pFVar4 != (FD3D12DescriptorHeap *)0x0) {
    LOCK();
    *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
    UNLOCK();
  }
  pTVar1 = &this->UpdatedHandles;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->UpdatedHandles).ArrayMax;
  iVar3 = (param_1->UpdatedHandles).ArrayNum;
  _Src = (param_1->UpdatedHandles).AllocatorInstance.Data;
  (this->UpdatedHandles).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  this->bInUse = param_1->bInUse;
  this->LastUsedGarbageCollectCycle = param_1->LastUsedGarbageCollectCycle;
  return this;
}


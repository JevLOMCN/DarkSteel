// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FMaterialCachePendingTagBucket @ 144e72370

FMaterialCachePendingTagBucket * __thiscall
FMaterialCachePendingTagBucket::FMaterialCachePendingTagBucket
          (FMaterialCachePendingTagBucket *this,FMaterialCachePendingTagBucket *param_1)

{
  ForElementType<FMaterialCacheLayer> FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (param_1->TagLayout).Guid.B;
  uVar3 = (param_1->TagLayout).Guid.C;
  uVar4 = (param_1->TagLayout).Guid.D;
  (this->TagLayout).Guid.A = (param_1->TagLayout).Guid.A;
  (this->TagLayout).Guid.B = uVar2;
  (this->TagLayout).Guid.C = uVar3;
  (this->TagLayout).Guid.D = uVar4;
  (this->TagLayout).Layers.AllocatorInstance.SecondaryData =
       (ForElementType<FMaterialCacheLayer>)0x0;
  if ((param_1->TagLayout).Layers.AllocatorInstance.SecondaryData ==
      (ForElementType<FMaterialCacheLayer>)0x0) {
    memmove(&(this->TagLayout).Layers,&(param_1->TagLayout).Layers,0xc0);
  }
  FVar1 = (this->TagLayout).Layers.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FMaterialCacheLayer>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->TagLayout).Layers.AllocatorInstance.SecondaryData =
       (param_1->TagLayout).Layers.AllocatorInstance.SecondaryData;
  (param_1->TagLayout).Layers.AllocatorInstance.SecondaryData =
       (ForElementType<FMaterialCacheLayer>)0x0;
  (this->TagLayout).Layers.ArrayNum = (param_1->TagLayout).Layers.ArrayNum;
  (this->TagLayout).Layers.ArrayMax = (param_1->TagLayout).Layers.ArrayMax;
  (param_1->TagLayout).Layers.ArrayNum = 0;
  (param_1->TagLayout).Layers.ArrayMax = 8;
  (this->PendingEntries).AllocatorInstance.Data = (FMaterialCachePendingEntry *)0x0;
  (this->PendingEntries).AllocatorInstance.Data = (param_1->PendingEntries).AllocatorInstance.Data;
  (param_1->PendingEntries).AllocatorInstance.Data = (FMaterialCachePendingEntry *)0x0;
  (this->PendingEntries).ArrayNum = (param_1->PendingEntries).ArrayNum;
  (this->PendingEntries).ArrayMax = (param_1->PendingEntries).ArrayMax;
  (param_1->PendingEntries).ArrayNum = 0;
  (param_1->PendingEntries).ArrayMax = 0;
  return this;
}

// ~FMaterialCachePendingTagBucket @ 144e74400

void __thiscall
FMaterialCachePendingTagBucket::~FMaterialCachePendingTagBucket
          (FMaterialCachePendingTagBucket *this)

{
  FMaterialCachePendingEntry *pFVar1;
  ForElementType<FMaterialCacheLayer> FVar2;
  
  DestructItems<FMaterialCachePendingEntry,int>
            ((this->PendingEntries).AllocatorInstance.Data,(this->PendingEntries).ArrayNum);
  pFVar1 = (this->PendingEntries).AllocatorInstance.Data;
  if (pFVar1 != (FMaterialCachePendingEntry *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar1);
  }
  FVar2 = (this->TagLayout).Layers.AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<FMaterialCacheLayer>)0x0) {
    FVar2 = (ForElementType<FMaterialCacheLayer>)&(this->TagLayout).Layers;
  }
  DestructItems<FMaterialCacheLayer,int>
            ((FMaterialCacheLayer *)FVar2,(this->TagLayout).Layers.ArrayNum);
  FVar2 = (this->TagLayout).Layers.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FMaterialCacheLayer>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  return;
}


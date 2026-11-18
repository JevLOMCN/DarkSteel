// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 3

// FWorkerThreadData @ 1459f58c0

FWorkerThreadData * __thiscall
FD3D12RayTracingShaderBindingTableInternal::FWorkerThreadData::FWorkerThreadData
          (FWorkerThreadData *this)

{
  this->MaxUsedHitRecordIndex = -1;
  (this->ShaderRecordCache).Table.CurrentData.AllocatedCount = 0;
  (this->ShaderRecordCache).Table.CurrentData.Distances = (schar *)0x0;
  (this->ShaderRecordCache).Table.CurrentData.Keys = (FShaderRecordCacheKey *)0x0;
  (this->ShaderRecordCache).Table.CurrentData.Values = (uint *)0x0;
  (this->ShaderRecordCache).Table.NumSlotsMinusOne = 0;
  (this->ShaderRecordCache).Table.MaxLookups = '\0';
  (this->ShaderRecordCache).Table.NumElements = 0;
  *(undefined8 *)&this->PersistentReferencedResources = 0;
  *(undefined8 *)&(this->PersistentReferencedResources).field_0x8 = 0;
  *(undefined8 *)&(this->PersistentReferencedResources).field_0x20 = 0;
  *(undefined4 *)&(this->PersistentReferencedResources).field_0x28 = 0;
  *(undefined4 *)&(this->PersistentReferencedResources).field_0x2c = 0x80;
  *(undefined4 *)&(this->PersistentReferencedResources).field_0x34 = 0;
  *(undefined4 *)&(this->PersistentReferencedResources).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PersistentReferencedResources).field_0x40 = 0;
  *(undefined4 *)&(this->PersistentReferencedResources).field_0x48 = 0;
  *(undefined8 *)&(this->LastTrackedBaseShaderResources).Elements = 0;
  *(undefined8 *)&(this->LastTrackedBaseShaderResources).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LastTrackedBaseShaderResources).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LastTrackedBaseShaderResources).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LastTrackedBaseShaderResources).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LastTrackedBaseShaderResources).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->LastTrackedBaseShaderResources).Elements.field_0x30 = 0xffffffff;
  (this->LastTrackedBaseShaderResources).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LastTrackedBaseShaderResources).HashSize = 0;
  (this->DynamicReferencedResourceSet).Table.CurrentData.AllocatedCount = 0;
  (this->DynamicReferencedResourceSet).Table.CurrentData.Distances = (schar *)0x0;
  (this->DynamicReferencedResourceSet).Table.CurrentData.Keys = (void **)0x0;
  (this->DynamicReferencedResourceSet).Table.CurrentData.Values = (FNoopStruct *)0x0;
  (this->DynamicReferencedResourceSet).Table.NumSlotsMinusOne = 0;
  (this->DynamicReferencedResourceSet).Table.MaxLookups = '\0';
  (this->DynamicReferencedResourceSet).Table.NumElements = 0;
  (this->DynamicReferencedResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicReferencedResources).ArrayNum = 0;
  (this->DynamicReferencedResources).ArrayMax = 0;
  return this;
}

// ~FWorkerThreadData @ 1459f9c90

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::FWorkerThreadData::~FWorkerThreadData
          (FWorkerThreadData *this)

{
  FScriptContainerElement *pFVar1;
  schar *psVar2;
  ForElementType<FSetElementId> FVar3;
  void *pvVar4;
  
  DestructItems<TRefCountPtr<FD3D12Resource>,int>
            ((TRefCountPtr<FD3D12Resource> *)
             (this->DynamicReferencedResources).AllocatorInstance.Data,
             (this->DynamicReferencedResources).ArrayNum);
  pFVar1 = (this->DynamicReferencedResources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  psVar2 = (this->DynamicReferencedResourceSet).Table.CurrentData.Distances;
  if (psVar2 != (schar *)0x0) {
    FMemory::Free(psVar2);
    FMemory::Free((this->DynamicReferencedResourceSet).Table.CurrentData.Keys);
    FMemory::Free((this->DynamicReferencedResourceSet).Table.CurrentData.Values);
  }
  (this->DynamicReferencedResourceSet).Table.NumSlotsMinusOne = 0;
  (this->DynamicReferencedResourceSet).Table.MaxLookups = '\0';
  (this->DynamicReferencedResourceSet).Table.NumElements = 0;
  *(undefined8 *)&(this->DynamicReferencedResourceSet).Table.CurrentData = 0;
  (this->DynamicReferencedResourceSet).Table.CurrentData.Distances = (schar *)0x0;
  (this->DynamicReferencedResourceSet).Table.CurrentData.Keys = (void **)0x0;
  (this->DynamicReferencedResourceSet).Table.CurrentData.Values = (FNoopStruct *)0x0;
  (this->LastTrackedBaseShaderResources).HashSize = 0;
  FVar3 = (this->LastTrackedBaseShaderResources).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TRefCountPtr<FD3D12BaseShaderResource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TRefCountPtr<FD3D12BaseShaderResource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LastTrackedBaseShaderResources).Elements);
  *(undefined4 *)&(this->PersistentReferencedResources).field_0x48 = 0;
  pvVar4 = *(void **)&(this->PersistentReferencedResources).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12Resource>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12Resource>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12Resource>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PersistentReferencedResources);
  psVar2 = (this->ShaderRecordCache).Table.CurrentData.Distances;
  if (psVar2 != (schar *)0x0) {
    FMemory::Free(psVar2);
    FMemory::Free((this->ShaderRecordCache).Table.CurrentData.Keys);
    FMemory::Free((this->ShaderRecordCache).Table.CurrentData.Values);
  }
  (this->ShaderRecordCache).Table.NumSlotsMinusOne = 0;
  (this->ShaderRecordCache).Table.MaxLookups = '\0';
  *(undefined8 *)&(this->ShaderRecordCache).Table.CurrentData = 0;
  (this->ShaderRecordCache).Table.CurrentData.Distances = (schar *)0x0;
  (this->ShaderRecordCache).Table.NumElements = 0;
  (this->ShaderRecordCache).Table.CurrentData.Keys = (FShaderRecordCacheKey *)0x0;
  (this->ShaderRecordCache).Table.CurrentData.Values = (uint *)0x0;
  return;
}

// ~FWorkerThreadData @ 1459f9de0

void __thiscall
RHIValidation::FShaderBindingTable::FWorkerThreadData::~FWorkerThreadData(FWorkerThreadData *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->UAVs).HashSize = 0;
  FVar1 = (this->UAVs).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<RHIValidation::FUAVBinding>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<RHIValidation::FUAVBinding>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->UAVs).Elements);
  (this->SRVs).HashSize = 0;
  FVar1 = (this->SRVs).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<RHIValidation::FResourceIdentity>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<RHIValidation::FResourceIdentity>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<RHIValidation::FResourceIdentity>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}


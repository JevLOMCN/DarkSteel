// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FRemovalEventData @ 143f455a0

FRemovalEventData * __thiscall Chaos::FRemovalEventData::FRemovalEventData(FRemovalEventData *this)

{
  (this->PhysicsProxyToRemovalIndices)._padding_ = -0x10000000000001;
  (this->RemovalData).AllRemovalArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemovalData).AllRemovalArray.ArrayNum = 0;
  (this->RemovalData).AllRemovalArray.ArrayMax = 0;
  (this->RemovalData)._padding_ = -0x10000000000001;
  *(undefined8 *)&(this->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x10 = 0;
  *(undefined8 *)&(this->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x18 = 0;
  *(undefined8 *)&(this->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x38 = 0;
  *(undefined8 *)&(this->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x48 = 0;
  *(undefined8 *)&(this->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap = 0;
  *(undefined8 *)&(this->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x8 = 0;
  *(undefined8 *)&(this->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x20 = 0;
  *(undefined4 *)&(this->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x28 = 0;
  *(undefined4 *)&(this->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x34 = 0;
  *(undefined8 *)&(this->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x40 = 0;
  return this;
}

// ~FRemovalEventData @ 143f4b1b0

void __thiscall Chaos::FRemovalEventData::~FRemovalEventData(FRemovalEventData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap);
  pFVar2 = (this->RemovalData).AllRemovalArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}


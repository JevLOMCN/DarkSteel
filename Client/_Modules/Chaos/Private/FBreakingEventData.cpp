// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// FBreakingEventData @ 143f44fe0

FBreakingEventData * __thiscall
Chaos::FBreakingEventData::FBreakingEventData(FBreakingEventData *this)

{
  (this->BreakingData)._padding_ = -0x10000000000001;
  (this->PhysicsProxyToBreakingIndices)._padding_ = -0x10000000000001;
  (this->BreakingData).AllBreakingsArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BreakingData).AllBreakingsArray.ArrayNum = 0;
  (this->BreakingData).AllBreakingsArray.ArrayMax = 0;
  (this->BreakingData).bHasGlobalEvent = false;
  *(undefined8 *)&(this->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x10 = 0;
  *(undefined8 *)&(this->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x18 = 0;
  *(undefined8 *)&(this->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x38 = 0;
  *(undefined8 *)&(this->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x48 = 0;
  *(undefined8 *)&(this->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap = 0;
  *(undefined8 *)&(this->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x8 = 0;
  *(undefined8 *)&(this->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x20 = 0;
  *(undefined4 *)&(this->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x28 = 0;
  *(undefined4 *)&(this->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x34 = 0;
  *(undefined8 *)&(this->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x40 = 0;
  return this;
}

// ~FBreakingEventData @ 143f4af70

void __thiscall Chaos::FBreakingEventData::~FBreakingEventData(FBreakingEventData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap);
  pFVar2 = (this->BreakingData).AllBreakingsArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Reset @ 143f73440

void __thiscall Chaos::FBreakingEventData::Reset(FBreakingEventData *this)

{
  int iVar1;
  
  iVar1 = (this->BreakingData).AllBreakingsArray.ArrayMax;
  (this->BreakingData).AllBreakingsArray.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,0x10,0,&(this->BreakingData).AllBreakingsArray.AllocatorInstance,0,
               &(this->BreakingData).AllBreakingsArray.ArrayMax);
  }
  (this->BreakingData).bHasGlobalEvent = false;
  TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&(this->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap);
  return;
}


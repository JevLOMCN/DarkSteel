// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// FCrumblingEventData @ 143f452d0

FCrumblingEventData * __thiscall
Chaos::FCrumblingEventData::FCrumblingEventData(FCrumblingEventData *this)

{
  (this->CrumblingData)._padding_ = -0x10000000000001;
  (this->PhysicsProxyToCrumblingIndices)._padding_ = -0x10000000000001;
  (this->CrumblingData).AllCrumblingsArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CrumblingData).AllCrumblingsArray.ArrayNum = 0;
  (this->CrumblingData).AllCrumblingsArray.ArrayMax = 0;
  (this->CrumblingData).bHasGlobalEvent = false;
  *(undefined8 *)&(this->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x10 = 0;
  *(undefined8 *)&(this->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x18 = 0;
  *(undefined8 *)&(this->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x38 = 0;
  *(undefined8 *)&(this->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x48 = 0;
  *(undefined8 *)&(this->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap = 0;
  *(undefined8 *)&(this->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x8 = 0;
  *(undefined8 *)&(this->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x20 = 0;
  *(undefined4 *)&(this->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x28 = 0;
  *(undefined4 *)&(this->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x34 = 0;
  *(undefined8 *)&(this->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x40 = 0;
  return this;
}

// ~FCrumblingEventData @ 143f4b010

void __thiscall Chaos::FCrumblingEventData::~FCrumblingEventData(FCrumblingEventData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap);
  DestructItems<Chaos::FCrumblingData,int>
            ((FCrumblingData *)(this->CrumblingData).AllCrumblingsArray.AllocatorInstance.Data,
             (this->CrumblingData).AllCrumblingsArray.ArrayNum);
  pFVar2 = (this->CrumblingData).AllCrumblingsArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Reset @ 143f73580

void __thiscall Chaos::FCrumblingEventData::Reset(FCrumblingEventData *this)

{
  int *piVar1;
  int iVar2;
  FCrumblingData *pFVar3;
  
  piVar1 = &(this->CrumblingData).AllCrumblingsArray.ArrayMax;
  pFVar3 = (FCrumblingData *)(this->CrumblingData).AllCrumblingsArray.AllocatorInstance.Data;
  iVar2 = (this->CrumblingData).AllCrumblingsArray.ArrayNum;
  if ((this->CrumblingData).AllCrumblingsArray.ArrayMax < 0) {
    DestructItems<Chaos::FCrumblingData,int>(pFVar3,iVar2);
    (this->CrumblingData).AllCrumblingsArray.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd0,0x10,0,&(this->CrumblingData).AllCrumblingsArray.AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Chaos::FCrumblingData,int>(pFVar3,iVar2);
    (this->CrumblingData).AllCrumblingsArray.ArrayNum = 0;
  }
  (this->CrumblingData).bHasGlobalEvent = false;
  TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&(this->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap);
  return;
}


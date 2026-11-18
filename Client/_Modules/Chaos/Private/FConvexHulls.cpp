// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// operator= @ 144013330

FConvexHulls * __thiscall
UE::GeometryCollectionConvexUtility::FConvexHulls::operator=
          (FConvexHulls *this,FConvexHulls *param_1)

{
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (this != param_1) {
    DestructItems<TRefCountPtr<Chaos::FConvex>,int>
              ((TRefCountPtr<Chaos::FConvex> *)(this->Hulls).AllocatorInstance.Data,
               (this->Hulls).ArrayNum);
    pFVar4 = (this->Hulls).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (this->Hulls).AllocatorInstance.Data = (param_1->Hulls).AllocatorInstance.Data;
    (param_1->Hulls).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Hulls).ArrayNum = (param_1->Hulls).ArrayNum;
    (this->Hulls).ArrayMax = (param_1->Hulls).ArrayMax;
    (param_1->Hulls).ArrayNum = 0;
    (param_1->Hulls).ArrayMax = 0;
  }
  pTVar1 = &param_1->TransformToHullsIndices;
  pTVar2 = &this->TransformToHullsIndices;
  if (pTVar2 != pTVar1) {
    DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               (pTVar2->AllocatorInstance).Data,(this->TransformToHullsIndices).ArrayNum);
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TransformToHullsIndices).ArrayNum = (param_1->TransformToHullsIndices).ArrayNum;
    (this->TransformToHullsIndices).ArrayMax = (param_1->TransformToHullsIndices).ArrayMax;
    (param_1->TransformToHullsIndices).ArrayNum = 0;
    (param_1->TransformToHullsIndices).ArrayMax = 0;
  }
  pTVar3 = &this->Pivots;
  pTVar5 = &param_1->Pivots;
  this->OverlapRemovalShrinkPercent = param_1->OverlapRemovalShrinkPercent;
  if (pTVar3 != pTVar5) {
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Pivots).ArrayNum = (param_1->Pivots).ArrayNum;
    (this->Pivots).ArrayMax = (param_1->Pivots).ArrayMax;
    (param_1->Pivots).ArrayNum = 0;
    (param_1->Pivots).ArrayMax = 0;
  }
  return this;
}


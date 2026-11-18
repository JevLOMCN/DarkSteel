// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// operator= @ 14cd53bf0

FMeshIndexMappings * __thiscall
UE::Geometry::FMeshIndexMappings::operator=(FMeshIndexMappings *this,FMeshIndexMappings *param_1)

{
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar1;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar2;
  TArray<UE::Geometry::TIndexMap<int>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Geometry::TIndexMap<int>,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  if (this != param_1) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Move<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               this,(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                     *)param_1);
  }
  pTVar1 = &(param_1->VertexMap).ReverseMap;
  pTVar2 = &(this->VertexMap).ReverseMap;
  if (pTVar2 != pTVar1) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Move<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               pTVar2,(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                       *)pTVar1);
  }
  (this->VertexMap).bWantForward = (param_1->VertexMap).bWantForward;
  (this->VertexMap).bWantReverse = (param_1->VertexMap).bWantReverse;
  if (&this->TriangleMap != &param_1->TriangleMap) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Move<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &this->TriangleMap,
               (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &param_1->TriangleMap);
  }
  pTVar1 = &(param_1->TriangleMap).ReverseMap;
  pTVar2 = &(this->TriangleMap).ReverseMap;
  if (pTVar2 != pTVar1) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Move<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               pTVar2,(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                       *)pTVar1);
  }
  (this->TriangleMap).bWantForward = (param_1->TriangleMap).bWantForward;
  (this->TriangleMap).bWantReverse = (param_1->TriangleMap).bWantReverse;
  if (&this->GroupMap != &param_1->GroupMap) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Move<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &this->GroupMap,
               (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &param_1->GroupMap);
  }
  pTVar1 = &(param_1->GroupMap).ReverseMap;
  pTVar2 = &(this->GroupMap).ReverseMap;
  if (pTVar2 != pTVar1) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Move<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               pTVar2,(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                       *)pTVar1);
  }
  (this->GroupMap).bWantForward = (param_1->GroupMap).bWantForward;
  (this->GroupMap).bWantReverse = (param_1->GroupMap).bWantReverse;
  if (&this->ColorMap != &param_1->ColorMap) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Move<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &this->ColorMap,
               (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &param_1->ColorMap);
  }
  pTVar1 = &(param_1->ColorMap).ReverseMap;
  pTVar2 = &(this->ColorMap).ReverseMap;
  if (pTVar2 != pTVar1) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Move<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               pTVar2,(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                       *)pTVar1);
  }
  pTVar3 = &param_1->UVMaps;
  (this->ColorMap).bWantForward = (param_1->ColorMap).bWantForward;
  pTVar4 = &this->UVMaps;
  (this->ColorMap).bWantReverse = (param_1->ColorMap).bWantReverse;
  if (pTVar4 != pTVar3) {
    DestructItems<UE::Geometry::TIndexMap<int>,int>
              ((TIndexMap<int> *)(pTVar4->AllocatorInstance).Data,(this->UVMaps).ArrayNum);
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->UVMaps).ArrayNum = (param_1->UVMaps).ArrayNum;
    (this->UVMaps).ArrayMax = (param_1->UVMaps).ArrayMax;
    (param_1->UVMaps).ArrayNum = 0;
    (param_1->UVMaps).ArrayMax = 0;
  }
  pTVar3 = &param_1->NormalMaps;
  pTVar4 = &this->NormalMaps;
  if (pTVar4 != pTVar3) {
    DestructItems<UE::Geometry::TIndexMap<int>,int>
              ((TIndexMap<int> *)(pTVar4->AllocatorInstance).Data,(this->NormalMaps).ArrayNum);
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->NormalMaps).ArrayNum = (param_1->NormalMaps).ArrayNum;
    (this->NormalMaps).ArrayMax = (param_1->NormalMaps).ArrayMax;
    (param_1->NormalMaps).ArrayNum = 0;
    (param_1->NormalMaps).ArrayMax = 0;
  }
  return this;
}


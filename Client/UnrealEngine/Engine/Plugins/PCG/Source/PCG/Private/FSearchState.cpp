// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// ~FSearchState @ 149be9770

void __thiscall PCGSpatialAlgo::AStar::FSearchState::~FSearchState(FSearchState *this)

{
  void *pvVar1;
  ForElementType<int> FVar2;
  ForElementType<PCGSpatialAlgo::AStar::FNode> FVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *(undefined4 *)&(this->PointToNodeIndexMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PointToNodeIndexMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPCGPoint_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPCGPoint_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPCGPoint_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PointToNodeIndexMap);
  FVar2 = (this->ClosedIndexList).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar2 = (this->OpenIndexList).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar3 = (this->NodeList).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<PCGSpatialAlgo::AStar::FNode>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  if (*(longlong *)&this->HeuristicFunction != 0) {
    plVar4 = *(longlong **)&(this->HeuristicFunction).field_0x28;
    plVar5 = (longlong *)&(this->HeuristicFunction).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar5 = plVar4;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)&this->CostFunction != 0) {
    plVar4 = *(longlong **)&(this->CostFunction).field_0x28;
    plVar5 = (longlong *)&(this->CostFunction).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar5 = plVar4;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}


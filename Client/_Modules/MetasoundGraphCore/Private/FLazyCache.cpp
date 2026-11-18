// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 1

// ~FLazyCache @ 14ad3dd50

void __thiscall Metasound::FDirectedGraphAlgoAdapter::FLazyCache::~FLazyCache(FLazyCache *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->TransposeTree).Object.field_0x48 = 0;
  pvVar1 = *(void **)&(this->TransposeTree).Object.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::MathCore::Graph::FDirectedTreeElement>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::MathCore::Graph::FDirectedTreeElement>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::MathCore::Graph::FDirectedTreeElement>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->TransposeTree).Object);
  *(undefined4 *)&(this->Tree).Object.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Tree).Object.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::MathCore::Graph::FDirectedTreeElement>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::MathCore::Graph::FDirectedTreeElement>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::MathCore::Graph::FDirectedTreeElement>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Tree).Object);
  pFVar2 = (this->UniqueEdges).Object.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->UniqueVertices).Object.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}


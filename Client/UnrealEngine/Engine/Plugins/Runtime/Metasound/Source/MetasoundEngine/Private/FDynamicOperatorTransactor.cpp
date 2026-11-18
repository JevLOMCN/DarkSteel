// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// ~FDynamicOperatorTransactor @ 14b350ff0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::~FDynamicOperatorTransactor
          (FDynamicOperatorTransactor *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>,int>
            ((TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>
              *)(this->LiteralNodeMap).Pairs.AllocatorInstance.Data,
             (this->LiteralNodeMap).Pairs.ArrayNum);
  pFVar1 = (this->LiteralNodeMap).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo,int>
            ((FDynamicOperatorInfo *)(this->OperatorInfos).AllocatorInstance.Data,
             (this->OperatorInfos).ArrayNum);
  pFVar1 = (this->OperatorInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->GraphSorter).OperatorMap.field_0x48 = 0;
  pvVar2 = *(void **)&(this->GraphSorter).OperatorMap.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->GraphSorter).OperatorMap);
  FGraph::~FGraph(&this->Graph);
  FOperatorBuilder::~FOperatorBuilder(&this->OperatorBuilder);
  return;
}


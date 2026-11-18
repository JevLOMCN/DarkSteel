// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 1

// Find @ 1462dba00

TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pTVar4 = (TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1)
            ;
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_> *)0x0;
}


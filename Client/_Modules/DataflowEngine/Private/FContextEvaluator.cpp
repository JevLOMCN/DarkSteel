// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 1

// ~FContextEvaluator @ 1462cfb70

void __thiscall UE::Dataflow::FContextEvaluator::~FContextEvaluator(FContextEvaluator *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  (this->CompletedTasks).HashSize = 0;
  FVar1 = (this->CompletedTasks).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CompletedTasks).Elements);
  *(undefined4 *)&(this->RunningTasks).field_0x48 = 0;
  pvVar2 = *(void **)&(this->RunningTasks).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TRefCountPtr<FBaseGraphTask>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TRefCountPtr<FBaseGraphTask>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TRefCountPtr<FBaseGraphTask>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RunningTasks);
  *(undefined4 *)&(this->PendingEvaluationEntries).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PendingEvaluationEntries).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingEvaluationEntries);
  return;
}


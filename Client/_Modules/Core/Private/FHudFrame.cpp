// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FHudFrame @ 1419cdec0

FHudFrame * __thiscall FHudFrame::FHudFrame(FHudFrame *this,FHudFrame *param_1)

{
  (this->InclusiveAggregate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InclusiveAggregate).AllocatorInstance.Data =
       (param_1->InclusiveAggregate).AllocatorInstance.Data;
  (param_1->InclusiveAggregate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InclusiveAggregate).ArrayNum = (param_1->InclusiveAggregate).ArrayNum;
  (this->InclusiveAggregate).ArrayMax = (param_1->InclusiveAggregate).ArrayMax;
  (param_1->InclusiveAggregate).ArrayNum = 0;
  (param_1->InclusiveAggregate).ArrayMax = 0;
  (this->ExclusiveAggregate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExclusiveAggregate).AllocatorInstance.Data =
       (param_1->ExclusiveAggregate).AllocatorInstance.Data;
  (param_1->ExclusiveAggregate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExclusiveAggregate).ArrayNum = (param_1->ExclusiveAggregate).ArrayNum;
  (this->ExclusiveAggregate).ArrayMax = (param_1->ExclusiveAggregate).ArrayMax;
  (param_1->ExclusiveAggregate).ArrayNum = 0;
  (param_1->ExclusiveAggregate).ArrayMax = 0;
  (this->NonStackStats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NonStackStats).AllocatorInstance.Data = (param_1->NonStackStats).AllocatorInstance.Data;
  (param_1->NonStackStats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NonStackStats).ArrayNum = (param_1->NonStackStats).ArrayNum;
  (this->NonStackStats).ArrayMax = (param_1->NonStackStats).ArrayMax;
  (param_1->NonStackStats).ArrayNum = 0;
  (param_1->NonStackStats).ArrayMax = 0;
  FRawStatStackNode::FRawStatStackNode(&this->HierarchyInclusive,&param_1->HierarchyInclusive);
  TSet<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->InclusiveAggregateThreadBreakdown,
             (TSet<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&param_1->InclusiveAggregateThreadBreakdown);
  return this;
}

// ~FHudFrame @ 1419d2960

void __thiscall FHudFrame::~FHudFrame(FHudFrame *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->InclusiveAggregateThreadBreakdown).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InclusiveAggregateThreadBreakdown).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InclusiveAggregateThreadBreakdown);
  FRawStatStackNode::DeleteAllChildrenNodes(&this->HierarchyInclusive);
  *(undefined4 *)&(this->HierarchyInclusive).Children.field_0x48 = 0;
  pvVar1 = *(void **)&(this->HierarchyInclusive).Children.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->HierarchyInclusive).Children);
  pFVar2 = (this->NonStackStats).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ExclusiveAggregate).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InclusiveAggregate).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}


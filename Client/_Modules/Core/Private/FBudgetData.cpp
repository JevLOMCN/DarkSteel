// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FBudgetData @ 1419ccde0

FBudgetData * __thiscall FBudgetData::FBudgetData(FBudgetData *this,FBudgetData *param_1)

{
  (this->Stats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Stats).AllocatorInstance.Data = (param_1->Stats).AllocatorInstance.Data;
  (param_1->Stats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Stats).ArrayNum = (param_1->Stats).ArrayNum;
  (this->Stats).ArrayMax = (param_1->Stats).ArrayMax;
  (param_1->Stats).ArrayNum = 0;
  (param_1->Stats).ArrayMax = 0;
  *(undefined8 *)&(this->NonAccumulatingStats).Elements = 0;
  *(undefined8 *)&(this->NonAccumulatingStats).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->NonAccumulatingStats).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->NonAccumulatingStats).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->NonAccumulatingStats).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->NonAccumulatingStats).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NonAccumulatingStats).Elements.field_0x34 = 0;
  (this->NonAccumulatingStats).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->NonAccumulatingStats).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
            (&this->NonAccumulatingStats,&param_1->NonAccumulatingStats);
  *(undefined8 *)&(this->ThreadBudgetMap).field_0x0 = 0;
  *(undefined8 *)&(this->ThreadBudgetMap).field_0x8 = 0;
  *(undefined8 *)&(this->ThreadBudgetMap).field_0x20 = 0;
  *(undefined4 *)&(this->ThreadBudgetMap).field_0x28 = 0;
  *(undefined4 *)&(this->ThreadBudgetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ThreadBudgetMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ThreadBudgetMap).field_0x34 = 0;
  *(undefined8 *)&(this->ThreadBudgetMap).field_0x40 = 0;
  *(undefined4 *)&(this->ThreadBudgetMap).field_0x48 = 0;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
  Move<TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
              *)&this->ThreadBudgetMap,
             (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
              *)&param_1->ThreadBudgetMap);
  return this;
}

// ~FBudgetData @ 1419d1fe0

void __thiscall FBudgetData::~FBudgetData(FBudgetData *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  
  *(undefined4 *)&(this->ThreadBudgetMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ThreadBudgetMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ThreadBudgetMap);
  (this->NonAccumulatingStats).HashSize = 0;
  FVar2 = (this->NonAccumulatingStats).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NonAccumulatingStats).Elements);
  DestructItems<FString,int>((FString *)(this->Stats).AllocatorInstance.Data,(this->Stats).ArrayNum)
  ;
  pFVar3 = (this->Stats).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}


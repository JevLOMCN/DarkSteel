// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 2

// ~TSharedFragmentsContainer<FConstSharedStruct> @ 1471de770

void __thiscall
FMassEntityManager::TSharedFragmentsContainer<FConstSharedStruct>::
~TSharedFragmentsContainer<FConstSharedStruct>(TSharedFragmentsContainer<FConstSharedStruct> *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->TypeToInstanceMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TypeToInstanceMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TypeToInstanceMap);
  *(undefined4 *)&(this->HashToInstanceIndexMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HashToInstanceIndexMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HashToInstanceIndexMap);
  DestructItems<FConstSharedStruct,int>
            ((FConstSharedStruct *)(this->Instances).AllocatorInstance.Data,
             (this->Instances).ArrayNum);
  pFVar2 = (this->Instances).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TSharedFragmentsContainer<FSharedStruct> @ 1471de7f0

void __thiscall
FMassEntityManager::TSharedFragmentsContainer<FSharedStruct>::
~TSharedFragmentsContainer<FSharedStruct>(TSharedFragmentsContainer<FSharedStruct> *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->TypeToInstanceMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TypeToInstanceMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,TArray<FSharedStruct,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,TArray<FSharedStruct,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,TArray<FSharedStruct,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TypeToInstanceMap);
  *(undefined4 *)&(this->HashToInstanceIndexMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HashToInstanceIndexMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HashToInstanceIndexMap);
  DestructItems<FSharedStruct,int>
            ((FSharedStruct *)(this->Instances).AllocatorInstance.Data,(this->Instances).ArrayNum);
  pFVar2 = (this->Instances).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}


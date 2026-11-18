// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// operator() @ 141e8d730

void __thiscall
TDefaultDelete<FObjectInitializer::FOverrides>::operator()
          (TDefaultDelete<FObjectInitializer::FOverrides> *this,FOverrides *param_1)

{
  ForElementType<FObjectInitializer::FOverrides::FOverride> FVar1;
  ForElementType<FObjectInitializer::FOverrides::FOverride> FVar2;
  
  if (param_1 != (FOverrides *)0x0) {
    FVar1 = (param_1->Overrides).AllocatorInstance.SecondaryData;
    FVar2 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)param_1;
    if (FVar1 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<FObjectInitializer::FOverrides::FOverride,int>
              ((FOverride *)FVar2,(param_1->Overrides).ArrayNum);
    FVar1 = (param_1->Overrides).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    ::operator_delete(param_1,0x110);
  }
  return;
}

// operator() @ 1420f0020

void __thiscall
TDefaultDelete<UE::FPackageTrailerBuilder>::operator()
          (TDefaultDelete<UE::FPackageTrailerBuilder> *this,FPackageTrailerBuilder *param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  if (param_1 != (FPackageTrailerBuilder *)0x0) {
    DestructItems<TFunction<void___cdecl(FLinkerSave_&,UE::FPackageTrailer_const_&)>,int>
              ((TFunction<void___cdecl(FLinkerSave_&,UE::FPackageTrailer_const_&)> *)
               (param_1->Callbacks).AllocatorInstance.Data,(param_1->Callbacks).ArrayNum);
    pFVar1 = (param_1->Callbacks).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *(undefined4 *)&(param_1->VirtualizedEntries).field_0x48 = 0;
    pvVar2 = *(void **)&(param_1->VirtualizedEntries).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::VirtualizedEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->VirtualizedEntries);
    *(undefined4 *)&(param_1->ReferencedEntries).field_0x48 = 0;
    pvVar2 = *(void **)&(param_1->ReferencedEntries).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::ReferencedEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->ReferencedEntries);
    *(undefined4 *)&(param_1->LocalEntries).field_0x48 = 0;
    pvVar2 = *(void **)&(param_1->LocalEntries).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::FPackageTrailerBuilder::LocalEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->LocalEntries);
    pFVar1 = (param_1->DebugContext).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(param_1,0x110);
  }
  return;
}

// operator() @ 1421652c0

void __thiscall
TDefaultDelete<UE::FPropertyPathNameTree>::operator()
          (TDefaultDelete<UE::FPropertyPathNameTree> *this,FPropertyPathNameTree *param_1)

{
  void *pvVar1;
  
  if (param_1 != (FPropertyPathNameTree *)0x0) {
    *(undefined4 *)&(param_1->Nodes).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->Nodes).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)param_1);
    ::operator_delete(param_1,0x50);
  }
  return;
}


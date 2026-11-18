// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 3

// ~TMpscQueue<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,FMemory> @ 142ad8480

void __thiscall
TMpscQueue<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,FMemory>::
~TMpscQueue<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,FMemory>
          (TMpscQueue<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,FMemory> *this
          )

{
  atomic<TMpscQueue<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,FMemory>::FNode_*>
  aVar1;
  FNode *pFVar2;
  void *pvVar3;
  
  aVar1 = this->Tail->Next;
  FMemory::Free(this->Tail);
  while (aVar1 != (atomic<TMpscQueue<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,FMemory>::FNode_*>
                   )0x0) {
    this->Tail = (FNode *)aVar1;
    aVar1 = *(atomic<TMpscQueue<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,FMemory>::FNode_*>
              *)aVar1;
    pFVar2 = this->Tail;
    DestructItems<UE::AssetDataGather::Private::FCachedDirScanFile,int>
              (*(FCachedDirScanFile **)((pFVar2->Value).Pad + 0x20),
               *(int *)((pFVar2->Value).Pad + 0x28));
    pvVar3 = *(void **)((pFVar2->Value).Pad + 0x20);
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    DestructItems<FString,int>
              (*(FString **)((pFVar2->Value).Pad + 0x10),*(int *)((pFVar2->Value).Pad + 0x18));
    pvVar3 = *(void **)((pFVar2->Value).Pad + 0x10);
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    pvVar3 = *(void **)(pFVar2->Value).Pad;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    FMemory::Free(this->Tail);
  }
  return;
}

// ~TMpscQueue<UE::AssetDataGather::Private::FDiscoveredSubDirData,FMemory> @ 142ad8530

void __thiscall
TMpscQueue<UE::AssetDataGather::Private::FDiscoveredSubDirData,FMemory>::
~TMpscQueue<UE::AssetDataGather::Private::FDiscoveredSubDirData,FMemory>
          (TMpscQueue<UE::AssetDataGather::Private::FDiscoveredSubDirData,FMemory> *this)

{
  atomic<TMpscQueue<UE::AssetDataGather::Private::FDiscoveredSubDirData,FMemory>::FNode_*> aVar1;
  void *pvVar2;
  
  aVar1 = this->Tail->Next;
  FMemory::Free(this->Tail);
  while (aVar1 != (atomic<TMpscQueue<UE::AssetDataGather::Private::FDiscoveredSubDirData,FMemory>::FNode_*>
                   )0x0) {
    this->Tail = (FNode *)aVar1;
    aVar1 = *(atomic<TMpscQueue<UE::AssetDataGather::Private::FDiscoveredSubDirData,FMemory>::FNode_*>
              *)aVar1;
    pvVar2 = *(void **)(this->Tail->Value).Pad;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    FMemory::Free(this->Tail);
  }
  return;
}

// ~TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory> @ 142ad85a0

/* WARNING: Enum "EOptionalBool": Some values do not have unique names */

void __thiscall
TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>
::
~TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>
          (TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>
           *this)

{
  atomic<TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>::FNode_*>
  aVar1;
  TTypeCompatibleBytes<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>_>
  *this_00;
  
  aVar1 = this->Tail->Next;
  FMemory::Free(this->Tail);
  while (aVar1 != (atomic<TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>::FNode_*>
                   )0x0) {
    this->Tail = (FNode *)aVar1;
    aVar1 = *(atomic<TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>::FNode_*>
              *)aVar1;
    this_00 = &this->Tail->Value;
    TDefaultDelete<UE::AssetDataGather::Private::FReadContext>::operator()
              ((TDefaultDelete<UE::AssetDataGather::Private::FReadContext> *)this_00,
               *(FReadContext **)this_00->Pad);
    FMemory::Free(this->Tail);
  }
  return;
}


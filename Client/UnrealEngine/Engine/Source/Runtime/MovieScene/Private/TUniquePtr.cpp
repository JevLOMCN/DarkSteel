// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// Reset @ 1460e92d0

void __thiscall
TUniquePtr<UE::MovieScene::FBuiltInComponentTypes,TDefaultDelete<UE::MovieScene::FBuiltInComponentTypes>_>
::Reset(TUniquePtr<UE::MovieScene::FBuiltInComponentTypes,TDefaultDelete<UE::MovieScene::FBuiltInComponentTypes>_>
        *this,FBuiltInComponentTypes *param_1)

{
  FBuiltInComponentTypes *pFVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = this->Ptr;
  if ((pFVar1 != param_1) && (this->Ptr = param_1, pFVar1 != (FBuiltInComponentTypes *)0x0)) {
    *(undefined4 *)&(pFVar1->ResultToBase).field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar1->ResultToBase).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar1->ResultToBase);
    pFVar3 = (pFVar1->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    DestructItems<UE::MovieScene::FPropertyDefinition,int>
              ((FPropertyDefinition *)(pFVar1->PropertyRegistry).Properties.AllocatorInstance.Data,
               (pFVar1->PropertyRegistry).Properties.ArrayNum);
    pFVar3 = (pFVar1->PropertyRegistry).Properties.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar1,0x1e8);
    return;
  }
  return;
}

// operator= @ 14611ebc0

TUniquePtr<UE::MovieScene::FCompiledDataVolatilityManager,TDefaultDelete<UE::MovieScene::FCompiledDataVolatilityManager>_>
* __thiscall
TUniquePtr<UE::MovieScene::FCompiledDataVolatilityManager,TDefaultDelete<UE::MovieScene::FCompiledDataVolatilityManager>_>
::operator=(TUniquePtr<UE::MovieScene::FCompiledDataVolatilityManager,TDefaultDelete<UE::MovieScene::FCompiledDataVolatilityManager>_>
            *this,TUniquePtr<UE::MovieScene::FCompiledDataVolatilityManager,TDefaultDelete<UE::MovieScene::FCompiledDataVolatilityManager>_>
                  *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FCompiledDataVolatilityManager *pFVar3;
  ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_> FVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  if (this != param_1) {
    pFVar3 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FCompiledDataVolatilityManager *)0x0;
    if (pFVar3 != (FCompiledDataVolatilityManager *)0x0) {
      FVar4 = (pFVar3->CachedCompilationSignatures).Pairs.AllocatorInstance.SecondaryData;
      if (FVar4 != (ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_>)0x0) {
        FMemory::Free((void *)FVar4);
      }
      pTVar5 = (pFVar3->WeakSharedPlaybackState).WeakReferenceCount.ReferenceController;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
      ::operator_delete(pFVar3,0x160);
    }
    return this;
  }
  return this;
}


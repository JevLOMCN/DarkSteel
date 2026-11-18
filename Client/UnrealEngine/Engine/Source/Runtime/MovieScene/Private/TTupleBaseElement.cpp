// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// ~TTupleBaseElement<UE::MovieScene::FMutualInclusivityGraph::FIncludePair,1,2> @ 14611d410

void __thiscall
UE::Core::Private::Tuple::
TTupleBaseElement<UE::MovieScene::FMutualInclusivityGraph::FIncludePair,1,2>::
~TTupleBaseElement<UE::MovieScene::FMutualInclusivityGraph::FIncludePair,1,2>
          (TTupleBaseElement<UE::MovieScene::FMutualInclusivityGraph::FIncludePair,1,2> *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<UE::MovieScene::FComponentTypeID> FVar2;
  
  DestructItems<TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>,int>
            ((TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>
              *)(this->Value).OptionalIncludes.Initializers.AllocatorInstance.Data,
             (this->Value).OptionalIncludes.Initializers.ArrayNum);
  pFVar1 = (this->Value).OptionalIncludes.Initializers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->Value).OptionalIncludes.Includes.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::MovieScene::FComponentTypeID>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  DestructItems<TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>,int>
            ((TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>
              *)(this->Value).MandatoryIncludes.Initializers.AllocatorInstance.Data,
             (this->Value).MandatoryIncludes.Initializers.ArrayNum);
  pFVar1 = (this->Value).MandatoryIncludes.Initializers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->Value).MandatoryIncludes.Includes.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::MovieScene::FComponentTypeID>)0x0) {
    FMemory::Free((void *)FVar2);
    return;
  }
  return;
}


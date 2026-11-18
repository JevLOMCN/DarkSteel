// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// FIncludePair @ 1461fc5f0

FIncludePair * __thiscall
UE::MovieScene::FMutualInclusivityGraph::FIncludePair::FIncludePair
          (FIncludePair *this,FIncludePair *param_1)

{
  (this->MandatoryIncludes).Includes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FComponentTypeID>)0x0;
  if ((param_1->MandatoryIncludes).Includes.AllocatorInstance.SecondaryData ==
      (ForElementType<UE::MovieScene::FComponentTypeID>)0x0) {
    *(undefined2 *)(this->MandatoryIncludes).Includes.AllocatorInstance.InlineData =
         *(undefined2 *)(param_1->MandatoryIncludes).Includes.AllocatorInstance.InlineData;
  }
  (this->MandatoryIncludes).Includes.AllocatorInstance.SecondaryData =
       (param_1->MandatoryIncludes).Includes.AllocatorInstance.SecondaryData;
  (param_1->MandatoryIncludes).Includes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FComponentTypeID>)0x0;
  (this->MandatoryIncludes).Includes.ArrayNum = (param_1->MandatoryIncludes).Includes.ArrayNum;
  (this->MandatoryIncludes).Includes.ArrayMax = (param_1->MandatoryIncludes).Includes.ArrayMax;
  (param_1->MandatoryIncludes).Includes.ArrayNum = 0;
  (param_1->MandatoryIncludes).Includes.ArrayMax = 1;
  (this->MandatoryIncludes).Initializers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MandatoryIncludes).Initializers.AllocatorInstance.Data =
       (param_1->MandatoryIncludes).Initializers.AllocatorInstance.Data;
  (param_1->MandatoryIncludes).Initializers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MandatoryIncludes).Initializers.ArrayNum =
       (param_1->MandatoryIncludes).Initializers.ArrayNum;
  (this->MandatoryIncludes).Initializers.ArrayMax =
       (param_1->MandatoryIncludes).Initializers.ArrayMax;
  (param_1->MandatoryIncludes).Initializers.ArrayNum = 0;
  (param_1->MandatoryIncludes).Initializers.ArrayMax = 0;
  (this->OptionalIncludes).Includes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FComponentTypeID>)0x0;
  if ((param_1->OptionalIncludes).Includes.AllocatorInstance.SecondaryData ==
      (ForElementType<UE::MovieScene::FComponentTypeID>)0x0) {
    *(undefined2 *)(this->OptionalIncludes).Includes.AllocatorInstance.InlineData =
         *(undefined2 *)(param_1->OptionalIncludes).Includes.AllocatorInstance.InlineData;
  }
  (this->OptionalIncludes).Includes.AllocatorInstance.SecondaryData =
       (param_1->OptionalIncludes).Includes.AllocatorInstance.SecondaryData;
  (param_1->OptionalIncludes).Includes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FComponentTypeID>)0x0;
  (this->OptionalIncludes).Includes.ArrayNum = (param_1->OptionalIncludes).Includes.ArrayNum;
  (this->OptionalIncludes).Includes.ArrayMax = (param_1->OptionalIncludes).Includes.ArrayMax;
  (param_1->OptionalIncludes).Includes.ArrayNum = 0;
  (param_1->OptionalIncludes).Includes.ArrayMax = 1;
  (this->OptionalIncludes).Initializers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionalIncludes).Initializers.AllocatorInstance.Data =
       (param_1->OptionalIncludes).Initializers.AllocatorInstance.Data;
  (param_1->OptionalIncludes).Initializers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionalIncludes).Initializers.ArrayNum = (param_1->OptionalIncludes).Initializers.ArrayNum
  ;
  (this->OptionalIncludes).Initializers.ArrayMax = (param_1->OptionalIncludes).Initializers.ArrayMax
  ;
  (param_1->OptionalIncludes).Initializers.ArrayNum = 0;
  (param_1->OptionalIncludes).Initializers.ArrayMax = 0;
  return this;
}

// ~FIncludePair @ 1461ff440

void __thiscall
UE::MovieScene::FMutualInclusivityGraph::FIncludePair::~FIncludePair(FIncludePair *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<UE::MovieScene::FComponentTypeID> FVar2;
  
  DestructItems<TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>,int>
            ((TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>
              *)(this->OptionalIncludes).Initializers.AllocatorInstance.Data,
             (this->OptionalIncludes).Initializers.ArrayNum);
  pFVar1 = (this->OptionalIncludes).Initializers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->OptionalIncludes).Includes.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::MovieScene::FComponentTypeID>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  DestructItems<TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>,int>
            ((TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>
              *)(this->MandatoryIncludes).Initializers.AllocatorInstance.Data,
             (this->MandatoryIncludes).Initializers.ArrayNum);
  pFVar1 = (this->MandatoryIncludes).Initializers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->MandatoryIncludes).Includes.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::MovieScene::FComponentTypeID>)0x0) {
    FMemory::Free((void *)FVar2);
    return;
  }
  return;
}


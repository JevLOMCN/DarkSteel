// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 1

// ~FMaterialConflictData @ 14e76bb10

void __thiscall
UInterchangeGenericAssetsPipeline::FMaterialConflictData::~FMaterialConflictData
          (FMaterialConflictData *this)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  
  pIVar1 = (this->DialogTitle).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pFVar2 = (this->MatchMaterialIndexes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->ImportMaterialNames).AllocatorInstance.Data,
             (this->ImportMaterialNames).ArrayNum);
  pFVar2 = (this->ImportMaterialNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->AssetMaterialNames).AllocatorInstance.Data,
             (this->AssetMaterialNames).ArrayNum);
  pFVar2 = (this->AssetMaterialNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}


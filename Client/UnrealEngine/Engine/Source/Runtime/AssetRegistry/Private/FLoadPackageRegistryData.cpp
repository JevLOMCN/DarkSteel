// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 2

// FLoadPackageRegistryData @ 142b7ace0

FLoadPackageRegistryData * __thiscall
IAssetRegistry::FLoadPackageRegistryData::FLoadPackageRegistryData
          (FLoadPackageRegistryData *this,bool param_1)

{
  this->bGetDependencies = param_1;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  (this->DataDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataDependencies).ArrayNum = 0;
  (this->DataDependencies).ArrayMax = 0;
  return this;
}

// ~FLoadPackageRegistryData @ 142b7d820

void __thiscall
IAssetRegistry::FLoadPackageRegistryData::~FLoadPackageRegistryData(FLoadPackageRegistryData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DataDependencies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAssetData,int>
            ((FAssetData *)(this->Data).AllocatorInstance.Data,(this->Data).ArrayNum);
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}


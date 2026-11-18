// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 2

// FPackageStoreEntryResource @ 148cb47b0

FPackageStoreEntryResource * __thiscall
FPackageStoreEntryResource::FPackageStoreEntryResource(FPackageStoreEntryResource *this)

{
  this->Flags = None;
  (this->PackageName).ComparisonIndex = 0;
  (this->PackageName).Number = 0;
  (this->PackageId).Id = 0;
  (this->ImportedPackageIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportedPackageIds).ArrayNum = 0;
  (this->ImportedPackageIds).ArrayMax = 0;
  (this->ShaderMapHashes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderMapHashes).ArrayNum = 0;
  (this->ShaderMapHashes).ArrayMax = 0;
  (this->OptionalSegmentImportedPackageIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionalSegmentImportedPackageIds).ArrayNum = 0;
  (this->OptionalSegmentImportedPackageIds).ArrayMax = 0;
  (this->SoftPackageReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoftPackageReferences).ArrayNum = 0;
  (this->SoftPackageReferences).ArrayMax = 0;
  return this;
}

// ~FPackageStoreEntryResource @ 148cb6330

void __thiscall
FPackageStoreEntryResource::~FPackageStoreEntryResource(FPackageStoreEntryResource *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->SoftPackageReferences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OptionalSegmentImportedPackageIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderMapHashes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ImportedPackageIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}


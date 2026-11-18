// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// FPackageChunksConfiguration @ 1432245b0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FPackageChunksConfiguration * __thiscall
BuildPatchServices::FPackageChunksConfiguration::FPackageChunksConfiguration
          (FPackageChunksConfiguration *this)

{
  this->FeatureLevel = Latest;
  (this->ManifestFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManifestFilePath).Data.ArrayNum = 0;
  (this->ManifestFilePath).Data.ArrayMax = 0;
  (this->PrevManifestFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrevManifestFilePath).Data.ArrayNum = 0;
  (this->PrevManifestFilePath).Data.ArrayMax = 0;
  (this->TagSetArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TagSetArray).ArrayNum = 0;
  (this->TagSetArray).ArrayMax = 0;
  *(undefined8 *)&(this->PrevTagSet).Elements = 0;
  *(undefined8 *)&(this->PrevTagSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PrevTagSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PrevTagSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PrevTagSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PrevTagSet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PrevTagSet).Elements.field_0x30 = 0xffffffff;
  (this->PrevTagSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PrevTagSet).HashSize = 0;
  (this->OutputFile).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputFile).Data.ArrayNum = 0;
  (this->OutputFile).Data.ArrayMax = 0;
  (this->CloudDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CloudDir).Data.ArrayNum = 0;
  (this->CloudDir).Data.ArrayMax = 0;
  (this->ResultDataFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResultDataFilePath).Data.ArrayNum = 0;
  (this->ResultDataFilePath).Data.ArrayMax = 0;
  this->MaxOutputFileSize = 0xffffffffffffffff;
  return this;
}

// ~FPackageChunksConfiguration @ 143289210

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FPackageChunksConfiguration::~FPackageChunksConfiguration
          (FPackageChunksConfiguration *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  pFVar1 = (this->ResultDataFilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CloudDir).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputFile).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->PrevTagSet).HashSize = 0;
  FVar2 = (this->PrevTagSet).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PrevTagSet).Elements);
  DestructItems<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,int>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
             (this->TagSetArray).AllocatorInstance.Data,(this->TagSetArray).ArrayNum);
  pFVar1 = (this->TagSetArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrevManifestFilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ManifestFilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// FDiffManifestsConfiguration @ 143222d20

FDiffManifestsConfiguration * __thiscall
BuildPatchServices::FDiffManifestsConfiguration::FDiffManifestsConfiguration
          (FDiffManifestsConfiguration *this)

{
  (this->ManifestAUri).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManifestAUri).Data.ArrayNum = 0;
  (this->ManifestAUri).Data.ArrayMax = 0;
  (this->ManifestBUri).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManifestBUri).Data.ArrayNum = 0;
  (this->ManifestBUri).Data.ArrayMax = 0;
  *(undefined8 *)&(this->TagSetA).Elements = 0;
  *(undefined8 *)&(this->TagSetA).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TagSetA).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TagSetA).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TagSetA).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TagSetA).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->TagSetA).Elements.field_0x30 = 0xffffffff;
  (this->TagSetA).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TagSetA).HashSize = 0;
  *(undefined8 *)&(this->TagSetB).Elements = 0;
  *(undefined8 *)&(this->TagSetB).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TagSetB).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TagSetB).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TagSetB).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TagSetB).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->TagSetB).Elements.field_0x30 = 0xffffffff;
  (this->TagSetB).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TagSetB).HashSize = 0;
  (this->CompareTagSets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompareTagSets).ArrayNum = 0;
  (this->CompareTagSets).ArrayMax = 0;
  (this->OutputFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputFilePath).Data.ArrayNum = 0;
  (this->OutputFilePath).Data.ArrayMax = 0;
  (this->OutputPatchDescriptorPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputPatchDescriptorPath).Data.ArrayNum = 0;
  (this->OutputPatchDescriptorPath).Data.ArrayMax = 0;
  this->bRequireOptimizedDelta = false;
  this->bOnlyPatchDescriptors = false;
  this->bEmitInstallTime = true;
  return this;
}

// ~FDiffManifestsConfiguration @ 143228520

void __thiscall
BuildPatchServices::FDiffManifestsConfiguration::~FDiffManifestsConfiguration
          (FDiffManifestsConfiguration *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  pFVar1 = (this->OutputPatchDescriptorPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputFilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,int>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
             (this->CompareTagSets).AllocatorInstance.Data,(this->CompareTagSets).ArrayNum);
  pFVar1 = (this->CompareTagSets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->TagSetB).HashSize = 0;
  FVar2 = (this->TagSetB).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TagSetB).Elements);
  (this->TagSetA).HashSize = 0;
  FVar2 = (this->TagSetA).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TagSetA).Elements);
  pFVar1 = (this->ManifestBUri).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ManifestAUri).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}


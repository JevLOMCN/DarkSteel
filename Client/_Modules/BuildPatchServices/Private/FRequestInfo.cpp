// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// FRequestInfo @ 1431bcf60

FRequestInfo * __thiscall FRequestInfo::FRequestInfo(FRequestInfo *this,FRequestInfo *param_1)

{
  ForElementType<FRequestInfo::FRequestSplat> FVar1;
  ulong64 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = (param_1->Guid).B;
  uVar4 = (param_1->Guid).C;
  uVar5 = (param_1->Guid).D;
  (this->Guid).A = (param_1->Guid).A;
  (this->Guid).B = uVar3;
  (this->Guid).C = uVar4;
  (this->Guid).D = uVar5;
  this->ChunkSize = param_1->ChunkSize;
  (this->Splats).AllocatorInstance.SecondaryData = (ForElementType<FRequestInfo::FRequestSplat>)0x0;
  if ((param_1->Splats).AllocatorInstance.SecondaryData ==
      (ForElementType<FRequestInfo::FRequestSplat>)0x0) {
    memmove(&this->Splats,&param_1->Splats,0x10);
  }
  FVar1 = (this->Splats).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FRequestInfo::FRequestSplat>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->Splats).AllocatorInstance.SecondaryData = (param_1->Splats).AllocatorInstance.SecondaryData
  ;
  (param_1->Splats).AllocatorInstance.SecondaryData =
       (ForElementType<FRequestInfo::FRequestSplat>)0x0;
  (this->Splats).ArrayNum = (param_1->Splats).ArrayNum;
  (this->Splats).ArrayMax = (param_1->Splats).ArrayMax;
  (param_1->Splats).ArrayNum = 0;
  (param_1->Splats).ArrayMax = 1;
  uVar2 = (param_1->ReadBuffer).Size;
  (this->ReadBuffer).Data = (param_1->ReadBuffer).Data;
  (this->ReadBuffer).Size = uVar2;
  this->Batch = param_1->Batch;
  uVar2 = (param_1->DestinationBuffer).Size;
  (this->DestinationBuffer).Data = (param_1->DestinationBuffer).Data;
  (this->DestinationBuffer).Size = uVar2;
  this->File = param_1->File;
  this->bReadIntoMemoryStore = param_1->bReadIntoMemoryStore;
  this->bSourceIsMemoryStore = param_1->bSourceIsMemoryStore;
  this->bAborted = param_1->bAborted;
  this->bFailedToRead = param_1->bFailedToRead;
  this->bLaunchedFallback = param_1->bLaunchedFallback;
  this->ChunkIndexInFile = param_1->ChunkIndexInFile;
  this->ChunkUnavailableAt = param_1->ChunkUnavailableAt;
  return this;
}


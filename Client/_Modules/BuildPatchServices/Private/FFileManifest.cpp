// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 4

// FFileManifest @ 1431bcd90

FFileManifest * __thiscall
BuildPatchServices::FFileManifest::FFileManifest(FFileManifest *this,FFileManifest *param_1)

{
  EFileMetaFlags EVar1;
  undefined8 uVar2;
  
  (this->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filename).Data.AllocatorInstance.Data = (param_1->Filename).Data.AllocatorInstance.Data;
  (param_1->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filename).Data.ArrayNum = (param_1->Filename).Data.ArrayNum;
  (this->Filename).Data.ArrayMax = (param_1->Filename).Data.ArrayMax;
  (param_1->Filename).Data.ArrayNum = 0;
  (param_1->Filename).Data.ArrayMax = 0;
  (this->SymlinkTarget).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SymlinkTarget).Data.AllocatorInstance.Data =
       (param_1->SymlinkTarget).Data.AllocatorInstance.Data;
  (param_1->SymlinkTarget).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SymlinkTarget).Data.ArrayNum = (param_1->SymlinkTarget).Data.ArrayNum;
  (this->SymlinkTarget).Data.ArrayMax = (param_1->SymlinkTarget).Data.ArrayMax;
  (param_1->SymlinkTarget).Data.ArrayNum = 0;
  (param_1->SymlinkTarget).Data.ArrayMax = 0;
  uVar2 = *(undefined8 *)((param_1->FileHash).Hash + 8);
  *(undefined8 *)(this->FileHash).Hash = *(undefined8 *)(param_1->FileHash).Hash;
  *(undefined8 *)((this->FileHash).Hash + 8) = uVar2;
  *(undefined4 *)((this->FileHash).Hash + 0x10) = *(undefined4 *)((param_1->FileHash).Hash + 0x10);
  EVar1 = param_1->FileMetaFlags;
  (this->InstallTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->FileMetaFlags = EVar1;
  (this->InstallTags).AllocatorInstance.Data = (param_1->InstallTags).AllocatorInstance.Data;
  (param_1->InstallTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstallTags).ArrayNum = (param_1->InstallTags).ArrayNum;
  (this->InstallTags).ArrayMax = (param_1->InstallTags).ArrayMax;
  (param_1->InstallTags).ArrayNum = 0;
  (param_1->InstallTags).ArrayMax = 0;
  (this->ChunkParts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkParts).AllocatorInstance.Data = (param_1->ChunkParts).AllocatorInstance.Data;
  (param_1->ChunkParts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkParts).ArrayNum = (param_1->ChunkParts).ArrayNum;
  (this->ChunkParts).ArrayMax = (param_1->ChunkParts).ArrayMax;
  (param_1->ChunkParts).ArrayNum = 0;
  (param_1->ChunkParts).ArrayMax = 0;
  this->FileSize = param_1->FileSize;
  return this;
}

// FFileManifest @ 1431bce40

FFileManifest * __thiscall
BuildPatchServices::FFileManifest::FFileManifest(FFileManifest *this,FFileManifest *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  
  ::FString::FString(&this->Filename,&param_1->Filename);
  ::FString::FString(&this->SymlinkTarget,&param_1->SymlinkTarget);
  uVar6 = *(undefined8 *)((param_1->FileHash).Hash + 8);
  pTVar1 = &this->InstallTags;
  *(undefined8 *)(this->FileHash).Hash = *(undefined8 *)(param_1->FileHash).Hash;
  *(undefined8 *)((this->FileHash).Hash + 8) = uVar6;
  *(undefined4 *)((this->FileHash).Hash + 0x10) = *(undefined4 *)((param_1->FileHash).Hash + 0x10);
  this->FileMetaFlags = param_1->FileMetaFlags;
  piVar2 = &(this->InstallTags).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->InstallTags).ArrayNum;
  pFVar5 = (param_1->InstallTags).AllocatorInstance.Data;
  (this->InstallTags).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar5,iVar4);
  }
  pTVar3 = &this->ChunkParts;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ChunkParts).ArrayMax;
  iVar4 = (param_1->ChunkParts).ArrayNum;
  pFVar5 = (param_1->ChunkParts).AllocatorInstance.Data;
  (this->ChunkParts).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x18);
  }
  this->FileSize = param_1->FileSize;
  return this;
}

// ~FFileManifest @ 1431bf420

void __thiscall BuildPatchServices::FFileManifest::~FFileManifest(FFileManifest *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChunkParts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->InstallTags).AllocatorInstance.Data,(this->InstallTags).ArrayNum);
  pFVar1 = (this->InstallTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SymlinkTarget).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// FFileManifest @ 143223280

FFileManifest * __thiscall BuildPatchServices::FFileManifest::FFileManifest(FFileManifest *this)

{
  (this->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filename).Data.ArrayNum = 0;
  (this->Filename).Data.ArrayMax = 0;
  (this->SymlinkTarget).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SymlinkTarget).Data.ArrayNum = 0;
  (this->SymlinkTarget).Data.ArrayMax = 0;
  (this->FileHash).Hash[0] = '\0';
  (this->FileHash).Hash[1] = '\0';
  (this->FileHash).Hash[2] = '\0';
  (this->FileHash).Hash[3] = '\0';
  (this->FileHash).Hash[4] = '\0';
  (this->FileHash).Hash[5] = '\0';
  (this->FileHash).Hash[6] = '\0';
  (this->FileHash).Hash[7] = '\0';
  (this->FileHash).Hash[8] = '\0';
  (this->FileHash).Hash[9] = '\0';
  (this->FileHash).Hash[10] = '\0';
  (this->FileHash).Hash[0xb] = '\0';
  (this->FileHash).Hash[0xc] = '\0';
  (this->FileHash).Hash[0xd] = '\0';
  (this->FileHash).Hash[0xe] = '\0';
  (this->FileHash).Hash[0xf] = '\0';
  (this->FileHash).Hash[0x10] = '\0';
  (this->FileHash).Hash[0x11] = '\0';
  (this->FileHash).Hash[0x12] = '\0';
  (this->FileHash).Hash[0x13] = '\0';
  this->FileMetaFlags = None;
  (this->InstallTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstallTags).ArrayNum = 0;
  (this->InstallTags).ArrayMax = 0;
  (this->ChunkParts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkParts).ArrayNum = 0;
  (this->ChunkParts).ArrayMax = 0;
  this->FileSize = 0;
  return this;
}


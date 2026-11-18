// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 69

// FMockManifest @ 143281640

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FMockManifest * __thiscall
BuildPatchServices::FMockManifest::FMockManifest(FMockManifest *this,FMockManifest *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  EFeatureLevel EVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  FBuildPatchAppManifest::FBuildPatchAppManifest
            ((FBuildPatchAppManifest *)this,(FBuildPatchAppManifest *)param_1);
  this->_padding_ = (longlong)&___7FMockManifest_BuildPatchServices__6B_;
  this->AppId = param_1->AppId;
  ::FString::FString(&this->AppName,&param_1->AppName);
  ::FString::FString(&this->VersionString,&param_1->VersionString);
  ::FString::FString(&this->LaunchExe,&param_1->LaunchExe);
  ::FString::FString(&this->LaunchCommand,&param_1->LaunchCommand);
  ::FString::FString(&this->PrereqName,&param_1->PrereqName);
  ::FString::FString(&this->PrereqPath,&param_1->PrereqPath);
  ::FString::FString(&this->PrereqArgs,&param_1->PrereqArgs);
  pTVar2 = &this->BuildFileList;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->BuildFileList).ArrayMax;
  iVar4 = (param_1->BuildFileList).ArrayNum;
  pFVar7 = (param_1->BuildFileList).AllocatorInstance.Data;
  (this->BuildFileList).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    ConstructItems<FString,FString,int>((pTVar2->AllocatorInstance).Data,(FString *)pFVar7,iVar4);
  }
  *(undefined8 *)&(this->FileTagList).Elements = 0;
  *(undefined8 *)&(this->FileTagList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FileTagList).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FileTagList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FileTagList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FileTagList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileTagList).Elements.field_0x34 = 0;
  (this->FileTagList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FileTagList).HashSize = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            (&this->FileTagList,&param_1->FileTagList);
  pTVar2 = &this->RemovableFiles;
  this->DownloadSize = param_1->DownloadSize;
  this->TagDownloadSize = param_1->TagDownloadSize;
  this->DeltaDownloadSize = param_1->DeltaDownloadSize;
  this->BuildSize = param_1->BuildSize;
  this->TagBuildSize = param_1->TagBuildSize;
  piVar1 = &(this->RemovableFiles).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->RemovableFiles).ArrayNum;
  pFVar7 = (param_1->RemovableFiles).AllocatorInstance.Data;
  (this->RemovableFiles).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    ConstructItems<FString,FString,int>((pTVar2->AllocatorInstance).Data,(FString *)pFVar7,iVar4);
  }
  *(undefined8 *)&(this->CustomFields).field_0x0 = 0;
  *(undefined8 *)&(this->CustomFields).field_0x8 = 0;
  *(undefined8 *)&(this->CustomFields).field_0x20 = 0;
  *(undefined4 *)&(this->CustomFields).field_0x28 = 0;
  *(undefined4 *)&(this->CustomFields).field_0x2c = 0x80;
  *(undefined4 *)&(this->CustomFields).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CustomFields).field_0x34 = 0;
  *(undefined8 *)&(this->CustomFields).field_0x40 = 0;
  *(undefined4 *)&(this->CustomFields).field_0x48 = 0;
  TSet<TTuple<FString,BuildPatchServices::FMockManifestField>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,BuildPatchServices::FMockManifestField>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>,FDefaultSetAllocator>
               *)&this->CustomFields,
              (TSet<TTuple<FString,BuildPatchServices::FMockManifestField>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>,FDefaultSetAllocator>
               *)&param_1->CustomFields);
  EVar5 = param_1->FeatureLevel;
  *(undefined8 *)&(this->ChunksRequiredForFiles).Elements = 0;
  *(undefined8 *)&(this->ChunksRequiredForFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ChunksRequiredForFiles).Elements.field_0x20 = 0;
  this->FeatureLevel = EVar5;
  *(undefined4 *)&(this->ChunksRequiredForFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ChunksRequiredForFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunksRequiredForFiles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunksRequiredForFiles).Elements.field_0x34 = 0;
  (this->ChunksRequiredForFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ChunksRequiredForFiles).HashSize = 0;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=
            (&this->ChunksRequiredForFiles,&param_1->ChunksRequiredForFiles);
  this->NumberOfChunkReferences = param_1->NumberOfChunkReferences;
  this->DataSize = param_1->DataSize;
  *(undefined8 *)&(this->FileNameToFileSize).field_0x0 = 0;
  *(undefined8 *)&(this->FileNameToFileSize).field_0x8 = 0;
  *(undefined8 *)&(this->FileNameToFileSize).field_0x20 = 0;
  *(undefined4 *)&(this->FileNameToFileSize).field_0x28 = 0;
  *(undefined4 *)&(this->FileNameToFileSize).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileNameToFileSize).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileNameToFileSize).field_0x34 = 0;
  *(undefined8 *)&(this->FileNameToFileSize).field_0x40 = 0;
  *(undefined4 *)&(this->FileNameToFileSize).field_0x48 = 0;
  TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
               *)&this->FileNameToFileSize,
              (TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
               *)&param_1->FileNameToFileSize);
  uVar6 = param_1->NumFiles;
  *(undefined8 *)&(this->TaggedFileList).Elements = 0;
  *(undefined8 *)&(this->TaggedFileList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TaggedFileList).Elements.field_0x20 = 0;
  this->NumFiles = uVar6;
  *(undefined4 *)&(this->TaggedFileList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TaggedFileList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TaggedFileList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TaggedFileList).Elements.field_0x34 = 0;
  (this->TaggedFileList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TaggedFileList).HashSize = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            (&this->TaggedFileList,&param_1->TaggedFileList);
  pTVar3 = &this->DataList;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->DataList).ArrayMax;
  iVar4 = (param_1->DataList).ArrayNum;
  pFVar7 = (param_1->DataList).AllocatorInstance.Data;
  (this->DataList).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar4 << 4);
  }
  *(undefined8 *)&(this->FileManifests).field_0x0 = 0;
  *(undefined8 *)&(this->FileManifests).field_0x8 = 0;
  *(undefined8 *)&(this->FileManifests).field_0x20 = 0;
  *(undefined4 *)&(this->FileManifests).field_0x28 = 0;
  *(undefined4 *)&(this->FileManifests).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileManifests).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileManifests).field_0x34 = 0;
  *(undefined8 *)&(this->FileManifests).field_0x40 = 0;
  *(undefined4 *)&(this->FileManifests).field_0x48 = 0;
  TSet<TTuple<FString,BuildPatchServices::FFileManifest>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,BuildPatchServices::FFileManifest>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>,FDefaultSetAllocator>
               *)&this->FileManifests,
              (TSet<TTuple<FString,BuildPatchServices::FFileManifest>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>,FDefaultSetAllocator>
               *)&param_1->FileManifests);
  *(undefined8 *)&(this->ChunkInfos).field_0x0 = 0;
  *(undefined8 *)&(this->ChunkInfos).field_0x8 = 0;
  *(undefined8 *)&(this->ChunkInfos).field_0x20 = 0;
  *(undefined4 *)&(this->ChunkInfos).field_0x28 = 0;
  *(undefined4 *)&(this->ChunkInfos).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkInfos).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunkInfos).field_0x34 = 0;
  *(undefined8 *)&(this->ChunkInfos).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkInfos).field_0x48 = 0;
  TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>,FDefaultSetAllocator>
               *)&this->ChunkInfos,
              (TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>,FDefaultSetAllocator>
               *)&param_1->ChunkInfos);
  *(undefined8 *)&(this->FileIdToHashes).field_0x0 = 0;
  *(undefined8 *)&(this->FileIdToHashes).field_0x8 = 0;
  *(undefined8 *)&(this->FileIdToHashes).field_0x20 = 0;
  *(undefined4 *)&(this->FileIdToHashes).field_0x28 = 0;
  *(undefined4 *)&(this->FileIdToHashes).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileIdToHashes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileIdToHashes).field_0x34 = 0;
  *(undefined8 *)&(this->FileIdToHashes).field_0x40 = 0;
  *(undefined4 *)&(this->FileIdToHashes).field_0x48 = 0;
  TSet<TTuple<FGuid,FSHAHash>,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FGuid,FSHAHash>,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>,FDefaultSetAllocator>
             *)&this->FileIdToHashes,
            (TSet<TTuple<FGuid,FSHAHash>,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>,FDefaultSetAllocator>
             *)&param_1->FileIdToHashes);
  *(undefined8 *)&(this->FileNameToHashes).field_0x0 = 0;
  *(undefined8 *)&(this->FileNameToHashes).field_0x8 = 0;
  *(undefined8 *)&(this->FileNameToHashes).field_0x20 = 0;
  *(undefined4 *)&(this->FileNameToHashes).field_0x28 = 0;
  *(undefined4 *)&(this->FileNameToHashes).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileNameToHashes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileNameToHashes).field_0x34 = 0;
  *(undefined8 *)&(this->FileNameToHashes).field_0x40 = 0;
  *(undefined4 *)&(this->FileNameToHashes).field_0x48 = 0;
  TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
               *)&this->FileNameToHashes,
              (TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
               *)&param_1->FileNameToHashes);
  *(undefined8 *)&(this->FilePartHashes).field_0x0 = 0;
  *(undefined8 *)&(this->FilePartHashes).field_0x8 = 0;
  *(undefined8 *)&(this->FilePartHashes).field_0x20 = 0;
  *(undefined4 *)&(this->FilePartHashes).field_0x28 = 0;
  *(undefined4 *)&(this->FilePartHashes).field_0x2c = 0x80;
  *(undefined4 *)&(this->FilePartHashes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FilePartHashes).field_0x34 = 0;
  *(undefined8 *)&(this->FilePartHashes).field_0x40 = 0;
  *(undefined4 *)&(this->FilePartHashes).field_0x48 = 0;
  TSet<TTuple<FGuid,unsigned___int64>,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FGuid,unsigned___int64>,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>,FDefaultSetAllocator>
               *)&this->FilePartHashes,
              (TSet<TTuple<FGuid,unsigned___int64>,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>,FDefaultSetAllocator>
               *)&param_1->FilePartHashes);
  *(undefined8 *)&(this->ProducibleChunks).Elements = 0;
  *(undefined8 *)&(this->ProducibleChunks).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ProducibleChunks).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ProducibleChunks).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ProducibleChunks).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ProducibleChunks).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProducibleChunks).Elements.field_0x34 = 0;
  (this->ProducibleChunks).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ProducibleChunks).HashSize = 0;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=
            (&this->ProducibleChunks,&param_1->ProducibleChunks);
  *(undefined8 *)&(this->OutdatedFiles).Elements = 0;
  *(undefined8 *)&(this->OutdatedFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OutdatedFiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->OutdatedFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OutdatedFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OutdatedFiles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutdatedFiles).Elements.field_0x34 = 0;
  (this->OutdatedFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OutdatedFiles).HashSize = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            (&this->OutdatedFiles,&param_1->OutdatedFiles);
  return this;
}

// FMockManifest @ 143281b80

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FMockManifest * __thiscall BuildPatchServices::FMockManifest::FMockManifest(FMockManifest *this)

{
  FBuildPatchAppManifest::FBuildPatchAppManifest((FBuildPatchAppManifest *)this);
  this->_padding_ = (longlong)&___7FMockManifest_BuildPatchServices__6B_;
  (this->AppName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AppName).Data.ArrayNum = 0;
  (this->AppName).Data.ArrayMax = 0;
  (this->VersionString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VersionString).Data.ArrayNum = 0;
  (this->VersionString).Data.ArrayMax = 0;
  (this->LaunchExe).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LaunchExe).Data.ArrayNum = 0;
  (this->LaunchExe).Data.ArrayMax = 0;
  (this->LaunchCommand).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LaunchCommand).Data.ArrayNum = 0;
  (this->LaunchCommand).Data.ArrayMax = 0;
  (this->PrereqName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrereqName).Data.ArrayNum = 0;
  (this->PrereqName).Data.ArrayMax = 0;
  (this->PrereqPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrereqPath).Data.ArrayNum = 0;
  (this->PrereqPath).Data.ArrayMax = 0;
  (this->PrereqArgs).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrereqArgs).Data.ArrayNum = 0;
  (this->PrereqArgs).Data.ArrayMax = 0;
  (this->BuildFileList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildFileList).ArrayNum = 0;
  (this->BuildFileList).ArrayMax = 0;
  *(undefined8 *)&(this->FileTagList).Elements = 0;
  *(undefined8 *)&(this->FileTagList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FileTagList).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FileTagList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FileTagList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FileTagList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileTagList).Elements.field_0x34 = 0;
  (this->FileTagList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FileTagList).HashSize = 0;
  (this->RemovableFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemovableFiles).ArrayNum = 0;
  (this->RemovableFiles).ArrayMax = 0;
  *(undefined8 *)&this->CustomFields = 0;
  *(undefined8 *)&(this->CustomFields).field_0x8 = 0;
  *(undefined8 *)&(this->CustomFields).field_0x20 = 0;
  *(undefined4 *)&(this->CustomFields).field_0x28 = 0;
  *(undefined4 *)&(this->CustomFields).field_0x2c = 0x80;
  *(undefined4 *)&(this->CustomFields).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CustomFields).field_0x34 = 0;
  *(undefined8 *)&(this->CustomFields).field_0x40 = 0;
  *(undefined4 *)&(this->CustomFields).field_0x48 = 0;
  *(undefined8 *)&(this->ChunksRequiredForFiles).Elements = 0;
  *(undefined8 *)&(this->ChunksRequiredForFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ChunksRequiredForFiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ChunksRequiredForFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ChunksRequiredForFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunksRequiredForFiles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunksRequiredForFiles).Elements.field_0x34 = 0;
  (this->ChunksRequiredForFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ChunksRequiredForFiles).HashSize = 0;
  *(undefined8 *)&this->FileNameToFileSize = 0;
  *(undefined8 *)&(this->FileNameToFileSize).field_0x8 = 0;
  *(undefined8 *)&(this->FileNameToFileSize).field_0x20 = 0;
  *(undefined4 *)&(this->FileNameToFileSize).field_0x28 = 0;
  *(undefined4 *)&(this->FileNameToFileSize).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileNameToFileSize).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileNameToFileSize).field_0x34 = 0;
  *(undefined8 *)&(this->FileNameToFileSize).field_0x40 = 0;
  *(undefined4 *)&(this->FileNameToFileSize).field_0x48 = 0;
  *(undefined8 *)&(this->TaggedFileList).Elements = 0;
  *(undefined8 *)&(this->TaggedFileList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TaggedFileList).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TaggedFileList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TaggedFileList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TaggedFileList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TaggedFileList).Elements.field_0x34 = 0;
  (this->TaggedFileList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TaggedFileList).HashSize = 0;
  (this->DataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataList).ArrayNum = 0;
  (this->DataList).ArrayMax = 0;
  *(undefined8 *)&this->FileManifests = 0;
  *(undefined8 *)&(this->FileManifests).field_0x8 = 0;
  *(undefined8 *)&(this->FileManifests).field_0x20 = 0;
  *(undefined4 *)&(this->FileManifests).field_0x28 = 0;
  *(undefined4 *)&(this->FileManifests).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileManifests).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileManifests).field_0x34 = 0;
  *(undefined8 *)&(this->FileManifests).field_0x40 = 0;
  *(undefined4 *)&(this->FileManifests).field_0x48 = 0;
  *(undefined8 *)&this->ChunkInfos = 0;
  *(undefined8 *)&(this->ChunkInfos).field_0x8 = 0;
  *(undefined8 *)&(this->ChunkInfos).field_0x20 = 0;
  *(undefined4 *)&(this->ChunkInfos).field_0x28 = 0;
  *(undefined4 *)&(this->ChunkInfos).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkInfos).field_0x34 = 0;
  *(undefined4 *)&(this->ChunkInfos).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChunkInfos).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkInfos).field_0x48 = 0;
  *(undefined8 *)&this->FileIdToHashes = 0;
  *(undefined8 *)&(this->FileIdToHashes).field_0x8 = 0;
  *(undefined8 *)&(this->FileIdToHashes).field_0x20 = 0;
  *(undefined4 *)&(this->FileIdToHashes).field_0x28 = 0;
  *(undefined4 *)&(this->FileIdToHashes).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileIdToHashes).field_0x34 = 0;
  *(undefined4 *)&(this->FileIdToHashes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FileIdToHashes).field_0x40 = 0;
  *(undefined4 *)&(this->FileIdToHashes).field_0x48 = 0;
  *(undefined8 *)&this->FileNameToHashes = 0;
  *(undefined8 *)&(this->FileNameToHashes).field_0x8 = 0;
  *(undefined8 *)&(this->FileNameToHashes).field_0x20 = 0;
  *(undefined4 *)&(this->FileNameToHashes).field_0x28 = 0;
  *(undefined4 *)&(this->FileNameToHashes).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileNameToHashes).field_0x34 = 0;
  *(undefined4 *)&(this->FileNameToHashes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FileNameToHashes).field_0x40 = 0;
  *(undefined4 *)&(this->FileNameToHashes).field_0x48 = 0;
  *(undefined8 *)&this->FilePartHashes = 0;
  *(undefined8 *)&(this->FilePartHashes).field_0x8 = 0;
  *(undefined8 *)&(this->FilePartHashes).field_0x20 = 0;
  *(undefined4 *)&(this->FilePartHashes).field_0x28 = 0;
  *(undefined4 *)&(this->FilePartHashes).field_0x2c = 0x80;
  *(undefined4 *)&(this->FilePartHashes).field_0x34 = 0;
  *(undefined4 *)&(this->FilePartHashes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FilePartHashes).field_0x40 = 0;
  *(undefined4 *)&(this->FilePartHashes).field_0x48 = 0;
  *(undefined8 *)&(this->ProducibleChunks).Elements = 0;
  *(undefined8 *)&(this->ProducibleChunks).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ProducibleChunks).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ProducibleChunks).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ProducibleChunks).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ProducibleChunks).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ProducibleChunks).Elements.field_0x30 = 0xffffffff;
  (this->ProducibleChunks).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ProducibleChunks).HashSize = 0;
  *(undefined8 *)&(this->OutdatedFiles).Elements = 0;
  *(undefined8 *)&(this->OutdatedFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OutdatedFiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->OutdatedFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OutdatedFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OutdatedFiles).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->OutdatedFiles).Elements.field_0x30 = 0xffffffff;
  (this->OutdatedFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OutdatedFiles).HashSize = 0;
  return this;
}

// ~FMockManifest @ 143288c10

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall BuildPatchServices::FMockManifest::~FMockManifest(FMockManifest *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  (this->OutdatedFiles).HashSize = 0;
  FVar1 = (this->OutdatedFiles).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OutdatedFiles).Elements);
  (this->ProducibleChunks).HashSize = 0;
  FVar1 = (this->ProducibleChunks).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ProducibleChunks).Elements);
  *(undefined4 *)&(this->FilePartHashes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FilePartHashes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FilePartHashes);
  *(undefined4 *)&(this->FileNameToHashes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FileNameToHashes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FSHAHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FSHAHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FSHAHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileNameToHashes);
  *(undefined4 *)&(this->FileIdToHashes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FileIdToHashes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FSHAHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FSHAHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FSHAHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileIdToHashes);
  *(undefined4 *)&(this->ChunkInfos).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ChunkInfos).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FChunkInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FChunkInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FChunkInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChunkInfos);
  *(undefined4 *)&(this->FileManifests).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FileManifests).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,BuildPatchServices::FFileManifest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,BuildPatchServices::FFileManifest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,BuildPatchServices::FFileManifest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileManifests);
  pFVar3 = (this->DataList).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  (this->TaggedFileList).HashSize = 0;
  FVar1 = (this->TaggedFileList).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TaggedFileList).Elements);
  *(undefined4 *)&(this->FileNameToFileSize).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FileNameToFileSize).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileNameToFileSize);
  (this->ChunksRequiredForFiles).HashSize = 0;
  FVar1 = (this->ChunksRequiredForFiles).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ChunksRequiredForFiles).Elements);
  *(undefined4 *)&(this->CustomFields).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CustomFields).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,BuildPatchServices::FMockManifestField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,BuildPatchServices::FMockManifestField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,BuildPatchServices::FMockManifestField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CustomFields);
  DestructItems<FString,int>
            ((FString *)(this->RemovableFiles).AllocatorInstance.Data,
             (this->RemovableFiles).ArrayNum);
  pFVar3 = (this->RemovableFiles).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  (this->FileTagList).HashSize = 0;
  FVar1 = (this->FileTagList).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->FileTagList).Elements);
  DestructItems<FString,int>
            ((FString *)(this->BuildFileList).AllocatorInstance.Data,(this->BuildFileList).ArrayNum)
  ;
  pFVar3 = (this->BuildFileList).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PrereqArgs).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PrereqPath).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PrereqName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->LaunchCommand).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->LaunchExe).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->VersionString).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->AppName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FBuildPatchAppManifest::~FBuildPatchAppManifest((FBuildPatchAppManifest *)this);
  return;
}

// CopyCustomFields @ 1432c7e40

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockManifest::CopyCustomFields
          (FMockManifest *this,TSharedRef<IBuildManifest,1> *param_1,bool param_2)

{
  return;
}

// DeserializeFromData @ 1432cbec0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockManifest::DeserializeFromData
          (FMockManifest *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  return true;
}

// DeserializeFromJSON @ 1432cbed0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockManifest::DeserializeFromJSON(FMockManifest *this,FString *param_1)

{
  return true;
}

// Duplicate @ 1432cefd0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedRef<IBuildManifest,1> * __thiscall
BuildPatchServices::FMockManifest::Duplicate
          (FMockManifest *this,TSharedRef<IBuildManifest,1> *__return_storage_ptr__)

{
  FMockManifest *this_00;
  TRawPtrProxy<BuildPatchServices::FMockManifest> local_res10 [3];
  
  this_00 = ::operator_new(0x768);
  local_res10[0].Object = (FMockManifest *)0x0;
  if (this_00 != (FMockManifest *)0x0) {
    local_res10[0].Object = FMockManifest(this_00,this);
  }
  TSharedRef<IBuildManifest,1>::TSharedRef<IBuildManifest,1><BuildPatchServices::FMockManifest>
            (__return_storage_ptr__,local_res10);
  return __return_storage_ptr__;
}

// GetAppID @ 1432d34c0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

uint __thiscall BuildPatchServices::FMockManifest::GetAppID(FMockManifest *this)

{
  return (uint)this->AppId;
}

// GetAppName @ 1432d34d0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall BuildPatchServices::FMockManifest::GetAppName(FMockManifest *this)

{
  return &this->AppName;
}

// GetBuildFileList @ 1432d3630

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FMockManifest::GetBuildFileList
          (FMockManifest *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  (**(code **)(this->_padding_ + 0x1e0))(this,param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetBuildFileList @ 1432d3670

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FMockManifest::GetBuildFileList
          (FMockManifest *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  (**(code **)(this->_padding_ + 0x1c8))();
  return __return_storage_ptr__;
}

// GetBuildFileListView @ 1432d36a0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FMockManifest::GetBuildFileListView
          (FMockManifest *this,
          TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  (**(code **)(this->_padding_ + 0x1d8))(this,param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetBuildFileListView @ 1432d36e0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FMockManifest::GetBuildFileListView
          (FMockManifest *this,
          TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  (**(code **)(this->_padding_ + 0x1c0))();
  return __return_storage_ptr__;
}

// GetBuildSize @ 1432d3740

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall
BuildPatchServices::FMockManifest::GetBuildSize
          (FMockManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  return this->TagBuildSize;
}

// GetBuildSize @ 1432d3750

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall BuildPatchServices::FMockManifest::GetBuildSize(FMockManifest *this)

{
  return this->BuildSize;
}

// GetChunkHash @ 1432d3b00

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockManifest::GetChunkHash(FMockManifest *this,FGuid *param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 uVar2;
  FChunkInfo *pFVar3;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>,FDefaultSetAllocator>
                      *)&this->ChunkInfos,(uint)uVar2,param_1);
  if (iVar1 != -1) {
    pFVar3 = TMapBase<FGuid,BuildPatchServices::FChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>_>
             ::FindChecked((TMapBase<FGuid,BuildPatchServices::FChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>_>
                            *)&this->ChunkInfos,param_1);
    *param_2 = pFVar3->Hash;
    return true;
  }
  return false;
}

// GetChunkInfo @ 1432d3b80

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FChunkInfo * __thiscall
BuildPatchServices::FMockManifest::GetChunkInfo(FMockManifest *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  FChunkInfo *pFVar3;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>,FDefaultSetAllocator>
                      *)&this->ChunkInfos,(uint)uVar2,param_1);
  if (iVar1 != -1) {
    pFVar3 = TMapBase<FGuid,BuildPatchServices::FChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>_>
             ::FindChecked((TMapBase<FGuid,BuildPatchServices::FChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>_>
                            *)&this->ChunkInfos,param_1);
    return pFVar3;
  }
  return (FChunkInfo *)0x0;
}

// GetChunkShaHash @ 1432d3be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockManifest::GetChunkShaHash
          (FMockManifest *this,FGuid *param_1,FSHAHash *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong64 uVar4;
  FChunkInfo *pFVar5;
  longlong lVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,BuildPatchServices::FChunkInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>,FDefaultSetAllocator>
                      *)&this->ChunkInfos,(uint)uVar4,param_1);
  if (iVar3 != -1) {
    pFVar5 = TMapBase<FGuid,BuildPatchServices::FChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>_>
             ::FindChecked((TMapBase<FGuid,BuildPatchServices::FChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo,0>_>
                            *)&this->ChunkInfos,param_1);
    uVar2 = *(undefined8 *)((pFVar5->ShaHash).Hash + 8);
    *(undefined8 *)param_2->Hash = *(undefined8 *)(pFVar5->ShaHash).Hash;
    *(undefined8 *)(param_2->Hash + 8) = uVar2;
    uVar1 = *(uint *)((pFVar5->ShaHash).Hash + 0x10);
    *(uint *)(param_2->Hash + 0x10) = uVar1;
    lVar6 = *(longlong *)param_2->Hash -
            (longlong)
            `public:_virtual_bool___cdecl_BuildPatchServices::FMockManifest::GetChunkShaHash(FGuid_const&___ptr64,FSHAHash&___ptr64)const___ptr64'
            ::__l2::Zero;
    if ((lVar6 == 0) && (lVar6 = *(longlong *)(param_2->Hash + 8) - _DAT_150a8a028, lVar6 == 0)) {
      lVar6 = (ulonglong)uVar1 - (ulonglong)DAT_150a8a030;
    }
    return lVar6 != 0;
  }
  return false;
}

// GetChunksRequiredForFiles @ 1432d41b0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockManifest::GetChunksRequiredForFiles
          (FMockManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_2)

{
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=
            (param_2,&this->ChunksRequiredForFiles);
  return;
}

// GetCustomField @ 1432d5ee0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedPtr<IManifestField,1> * __thiscall
BuildPatchServices::FMockManifest::GetCustomField
          (FMockManifest *this,TSharedPtr<IManifestField,1> *__return_storage_ptr__,FString *param_1
          )

{
  FMockManifestField *pFVar1;
  TRawPtrProxy<BuildPatchServices::FMockManifestField> local_res10;
  
  local_res10.Object = ::operator_new(0x28);
  if (local_res10.Object == (FMockManifestField *)0x0) {
    local_res10.Object = (FMockManifestField *)0x0;
  }
  else {
    pFVar1 = TMapBase<FString,BuildPatchServices::FMockManifestField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>_>
             ::FindChecked((TMapBase<FString,BuildPatchServices::FMockManifestField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>_>
                            *)&this->CustomFields,param_1);
    (local_res10.Object)->_padding_ = (longlong)&___7FMockManifestField_BuildPatchServices__6B_;
    ::FString::FString(&(local_res10.Object)->String,&pFVar1->String);
    (local_res10.Object)->Double = pFVar1->Double;
    (local_res10.Object)->Integer = pFVar1->Integer;
  }
  TSharedPtr<IManifestField,1>::TSharedPtr<IManifestField,1><BuildPatchServices::FMockManifestField>
            (__return_storage_ptr__,&local_res10);
  return __return_storage_ptr__;
}

// GetDataList @ 1432d5fc0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockManifest::GetDataList
          (FMockManifest *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=(param_1,&this->DataList);
  return;
}

// GetDataList @ 1432d5fe0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockManifest::GetDataList
          (FMockManifest *this,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1)

{
  int iVar1;
  FGuid *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<FGuid_const_,int> local_18;
  
  pFVar2 = (FGuid *)(this->DataList).AllocatorInstance.Data;
  iVar1 = (this->DataList).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = pFVar2;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Append(param_1,&local_18);
  return;
}

// GetDataSize @ 1432d60a0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall BuildPatchServices::FMockManifest::GetDataSize(FMockManifest *this,FGuid *param_1)

{
  return this->DataSize;
}

// GetDataSize @ 1432d60b0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall
BuildPatchServices::FMockManifest::GetDataSize
          (FMockManifest *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  return this->DataSize;
}

// GetDataSize @ 1432d60c0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall
BuildPatchServices::FMockManifest::GetDataSize
          (FMockManifest *this,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1)

{
  return this->DataSize;
}

// GetDeltaDownloadSize @ 1432d60d0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall
BuildPatchServices::FMockManifest::GetDeltaDownloadSize
          (FMockManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          TSharedRef<IBuildManifest,1> *param_2)

{
  return this->DeltaDownloadSize;
}

// GetDownloadSize @ 1432d6750

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall
BuildPatchServices::FMockManifest::GetDownloadSize
          (FMockManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  return this->TagDownloadSize;
}

// GetDownloadSize @ 1432d6760

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall BuildPatchServices::FMockManifest::GetDownloadSize(FMockManifest *this)

{
  return this->DownloadSize;
}

// GetFeatureLevel @ 1432d6950

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

EFeatureLevel __thiscall BuildPatchServices::FMockManifest::GetFeatureLevel(FMockManifest *this)

{
  return this->FeatureLevel;
}

// GetFileHash @ 1432d6960

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockManifest::GetFileHash(FMockManifest *this,FGuid *param_1,FSHAHash *param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulong64 uVar3;
  FSHAHash *pFVar4;
  
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar2 = TSet<TTuple<FGuid,FSHAHash>,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FSHAHash>,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>,FDefaultSetAllocator>
                      *)&this->FileIdToHashes,(uint)uVar3,param_1);
  if (iVar2 != -1) {
    pFVar4 = TMapBase<FGuid,FSHAHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>_>
             ::FindChecked((TMapBase<FGuid,FSHAHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>_>
                            *)&this->FileIdToHashes,param_1);
    uVar1 = *(undefined8 *)(pFVar4->Hash + 8);
    *(undefined8 *)param_2->Hash = *(undefined8 *)pFVar4->Hash;
    *(undefined8 *)(param_2->Hash + 8) = uVar1;
    *(undefined4 *)(param_2->Hash + 0x10) = *(undefined4 *)(pFVar4->Hash + 0x10);
    return true;
  }
  return false;
}

// GetFileHash @ 1432d69e0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockManifest::GetFileHash
          (FMockManifest *this,FString *param_1,FSHAHash *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  bool bVar17;
  undefined1 uVar18;
  uint uVar19;
  int iVar20;
  TTuple<FString,FSHAHash> *pTVar21;
  wchar_t *pwVar22;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar20 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar22 = L"";
    iVar20 = 0;
  }
  else {
    pwVar22 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar20,pwVar22);
  iVar20 = TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
                       *)&this->FileNameToHashes,uVar19,param_1);
  if (iVar20 == -1) {
    return false;
  }
  pTVar21 = TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
                    *)&this->FileNameToHashes,param_1);
  if ((pTVar21 == (TTuple<FString,FSHAHash> *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x27b,L""), bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar18 = (*pcVar2)();
    return (bool)uVar18;
  }
  uVar18 = pTVar21->field_0x11;
  uVar3 = pTVar21->field_0x12;
  uVar4 = pTVar21->field_0x13;
  uVar5 = pTVar21->field_0x14;
  uVar6 = pTVar21->field_0x15;
  uVar7 = pTVar21->field_0x16;
  uVar8 = pTVar21->field_0x17;
  uVar9 = pTVar21->field_0x18;
  uVar10 = pTVar21->field_0x19;
  uVar11 = pTVar21->field_0x1a;
  uVar12 = pTVar21->field_0x1b;
  uVar13 = pTVar21->field_0x1c;
  uVar14 = pTVar21->field_0x1d;
  uVar15 = pTVar21->field_0x1e;
  uVar16 = pTVar21->field_0x1f;
  param_2->Hash[0] = pTVar21->field_0x10;
  param_2->Hash[1] = uVar18;
  param_2->Hash[2] = uVar3;
  param_2->Hash[3] = uVar4;
  param_2->Hash[4] = uVar5;
  param_2->Hash[5] = uVar6;
  param_2->Hash[6] = uVar7;
  param_2->Hash[7] = uVar8;
  param_2->Hash[8] = uVar9;
  param_2->Hash[9] = uVar10;
  param_2->Hash[10] = uVar11;
  param_2->Hash[0xb] = uVar12;
  param_2->Hash[0xc] = uVar13;
  param_2->Hash[0xd] = uVar14;
  param_2->Hash[0xe] = uVar15;
  param_2->Hash[0xf] = uVar16;
  uVar18 = pTVar21->field_0x21;
  uVar3 = pTVar21->field_0x22;
  uVar4 = pTVar21->field_0x23;
  param_2->Hash[0x10] = pTVar21->field_0x20;
  param_2->Hash[0x11] = uVar18;
  param_2->Hash[0x12] = uVar3;
  param_2->Hash[0x13] = uVar4;
  return true;
}

// GetFileList @ 1432d6ab0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockManifest::GetFileList
          (FMockManifest *this,TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  iVar1 = (this->BuildFileList).ArrayNum;
  pFVar7 = (this->BuildFileList).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->BuildFileList).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar7 == pFVar6) break;
    local_38 = *(undefined8 *)pFVar7;
    iStack_30 = *(int *)(pFVar7 + 8) + -1;
    if (*(int *)(pFVar7 + 8) == 0) {
      iStack_30 = 0;
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)param_1->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_1->ArrayNum;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar5;
    }
    param_1->ArrayNum = iVar5 + 1;
    pFVar7 = pFVar7 + 0x10;
    pFVar2 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar2 = local_38;
    *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_2c,iStack_30);
  }
  return;
}

// GetFileList @ 1432d6c00

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockManifest::GetFileList
          (FMockManifest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_1,&this->BuildFileList);
  return;
}

// GetFileList @ 1432d6c20

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockManifest::GetFileList
          (FMockManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->BuildFileList).ArrayNum;
  pFVar2 = (this->BuildFileList).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->BuildFileList).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (param_1,(FString *)&stack0x00000018,(bool *)pFVar2);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// GetFileManifest @ 1432d6ca0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FFileManifest * __thiscall
BuildPatchServices::FMockManifest::GetFileManifest(FMockManifest *this,FString *param_1)

{
  FFileManifest *pFVar1;
  
  pFVar1 = TMapBase<FString,BuildPatchServices::FFileManifest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>_>
           ::Find((TMapBase<FString,BuildPatchServices::FFileManifest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileManifest,0>_>
                   *)&this->FileManifests,param_1);
  return pFVar1;
}

// GetFilePartHash @ 1432d6cf0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockManifest::GetFilePartHash
          (FMockManifest *this,FGuid *param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 uVar2;
  ulong64 *puVar3;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,unsigned___int64>,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,unsigned___int64>,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>,FDefaultSetAllocator>
                      *)&this->FilePartHashes,(uint)uVar2,param_1);
  if (iVar1 != -1) {
    puVar3 = TMapBase<FGuid,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>_>
             ::FindChecked((TMapBase<FGuid,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>_>
                            *)&this->FilePartHashes,param_1);
    *param_2 = *puVar3;
    return true;
  }
  return false;
}

// GetFileSize @ 1432d6d70

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall
BuildPatchServices::FMockManifest::GetFileSize
          (FMockManifest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  lVar5 = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar3 == pFVar4) break;
    iStack_30 = *(int *)(pFVar3 + 8) + -1;
    if (*(int *)(pFVar3 + 8) == 0) {
      iStack_30 = 0;
    }
    local_48 = (undefined4)*(undefined8 *)pFVar3;
    uStack_44 = (undefined4)((ulonglong)*(undefined8 *)pFVar3 >> 0x20);
    local_38 = local_48;
    uStack_34 = uStack_44;
    lVar2 = (**(code **)(this->_padding_ + 0xb0))(this,&local_38);
    lVar5 = lVar5 + lVar2;
    pFVar3 = pFVar3 + 0x10;
  }
  return lVar5;
}

// GetFileSize @ 1432d6e20

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall
BuildPatchServices::FMockManifest::GetFileSize
          (FMockManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  code *pcVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  long64 lVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  pcVar1 = *(code **)(this->_padding_ + 0xa8);
  pTVar2 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Array(param_1,&local_18);
  lVar3 = (*pcVar1)(this,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return lVar3;
}

// GetFileSize @ 1432d6e90

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __thiscall
BuildPatchServices::FMockManifest::GetFileSize(FMockManifest *this,TStringView<wchar_t> *param_1)

{
  FString *pFVar1;
  TTuple<FString,__int64> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FString local_28;
  FString local_18;
  
  pFVar3 = (FScriptContainerElement *)0x0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  pFVar1 = ::FString::ConstructFromPtrSize
                     (&local_18,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  pFVar4 = pFVar3;
  if (&local_28 != pFVar1) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = (pFVar1->Data).ArrayNum;
    local_28.Data.ArrayMax = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = pFVar4;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pTVar2 = TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
                   *)&this->FileNameToFileSize,&local_28);
  if (pTVar2 != (TTuple<FString,__int64> *)0x0) {
    pFVar3 = *(FScriptContainerElement **)&pTVar2->field_0x10;
  }
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return (long64)pFVar3;
}

// GetFileTagList @ 1432d6f40

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockManifest::GetFileTagList
          (FMockManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            (param_1,&this->FileTagList);
  return;
}

// GetLaunchCommand @ 1432d70a0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall BuildPatchServices::FMockManifest::GetLaunchCommand(FMockManifest *this)

{
  return &this->LaunchCommand;
}

// GetLaunchExe @ 1432d70b0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall BuildPatchServices::FMockManifest::GetLaunchExe(FMockManifest *this)

{
  return &this->LaunchExe;
}

// GetNumFiles @ 1432d8580

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

uint __thiscall BuildPatchServices::FMockManifest::GetNumFiles(FMockManifest *this)

{
  return this->NumFiles;
}

// GetNumberOfChunkReferences @ 1432d8600

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

uint __thiscall
BuildPatchServices::FMockManifest::GetNumberOfChunkReferences(FMockManifest *this,FGuid *param_1)

{
  return this->NumberOfChunkReferences;
}

// GetOutdatedFiles @ 1432d8890

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockManifest::GetOutdatedFiles
          (FMockManifest *this,TSharedPtr<FBuildPatchAppManifest,1> *param_1,FString *param_2,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001432d8896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x138))(this,param_1->Object);
  return;
}

// GetOutdatedFiles @ 1432d88b0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockManifest::GetOutdatedFiles
          (FMockManifest *this,TSharedRef<IBuildManifest,1> *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  IBuildManifest *local_28;
  TReferenceControllerBase<1> *local_20;
  FString local_18;
  
  pcVar1 = *(code **)(this->_padding_ + 0x140);
  ::FString::FString(&local_18,L"");
  local_28 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_20 = pTVar2;
  (*pcVar1)(this,&local_28,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetOutdatedFiles @ 1432d8960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockManifest::GetOutdatedFiles
          (FMockManifest *this,FBuildPatchAppManifest *param_1,FString *param_2,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3)

{
  int iVar1;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [24];
  undefined8 uStack_60;
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  void *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78._16_8_ = 0;
  uStack_60 = 0;
  local_40 = 0;
  local_30 = 0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  (**(code **)(this->_padding_ + 0x130))();
  local_30 = local_30 & 0xffffffff00000000;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// GetOutdatedFiles @ 1432d8a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockManifest::GetOutdatedFiles
          (FMockManifest *this,FBuildPatchAppManifest *param_1,FString *param_2,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_4)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar1;
  undefined1 auStack_88 [32];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar1 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Union
                     (param_4,&local_68,&this->OutdatedFiles);
  if (param_4 != pTVar1) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>(param_4,pTVar1);
  }
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return;
}

// GetPrereqArgs @ 1432d8b60

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall BuildPatchServices::FMockManifest::GetPrereqArgs(FMockManifest *this)

{
  return &this->PrereqArgs;
}

// GetPrereqName @ 1432d8b70

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall BuildPatchServices::FMockManifest::GetPrereqName(FMockManifest *this)

{
  return &this->PrereqName;
}

// GetPrereqPath @ 1432d8b80

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall BuildPatchServices::FMockManifest::GetPrereqPath(FMockManifest *this)

{
  return &this->PrereqPath;
}

// GetRemovableFiles @ 1432d9260

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockManifest::GetRemovableFiles
          (FMockManifest *this,TSharedRef<IBuildManifest,1> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_2,&this->RemovableFiles);
  return;
}

// GetRemovableFiles @ 1432d9280

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockManifest::GetRemovableFiles
          (FMockManifest *this,wchar_t *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2
          )

{
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_2,&this->RemovableFiles);
  return;
}

// GetTaggedFileList @ 1432d9870

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockManifest::GetTaggedFileList
          (FMockManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            (param_2,&this->TaggedFileList);
  return;
}

// GetTaggedFileList @ 1432d9890

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockManifest::GetTaggedFileList
          (FMockManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> *param_2)

{
  Algo::
  Copy<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_>_>
            (&this->TaggedFileList,param_2);
  return;
}

// GetTaggedFileList @ 1432d98b0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockManifest::GetTaggedFileList
          (FMockManifest *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  pTVar2 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Array
                     (&this->TaggedFileList,&local_18);
  if (param_2 != pTVar2) {
    DestructItems<FString,int>((FString *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
    pFVar1 = (param_2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_2->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_2->ArrayNum = pTVar2->ArrayNum;
    param_2->ArrayMax = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetVersionString @ 1432d9c90

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall BuildPatchServices::FMockManifest::GetVersionString(FMockManifest *this)

{
  return &this->VersionString;
}

// HasFileAttributes @ 1432daa70

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall BuildPatchServices::FMockManifest::HasFileAttributes(FMockManifest *this)

{
  return true;
}

// IsFileDataManifest @ 1432dbd10

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall BuildPatchServices::FMockManifest::IsFileDataManifest(FMockManifest *this)

{
  return false;
}

// IsFileOutdated @ 1432dbd20

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockManifest::IsFileOutdated
          (FMockManifest *this,TSharedRef<FBuildPatchAppManifest,1> *param_1,FString *param_2)

{
  return true;
}

// LoadFromFile @ 1432dcf60

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockManifest::LoadFromFile(FMockManifest *this,FString *param_1)

{
  return true;
}

// NeedsResaving @ 1432ddd80

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall BuildPatchServices::FMockManifest::NeedsResaving(FMockManifest *this)

{
  return false;
}

// RemoveCustomField @ 1432e9890

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockManifest::RemoveCustomField(FMockManifest *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  if (*(int *)&(this->CustomFields).field_0x8 != *(int *)&(this->CustomFields).field_0x34) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar4 = L"";
      iVar3 = 0;
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
    TSet<TTuple<FString,BuildPatchServices::FMockManifestField>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>
              ((TSet<TTuple<FString,BuildPatchServices::FMockManifestField>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>,FDefaultSetAllocator>
                *)&this->CustomFields,uVar2,param_1);
  }
  return;
}

// SaveToFile @ 1432ec550

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockManifest::SaveToFile
          (FMockManifest *this,FString *param_1,EFeatureLevel param_2)

{
  return true;
}

// SerializeToJSON @ 1432ed0b0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockManifest::SerializeToJSON(FMockManifest *this,FString *param_1)

{
  return;
}

// SetCustomField @ 1432ed0c0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedPtr<IManifestField,1> * __thiscall
BuildPatchServices::FMockManifest::SetCustomField
          (FMockManifest *this,TSharedPtr<IManifestField,1> *__return_storage_ptr__,FString *param_1
          ,FString *param_2)

{
  int iVar1;
  uint uVar2;
  FMockManifestField *pFVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  pFVar3 = TMapBase<FString,BuildPatchServices::FMockManifestField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>_>
           ::FindOrAddImpl<FString_const_&>
                     ((TMapBase<FString,BuildPatchServices::FMockManifestField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>_>
                       *)&this->CustomFields,uVar2,param_1);
  ::FString::operator=(&pFVar3->String,param_2);
  (**(code **)(this->_padding_ + 0xf8))(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// SetCustomField @ 1432ed160

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedPtr<IManifestField,1> * __thiscall
BuildPatchServices::FMockManifest::SetCustomField
          (FMockManifest *this,TSharedPtr<IManifestField,1> *__return_storage_ptr__,FString *param_1
          ,double *param_2)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  FMockManifestField *pFVar4;
  int iVar5;
  wchar_t *pwVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  dVar1 = *param_2;
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  pFVar4 = TMapBase<FString,BuildPatchServices::FMockManifestField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>_>
           ::FindOrAddImpl<FString_const_&>
                     ((TMapBase<FString,BuildPatchServices::FMockManifestField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>_>
                       *)&this->CustomFields,uVar3,param_1);
  pFVar4->Double = dVar1;
  (**(code **)(this->_padding_ + 0xf8))(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// SetCustomField @ 1432ed1f0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedPtr<IManifestField,1> * __thiscall
BuildPatchServices::FMockManifest::SetCustomField
          (FMockManifest *this,TSharedPtr<IManifestField,1> *__return_storage_ptr__,FString *param_1
          ,long64 *param_2)

{
  int iVar1;
  long64 lVar2;
  uint uVar3;
  FMockManifestField *pFVar4;
  int iVar5;
  wchar_t *pwVar6;
  
  iVar1 = (param_1->Data).ArrayNum;
  lVar2 = *param_2;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  pFVar4 = TMapBase<FString,BuildPatchServices::FMockManifestField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>_>
           ::FindOrAddImpl<FString_const_&>
                     ((TMapBase<FString,BuildPatchServices::FMockManifestField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>_>
                       *)&this->CustomFields,uVar3,param_1);
  pFVar4->Integer = lVar2;
  (**(code **)(this->_padding_ + 0xf8))(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// SyncInternalManifestStructures @ 1432ee890

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockManifest::SyncInternalManifestStructures(FMockManifest *this)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  FFileManifest *pFVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar14 = 0;
  puVar2 = &(this->FileManifests).field_0x10;
  iVar9 = *(int *)&(this->FileManifests).field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar9 != 0) {
    puVar17 = *(uint **)&(this->FileManifests).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar12 = *puVar17;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1432ee93d;
      uVar12 = puVar17[lVar10 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar4 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar8 = local_res10 + -1 + iVar16;
    if (iVar9 < iVar8) {
      iVar8 = iVar9;
    }
  }
LAB_1432ee93d:
  uVar12 = *(uint *)&(this->FileManifests).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->FileManifests).field_0x8 -
                       *(int *)&(this->FileManifests).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar12 < 0) || (iVar9 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->FileManifests).field_0x28;
  if (uVar12 != uVar7) {
    puVar15 = *(undefined1 **)&(this->FileManifests).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar14;
      uVar11 = uVar11 + 0x20;
      iVar14 = iVar14 + 1;
      uVar12 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1432eea40;
      uVar12 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    uVar12 = local_res18 + -1 + uVar11;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_1432eea40:
  while( true ) {
    if (*(int *)&(this->FileManifests).field_0x8 - *(int *)&(this->FileManifests).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,BuildPatchServices::FFileManifest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    plVar3 = &this->_padding_;
    pFVar13 = (FFileManifest *)
              (*(longlong *)&this->FileManifests + 0x10 + (longlong)TStack_60.CurrentBitIndex * 0x78
              );
    if ((((FFileManifest *)*plVar3 <= pFVar13) &&
        (pFVar13 < (FFileManifest *)*plVar3 + *(int *)((longlong)&this->_padding_ + 4))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,(ForAnyElementType *)plVar3,piVar1);
    }
    *(int *)&this->_padding_ = iVar9 + 1;
    FFileManifest::FFileManifest((FFileManifest *)(*plVar3 + (longlong)iVar9 * 0x60),pFVar13);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  FBuildPatchAppManifest::InitLookups((FBuildPatchAppManifest *)this);
  return;
}


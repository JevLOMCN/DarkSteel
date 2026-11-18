// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// FInstallerConfiguration @ 1432235e0

FInstallerConfiguration * __thiscall
BuildPatchServices::FInstallerConfiguration::FInstallerConfiguration
          (FInstallerConfiguration *this,FInstallerConfiguration *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->CurrentManifest).Object = (param_1->CurrentManifest).Object;
  (this->CurrentManifest).SharedReferenceCount.ReferenceController =
       (param_1->CurrentManifest).SharedReferenceCount.ReferenceController;
  (param_1->CurrentManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->CurrentManifest).Object = (IBuildManifest *)0x0;
  (this->InstallManifest).Object = (param_1->InstallManifest).Object;
  pTVar1 = (param_1->InstallManifest).SharedReferenceCount.ReferenceController;
  (this->InstallManifest).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->InstallDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstallDirectory).Data.AllocatorInstance.Data =
       (param_1->InstallDirectory).Data.AllocatorInstance.Data;
  (param_1->InstallDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstallDirectory).Data.ArrayNum = (param_1->InstallDirectory).Data.ArrayNum;
  (this->InstallDirectory).Data.ArrayMax = (param_1->InstallDirectory).Data.ArrayMax;
  (param_1->InstallDirectory).Data.ArrayNum = 0;
  (param_1->InstallDirectory).Data.ArrayMax = 0;
  (this->StagingDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StagingDirectory).Data.AllocatorInstance.Data =
       (param_1->StagingDirectory).Data.AllocatorInstance.Data;
  (param_1->StagingDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StagingDirectory).Data.ArrayNum = (param_1->StagingDirectory).Data.ArrayNum;
  (this->StagingDirectory).Data.ArrayMax = (param_1->StagingDirectory).Data.ArrayMax;
  (param_1->StagingDirectory).Data.ArrayNum = 0;
  (param_1->StagingDirectory).Data.ArrayMax = 0;
  (this->BackupDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BackupDirectory).Data.AllocatorInstance.Data =
       (param_1->BackupDirectory).Data.AllocatorInstance.Data;
  (param_1->BackupDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BackupDirectory).Data.ArrayNum = (param_1->BackupDirectory).Data.ArrayNum;
  (this->BackupDirectory).Data.ArrayMax = (param_1->BackupDirectory).Data.ArrayMax;
  (param_1->BackupDirectory).Data.ArrayNum = 0;
  (param_1->BackupDirectory).Data.ArrayMax = 0;
  (this->ChunkDatabaseFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkDatabaseFiles).AllocatorInstance.Data =
       (param_1->ChunkDatabaseFiles).AllocatorInstance.Data;
  (param_1->ChunkDatabaseFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkDatabaseFiles).ArrayNum = (param_1->ChunkDatabaseFiles).ArrayNum;
  (this->ChunkDatabaseFiles).ArrayMax = (param_1->ChunkDatabaseFiles).ArrayMax;
  (param_1->ChunkDatabaseFiles).ArrayNum = 0;
  (param_1->ChunkDatabaseFiles).ArrayMax = 0;
  (this->CloudDirectories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CloudDirectories).AllocatorInstance.Data =
       (param_1->CloudDirectories).AllocatorInstance.Data;
  (param_1->CloudDirectories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CloudDirectories).ArrayNum = (param_1->CloudDirectories).ArrayNum;
  (this->CloudDirectories).ArrayMax = (param_1->CloudDirectories).ArrayMax;
  (param_1->CloudDirectories).ArrayNum = 0;
  (param_1->CloudDirectories).ArrayMax = 0;
  *(undefined8 *)&(this->InstallTags).Elements = 0;
  *(undefined8 *)&(this->InstallTags).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InstallTags).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x30 = 0xffffffff;
  (this->InstallTags).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InstallTags).HashSize = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
  Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
            (&this->InstallTags,&param_1->InstallTags);
  this->InstallMode = param_1->InstallMode;
  this->VerifyMode = param_1->VerifyMode;
  this->DeltaPolicy = param_1->DeltaPolicy;
  this->bIsRepair = param_1->bIsRepair;
  this->bRunRequiredPrereqs = param_1->bRunRequiredPrereqs;
  this->bAllowConcurrentExecution = param_1->bAllowConcurrentExecution;
  return this;
}

// FInstallerConfiguration @ 143223760

FInstallerConfiguration * __thiscall
BuildPatchServices::FInstallerConfiguration::FInstallerConfiguration
          (FInstallerConfiguration *this,FInstallerConfiguration *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  (this->CurrentManifest).Object = (param_1->CurrentManifest).Object;
  pTVar4 = (param_1->CurrentManifest).SharedReferenceCount.ReferenceController;
  (this->CurrentManifest).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->InstallManifest).Object = (param_1->InstallManifest).Object;
  pTVar4 = (param_1->InstallManifest).SharedReferenceCount.ReferenceController;
  (this->InstallManifest).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&this->InstallDirectory,&param_1->InstallDirectory);
  ::FString::FString(&this->StagingDirectory,&param_1->StagingDirectory);
  ::FString::FString(&this->BackupDirectory,&param_1->BackupDirectory);
  pTVar1 = &this->ChunkDatabaseFiles;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ChunkDatabaseFiles).ArrayMax;
  iVar3 = (param_1->ChunkDatabaseFiles).ArrayNum;
  pFVar5 = (param_1->ChunkDatabaseFiles).AllocatorInstance.Data;
  (this->ChunkDatabaseFiles).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar5,iVar3);
  }
  pTVar1 = &this->CloudDirectories;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->CloudDirectories).ArrayMax;
  iVar3 = (param_1->CloudDirectories).ArrayNum;
  pFVar5 = (param_1->CloudDirectories).AllocatorInstance.Data;
  (this->CloudDirectories).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar5,iVar3);
  }
  *(undefined8 *)&(this->InstallTags).Elements = 0;
  *(undefined8 *)&(this->InstallTags).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InstallTags).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x34 = 0;
  (this->InstallTags).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InstallTags).HashSize = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            (&this->InstallTags,&param_1->InstallTags);
  this->InstallMode = param_1->InstallMode;
  this->VerifyMode = param_1->VerifyMode;
  this->DeltaPolicy = param_1->DeltaPolicy;
  this->bIsRepair = param_1->bIsRepair;
  this->bRunRequiredPrereqs = param_1->bRunRequiredPrereqs;
  this->bAllowConcurrentExecution = param_1->bAllowConcurrentExecution;
  return this;
}

// FInstallerConfiguration @ 143223920

FInstallerConfiguration * __thiscall
BuildPatchServices::FInstallerConfiguration::FInstallerConfiguration
          (FInstallerConfiguration *this,TSharedRef<IBuildManifest,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->CurrentManifest).Object = (IBuildManifest *)0x0;
  (this->CurrentManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->InstallManifest).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->InstallManifest).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->InstallDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstallDirectory).Data.ArrayNum = 0;
  (this->InstallDirectory).Data.ArrayMax = 0;
  (this->StagingDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StagingDirectory).Data.ArrayNum = 0;
  (this->StagingDirectory).Data.ArrayMax = 0;
  (this->BackupDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BackupDirectory).Data.ArrayNum = 0;
  (this->BackupDirectory).Data.ArrayMax = 0;
  (this->ChunkDatabaseFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkDatabaseFiles).ArrayNum = 0;
  (this->ChunkDatabaseFiles).ArrayMax = 0;
  (this->CloudDirectories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CloudDirectories).ArrayNum = 0;
  (this->CloudDirectories).ArrayMax = 0;
  *(undefined8 *)&(this->InstallTags).Elements.field_0x10 = 0;
  *(undefined8 *)&(this->InstallTags).Elements.field_0x18 = 0;
  (this->InstallTags).Hash.InlineData[0] = '\0';
  (this->InstallTags).Hash.InlineData[1] = '\0';
  (this->InstallTags).Hash.InlineData[2] = '\0';
  (this->InstallTags).Hash.InlineData[3] = '\0';
  (this->InstallTags).Hash._padding_ = 0;
  *(undefined8 *)&(this->InstallTags).HashSize = 0;
  *(undefined8 *)&(this->InstallTags).Elements = 0;
  *(undefined8 *)&(this->InstallTags).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InstallTags).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x34 = 0;
  (this->InstallTags).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->InstallMode = NonDestructiveInstall;
  this->VerifyMode = ShaVerifyAllFiles;
  this->DeltaPolicy = Skip;
  this->bIsRepair = false;
  this->bRunRequiredPrereqs = true;
  this->bAllowConcurrentExecution = false;
  return this;
}


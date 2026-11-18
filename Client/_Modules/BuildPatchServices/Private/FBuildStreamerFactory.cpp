// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// Create @ 143246ff0

IDirectoryBuildStreamer * __cdecl
BuildPatchServices::FBuildStreamerFactory::Create
          (FDirectoryBuildStreamerConfig *param_1,FDirectoryBuildStreamerDependencies *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  IDirectoryBuildStreamer *pIVar4;
  FDirectoryBuildStreamer *pFVar5;
  FDirectoryBuildStreamerDependencies local_48;
  FDirectoryBuildStreamerConfig local_38;
  
  if (param_2->StatsCollector == (FStatsCollector *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Dependencies.StatsCollector != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\DirectoryBuildStreamer.cpp"
                       ,499,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IDirectoryBuildStreamer *)(*pcVar2)();
      return pIVar4;
    }
  }
  if (param_2->FileSystem == (IFileSystem *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Dependencies.FileSystem != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\DirectoryBuildStreamer.cpp"
                       ,500,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IDirectoryBuildStreamer *)(*pcVar2)();
      return pIVar4;
    }
  }
  pFVar5 = ::operator_new(0x238);
  if (pFVar5 == (FDirectoryBuildStreamer *)0x0) {
    pFVar5 = (FDirectoryBuildStreamer *)0x0;
  }
  else {
    ::FString::FString(&local_38.BuildRoot,&param_1->BuildRoot);
    ::FString::FString(&local_38.InputListFile,&param_1->InputListFile);
    ::FString::FString(&local_38.IgnoreListFile,&param_1->IgnoreListFile);
    local_48.StatsCollector = param_2->StatsCollector;
    local_48.FileSystem = param_2->FileSystem;
    pFVar5 = FDirectoryBuildStreamer::FDirectoryBuildStreamer(pFVar5,&local_38,&local_48);
  }
  pFVar1 = (param_1->IgnoreListFile).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->InputListFile).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->BuildRoot).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return (IDirectoryBuildStreamer *)pFVar5;
}

// Create @ 1432c80c0

/* WARNING: Removing unreachable block (ram,0x0001432c8247) */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

IManifestBuildStreamer * __cdecl
BuildPatchServices::FBuildStreamerFactory::Create
          (FManifestBuildStreamerConfig *param_1,FManifestBuildStreamerDependencies *param_2)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TFactory<BuildPatchServices::IChunkReferenceTracker,TArray<FGuid,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  TFactory<BuildPatchServices::ICloudChunkSource,BuildPatchServices::IChunkReferenceTracker_*>
  *pTVar6;
  FStatsCollector *pFVar7;
  FBuildPatchAppManifest *pFVar8;
  bool bVar9;
  IManifestBuildStreamer *pIVar10;
  FManifestBuildStreamer *this;
  FBlockStructure local_18;
  
  if ((param_2->ChunkReferenceTrackerFactory ==
       (TFactory<BuildPatchServices::IChunkReferenceTracker,TArray<FGuid,TSizedDefaultAllocator<32>_>_>
        *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dependencies.ChunkReferenceTrackerFactory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ManifestBuildStreamer.cpp"
                         ,0xcc,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pIVar10 = (IManifestBuildStreamer *)(*pcVar4)();
    return pIVar10;
  }
  if ((param_2->CloudChunkSourceFactory ==
       (TFactory<BuildPatchServices::ICloudChunkSource,BuildPatchServices::IChunkReferenceTracker_*>
        *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dependencies.CloudChunkSourceFactory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ManifestBuildStreamer.cpp"
                         ,0xcd,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pIVar10 = (IManifestBuildStreamer *)(*pcVar4)();
    return pIVar10;
  }
  if ((param_2->StatsCollector == (FStatsCollector *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dependencies.StatsCollector != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ManifestBuildStreamer.cpp"
                         ,0xce,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pIVar10 = (IManifestBuildStreamer *)(*pcVar4)();
    return pIVar10;
  }
  if ((param_2->Manifest == (FBuildPatchAppManifest *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dependencies.Manifest != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ManifestBuildStreamer.cpp"
                         ,0xcf,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pIVar10 = (IManifestBuildStreamer *)(*pcVar4)();
    return pIVar10;
  }
  this = ::operator_new(0x70);
  if (this == (FManifestBuildStreamer *)0x0) {
    this = (FManifestBuildStreamer *)0x0;
  }
  else {
    pFVar3 = (param_1->CloudDirectory).Data.AllocatorInstance.Data;
    (param_1->CloudDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar1 = (param_1->CloudDirectory).Data.ArrayNum;
    iVar2 = (param_1->CloudDirectory).Data.ArrayMax;
    (param_1->CloudDirectory).Data.ArrayNum = 0;
    (param_1->CloudDirectory).Data.ArrayMax = 0;
    FBlockStructure::FBlockStructure(&local_18,&param_1->DesiredBytes);
    this->_padding_ = (longlong)&___7FManifestBuildStreamer_BuildPatchServices__6B_;
    (this->Config).CloudDirectory.Data.AllocatorInstance.Data = pFVar3;
    (this->Config).CloudDirectory.Data.ArrayNum = iVar1;
    (this->Config).CloudDirectory.Data.ArrayMax = iVar2;
    FBlockStructure::FBlockStructure(&(this->Config).DesiredBytes,&local_18);
    pTVar5 = param_2->ChunkReferenceTrackerFactory;
    pTVar6 = param_2->CloudChunkSourceFactory;
    this->TopStackOffset = 0;
    pFVar7 = param_2->StatsCollector;
    pFVar8 = param_2->Manifest;
    (this->Dependencies).ChunkReferenceTrackerFactory = pTVar5;
    (this->Dependencies).CloudChunkSourceFactory = pTVar6;
    (this->Dependencies).StatsCollector = pFVar7;
    (this->Dependencies).Manifest = pFVar8;
    (this->ChunkReferenceTracker).Ptr = (IChunkReferenceTracker *)0x0;
    (this->CloudChunkSource).Ptr = (ICloudChunkSource *)0x0;
    (this->DataStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DataStack).ArrayNum = 0;
    (this->DataStack).ArrayMax = 0;
    FBlockStructure::~FBlockStructure(&local_18);
  }
  FManifestBuildStreamer::Initialise(this);
  FBlockStructure::~FBlockStructure(&param_1->DesiredBytes);
  pFVar3 = (param_1->CloudDirectory).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return (IManifestBuildStreamer *)this;
}


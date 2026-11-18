// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// FFileConstructionState @ 1431bc9b0

FFileConstructionState * __thiscall
FFileConstructionState::FFileConstructionState
          (FFileConstructionState *this,FFileManifest *param_1,FString *param_2,FString *param_3)

{
  (this->ErrorContextGuid).A = 0;
  (this->ErrorContextGuid).B = 0;
  (this->ErrorContextGuid).C = 0;
  (this->ErrorContextGuid).D = 0;
  this->ConstructionError = None;
  this->CreateFilePlatformLastError = 0;
  FSHA1::FSHA1(&this->HashState);
  this->bSkippedConstruction = false;
  this->bSuccess = true;
  this->bIsResumedFile = false;
  this->ProgressLock = (atomic<unsigned_char>)0x0;
  this->Progress = 0;
  this->LastSeenProgress = 0;
  this->StartPosition = 0;
  this->OutstandingBatches = 0;
  this->NextChunkPartToRead = 0;
  (this->NewFile).Ptr = (FArchive *)0x0;
  this->BaseReferenceIndex = 0;
  this->ConstructionIndex = -1;
  this->FileManifest = param_1;
  this->BuildFilename = param_2;
  ::FString::FString(&this->NewFilename,param_3);
  if (param_1 == (FFileManifest *)0x0) {
    this->bSuccess = false;
    this->ConstructionError = MissingFileInfo;
  }
  return this;
}


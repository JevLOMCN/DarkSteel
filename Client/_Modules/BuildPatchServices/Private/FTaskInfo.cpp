// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// FTaskInfo @ 143282f60

FTaskInfo * __thiscall BuildPatchServices::FCloudChunkSource::FTaskInfo::FTaskInfo(FTaskInfo *this)

{
  this->bQueuedForDownload = false;
  this->CloudDirUsed = 0;
  (this->UrlUsed).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UrlUsed).Data.ArrayNum = 0;
  (this->UrlUsed).Data.ArrayMax = 0;
  this->RetryNum = 0;
  this->ExpectedSize = 0;
  this->SecondsAtFail = 0.0;
  return this;
}


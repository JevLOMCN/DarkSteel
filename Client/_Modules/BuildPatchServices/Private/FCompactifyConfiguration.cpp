// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// FCompactifyConfiguration @ 143221480

FCompactifyConfiguration * __thiscall
BuildPatchServices::FCompactifyConfiguration::FCompactifyConfiguration
          (FCompactifyConfiguration *this)

{
  this->DataAgeThreshold = 7.0;
  (this->CloudDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CloudDirectory).Data.ArrayNum = 0;
  (this->CloudDirectory).Data.ArrayMax = 0;
  (this->DeletedChunkLogFile).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeletedChunkLogFile).Data.ArrayNum = 0;
  (this->DeletedChunkLogFile).Data.ArrayMax = 0;
  this->bRunPreview = true;
  return this;
}


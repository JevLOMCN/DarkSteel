// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// FChunkDeltaOptimiserConfiguration @ 1432209b0

FChunkDeltaOptimiserConfiguration * __thiscall
BuildPatchServices::FChunkDeltaOptimiserConfiguration::FChunkDeltaOptimiserConfiguration
          (FChunkDeltaOptimiserConfiguration *this)

{
  this->ScanWindowSize = 0x1fff;
  (this->ManifestAUri).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManifestAUri).Data.ArrayNum = 0;
  (this->ManifestAUri).Data.ArrayMax = 0;
  (this->ManifestBUri).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManifestBUri).Data.ArrayNum = 0;
  (this->ManifestBUri).Data.ArrayMax = 0;
  (this->CloudDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CloudDirectory).Data.ArrayNum = 0;
  (this->CloudDirectory).Data.ArrayMax = 0;
  this->DiffAbortThreshold = 0x7fffffffffffffff;
  this->OutputChunkSize = 0x100000;
  return this;
}


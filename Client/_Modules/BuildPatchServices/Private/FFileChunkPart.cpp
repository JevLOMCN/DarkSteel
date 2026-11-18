// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// FFileChunkPart @ 143223250

FFileChunkPart * __thiscall BuildPatchServices::FFileChunkPart::FFileChunkPart(FFileChunkPart *this)

{
  (this->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filename).Data.ArrayNum = 0;
  (this->Filename).Data.ArrayMax = 0;
  this->FileOffset = 0;
  (this->ChunkPart).Guid.A = 0;
  (this->ChunkPart).Guid.B = 0;
  (this->ChunkPart).Guid.C = 0;
  (this->ChunkPart).Guid.D = 0;
  (this->ChunkPart).Offset = 0;
  (this->ChunkPart).Size = 0;
  return this;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// FChunkDatabaseHeader @ 1432204d0

FChunkDatabaseHeader * __thiscall
BuildPatchServices::FChunkDatabaseHeader::FChunkDatabaseHeader(FChunkDatabaseHeader *this)

{
  this->Version = 1;
  (this->Contents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Contents).ArrayNum = 0;
  (this->Contents).ArrayMax = 0;
  this->HeaderSize = 0x18;
  return this;
}


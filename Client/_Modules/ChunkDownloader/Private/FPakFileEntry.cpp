// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChunkDownloader
// Functions: 1

// FPakFileEntry @ 14f01ed30

FPakFileEntry * __thiscall FPakFileEntry::FPakFileEntry(FPakFileEntry *this,FPakFileEntry *param_1)

{
  ::FString::FString(&this->FileName,&param_1->FileName);
  this->FileSize = param_1->FileSize;
  ::FString::FString(&this->FileVersion,&param_1->FileVersion);
  this->ChunkId = param_1->ChunkId;
  ::FString::FString(&this->RelativeUrl,&param_1->RelativeUrl);
  return this;
}


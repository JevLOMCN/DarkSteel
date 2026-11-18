// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 2

// FChunkBuffer @ 142a51110

FChunkBuffer * __thiscall FChunkBuffer::FChunkBuffer(FChunkBuffer *this)

{
  uchar *puVar1;
  
  this->ChunkIndex = -1;
  this->Data = (uchar *)0x0;
  this->LockCount = 0;
  this->LastAccessTime = 0.0;
  puVar1 = FMemory::Malloc(0x10000,0);
  this->Data = puVar1;
  return this;
}

// ~FChunkBuffer @ 142a55c80

void __thiscall FChunkBuffer::~FChunkBuffer(FChunkBuffer *this)

{
  FMemory::Free(this->Data);
  this->Data = (uchar *)0x0;
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// FChunkHeader @ 1432209f0

FChunkHeader * __thiscall BuildPatchServices::FChunkHeader::FChunkHeader(FChunkHeader *this)

{
  this->Version = 3;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  *(undefined8 *)&(this->Guid).D = 0;
  this->RollingHash = 0;
  this->HeaderSize = 0x42;
  (this->Guid).A = 0;
  this->DataSizeUncompressed = 0x100000;
  this->StoredAs = None;
  this->HashType = RollingPoly64;
  (this->SHAHash).Hash[0] = '\0';
  (this->SHAHash).Hash[1] = '\0';
  (this->SHAHash).Hash[2] = '\0';
  (this->SHAHash).Hash[3] = '\0';
  (this->SHAHash).Hash[4] = '\0';
  (this->SHAHash).Hash[5] = '\0';
  (this->SHAHash).Hash[6] = '\0';
  (this->SHAHash).Hash[7] = '\0';
  (this->SHAHash).Hash[8] = '\0';
  (this->SHAHash).Hash[9] = '\0';
  (this->SHAHash).Hash[10] = '\0';
  (this->SHAHash).Hash[0xb] = '\0';
  (this->SHAHash).Hash[0xc] = '\0';
  (this->SHAHash).Hash[0xd] = '\0';
  (this->SHAHash).Hash[0xe] = '\0';
  (this->SHAHash).Hash[0xf] = '\0';
  (this->SHAHash).Hash[0x10] = '\0';
  (this->SHAHash).Hash[0x11] = '\0';
  (this->SHAHash).Hash[0x12] = '\0';
  (this->SHAHash).Hash[0x13] = '\0';
  return this;
}


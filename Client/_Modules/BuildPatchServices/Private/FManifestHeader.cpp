// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// FManifestHeader @ 1432241c0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FManifestHeader * __thiscall
BuildPatchServices::FManifestHeader::FManifestHeader(FManifestHeader *this)

{
  this->Version = Latest;
  this->HeaderSize = 0;
  this->DataSizeCompressed = 0;
  this->DataSizeUncompressed = 0;
  this->StoredAs = None;
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


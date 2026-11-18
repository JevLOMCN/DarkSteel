// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// FFileAttributes @ 143223070

FFileAttributes * __thiscall
BuildPatchServices::FFileAttributes::FFileAttributes(FFileAttributes *this)

{
  this->bReadOnly = false;
  this->bCompressed = false;
  *(undefined8 *)&(this->InstallTags).Elements = 0;
  *(undefined8 *)&(this->InstallTags).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InstallTags).Elements.field_0x20 = 0;
  this->bUnixExecutable = false;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x30 = 0xffffffff;
  (this->InstallTags).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InstallTags).HashSize = 0;
  return this;
}


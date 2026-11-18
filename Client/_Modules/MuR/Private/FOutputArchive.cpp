// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// FOutputArchive @ 14ab5ec80

FOutputArchive * __thiscall
UE::Mutable::Private::FOutputArchive::FOutputArchive(FOutputArchive *this,FOutputStream *param_1)

{
  *(undefined8 *)&this->History = 0;
  *(undefined8 *)&(this->History).field_0x8 = 0;
  *(undefined8 *)&(this->History).field_0x20 = 0;
  *(undefined4 *)&(this->History).field_0x28 = 0;
  *(undefined4 *)&(this->History).field_0x2c = 0x80;
  *(undefined4 *)&(this->History).field_0x34 = 0;
  *(undefined4 *)&(this->History).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->History).field_0x40 = 0;
  *(undefined4 *)&(this->History).field_0x48 = 0;
  this->Stream = param_1;
  return this;
}


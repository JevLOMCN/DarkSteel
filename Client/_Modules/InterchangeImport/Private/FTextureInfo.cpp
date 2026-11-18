// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 1

// FTextureInfo @ 14e708470

FTextureInfo * __thiscall UE::Interchange::Volume::FTextureInfo::FTextureInfo(FTextureInfo *this)

{
  (this->Mappings).Elements[0].SourceGridIndex = -1;
  (this->Mappings).Elements[0].SourceComponentIndex = -1;
  (this->Mappings).Elements[1].SourceGridIndex = -1;
  (this->Mappings).Elements[1].SourceComponentIndex = -1;
  (this->Mappings).Elements[2].SourceGridIndex = -1;
  (this->Mappings).Elements[2].SourceComponentIndex = -1;
  (this->Mappings).Elements[3].SourceGridIndex = -1;
  (this->Mappings).Elements[3].SourceComponentIndex = -1;
  this->Format = Unorm8;
  return this;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FStructuredArchiveFromArchive @ 1419cf7c0

FStructuredArchiveFromArchive * __thiscall
FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
          (FStructuredArchiveFromArchive *this,FArchive *param_1)

{
  *(FStructuredArchiveFromArchive **)(this->ImplStorage + 0x10) = this;
  *(undefined ***)this->ImplStorage = &___7FBinaryArchiveFormatter__6B_;
  *(uchar **)(this->ImplStorage + 0x18) = this->ImplStorage + 0x10;
  *(FArchive **)(this->ImplStorage + 8) = param_1;
  return this;
}

// ~FStructuredArchiveFromArchive @ 1419d3150

void __thiscall
FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(FStructuredArchiveFromArchive *this)

{
  *(undefined ***)this->ImplStorage = &___7FStructuredArchiveFormatter__6B_;
  return;
}

// GetSlot @ 141a039b0

FStructuredArchiveSlot __thiscall
FStructuredArchiveFromArchive::GetSlot(FStructuredArchiveFromArchive *this)

{
  FStructuredArchiveSlot in_RDX;
  
  *(undefined8 *)in_RDX = *(undefined8 *)(this->ImplStorage + 0x18);
  return in_RDX;
}


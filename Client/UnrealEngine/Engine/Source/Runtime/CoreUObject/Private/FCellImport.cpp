// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FCellImport @ 1420e8f90

FCellImport * __thiscall FCellImport::FCellImport(FCellImport *this,VCell *param_1)

{
  this->Cell = param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->PackageIndex).Index = 0;
  return this;
}

// FCellImport @ 1420e8fb0

FCellImport * __thiscall FCellImport::FCellImport(FCellImport *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->PackageIndex).Index = 0;
  this->Cell = (VCell *)0x0;
  return this;
}


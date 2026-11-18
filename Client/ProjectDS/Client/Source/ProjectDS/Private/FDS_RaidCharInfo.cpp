// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// FDS_RaidCharInfo @ 14b8b1970

FDS_RaidCharInfo * __thiscall
FDS_RaidCharInfo::FDS_RaidCharInfo(FDS_RaidCharInfo *this,RaidCharInfo *param_1)

{
  this->CharId = 0;
  this->CharLevel = 0;
  this->CharAscend = 0;
  this->CharId = (param_1->_impl_).char_id_;
  this->CharLevel = (param_1->_impl_).char_level_;
  this->CharAscend = (param_1->_impl_).char_ascend_;
  return this;
}


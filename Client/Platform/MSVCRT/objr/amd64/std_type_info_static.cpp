// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 2

// ~type_info @ 15015c3d0

void __thiscall type_info::~type_info(type_info *this)

{
  this->_padding_ = (longlong)vftable;
  return;
}

// `scalar_deleting_destructor' @ 15015c3e4

void * __thiscall type_info::_scalar_deleting_destructor_(type_info *this,uint param_1)

{
  this->_padding_ = (longlong)vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}


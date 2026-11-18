// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// operator= @ 14d0184b0

FStructOnScope * __thiscall FStructOnScope::operator=(FStructOnScope *this,FStructOnScope *param_1)

{
  if (this != param_1) {
    (**(code **)(this->_padding_ + 0x48))();
    (this->ScriptStruct).WeakPtr = (param_1->ScriptStruct).WeakPtr;
    this->SampleStructMemory = param_1->SampleStructMemory;
    this->OwnsMemory = param_1->OwnsMemory;
    param_1->OwnsMemory = false;
    (**(code **)(param_1->_padding_ + 0x48))(param_1);
  }
  return this;
}


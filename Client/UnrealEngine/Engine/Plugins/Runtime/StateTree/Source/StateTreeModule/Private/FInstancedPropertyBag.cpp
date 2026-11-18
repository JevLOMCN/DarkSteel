// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// operator= @ 14d4ecb60

FInstancedPropertyBag * __thiscall
FInstancedPropertyBag::operator=(FInstancedPropertyBag *this,FInstancedPropertyBag *param_1)

{
  if (this != param_1) {
    FInstancedStruct::InitializeAs
              (&this->Value,(param_1->Value).ScriptStruct.field0_0x0.DebugPtr,
               (param_1->Value).StructMemory);
  }
  return this;
}


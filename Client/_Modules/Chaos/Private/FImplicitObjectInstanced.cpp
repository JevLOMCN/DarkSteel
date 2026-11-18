// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// GetInnerObject @ 143b67940

TSerializablePtr<Chaos::FImplicitObject> __thiscall
Chaos::FImplicitObjectInstanced::GetInnerObject(FImplicitObjectInstanced *this)

{
  FImplicitObject *in_RDX;
  
  in_RDX->_padding_ = 0;
  return (TSerializablePtr<Chaos::FImplicitObject>)in_RDX;
}


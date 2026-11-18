// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Serialize @ 1485d77c0

void __thiscall TGPUSkinVertexBase::Serialize(TGPUSkinVertexBase *this,FArchive *param_1)

{
  ::operator<<(param_1,&this->TangentX);
  ::operator<<(param_1,&this->TangentZ);
  return;
}


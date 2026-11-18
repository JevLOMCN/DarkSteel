// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 2

// GetConstNode @ 14ad54f20

INode * __thiscall
Metasound::FGraph::FDeprecationNodeStorageAdapter::GetConstNode
          (FDeprecationNodeStorageAdapter *this)

{
  return (this->Storage).Object;
}

// GetMutableNode @ 14ad56050

INode * __thiscall
Metasound::FGraph::FDeprecationNodeStorageAdapter::GetMutableNode
          (FDeprecationNodeStorageAdapter *this)

{
  return this->MutableNode;
}


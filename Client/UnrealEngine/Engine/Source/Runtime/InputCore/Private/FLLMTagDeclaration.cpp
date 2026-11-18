// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputCore
// Functions: 1

// GetUniqueName @ 1423933b0

FName __thiscall FLLMTagDeclaration::GetUniqueName(FLLMTagDeclaration *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->UniqueName;
  return in_RDX;
}


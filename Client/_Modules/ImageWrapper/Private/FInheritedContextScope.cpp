// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 1

// ~FInheritedContextScope @ 14266a1e0

void __thiscall UE::FInheritedContextScope::~FInheritedContextScope(FInheritedContextScope *this)

{
  FMetadataRestoreScope::~FMetadataRestoreScope(&this->MetaScope);
  FMemScope::~FMemScope(&this->MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)this,(this->LLMScopes).LLMScopes.ArrayNum);
  return;
}


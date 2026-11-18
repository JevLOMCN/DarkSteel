// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 1

// DestroyObject @ 148dfa9e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraShaderScriptParametersMetadata,1>::
DestroyObject(TIntrusiveReferenceController<FNiagaraShaderScriptParametersMetadata,1> *this)

{
  FNiagaraShaderScriptParametersMetadata::~FNiagaraShaderScriptParametersMetadata
            ((FNiagaraShaderScriptParametersMetadata *)&this->ObjectStorage);
  return;
}


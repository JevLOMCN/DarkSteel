// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator= @ 14938afb0

TUniformBufferRef<FNiagaraSpriteUniformParameters> * __thiscall
TUniformBufferRef<FNiagaraSpriteUniformParameters>::operator=
          (TUniformBufferRef<FNiagaraSpriteUniformParameters> *this,
          TUniformBufferRef<FNiagaraSpriteUniformParameters> *param_1)

{
  TUniformBufferRef<FNiagaraSpriteUniformParameters> this_00;
  
  if (this != param_1) {
    this_00 = *this;
    *this = *param_1;
    *param_1 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)0x0;
    if (this_00 != (TUniformBufferRef<FNiagaraSpriteUniformParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  return this;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 1

// ~TMap<FNiagaraShaderMapId,FNiagaraShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraShaderMapId,FNiagaraShaderMap_*,0>_> @ 148df12e0

void __thiscall
TMap<FNiagaraShaderMapId,FNiagaraShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraShaderMapId,FNiagaraShaderMap_*,0>_>
::
~TMap<FNiagaraShaderMapId,FNiagaraShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraShaderMapId,FNiagaraShaderMap_*,0>_>
          (TMap<FNiagaraShaderMapId,FNiagaraShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraShaderMapId,FNiagaraShaderMap_*,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraShaderMapId,FNiagaraShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraShaderMapId,FNiagaraShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraShaderMapId,FNiagaraShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}


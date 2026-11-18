// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 1

// ~TMap<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,0>_> @ 14d7697a0

void __thiscall
TMap<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,0>_>
::
~TMap<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,0>_>
          (TMap<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}


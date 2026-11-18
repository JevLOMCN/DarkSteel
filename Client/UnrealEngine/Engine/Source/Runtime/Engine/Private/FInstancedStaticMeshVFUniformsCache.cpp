// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ReleaseRHI @ 147cabf60

void __thiscall
FInstancedStaticMeshVFUniformsCache::ReleaseRHI(FInstancedStaticMeshVFUniformsCache *this)

{
  TMap<FInstancedStaticMeshVFLooseUniformShaderParameters,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstancedStaticMeshVFLooseUniformShaderParameters,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->CachedParams;
  bVar3 = 1 < *(int *)&(this->CachedParams).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FInstancedStaticMeshVFLooseUniformShaderParameters,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_>,TDefaultMapHashableKeyFuncs<FInstancedStaticMeshVFLooseUniformShaderParameters,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FInstancedStaticMeshVFLooseUniformShaderParameters,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_>,TDefaultMapHashableKeyFuncs<FInstancedStaticMeshVFLooseUniformShaderParameters,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FInstancedStaticMeshVFLooseUniformShaderParameters,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FInstancedStaticMeshVFLooseUniformShaderParameters,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->CachedParams).field_0x8);
  puVar1 = &(this->CachedParams).field_0xc;
  *(undefined4 *)&(this->CachedParams).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CachedParams).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedParams).field_0x34 = 0;
  iVar2 = *(int *)&(this->CachedParams).field_0x2c;
  *(undefined4 *)&(this->CachedParams).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->CachedParams).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedParams).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->CachedParams).field_0x48 = 1;
    TSet<TTuple<FInstancedStaticMeshVFLooseUniformShaderParameters,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_>,TDefaultMapHashableKeyFuncs<FInstancedStaticMeshVFLooseUniformShaderParameters,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FInstancedStaticMeshVFLooseUniformShaderParameters,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_>,TDefaultMapHashableKeyFuncs<FInstancedStaticMeshVFLooseUniformShaderParameters,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}


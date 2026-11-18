// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// FPlatform @ 145e406b0

FPlatform * __thiscall FShaderHashCache::FPlatform::FPlatform(FPlatform *this)

{
  (this->IncludeDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncludeDirectory).Data.ArrayNum = 0;
  (this->IncludeDirectory).Data.ArrayMax = 0;
  *(undefined8 *)&this->ShaderHashCache = 0;
  *(undefined8 *)&(this->ShaderHashCache).field_0x8 = 0;
  *(undefined8 *)&(this->ShaderHashCache).field_0x20 = 0;
  *(undefined4 *)&(this->ShaderHashCache).field_0x28 = 0;
  *(undefined4 *)&(this->ShaderHashCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->ShaderHashCache).field_0x34 = 0;
  *(undefined4 *)&(this->ShaderHashCache).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ShaderHashCache).field_0x40 = 0;
  *(undefined4 *)&(this->ShaderHashCache).field_0x48 = 0;
  return this;
}

// ~FPlatform @ 145e436c0

void __thiscall FShaderHashCache::FPlatform::~FPlatform(FPlatform *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->ShaderHashCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ShaderHashCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FSHAHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FSHAHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FSHAHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ShaderHashCache);
  pFVar2 = (this->IncludeDirectory).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}


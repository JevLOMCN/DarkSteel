// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// operator= @ 145b96d50

FShaderResourceTable * __thiscall
FShaderResourceTable::operator=(FShaderResourceTable *this,FShaderResourceTable *param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = &param_1->ShaderResourceViewMap;
  pTVar2 = &this->ShaderResourceViewMap;
  this->ResourceTableBits = param_1->ResourceTableBits;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ShaderResourceViewMap).ArrayNum = (param_1->ShaderResourceViewMap).ArrayNum;
    (this->ShaderResourceViewMap).ArrayMax = (param_1->ShaderResourceViewMap).ArrayMax;
    (param_1->ShaderResourceViewMap).ArrayNum = 0;
    (param_1->ShaderResourceViewMap).ArrayMax = 0;
  }
  pTVar1 = &param_1->SamplerMap;
  pTVar2 = &this->SamplerMap;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SamplerMap).ArrayNum = (param_1->SamplerMap).ArrayNum;
    (this->SamplerMap).ArrayMax = (param_1->SamplerMap).ArrayMax;
    (param_1->SamplerMap).ArrayNum = 0;
    (param_1->SamplerMap).ArrayMax = 0;
  }
  pTVar1 = &param_1->UnorderedAccessViewMap;
  pTVar2 = &this->UnorderedAccessViewMap;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->UnorderedAccessViewMap).ArrayNum = (param_1->UnorderedAccessViewMap).ArrayNum;
    (this->UnorderedAccessViewMap).ArrayMax = (param_1->UnorderedAccessViewMap).ArrayMax;
    (param_1->UnorderedAccessViewMap).ArrayNum = 0;
    (param_1->UnorderedAccessViewMap).ArrayMax = 0;
  }
  pTVar1 = &param_1->ResourceTableLayoutHashes;
  pTVar2 = &this->ResourceTableLayoutHashes;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ResourceTableLayoutHashes).ArrayNum = (param_1->ResourceTableLayoutHashes).ArrayNum;
    (this->ResourceTableLayoutHashes).ArrayMax = (param_1->ResourceTableLayoutHashes).ArrayMax;
    (param_1->ResourceTableLayoutHashes).ArrayNum = 0;
    (param_1->ResourceTableLayoutHashes).ArrayMax = 0;
  }
  pTVar1 = &param_1->TextureMap;
  pTVar2 = &this->TextureMap;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TextureMap).ArrayNum = (param_1->TextureMap).ArrayNum;
    (this->TextureMap).ArrayMax = (param_1->TextureMap).ArrayMax;
    (param_1->TextureMap).ArrayNum = 0;
    (param_1->TextureMap).ArrayMax = 0;
  }
  pTVar1 = &param_1->ResourceCollectionMap;
  pTVar2 = &this->ResourceCollectionMap;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ResourceCollectionMap).ArrayNum = (param_1->ResourceCollectionMap).ArrayNum;
    (this->ResourceCollectionMap).ArrayMax = (param_1->ResourceCollectionMap).ArrayMax;
    (param_1->ResourceCollectionMap).ArrayNum = 0;
    (param_1->ResourceCollectionMap).ArrayMax = 0;
  }
  return this;
}


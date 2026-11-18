// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 2

// FOpenColorIORenderPassResources @ 14d78aad0

FOpenColorIORenderPassResources * __thiscall
FOpenColorIORenderPassResources::FOpenColorIORenderPassResources
          (FOpenColorIORenderPassResources *this,FOpenColorIORenderPassResources *param_1)

{
  TArray<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->TextureResources;
  this->ShaderResource = param_1->ShaderResource;
  piVar2 = &(this->TextureResources).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->TextureResources).ArrayNum;
  _Src = (param_1->TextureResources).AllocatorInstance.Data;
  (this->TextureResources).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  ::FString::FString(&this->TransformName,&param_1->TransformName);
  return this;
}

// operator= @ 14d78d870

FOpenColorIORenderPassResources * __thiscall
FOpenColorIORenderPassResources::operator=
          (FOpenColorIORenderPassResources *this,FOpenColorIORenderPassResources *param_1)

{
  TArray<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  FString *pFVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  
  pTVar1 = &param_1->TextureResources;
  pTVar2 = &this->TextureResources;
  this->ShaderResource = param_1->ShaderResource;
  if (pTVar2 != pTVar1) {
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TextureResources).ArrayNum = (param_1->TextureResources).ArrayNum;
    (this->TextureResources).ArrayMax = (param_1->TextureResources).ArrayMax;
    (param_1->TextureResources).ArrayNum = 0;
    (param_1->TextureResources).ArrayMax = 0;
  }
  pFVar3 = &param_1->TransformName;
  pFVar4 = &this->TransformName;
  if (pFVar4 != pFVar3) {
    pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar4->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TransformName).Data.ArrayNum = (param_1->TransformName).Data.ArrayNum;
    (this->TransformName).Data.ArrayMax = (param_1->TransformName).Data.ArrayMax;
    (param_1->TransformName).Data.ArrayNum = 0;
    (param_1->TransformName).Data.ArrayMax = 0;
  }
  return this;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// FHairGroupResource @ 14dfac840

FHairGroupResource * __thiscall
UGroomBindingAsset::FHairGroupResource::FHairGroupResource
          (FHairGroupResource *this,FHairGroupResource *param_1)

{
  TArray<FHairStrandsRestRootResource_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->CardsRootResources;
  this->SimRootResources = param_1->SimRootResources;
  this->RenRootResources = param_1->RenRootResources;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->CardsRootResources).ArrayMax;
  iVar3 = (param_1->CardsRootResources).ArrayNum;
  _Src = (param_1->CardsRootResources).AllocatorInstance.Data;
  (this->CardsRootResources).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  return this;
}

// operator= @ 14dfb1880

FHairGroupResource * __thiscall
UGroomBindingAsset::FHairGroupResource::operator=
          (FHairGroupResource *this,FHairGroupResource *param_1)

{
  TArray<FHairStrandsRestRootResource_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FHairStrandsRestRootResource_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = &param_1->CardsRootResources;
  this->SimRootResources = param_1->SimRootResources;
  pTVar2 = &this->CardsRootResources;
  this->RenRootResources = param_1->RenRootResources;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CardsRootResources).ArrayNum = (param_1->CardsRootResources).ArrayNum;
    (this->CardsRootResources).ArrayMax = (param_1->CardsRootResources).ArrayMax;
    (param_1->CardsRootResources).ArrayNum = 0;
    (param_1->CardsRootResources).ArrayMax = 0;
  }
  return this;
}


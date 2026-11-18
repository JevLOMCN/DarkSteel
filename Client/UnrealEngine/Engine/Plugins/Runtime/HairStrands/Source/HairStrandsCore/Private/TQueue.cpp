// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// TQueue<UGroomBindingAsset::FHairGroupResource,1> @ 14dfaafa0

TQueue<UGroomBindingAsset::FHairGroupResource,1> * __thiscall
TQueue<UGroomBindingAsset::FHairGroupResource,1>::TQueue<UGroomBindingAsset::FHairGroupResource,1>
          (TQueue<UGroomBindingAsset::FHairGroupResource,1> *this)

{
  TNode *pTVar1;
  
  pTVar1 = ::operator_new(0x28);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).SimRootResources = (FHairStrandsRestRootResource *)0x0;
    (pTVar1->Item).RenRootResources = (FHairStrandsRestRootResource *)0x0;
    (pTVar1->Item).CardsRootResources.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->Item).CardsRootResources.ArrayNum = 0;
    (pTVar1->Item).CardsRootResources.ArrayMax = 0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).SimRootResources = (FHairStrandsRestRootResource *)0x0;
    (pTVar1->Item).RenRootResources = (FHairStrandsRestRootResource *)0x0;
    (pTVar1->Item).CardsRootResources.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->Item).CardsRootResources.ArrayNum = 0;
    (pTVar1->Item).CardsRootResources.ArrayMax = 0;
    this->Tail = pTVar1;
    this->Head = pTVar1;
    return this;
  }
  this->Tail = (TNode *)0x0;
  this->Head = (TNode *)0x0;
  return this;
}


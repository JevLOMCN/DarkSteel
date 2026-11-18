// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// operator= @ 144e748b0

FMaterialCacheTagLayout * __thiscall
FMaterialCacheTagLayout::operator=(FMaterialCacheTagLayout *this,FMaterialCacheTagLayout *param_1)

{
  TArray<FMaterialCacheLayer,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ForElementType<FMaterialCacheLayer> FVar7;
  ForElementType<FMaterialCacheLayer> FVar8;
  
  pTVar1 = &this->Layers;
  uVar4 = (param_1->Guid).B;
  uVar5 = (param_1->Guid).C;
  uVar6 = (param_1->Guid).D;
  (this->Guid).A = (param_1->Guid).A;
  (this->Guid).B = uVar4;
  (this->Guid).C = uVar5;
  (this->Guid).D = uVar6;
  if (this != param_1) {
    FVar7 = (this->Layers).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<FMaterialCacheLayer>)0x0) {
      FVar7 = (ForElementType<FMaterialCacheLayer>)pTVar1;
    }
    DestructItems<FMaterialCacheLayer,int>((FMaterialCacheLayer *)FVar7,(this->Layers).ArrayNum);
    iVar3 = (param_1->Layers).ArrayNum;
    piVar2 = &(this->Layers).ArrayMax;
    FVar7 = (param_1->Layers).AllocatorInstance.SecondaryData;
    (this->Layers).ArrayNum = iVar3;
    if (FVar7 == (ForElementType<FMaterialCacheLayer>)0x0) {
      FVar7 = (ForElementType<FMaterialCacheLayer>)&param_1->Layers;
    }
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 8;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialCacheLayer>_>
                (0x18,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      FVar8 = (this->Layers).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FMaterialCacheLayer>)0x0) {
        FVar8 = (ForElementType<FMaterialCacheLayer>)pTVar1;
      }
      ConstructItems<FMaterialCacheLayer,FMaterialCacheLayer,int>
                ((void *)FVar8,(FMaterialCacheLayer *)FVar7,iVar3);
    }
  }
  return this;
}


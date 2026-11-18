// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 1

// FTiling @ 14eae6040

FTiling * __thiscall UE::NNEDenoiser::Private::FTiling::FTiling(FTiling *this,FTiling *param_1)

{
  TArray<UE::NNEDenoiser::Private::FTile,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FTile *pFVar4;
  
  pTVar1 = &this->Tiles;
  (this->TileSize).field0_0x0 = (param_1->TileSize).field0_0x0;
  (this->Count).field0_0x0 = (param_1->Count).field0_0x0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Tiles).ArrayMax;
  iVar3 = (param_1->Tiles).ArrayNum;
  pFVar4 = (FTile *)(param_1->Tiles).AllocatorInstance.Data;
  (this->Tiles).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<UE::NNEDenoiser::Private::FTile,UE::NNEDenoiser::Private::FTile,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FDistanceFieldAssetState @ 14485b620

FDistanceFieldAssetState * __thiscall
FDistanceFieldAssetState::FDistanceFieldAssetState
          (FDistanceFieldAssetState *this,FDistanceFieldAssetState *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FDistanceFieldAssetMipState> FVar3;
  ForElementType<FDistanceFieldAssetMipState> FVar4;
  
  this->BuiltData = param_1->BuiltData;
  this->RefCount = param_1->RefCount;
  this->WantedNumMips = param_1->WantedNumMips;
  (this->ReversedMips).AllocatorInstance.SecondaryData =
       (ForElementType<FDistanceFieldAssetMipState>)0x0;
  FVar4 = (param_1->ReversedMips).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ReversedMips).ArrayNum;
  (this->ReversedMips).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<FDistanceFieldAssetMipState>)0x0) {
    FVar4 = (ForElementType<FDistanceFieldAssetMipState>)&param_1->ReversedMips;
  }
  piVar1 = &(this->ReversedMips).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 3;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FDistanceFieldAssetMipState>_>
              (0x40,8,iVar2,0,&(this->ReversedMips).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->ReversedMips).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FDistanceFieldAssetMipState>)0x0) {
      FVar3 = (ForElementType<FDistanceFieldAssetMipState>)&this->ReversedMips;
    }
    ConstructItems<FDistanceFieldAssetMipState,FDistanceFieldAssetMipState,int>
              ((void *)FVar3,(FDistanceFieldAssetMipState *)FVar4,iVar2);
  }
  return this;
}


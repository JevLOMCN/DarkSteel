// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FDistanceFieldAssetMipState @ 14485b560

FDistanceFieldAssetMipState * __thiscall
FDistanceFieldAssetMipState::FDistanceFieldAssetMipState
          (FDistanceFieldAssetMipState *this,FDistanceFieldAssetMipState *param_1)

{
  ForElementType<int> FVar1;
  
  *(undefined8 *)&(this->IndirectionDimensions).field0_0x0 =
       *(undefined8 *)&(param_1->IndirectionDimensions).field0_0x0;
  (this->IndirectionDimensions).field0_0x0._s_0.Z =
       (param_1->IndirectionDimensions).field0_0x0._s_0.Z;
  this->IndirectionTableOffset = param_1->IndirectionTableOffset;
  *(undefined8 *)&(this->IndirectionAtlasOffset).field0_0x0 =
       *(undefined8 *)&(param_1->IndirectionAtlasOffset).field0_0x0;
  (this->IndirectionAtlasOffset).field0_0x0._s_0.Z =
       (param_1->IndirectionAtlasOffset).field0_0x0._s_0.Z;
  this->NumBricks = param_1->NumBricks;
  (this->AllocatedBlocks).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  if ((param_1->AllocatedBlocks).AllocatorInstance.SecondaryData == (ForElementType<int>)0x0) {
    memmove(&this->AllocatedBlocks,&param_1->AllocatedBlocks,0x10);
  }
  FVar1 = (this->AllocatedBlocks).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->AllocatedBlocks).AllocatorInstance.SecondaryData =
       (param_1->AllocatedBlocks).AllocatorInstance.SecondaryData;
  (param_1->AllocatedBlocks).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->AllocatedBlocks).ArrayNum = (param_1->AllocatedBlocks).ArrayNum;
  (this->AllocatedBlocks).ArrayMax = (param_1->AllocatedBlocks).ArrayMax;
  (param_1->AllocatedBlocks).ArrayNum = 0;
  (param_1->AllocatedBlocks).ArrayMax = 4;
  return this;
}


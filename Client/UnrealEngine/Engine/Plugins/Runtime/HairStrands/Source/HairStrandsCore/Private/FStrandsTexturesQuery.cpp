// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// operator= @ 14e07d5a0

FStrandsTexturesQuery * __thiscall
FStrandsTexturesQuery::operator=(FStrandsTexturesQuery *this,FStrandsTexturesQuery *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FStrandsTexturesOutput *pFVar3;
  FStrandsTexturesOutput *pFVar4;
  FScriptContainerElement *pFVar5;
  
  pTVar1 = &(param_1->Info).GroupIndices;
  (this->Info).Layout = (param_1->Info).Layout;
  pTVar2 = &(this->Info).GroupIndices;
  (this->Info).GroomAsset = (param_1->Info).GroomAsset;
  (this->Info).SkeletalMesh = (param_1->Info).SkeletalMesh;
  (this->Info).StaticMesh = (param_1->Info).StaticMesh;
  (this->Info).Resolution = (param_1->Info).Resolution;
  (this->Info).LODIndex = (param_1->Info).LODIndex;
  (this->Info).SectionIndex = (param_1->Info).SectionIndex;
  (this->Info).UVChannelIndex = (param_1->Info).UVChannelIndex;
  (this->Info).MaxTracingDistance = (param_1->Info).MaxTracingDistance;
  (this->Info).TracingDirection = (param_1->Info).TracingDirection;
  (this->Info).Dilation = (param_1->Info).Dilation;
  if (pTVar2 != pTVar1) {
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Info).GroupIndices.ArrayNum = (param_1->Info).GroupIndices.ArrayNum;
    (this->Info).GroupIndices.ArrayMax = (param_1->Info).GroupIndices.ArrayMax;
    (param_1->Info).GroupIndices.ArrayNum = 0;
    (param_1->Info).GroupIndices.ArrayMax = 0;
  }
  pFVar3 = &param_1->Output;
  pFVar4 = &this->Output;
  if (pFVar4 != pFVar3) {
    pFVar5 = (pFVar4->Textures).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar4->Textures).AllocatorInstance.Data = (pFVar3->Textures).AllocatorInstance.Data;
    (pFVar3->Textures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Output).Textures.ArrayNum = (param_1->Output).Textures.ArrayNum;
    (this->Output).Textures.ArrayMax = (param_1->Output).Textures.ArrayMax;
    (param_1->Output).Textures.ArrayNum = 0;
    (param_1->Output).Textures.ArrayMax = 0;
  }
  return this;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// operator= @ 14dfb1a00

FHairRootGroupData * __thiscall
FHairRootGroupData::operator=(FHairRootGroupData *this,FHairRootGroupData *param_1)

{
  TArray<FHairStrandsRootData,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FHairStrandsRootData,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TArray<FHairStrandsRootData,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<TArray<FHairStrandsRootData,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar6;
  FScriptContainerElement *pFVar7;
  
  if (this != param_1) {
    DestructItems<FHairStrandsRootData,int>
              ((FHairStrandsRootData *)(this->SimRootDatas).AllocatorInstance.Data,
               (this->SimRootDatas).ArrayNum);
    pFVar7 = (this->SimRootDatas).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (this->SimRootDatas).AllocatorInstance.Data = (param_1->SimRootDatas).AllocatorInstance.Data;
    (param_1->SimRootDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SimRootDatas).ArrayNum = (param_1->SimRootDatas).ArrayNum;
    (this->SimRootDatas).ArrayMax = (param_1->SimRootDatas).ArrayMax;
    (param_1->SimRootDatas).ArrayNum = 0;
    (param_1->SimRootDatas).ArrayMax = 0;
  }
  pTVar1 = &param_1->RenRootDatas;
  pTVar2 = &this->RenRootDatas;
  if (pTVar2 != pTVar1) {
    DestructItems<FHairStrandsRootData,int>
              ((FHairStrandsRootData *)(pTVar2->AllocatorInstance).Data,
               (this->RenRootDatas).ArrayNum);
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->RenRootDatas).ArrayNum = (param_1->RenRootDatas).ArrayNum;
    (this->RenRootDatas).ArrayMax = (param_1->RenRootDatas).ArrayMax;
    (param_1->RenRootDatas).ArrayNum = 0;
    (param_1->RenRootDatas).ArrayMax = 0;
  }
  pTVar3 = &param_1->CardsRootDatas;
  pTVar4 = &this->CardsRootDatas;
  if (pTVar4 != pTVar3) {
    DestructItems<TArray<FHairStrandsRootData,TSizedDefaultAllocator<32>_>,int>
              ((TArray<FHairStrandsRootData,TSizedDefaultAllocator<32>_> *)
               (pTVar4->AllocatorInstance).Data,(this->CardsRootDatas).ArrayNum);
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CardsRootDatas).ArrayNum = (param_1->CardsRootDatas).ArrayNum;
    (this->CardsRootDatas).ArrayMax = (param_1->CardsRootDatas).ArrayMax;
    (param_1->CardsRootDatas).ArrayNum = 0;
    (param_1->CardsRootDatas).ArrayMax = 0;
  }
  pTVar5 = &param_1->MeshPositions;
  pTVar6 = &this->MeshPositions;
  if (pTVar6 != pTVar5) {
    DestructItems<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               (pTVar6->AllocatorInstance).Data,(this->MeshPositions).ArrayNum);
    pFVar7 = (pTVar6->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->MeshPositions).ArrayNum = (param_1->MeshPositions).ArrayNum;
    (this->MeshPositions).ArrayMax = (param_1->MeshPositions).ArrayMax;
    (param_1->MeshPositions).ArrayNum = 0;
    (param_1->MeshPositions).ArrayMax = 0;
  }
  pTVar5 = &param_1->MeshPositions_Transferred;
  pTVar6 = &this->MeshPositions_Transferred;
  if (pTVar6 != pTVar5) {
    DestructItems<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               (pTVar6->AllocatorInstance).Data,(this->MeshPositions_Transferred).ArrayNum);
    pFVar7 = (pTVar6->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->MeshPositions_Transferred).ArrayNum = (param_1->MeshPositions_Transferred).ArrayNum;
    (this->MeshPositions_Transferred).ArrayMax = (param_1->MeshPositions_Transferred).ArrayMax;
    (param_1->MeshPositions_Transferred).ArrayNum = 0;
    (param_1->MeshPositions_Transferred).ArrayMax = 0;
  }
  this->TargetMeshMinLOD = param_1->TargetMeshMinLOD;
  return this;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// operator= @ 14e07d230

FHairStrandsRootData * __thiscall
FHairStrandsRootData::operator=(FHairStrandsRootData *this,FHairStrandsRootData *param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  if (this != param_1) {
    pFVar7 = (this->RootToUniqueTriangleIndexBuffer).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (this->RootToUniqueTriangleIndexBuffer).AllocatorInstance.Data =
         (param_1->RootToUniqueTriangleIndexBuffer).AllocatorInstance.Data;
    (param_1->RootToUniqueTriangleIndexBuffer).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->RootToUniqueTriangleIndexBuffer).ArrayNum =
         (param_1->RootToUniqueTriangleIndexBuffer).ArrayNum;
    (this->RootToUniqueTriangleIndexBuffer).ArrayMax =
         (param_1->RootToUniqueTriangleIndexBuffer).ArrayMax;
    (param_1->RootToUniqueTriangleIndexBuffer).ArrayNum = 0;
    (param_1->RootToUniqueTriangleIndexBuffer).ArrayMax = 0;
  }
  pTVar1 = &param_1->RootBarycentricBuffer;
  pTVar2 = &this->RootBarycentricBuffer;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->RootBarycentricBuffer).ArrayNum = (param_1->RootBarycentricBuffer).ArrayNum;
    (this->RootBarycentricBuffer).ArrayMax = (param_1->RootBarycentricBuffer).ArrayMax;
    (param_1->RootBarycentricBuffer).ArrayNum = 0;
    (param_1->RootBarycentricBuffer).ArrayMax = 0;
  }
  pTVar1 = &param_1->UniqueTriangleIndexBuffer;
  pTVar2 = &this->UniqueTriangleIndexBuffer;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->UniqueTriangleIndexBuffer).ArrayNum = (param_1->UniqueTriangleIndexBuffer).ArrayNum;
    (this->UniqueTriangleIndexBuffer).ArrayMax = (param_1->UniqueTriangleIndexBuffer).ArrayMax;
    (param_1->UniqueTriangleIndexBuffer).ArrayNum = 0;
    (param_1->UniqueTriangleIndexBuffer).ArrayMax = 0;
  }
  pTVar3 = &param_1->RestUniqueTrianglePositionBuffer;
  pTVar4 = &this->RestUniqueTrianglePositionBuffer;
  if (pTVar4 != pTVar3) {
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->RestUniqueTrianglePositionBuffer).ArrayNum =
         (param_1->RestUniqueTrianglePositionBuffer).ArrayNum;
    (this->RestUniqueTrianglePositionBuffer).ArrayMax =
         (param_1->RestUniqueTrianglePositionBuffer).ArrayMax;
    (param_1->RestUniqueTrianglePositionBuffer).ArrayNum = 0;
    (param_1->RestUniqueTrianglePositionBuffer).ArrayMax = 0;
  }
  pTVar3 = &param_1->RestUniqueTrianglePositionBuffer_TargetNonTransfered;
  pTVar4 = &this->RestUniqueTrianglePositionBuffer_TargetNonTransfered;
  if (pTVar4 != pTVar3) {
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->RestUniqueTrianglePositionBuffer_TargetNonTransfered).ArrayNum =
         (param_1->RestUniqueTrianglePositionBuffer_TargetNonTransfered).ArrayNum;
    (this->RestUniqueTrianglePositionBuffer_TargetNonTransfered).ArrayMax =
         (param_1->RestUniqueTrianglePositionBuffer_TargetNonTransfered).ArrayMax;
    (param_1->RestUniqueTrianglePositionBuffer_TargetNonTransfered).ArrayNum = 0;
    (param_1->RestUniqueTrianglePositionBuffer_TargetNonTransfered).ArrayMax = 0;
  }
  pTVar5 = &param_1->MeshInterpolationWeightsBuffer;
  pTVar6 = &this->MeshInterpolationWeightsBuffer;
  this->SampleCount = param_1->SampleCount;
  if (pTVar6 != pTVar5) {
    pFVar7 = (pTVar6->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->MeshInterpolationWeightsBuffer).ArrayNum =
         (param_1->MeshInterpolationWeightsBuffer).ArrayNum;
    (this->MeshInterpolationWeightsBuffer).ArrayMax =
         (param_1->MeshInterpolationWeightsBuffer).ArrayMax;
    (param_1->MeshInterpolationWeightsBuffer).ArrayNum = 0;
    (param_1->MeshInterpolationWeightsBuffer).ArrayMax = 0;
  }
  pTVar1 = &param_1->MeshSampleIndicesBuffer;
  pTVar2 = &this->MeshSampleIndicesBuffer;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->MeshSampleIndicesBuffer).ArrayNum = (param_1->MeshSampleIndicesBuffer).ArrayNum;
    (this->MeshSampleIndicesBuffer).ArrayMax = (param_1->MeshSampleIndicesBuffer).ArrayMax;
    (param_1->MeshSampleIndicesBuffer).ArrayNum = 0;
    (param_1->MeshSampleIndicesBuffer).ArrayMax = 0;
  }
  pTVar3 = &param_1->RestSamplePositionsBuffer;
  pTVar4 = &this->RestSamplePositionsBuffer;
  if (pTVar4 != pTVar3) {
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->RestSamplePositionsBuffer).ArrayNum = (param_1->RestSamplePositionsBuffer).ArrayNum;
    (this->RestSamplePositionsBuffer).ArrayMax = (param_1->RestSamplePositionsBuffer).ArrayMax;
    (param_1->RestSamplePositionsBuffer).ArrayNum = 0;
    (param_1->RestSamplePositionsBuffer).ArrayMax = 0;
  }
  pTVar1 = &param_1->MeshSampleSectionsBuffer;
  pTVar2 = &this->MeshSampleSectionsBuffer;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->MeshSampleSectionsBuffer).ArrayNum = (param_1->MeshSampleSectionsBuffer).ArrayNum;
    (this->MeshSampleSectionsBuffer).ArrayMax = (param_1->MeshSampleSectionsBuffer).ArrayMax;
    (param_1->MeshSampleSectionsBuffer).ArrayNum = 0;
    (param_1->MeshSampleSectionsBuffer).ArrayMax = 0;
  }
  pTVar1 = &param_1->UniqueSectionIds;
  pTVar2 = &this->UniqueSectionIds;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->UniqueSectionIds).ArrayNum = (param_1->UniqueSectionIds).ArrayNum;
    (this->UniqueSectionIds).ArrayMax = (param_1->UniqueSectionIds).ArrayMax;
    (param_1->UniqueSectionIds).ArrayNum = 0;
    (param_1->UniqueSectionIds).ArrayMax = 0;
  }
  this->LODIndex = param_1->LODIndex;
  this->MeshSectionCount = param_1->MeshSectionCount;
  this->RootCount = param_1->RootCount;
  this->PointCount = param_1->PointCount;
  return this;
}

// HasProjectionData @ 14e0a4280

bool __thiscall FHairStrandsRootData::HasProjectionData(FHairStrandsRootData *this)

{
  if ((((0 < (this->RootBarycentricBuffer).ArrayNum) &&
       (0 < (this->RootToUniqueTriangleIndexBuffer).ArrayNum)) &&
      (0 < (this->UniqueTriangleIndexBuffer).ArrayNum)) &&
     (0 < (this->RestUniqueTrianglePositionBuffer).ArrayNum)) {
    return true;
  }
  return false;
}

// Reset @ 14e0ab080

void __thiscall FHairStrandsRootData::Reset(FHairStrandsRootData *this)

{
  FHairStrandsRootData local_c8;
  
  local_c8.LODIndex = -1;
  local_c8.SampleCount = 0;
  local_c8._84_4_ = 0;
  local_c8.RootToUniqueTriangleIndexBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.RootToUniqueTriangleIndexBuffer.ArrayNum = 0;
  local_c8.RootToUniqueTriangleIndexBuffer.ArrayMax = 0;
  local_c8.RootBarycentricBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.RootBarycentricBuffer.ArrayNum = 0;
  local_c8.RootBarycentricBuffer.ArrayMax = 0;
  local_c8.UniqueTriangleIndexBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.UniqueTriangleIndexBuffer.ArrayNum = 0;
  local_c8.UniqueTriangleIndexBuffer.ArrayMax = 0;
  local_c8.RestUniqueTrianglePositionBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.RestUniqueTrianglePositionBuffer.ArrayNum = 0;
  local_c8.RestUniqueTrianglePositionBuffer.ArrayMax = 0;
  local_c8.RestUniqueTrianglePositionBuffer_TargetNonTransfered.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_c8.RestUniqueTrianglePositionBuffer_TargetNonTransfered.ArrayNum = 0;
  local_c8.RestUniqueTrianglePositionBuffer_TargetNonTransfered.ArrayMax = 0;
  local_c8.MeshInterpolationWeightsBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.MeshInterpolationWeightsBuffer.ArrayNum = 0;
  local_c8.MeshInterpolationWeightsBuffer.ArrayMax = 0;
  local_c8.MeshSampleIndicesBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.MeshSampleIndicesBuffer.ArrayNum = 0;
  local_c8.MeshSampleIndicesBuffer.ArrayMax = 0;
  local_c8.RestSamplePositionsBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.RestSamplePositionsBuffer.ArrayNum = 0;
  local_c8.RestSamplePositionsBuffer.ArrayMax = 0;
  local_c8.MeshSampleSectionsBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.MeshSampleSectionsBuffer.ArrayNum = 0;
  local_c8.MeshSampleSectionsBuffer.ArrayMax = 0;
  local_c8.UniqueSectionIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.UniqueSectionIds.ArrayNum = 0;
  local_c8.UniqueSectionIds.ArrayMax = 0;
  local_c8.MeshSectionCount = 0;
  local_c8.RootCount = 0;
  local_c8.PointCount = 0;
  operator=(this,&local_c8);
  if (local_c8.UniqueSectionIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.UniqueSectionIds.AllocatorInstance.Data);
  }
  if (local_c8.MeshSampleSectionsBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.MeshSampleSectionsBuffer.AllocatorInstance.Data);
  }
  if (local_c8.RestSamplePositionsBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.RestSamplePositionsBuffer.AllocatorInstance.Data);
  }
  if (local_c8.MeshSampleIndicesBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.MeshSampleIndicesBuffer.AllocatorInstance.Data);
  }
  if (local_c8.MeshInterpolationWeightsBuffer.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.MeshInterpolationWeightsBuffer.AllocatorInstance.Data);
  }
  if (local_c8.RestUniqueTrianglePositionBuffer_TargetNonTransfered.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.RestUniqueTrianglePositionBuffer_TargetNonTransfered.AllocatorInstance.
                  Data);
  }
  if (local_c8.RestUniqueTrianglePositionBuffer.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.RestUniqueTrianglePositionBuffer.AllocatorInstance.Data);
  }
  if (local_c8.UniqueTriangleIndexBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.UniqueTriangleIndexBuffer.AllocatorInstance.Data);
  }
  if (local_c8.RootBarycentricBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.RootBarycentricBuffer.AllocatorInstance.Data);
  }
  if (local_c8.RootToUniqueTriangleIndexBuffer.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.RootToUniqueTriangleIndexBuffer.AllocatorInstance.Data);
  }
  return;
}


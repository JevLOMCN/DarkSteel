// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// operator= @ 14dfb13a0

FGeometryCacheMeshData * __thiscall
FGeometryCacheMeshData::operator=(FGeometryCacheMeshData *this,FGeometryCacheMeshData *param_1)

{
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FGeometryCacheMeshBatchInfo,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FGeometryCacheMeshBatchInfo,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar14;
  FScriptContainerElement *pFVar15;
  undefined8 uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  
  if (this != param_1) {
    pFVar15 = (this->Positions).AllocatorInstance.Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    (this->Positions).AllocatorInstance.Data = (param_1->Positions).AllocatorInstance.Data;
    (param_1->Positions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Positions).ArrayNum = (param_1->Positions).ArrayNum;
    (this->Positions).ArrayMax = (param_1->Positions).ArrayMax;
    (param_1->Positions).ArrayNum = 0;
    (param_1->Positions).ArrayMax = 0;
  }
  pTVar1 = &param_1->TextureCoordinates;
  pTVar2 = &this->TextureCoordinates;
  if (pTVar2 != pTVar1) {
    pFVar15 = (pTVar2->AllocatorInstance).Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TextureCoordinates).ArrayNum = (param_1->TextureCoordinates).ArrayNum;
    (this->TextureCoordinates).ArrayMax = (param_1->TextureCoordinates).ArrayMax;
    (param_1->TextureCoordinates).ArrayNum = 0;
    (param_1->TextureCoordinates).ArrayMax = 0;
  }
  pTVar3 = &param_1->TangentsX;
  pTVar4 = &this->TangentsX;
  if (pTVar4 != pTVar3) {
    pFVar15 = (pTVar4->AllocatorInstance).Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TangentsX).ArrayNum = (param_1->TangentsX).ArrayNum;
    (this->TangentsX).ArrayMax = (param_1->TangentsX).ArrayMax;
    (param_1->TangentsX).ArrayNum = 0;
    (param_1->TangentsX).ArrayMax = 0;
  }
  pTVar3 = &param_1->TangentsZ;
  pTVar4 = &this->TangentsZ;
  if (pTVar4 != pTVar3) {
    pFVar15 = (pTVar4->AllocatorInstance).Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TangentsZ).ArrayNum = (param_1->TangentsZ).ArrayNum;
    (this->TangentsZ).ArrayMax = (param_1->TangentsZ).ArrayMax;
    (param_1->TangentsZ).ArrayNum = 0;
    (param_1->TangentsZ).ArrayMax = 0;
  }
  pTVar5 = &param_1->Colors;
  pTVar6 = &this->Colors;
  if (pTVar6 != pTVar5) {
    pFVar15 = (pTVar6->AllocatorInstance).Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Colors).ArrayNum = (param_1->Colors).ArrayNum;
    (this->Colors).ArrayMax = (param_1->Colors).ArrayMax;
    (param_1->Colors).ArrayNum = 0;
    (param_1->Colors).ArrayMax = 0;
  }
  pTVar7 = &param_1->ImportedVertexNumbers;
  pTVar8 = &this->ImportedVertexNumbers;
  if (pTVar8 != pTVar7) {
    pFVar15 = (pTVar8->AllocatorInstance).Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ImportedVertexNumbers).ArrayNum = (param_1->ImportedVertexNumbers).ArrayNum;
    (this->ImportedVertexNumbers).ArrayMax = (param_1->ImportedVertexNumbers).ArrayMax;
    (param_1->ImportedVertexNumbers).ArrayNum = 0;
    (param_1->ImportedVertexNumbers).ArrayMax = 0;
  }
  pTVar9 = &param_1->MotionVectors;
  pTVar10 = &this->MotionVectors;
  if (pTVar10 != pTVar9) {
    pFVar15 = (pTVar10->AllocatorInstance).Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    (pTVar10->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->MotionVectors).ArrayNum = (param_1->MotionVectors).ArrayNum;
    (this->MotionVectors).ArrayMax = (param_1->MotionVectors).ArrayMax;
    (param_1->MotionVectors).ArrayNum = 0;
    (param_1->MotionVectors).ArrayMax = 0;
  }
  pTVar11 = &param_1->BatchesInfo;
  pTVar12 = &this->BatchesInfo;
  if (pTVar12 != pTVar11) {
    pFVar15 = (pTVar12->AllocatorInstance).Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    (pTVar12->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
    (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->BatchesInfo).ArrayNum = (param_1->BatchesInfo).ArrayNum;
    (this->BatchesInfo).ArrayMax = (param_1->BatchesInfo).ArrayMax;
    (param_1->BatchesInfo).ArrayNum = 0;
    (param_1->BatchesInfo).ArrayMax = 0;
  }
  uVar16 = *(undefined8 *)((longlong)&(param_1->BoundingBox).Min.field0_0x0 + 8);
  pTVar7 = &param_1->Indices;
  pTVar8 = &this->Indices;
  *(undefined8 *)&(this->BoundingBox).Min.field0_0x0 =
       *(undefined8 *)&(param_1->BoundingBox).Min.field0_0x0;
  *(undefined8 *)((longlong)&(this->BoundingBox).Min.field0_0x0 + 8) = uVar16;
  *(undefined8 *)((longlong)&(this->BoundingBox).Max.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_1->BoundingBox).Max.field0_0x0 + 4);
  uVar17 = (param_1->BoundingBox).Pad[0];
  uVar18 = (param_1->BoundingBox).Pad[1];
  uVar19 = (param_1->BoundingBox).Pad[2];
  (this->BoundingBox).IsValid = (param_1->BoundingBox).IsValid;
  (this->BoundingBox).Pad[0] = uVar17;
  (this->BoundingBox).Pad[1] = uVar18;
  (this->BoundingBox).Pad[2] = uVar19;
  if (pTVar8 != pTVar7) {
    pFVar15 = (pTVar8->AllocatorInstance).Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Indices).ArrayNum = (param_1->Indices).ArrayNum;
    (this->Indices).ArrayMax = (param_1->Indices).ArrayMax;
    (param_1->Indices).ArrayNum = 0;
    (param_1->Indices).ArrayMax = 0;
  }
  bVar20 = (param_1->VertexInfo).bHasTangentZ;
  bVar21 = (param_1->VertexInfo).bHasUV0;
  bVar22 = (param_1->VertexInfo).bHasColor0;
  bVar23 = (param_1->VertexInfo).bHasMotionVectors;
  bVar24 = (param_1->VertexInfo).bHasImportedVertexNumbers;
  bVar25 = (param_1->VertexInfo).bConstantUV0;
  bVar26 = (param_1->VertexInfo).bConstantColor0;
  pTVar13 = &param_1->TempBytes;
  (this->VertexInfo).bHasTangentX = (param_1->VertexInfo).bHasTangentX;
  (this->VertexInfo).bHasTangentZ = bVar20;
  (this->VertexInfo).bHasUV0 = bVar21;
  (this->VertexInfo).bHasColor0 = bVar22;
  (this->VertexInfo).bHasMotionVectors = bVar23;
  (this->VertexInfo).bHasImportedVertexNumbers = bVar24;
  (this->VertexInfo).bConstantUV0 = bVar25;
  (this->VertexInfo).bConstantColor0 = bVar26;
  pTVar14 = &this->TempBytes;
  (this->VertexInfo).bConstantIndices = (param_1->VertexInfo).bConstantIndices;
  if (pTVar14 != pTVar13) {
    pFVar15 = (pTVar14->AllocatorInstance).Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    (pTVar14->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TempBytes).ArrayNum = (param_1->TempBytes).ArrayNum;
    (this->TempBytes).ArrayMax = (param_1->TempBytes).ArrayMax;
    (param_1->TempBytes).ArrayNum = 0;
    (param_1->TempBytes).ArrayMax = 0;
  }
  this->Hash = param_1->Hash;
  return this;
}


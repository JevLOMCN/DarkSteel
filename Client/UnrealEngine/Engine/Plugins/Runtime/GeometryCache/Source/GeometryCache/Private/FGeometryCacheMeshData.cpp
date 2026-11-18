// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 7

// StaticStruct @ 14c9ff910

UScriptStruct * __cdecl FGeometryCacheMeshData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCacheMeshData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCache();
    Z_Registration_Info_UScriptStruct_FGeometryCacheMeshData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCacheMeshData,(UObject *)pUVar1,
                         L"GeometryCacheMeshData");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCacheMeshData.OuterSingleton;
}

// FGeometryCacheMeshData @ 14ca05b20

FGeometryCacheMeshData * __thiscall
FGeometryCacheMeshData::FGeometryCacheMeshData
          (FGeometryCacheMeshData *this,FGeometryCacheMeshData *param_1)

{
  undefined8 uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  
  (this->Positions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Positions).AllocatorInstance.Data = (param_1->Positions).AllocatorInstance.Data;
  (param_1->Positions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Positions).ArrayNum = (param_1->Positions).ArrayNum;
  (this->Positions).ArrayMax = (param_1->Positions).ArrayMax;
  (param_1->Positions).ArrayNum = 0;
  (param_1->Positions).ArrayMax = 0;
  (this->TextureCoordinates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureCoordinates).AllocatorInstance.Data =
       (param_1->TextureCoordinates).AllocatorInstance.Data;
  (param_1->TextureCoordinates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureCoordinates).ArrayNum = (param_1->TextureCoordinates).ArrayNum;
  (this->TextureCoordinates).ArrayMax = (param_1->TextureCoordinates).ArrayMax;
  (param_1->TextureCoordinates).ArrayNum = 0;
  (param_1->TextureCoordinates).ArrayMax = 0;
  (this->TangentsX).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TangentsX).AllocatorInstance.Data = (param_1->TangentsX).AllocatorInstance.Data;
  (param_1->TangentsX).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TangentsX).ArrayNum = (param_1->TangentsX).ArrayNum;
  (this->TangentsX).ArrayMax = (param_1->TangentsX).ArrayMax;
  (param_1->TangentsX).ArrayNum = 0;
  (param_1->TangentsX).ArrayMax = 0;
  (this->TangentsZ).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TangentsZ).AllocatorInstance.Data = (param_1->TangentsZ).AllocatorInstance.Data;
  (param_1->TangentsZ).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TangentsZ).ArrayNum = (param_1->TangentsZ).ArrayNum;
  (this->TangentsZ).ArrayMax = (param_1->TangentsZ).ArrayMax;
  (param_1->TangentsZ).ArrayNum = 0;
  (param_1->TangentsZ).ArrayMax = 0;
  (this->Colors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Colors).AllocatorInstance.Data = (param_1->Colors).AllocatorInstance.Data;
  (param_1->Colors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Colors).ArrayNum = (param_1->Colors).ArrayNum;
  (this->Colors).ArrayMax = (param_1->Colors).ArrayMax;
  (param_1->Colors).ArrayNum = 0;
  (param_1->Colors).ArrayMax = 0;
  (this->ImportedVertexNumbers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportedVertexNumbers).AllocatorInstance.Data =
       (param_1->ImportedVertexNumbers).AllocatorInstance.Data;
  (param_1->ImportedVertexNumbers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportedVertexNumbers).ArrayNum = (param_1->ImportedVertexNumbers).ArrayNum;
  (this->ImportedVertexNumbers).ArrayMax = (param_1->ImportedVertexNumbers).ArrayMax;
  (param_1->ImportedVertexNumbers).ArrayNum = 0;
  (param_1->ImportedVertexNumbers).ArrayMax = 0;
  (this->MotionVectors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MotionVectors).AllocatorInstance.Data = (param_1->MotionVectors).AllocatorInstance.Data;
  (param_1->MotionVectors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MotionVectors).ArrayNum = (param_1->MotionVectors).ArrayNum;
  (this->MotionVectors).ArrayMax = (param_1->MotionVectors).ArrayMax;
  (param_1->MotionVectors).ArrayNum = 0;
  (param_1->MotionVectors).ArrayMax = 0;
  (this->BatchesInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BatchesInfo).AllocatorInstance.Data = (param_1->BatchesInfo).AllocatorInstance.Data;
  (param_1->BatchesInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BatchesInfo).ArrayNum = (param_1->BatchesInfo).ArrayNum;
  (this->BatchesInfo).ArrayMax = (param_1->BatchesInfo).ArrayMax;
  (param_1->BatchesInfo).ArrayNum = 0;
  (param_1->BatchesInfo).ArrayMax = 0;
  uVar1 = *(undefined8 *)((longlong)&(param_1->BoundingBox).Min.field0_0x0 + 8);
  *(undefined8 *)&(this->BoundingBox).Min.field0_0x0 =
       *(undefined8 *)&(param_1->BoundingBox).Min.field0_0x0;
  *(undefined8 *)((longlong)&(this->BoundingBox).Min.field0_0x0 + 8) = uVar1;
  *(undefined8 *)((longlong)&(this->BoundingBox).Max.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_1->BoundingBox).Max.field0_0x0 + 4);
  uVar2 = (param_1->BoundingBox).Pad[0];
  uVar3 = (param_1->BoundingBox).Pad[1];
  uVar4 = (param_1->BoundingBox).Pad[2];
  (this->BoundingBox).IsValid = (param_1->BoundingBox).IsValid;
  (this->BoundingBox).Pad[0] = uVar2;
  (this->BoundingBox).Pad[1] = uVar3;
  (this->BoundingBox).Pad[2] = uVar4;
  (this->Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Indices).AllocatorInstance.Data = (param_1->Indices).AllocatorInstance.Data;
  (param_1->Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Indices).ArrayNum = (param_1->Indices).ArrayNum;
  (this->Indices).ArrayMax = (param_1->Indices).ArrayMax;
  (param_1->Indices).ArrayNum = 0;
  (param_1->Indices).ArrayMax = 0;
  bVar5 = (param_1->VertexInfo).bHasTangentZ;
  bVar6 = (param_1->VertexInfo).bHasUV0;
  bVar7 = (param_1->VertexInfo).bHasColor0;
  bVar8 = (param_1->VertexInfo).bHasMotionVectors;
  bVar9 = (param_1->VertexInfo).bHasImportedVertexNumbers;
  bVar10 = (param_1->VertexInfo).bConstantUV0;
  bVar11 = (param_1->VertexInfo).bConstantColor0;
  (this->VertexInfo).bHasTangentX = (param_1->VertexInfo).bHasTangentX;
  (this->VertexInfo).bHasTangentZ = bVar5;
  (this->VertexInfo).bHasUV0 = bVar6;
  (this->VertexInfo).bHasColor0 = bVar7;
  (this->VertexInfo).bHasMotionVectors = bVar8;
  (this->VertexInfo).bHasImportedVertexNumbers = bVar9;
  (this->VertexInfo).bConstantUV0 = bVar10;
  (this->VertexInfo).bConstantColor0 = bVar11;
  (this->VertexInfo).bConstantIndices = (param_1->VertexInfo).bConstantIndices;
  (this->TempBytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TempBytes).AllocatorInstance.Data = (param_1->TempBytes).AllocatorInstance.Data;
  (param_1->TempBytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TempBytes).ArrayNum = (param_1->TempBytes).ArrayNum;
  (this->TempBytes).ArrayMax = (param_1->TempBytes).ArrayMax;
  (param_1->TempBytes).ArrayNum = 0;
  (param_1->TempBytes).ArrayMax = 0;
  this->Hash = param_1->Hash;
  return this;
}

// FGeometryCacheMeshData @ 14ca05d00

FGeometryCacheMeshData * __thiscall
FGeometryCacheMeshData::FGeometryCacheMeshData
          (FGeometryCacheMeshData *this,FGeometryCacheMeshData *param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FGeometryCacheMeshBatchInfo,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined8 uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  
  piVar1 = &(this->Positions).ArrayMax;
  (this->Positions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar9 = (param_1->Positions).ArrayNum;
  pFVar10 = (param_1->Positions).AllocatorInstance.Data;
  (this->Positions).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar9,0,(ForAnyElementType *)this,iVar9,piVar1);
    memcpy((this->Positions).AllocatorInstance.Data,pFVar10,(longlong)iVar9 * 0xc);
  }
  pTVar2 = &this->TextureCoordinates;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->TextureCoordinates).ArrayMax;
  iVar9 = (param_1->TextureCoordinates).ArrayNum;
  pFVar10 = (param_1->TextureCoordinates).AllocatorInstance.Data;
  (this->TextureCoordinates).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar9,0,&pTVar2->AllocatorInstance,iVar9,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar10,(longlong)iVar9 << 3);
  }
  pTVar3 = &this->TangentsX;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->TangentsX).ArrayMax;
  iVar9 = (param_1->TangentsX).ArrayNum;
  pFVar10 = (param_1->TangentsX).AllocatorInstance.Data;
  (this->TangentsX).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar9,0,&pTVar3->AllocatorInstance,iVar9,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar10,(longlong)iVar9 << 2);
  }
  pTVar3 = &this->TangentsZ;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->TangentsZ).ArrayMax;
  iVar9 = (param_1->TangentsZ).ArrayNum;
  pFVar10 = (param_1->TangentsZ).AllocatorInstance.Data;
  (this->TangentsZ).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar9,0,&pTVar3->AllocatorInstance,iVar9,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar10,(longlong)iVar9 << 2);
  }
  pTVar4 = &this->Colors;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Colors).ArrayMax;
  iVar9 = (param_1->Colors).ArrayNum;
  pFVar10 = (param_1->Colors).AllocatorInstance.Data;
  (this->Colors).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar9,0,&pTVar4->AllocatorInstance,iVar9,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar10,(longlong)iVar9 << 2);
  }
  pTVar5 = &this->ImportedVertexNumbers;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ImportedVertexNumbers).ArrayMax;
  iVar9 = (param_1->ImportedVertexNumbers).ArrayNum;
  pFVar10 = (param_1->ImportedVertexNumbers).AllocatorInstance.Data;
  (this->ImportedVertexNumbers).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar9,0,&pTVar5->AllocatorInstance,iVar9,piVar1);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar10,(longlong)iVar9 << 2);
  }
  pTVar6 = &this->MotionVectors;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->MotionVectors).ArrayMax;
  iVar9 = (param_1->MotionVectors).ArrayNum;
  pFVar10 = (param_1->MotionVectors).AllocatorInstance.Data;
  (this->MotionVectors).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar9,0,&pTVar6->AllocatorInstance,iVar9,piVar1);
    memcpy((pTVar6->AllocatorInstance).Data,pFVar10,(longlong)iVar9 * 0xc);
  }
  pTVar7 = &this->BatchesInfo;
  (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->BatchesInfo).ArrayMax;
  iVar9 = (param_1->BatchesInfo).ArrayNum;
  pFVar10 = (param_1->BatchesInfo).AllocatorInstance.Data;
  (this->BatchesInfo).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar9,0,&pTVar7->AllocatorInstance,iVar9,piVar1);
    memcpy((pTVar7->AllocatorInstance).Data,pFVar10,(longlong)iVar9 * 0xc);
  }
  uVar11 = *(undefined8 *)((longlong)&(param_1->BoundingBox).Min.field0_0x0 + 8);
  pTVar5 = &this->Indices;
  *(undefined8 *)&(this->BoundingBox).Min.field0_0x0 =
       *(undefined8 *)&(param_1->BoundingBox).Min.field0_0x0;
  *(undefined8 *)((longlong)&(this->BoundingBox).Min.field0_0x0 + 8) = uVar11;
  *(undefined8 *)((longlong)&(this->BoundingBox).Max.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_1->BoundingBox).Max.field0_0x0 + 4);
  uVar12 = (param_1->BoundingBox).Pad[0];
  uVar13 = (param_1->BoundingBox).Pad[1];
  uVar14 = (param_1->BoundingBox).Pad[2];
  (this->BoundingBox).IsValid = (param_1->BoundingBox).IsValid;
  (this->BoundingBox).Pad[0] = uVar12;
  (this->BoundingBox).Pad[1] = uVar13;
  (this->BoundingBox).Pad[2] = uVar14;
  piVar1 = &(this->Indices).ArrayMax;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar9 = (param_1->Indices).ArrayNum;
  pFVar10 = (param_1->Indices).AllocatorInstance.Data;
  (this->Indices).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar9,0,&pTVar5->AllocatorInstance,iVar9,piVar1);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar10,(longlong)iVar9 << 2);
  }
  bVar15 = (param_1->VertexInfo).bHasTangentZ;
  bVar16 = (param_1->VertexInfo).bHasUV0;
  bVar17 = (param_1->VertexInfo).bHasColor0;
  bVar18 = (param_1->VertexInfo).bHasMotionVectors;
  bVar19 = (param_1->VertexInfo).bHasImportedVertexNumbers;
  bVar20 = (param_1->VertexInfo).bConstantUV0;
  bVar21 = (param_1->VertexInfo).bConstantColor0;
  pTVar8 = &this->TempBytes;
  (this->VertexInfo).bHasTangentX = (param_1->VertexInfo).bHasTangentX;
  (this->VertexInfo).bHasTangentZ = bVar15;
  (this->VertexInfo).bHasUV0 = bVar16;
  (this->VertexInfo).bHasColor0 = bVar17;
  (this->VertexInfo).bHasMotionVectors = bVar18;
  (this->VertexInfo).bHasImportedVertexNumbers = bVar19;
  (this->VertexInfo).bConstantUV0 = bVar20;
  (this->VertexInfo).bConstantColor0 = bVar21;
  (this->VertexInfo).bConstantIndices = (param_1->VertexInfo).bConstantIndices;
  piVar1 = &(this->TempBytes).ArrayMax;
  (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar9 = (param_1->TempBytes).ArrayNum;
  pFVar10 = (param_1->TempBytes).AllocatorInstance.Data;
  (this->TempBytes).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar9,0,&pTVar8->AllocatorInstance,iVar9,piVar1);
    memcpy((pTVar8->AllocatorInstance).Data,pFVar10,(longlong)iVar9);
  }
  this->Hash = param_1->Hash;
  return this;
}

// ~FGeometryCacheMeshData @ 14ca08c10

void __thiscall FGeometryCacheMeshData::~FGeometryCacheMeshData(FGeometryCacheMeshData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TempBytes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Indices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BatchesInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MotionVectors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ImportedVertexNumbers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Colors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TangentsZ).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TangentsX).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextureCoordinates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Positions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14ca09a30

FGeometryCacheMeshData * __thiscall
FGeometryCacheMeshData::operator=(FGeometryCacheMeshData *this,FGeometryCacheMeshData *param_1)

{
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FGeometryCacheMeshBatchInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined8 uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Positions,&param_1->Positions);
  pTVar1 = &this->TextureCoordinates;
  if (pTVar1 != &param_1->TextureCoordinates) {
    iVar5 = (param_1->TextureCoordinates).ArrayNum;
    piVar2 = &(this->TextureCoordinates).ArrayMax;
    pFVar6 = (param_1->TextureCoordinates).AllocatorInstance.Data;
    (this->TextureCoordinates).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar5,*piVar2,&pTVar1->AllocatorInstance,iVar5,piVar2);
      if (iVar5 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 3);
      }
    }
  }
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_>::operator=(&this->TangentsX,&param_1->TangentsX)
  ;
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_>::operator=(&this->TangentsZ,&param_1->TangentsZ)
  ;
  pTVar3 = &this->Colors;
  if (pTVar3 != &param_1->Colors) {
    iVar5 = (param_1->Colors).ArrayNum;
    piVar2 = &(this->Colors).ArrayMax;
    pFVar6 = (param_1->Colors).AllocatorInstance.Data;
    (this->Colors).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar5,*piVar2,&pTVar3->AllocatorInstance,iVar5,piVar2);
      if (iVar5 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
      }
    }
  }
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            (&this->ImportedVertexNumbers,&param_1->ImportedVertexNumbers);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->MotionVectors,&param_1->MotionVectors);
  pTVar4 = &this->BatchesInfo;
  if (pTVar4 != &param_1->BatchesInfo) {
    iVar5 = (param_1->BatchesInfo).ArrayNum;
    piVar2 = &(this->BatchesInfo).ArrayMax;
    pFVar6 = (param_1->BatchesInfo).AllocatorInstance.Data;
    (this->BatchesInfo).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar5,*piVar2,&pTVar4->AllocatorInstance,iVar5,piVar2);
      if (iVar5 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0xc);
      }
    }
  }
  uVar7 = *(undefined8 *)((longlong)&(param_1->BoundingBox).Min.field0_0x0 + 8);
  *(undefined8 *)&(this->BoundingBox).Min.field0_0x0 =
       *(undefined8 *)&(param_1->BoundingBox).Min.field0_0x0;
  *(undefined8 *)((longlong)&(this->BoundingBox).Min.field0_0x0 + 8) = uVar7;
  *(undefined8 *)((longlong)&(this->BoundingBox).Max.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_1->BoundingBox).Max.field0_0x0 + 4);
  uVar8 = (param_1->BoundingBox).Pad[0];
  uVar9 = (param_1->BoundingBox).Pad[1];
  uVar10 = (param_1->BoundingBox).Pad[2];
  (this->BoundingBox).IsValid = (param_1->BoundingBox).IsValid;
  (this->BoundingBox).Pad[0] = uVar8;
  (this->BoundingBox).Pad[1] = uVar9;
  (this->BoundingBox).Pad[2] = uVar10;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=(&this->Indices,&param_1->Indices);
  bVar11 = (param_1->VertexInfo).bHasTangentZ;
  bVar12 = (param_1->VertexInfo).bHasUV0;
  bVar13 = (param_1->VertexInfo).bHasColor0;
  bVar14 = (param_1->VertexInfo).bHasMotionVectors;
  bVar15 = (param_1->VertexInfo).bHasImportedVertexNumbers;
  bVar16 = (param_1->VertexInfo).bConstantUV0;
  bVar17 = (param_1->VertexInfo).bConstantColor0;
  (this->VertexInfo).bHasTangentX = (param_1->VertexInfo).bHasTangentX;
  (this->VertexInfo).bHasTangentZ = bVar11;
  (this->VertexInfo).bHasUV0 = bVar12;
  (this->VertexInfo).bHasColor0 = bVar13;
  (this->VertexInfo).bHasMotionVectors = bVar14;
  (this->VertexInfo).bHasImportedVertexNumbers = bVar15;
  (this->VertexInfo).bConstantUV0 = bVar16;
  (this->VertexInfo).bConstantColor0 = bVar17;
  (this->VertexInfo).bConstantIndices = (param_1->VertexInfo).bConstantIndices;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=(&this->TempBytes,&param_1->TempBytes)
  ;
  this->Hash = param_1->Hash;
  return this;
}

// GetHash @ 14ca1dbd0

ulong64 __thiscall FGeometryCacheMeshData::GetHash(FGeometryCacheMeshData *this)

{
  int iVar1;
  ulong64 uVar2;
  
  uVar2 = this->Hash;
  if (uVar2 == 0) {
    iVar1 = (this->Positions).ArrayNum;
    if (0 < iVar1) {
      uVar2 = CityHash64((char *)(this->Positions).AllocatorInstance.Data,iVar1 * 0xc);
      this->Hash = uVar2;
    }
    iVar1 = (this->TextureCoordinates).ArrayNum;
    if (0 < iVar1) {
      uVar2 = CityHash64WithSeed((char *)(this->TextureCoordinates).AllocatorInstance.Data,iVar1 * 8
                                 ,uVar2);
      this->Hash = uVar2;
    }
    iVar1 = (this->TangentsZ).ArrayNum;
    if (0 < iVar1) {
      uVar2 = CityHash64WithSeed((char *)(this->TangentsZ).AllocatorInstance.Data,iVar1 * 4,uVar2);
      this->Hash = uVar2;
    }
    iVar1 = (this->BatchesInfo).ArrayNum;
    if (0 < iVar1) {
      uVar2 = CityHash64WithSeed((char *)(this->BatchesInfo).AllocatorInstance.Data,iVar1 * 0xc,
                                 uVar2);
      this->Hash = uVar2;
    }
  }
  return uVar2;
}

// GetResourceSizeEx @ 14ca1f010

void __thiscall
FGeometryCacheMeshData::GetResourceSizeEx(FGeometryCacheMeshData *this,FResourceSizeEx *param_1)

{
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)(this->Positions).ArrayNum * 0xc);
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)(this->TextureCoordinates).ArrayNum << 3)
  ;
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)(this->TangentsX).ArrayNum << 2);
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)(this->TangentsZ).ArrayNum << 2);
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)(this->Colors).ArrayNum << 2);
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)(this->MotionVectors).ArrayNum * 0xc);
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)(this->BatchesInfo).ArrayNum * 0xc);
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,0x10);
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,0x10);
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,0x10);
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,0x10);
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,0x10);
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,0x10);
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,0x1c);
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)(this->Indices).ArrayNum << 2);
  FResourceSizeEx::AddUnknownMemoryBytes
            (param_1,(longlong)(this->ImportedVertexNumbers).ArrayNum << 2);
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,0x10);
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,9);
  return;
}


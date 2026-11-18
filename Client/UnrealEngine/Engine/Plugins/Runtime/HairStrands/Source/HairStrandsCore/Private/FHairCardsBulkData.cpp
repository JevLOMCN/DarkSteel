// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// FHairCardsBulkData @ 14dfabd60

FHairCardsBulkData * __thiscall
FHairCardsBulkData::FHairCardsBulkData(FHairCardsBulkData *this,FHairCardsBulkData *param_1)

{
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uint uVar15;
  bool bVar16;
  undefined3 uVar17;
  
  pTVar1 = &this->Positions;
  this->DepthTexture = param_1->DepthTexture;
  this->TangentTexture = param_1->TangentTexture;
  this->CoverageTexture = param_1->CoverageTexture;
  this->AttributeTexture = param_1->AttributeTexture;
  piVar2 = &(this->Positions).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->Positions).ArrayNum;
  pFVar6 = (param_1->Positions).AllocatorInstance.Data;
  (this->Positions).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 4);
  }
  pTVar3 = &this->Normals;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Normals).ArrayMax;
  iVar5 = (param_1->Normals).ArrayNum;
  pFVar6 = (param_1->Normals).AllocatorInstance.Data;
  (this->Normals).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar1 = &this->UVs;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->UVs).ArrayMax;
  iVar5 = (param_1->UVs).ArrayNum;
  pFVar6 = (param_1->UVs).AllocatorInstance.Data;
  (this->UVs).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 4);
  }
  pTVar4 = &this->Materials;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Materials).ArrayMax;
  iVar5 = (param_1->Materials).ArrayNum;
  pFVar6 = (param_1->Materials).AllocatorInstance.Data;
  (this->Materials).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar4 = &this->VertexColors;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->VertexColors).ArrayMax;
  iVar5 = (param_1->VertexColors).ArrayNum;
  pFVar6 = (param_1->VertexColors).AllocatorInstance.Data;
  (this->VertexColors).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar4 = &this->Indices;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Indices).ArrayMax;
  iVar5 = (param_1->Indices).ArrayNum;
  pFVar6 = (param_1->Indices).AllocatorInstance.Data;
  (this->Indices).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  dVar7 = (param_1->Header).BoundingBox.Min.field0_0x0._s_0.Y;
  (this->Header).BoundingBox.Min.field0_0x0._s_0.X =
       (param_1->Header).BoundingBox.Min.field0_0x0._s_0.X;
  (this->Header).BoundingBox.Min.field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->Header).BoundingBox.Max.field0_0x0._s_0.X;
  (this->Header).BoundingBox.Min.field0_0x0._s_0.Z =
       (param_1->Header).BoundingBox.Min.field0_0x0._s_0.Z;
  (this->Header).BoundingBox.Max.field0_0x0._s_0.X = dVar7;
  dVar7 = (param_1->Header).BoundingBox.Max.field0_0x0._s_0.Z;
  (this->Header).BoundingBox.Max.field0_0x0._s_0.Y =
       (param_1->Header).BoundingBox.Max.field0_0x0._s_0.Y;
  (this->Header).BoundingBox.Max.field0_0x0._s_0.Z = dVar7;
  uVar8 = (param_1->Header).BoundingBox.Pad[0];
  uVar9 = (param_1->Header).BoundingBox.Pad[1];
  uVar10 = (param_1->Header).BoundingBox.Pad[2];
  uVar11 = (param_1->Header).BoundingBox.Pad[3];
  uVar12 = (param_1->Header).BoundingBox.Pad[4];
  uVar13 = (param_1->Header).BoundingBox.Pad[5];
  uVar14 = (param_1->Header).BoundingBox.Pad[6];
  uVar15 = (param_1->Header).NumUVs;
  bVar16 = (param_1->Header).bVertexColor;
  uVar17 = *(undefined3 *)&(param_1->Header).field_0x3d;
  (this->Header).BoundingBox.IsValid = (param_1->Header).BoundingBox.IsValid;
  (this->Header).BoundingBox.Pad[0] = uVar8;
  (this->Header).BoundingBox.Pad[1] = uVar9;
  (this->Header).BoundingBox.Pad[2] = uVar10;
  (this->Header).BoundingBox.Pad[3] = uVar11;
  (this->Header).BoundingBox.Pad[4] = uVar12;
  (this->Header).BoundingBox.Pad[5] = uVar13;
  (this->Header).BoundingBox.Pad[6] = uVar14;
  (this->Header).NumUVs = uVar15;
  (this->Header).bVertexColor = bVar16;
  *(undefined3 *)&(this->Header).field_0x3d = uVar17;
  return this;
}

// ~FHairCardsBulkData @ 14dfb0520

void __thiscall FHairCardsBulkData::~FHairCardsBulkData(FHairCardsBulkData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Indices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VertexColors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UVs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Normals).AllocatorInstance.Data;
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

// Serialize @ 14e0ac170

void __thiscall FHairCardsBulkData::Serialize(FHairCardsBulkData *this,FArchive *param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  TArrayPrivateFriend::Serialize<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>
            (param_1,&this->Positions);
  TArrayPrivateFriend::Serialize<FPackedNormal,TSizedDefaultAllocator<32>_>(param_1,&this->Normals);
  TArrayPrivateFriend::Serialize<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>
            (param_1,&this->UVs);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>(param_1,&this->Materials)
  ;
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&this->VertexColors);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>(param_1,&this->Indices);
  UE::Math::operator<<(param_1,&(this->Header).BoundingBox);
  puVar1 = &(this->Header).NumUVs;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&(this->Header).bVertexColor);
  return;
}


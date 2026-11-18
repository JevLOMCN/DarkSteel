// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// FHairMeshesBulkData @ 14dfad490

FHairMeshesBulkData * __thiscall
FHairMeshesBulkData::FHairMeshesBulkData(FHairMeshesBulkData *this,FHairMeshesBulkData *param_1)

{
  int *piVar1;
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar3;
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
  
  piVar1 = &(this->Positions).ArrayMax;
  (this->Positions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->Positions).ArrayNum;
  pFVar6 = (param_1->Positions).AllocatorInstance.Data;
  (this->Positions).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,iVar5,0,(ForAnyElementType *)this,iVar5,piVar1);
    memcpy((this->Positions).AllocatorInstance.Data,pFVar6,(longlong)iVar5 << 4);
  }
  pTVar2 = &this->Normals;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Normals).ArrayMax;
  iVar5 = (param_1->Normals).ArrayNum;
  pFVar6 = (param_1->Normals).AllocatorInstance.Data;
  (this->Normals).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar3 = &this->UVs;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->UVs).ArrayMax;
  iVar5 = (param_1->UVs).ArrayNum;
  pFVar6 = (param_1->UVs).AllocatorInstance.Data;
  (this->UVs).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 4);
  }
  pTVar4 = &this->VertexColors;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->VertexColors).ArrayMax;
  iVar5 = (param_1->VertexColors).ArrayNum;
  pFVar6 = (param_1->VertexColors).AllocatorInstance.Data;
  (this->VertexColors).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar4 = &this->Indices;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Indices).ArrayMax;
  iVar5 = (param_1->Indices).ArrayNum;
  pFVar6 = (param_1->Indices).AllocatorInstance.Data;
  (this->Indices).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar1);
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

// Serialize @ 14e0ac390

void __thiscall FHairMeshesBulkData::Serialize(FHairMeshesBulkData *this,FArchive *param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  TArrayPrivateFriend::Serialize<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>
            (param_1,&this->Positions);
  TArrayPrivateFriend::Serialize<FPackedNormal,TSizedDefaultAllocator<32>_>(param_1,&this->Normals);
  TArrayPrivateFriend::Serialize<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>
            (param_1,&this->UVs);
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


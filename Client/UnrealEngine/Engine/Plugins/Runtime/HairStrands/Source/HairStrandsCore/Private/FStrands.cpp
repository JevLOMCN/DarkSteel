// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 8

// FStrands @ 14dfaec20

FStrands * __thiscall FHairGroupPlatformData::FStrands::FStrands(FStrands *this)

{
  FHairStrandsInterpolationBulkData *pFVar1;
  FHairStrandsClusterBulkData *pFVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  
  FHairStrandsBulkData::FHairStrandsBulkData(&this->BulkData);
  (this->InterpolationBulkData).Header.Flags = 0;
  (this->InterpolationBulkData).Header.PointCount = 0;
  (this->InterpolationBulkData).Header.CurveCount = 0;
  (this->InterpolationBulkData).Header.Strides.CurveInterpolationStride = 0;
  (this->InterpolationBulkData).Header.Strides.PointInterpolationStride = 0;
  *(undefined8 *)&(this->InterpolationBulkData).Data.CurveInterpolation.Data = 0;
  (this->InterpolationBulkData)._padding_ = (longlong)&___7FHairStrandsInterpolationBulkData__6B_;
  (this->InterpolationBulkData).Data.CurveInterpolation.LoadedSize = 0;
  *(undefined8 *)&(this->InterpolationBulkData).Data.CurveInterpolation.Data.field_0x8 = 0;
  *(undefined8 *)&(this->InterpolationBulkData).Data.CurveInterpolation.Data.field_0x10 = 0;
  *(undefined4 *)&(this->InterpolationBulkData).Data.CurveInterpolation.Data.field_0xd = 0xffffffff;
  (this->InterpolationBulkData).Data.CurveInterpolation.Data.field_0x11 = 0xff;
  pFVar1 = &this->InterpolationBulkData;
  uVar3 = FIoChunkId::InvalidChunkId.Id[1];
  uVar4 = FIoChunkId::InvalidChunkId.Id[2];
  uVar5 = FIoChunkId::InvalidChunkId.Id[3];
  uVar6 = FIoChunkId::InvalidChunkId.Id[4];
  uVar7 = FIoChunkId::InvalidChunkId.Id[5];
  uVar8 = FIoChunkId::InvalidChunkId.Id[6];
  uVar9 = FIoChunkId::InvalidChunkId.Id[7];
  (pFVar1->Data).CurveInterpolation.Data.field_0x18 = FIoChunkId::InvalidChunkId.Id[0];
  (pFVar1->Data).CurveInterpolation.Data.field_0x19 = uVar3;
  (pFVar1->Data).CurveInterpolation.Data.field_0x1a = uVar4;
  (pFVar1->Data).CurveInterpolation.Data.field_0x1b = uVar5;
  (pFVar1->Data).CurveInterpolation.Data.field_0x1c = uVar6;
  (pFVar1->Data).CurveInterpolation.Data.field_0x1d = uVar7;
  (pFVar1->Data).CurveInterpolation.Data.field_0x1e = uVar8;
  (pFVar1->Data).CurveInterpolation.Data.field_0x1f = uVar9;
  pFVar1 = &this->InterpolationBulkData;
  uVar3 = FIoChunkId::InvalidChunkId.Id[9];
  uVar4 = FIoChunkId::InvalidChunkId.Id[10];
  uVar5 = FIoChunkId::InvalidChunkId.Id[0xb];
  (pFVar1->Data).CurveInterpolation.Data.field_0x20 = FIoChunkId::InvalidChunkId.Id[8];
  (pFVar1->Data).CurveInterpolation.Data.field_0x21 = uVar3;
  (pFVar1->Data).CurveInterpolation.Data.field_0x22 = uVar4;
  (pFVar1->Data).CurveInterpolation.Data.field_0x23 = uVar5;
  (this->InterpolationBulkData).Data.CurveInterpolation.ChunkRequest = (FChunk *)0x0;
  *(undefined8 *)&(this->InterpolationBulkData).Data.PointInterpolation.Data = 0;
  (this->InterpolationBulkData).Data.PointInterpolation.LoadedSize = 0;
  *(undefined8 *)&(this->InterpolationBulkData).Data.PointInterpolation.Data.field_0x8 = 0;
  *(undefined8 *)&(this->InterpolationBulkData).Data.PointInterpolation.Data.field_0x10 = 0;
  *(undefined4 *)&(this->InterpolationBulkData).Data.PointInterpolation.Data.field_0xd = 0xffffffff;
  (this->InterpolationBulkData).Data.PointInterpolation.Data.field_0x11 = 0xff;
  pFVar1 = &this->InterpolationBulkData;
  uVar3 = FIoChunkId::InvalidChunkId.Id[1];
  uVar4 = FIoChunkId::InvalidChunkId.Id[2];
  uVar5 = FIoChunkId::InvalidChunkId.Id[3];
  uVar6 = FIoChunkId::InvalidChunkId.Id[4];
  uVar7 = FIoChunkId::InvalidChunkId.Id[5];
  uVar8 = FIoChunkId::InvalidChunkId.Id[6];
  uVar9 = FIoChunkId::InvalidChunkId.Id[7];
  (pFVar1->Data).PointInterpolation.Data.field_0x18 = FIoChunkId::InvalidChunkId.Id[0];
  (pFVar1->Data).PointInterpolation.Data.field_0x19 = uVar3;
  (pFVar1->Data).PointInterpolation.Data.field_0x1a = uVar4;
  (pFVar1->Data).PointInterpolation.Data.field_0x1b = uVar5;
  (pFVar1->Data).PointInterpolation.Data.field_0x1c = uVar6;
  (pFVar1->Data).PointInterpolation.Data.field_0x1d = uVar7;
  (pFVar1->Data).PointInterpolation.Data.field_0x1e = uVar8;
  (pFVar1->Data).PointInterpolation.Data.field_0x1f = uVar9;
  pFVar1 = &this->InterpolationBulkData;
  uVar3 = FIoChunkId::InvalidChunkId.Id[9];
  uVar4 = FIoChunkId::InvalidChunkId.Id[10];
  uVar5 = FIoChunkId::InvalidChunkId.Id[0xb];
  (pFVar1->Data).PointInterpolation.Data.field_0x20 = FIoChunkId::InvalidChunkId.Id[8];
  (pFVar1->Data).PointInterpolation.Data.field_0x21 = uVar3;
  (pFVar1->Data).PointInterpolation.Data.field_0x22 = uVar4;
  (pFVar1->Data).PointInterpolation.Data.field_0x23 = uVar5;
  (this->InterpolationBulkData).Data.PointInterpolation.ChunkRequest = (FChunk *)0x0;
  *(undefined ***)&this->ClusterBulkData = &___7FHairStrandsClusterBulkData__6B_;
  (this->ClusterBulkData).Header.LODInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClusterBulkData).Header.LODInfos.ArrayNum = 0;
  (this->ClusterBulkData).Header.LODInfos.ArrayMax = 0;
  (this->ClusterBulkData).Header.ClusterCount = 0;
  (this->ClusterBulkData).Header.ClusterScale = 0.0;
  (this->ClusterBulkData).Header.PointCount = 0;
  (this->ClusterBulkData).Header.CurveCount = 0;
  *(undefined8 *)&(this->ClusterBulkData).Header.ClusterInfoParameters.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->ClusterBulkData).Header.ClusterInfoParameters.field0_0x0 + 8) =
       0;
  (this->ClusterBulkData).Header.Strides.PackedClusterInfoStride = 0;
  (this->ClusterBulkData).Header.Strides.CurveToClusterIdStride = 0;
  (this->ClusterBulkData).Header.Strides.PointLODStride = 0;
  *(undefined8 *)&(this->ClusterBulkData).Data.PackedClusterInfos.Data = 0;
  (this->ClusterBulkData).Data.PackedClusterInfos.LoadedSize = 0;
  *(undefined8 *)&(this->ClusterBulkData).Data.PackedClusterInfos.Data.field_0x8 = 0;
  *(undefined8 *)&(this->ClusterBulkData).Data.PackedClusterInfos.Data.field_0x10 = 0;
  *(undefined4 *)&(this->ClusterBulkData).Data.PackedClusterInfos.Data.field_0xd = 0xffffffff;
  (this->ClusterBulkData).Data.PackedClusterInfos.Data.field_0x11 = 0xff;
  pFVar2 = &this->ClusterBulkData;
  uVar3 = FIoChunkId::InvalidChunkId.Id[1];
  uVar4 = FIoChunkId::InvalidChunkId.Id[2];
  uVar5 = FIoChunkId::InvalidChunkId.Id[3];
  uVar6 = FIoChunkId::InvalidChunkId.Id[4];
  uVar7 = FIoChunkId::InvalidChunkId.Id[5];
  uVar8 = FIoChunkId::InvalidChunkId.Id[6];
  uVar9 = FIoChunkId::InvalidChunkId.Id[7];
  (pFVar2->Data).PackedClusterInfos.Data.field_0x18 = FIoChunkId::InvalidChunkId.Id[0];
  (pFVar2->Data).PackedClusterInfos.Data.field_0x19 = uVar3;
  (pFVar2->Data).PackedClusterInfos.Data.field_0x1a = uVar4;
  (pFVar2->Data).PackedClusterInfos.Data.field_0x1b = uVar5;
  (pFVar2->Data).PackedClusterInfos.Data.field_0x1c = uVar6;
  (pFVar2->Data).PackedClusterInfos.Data.field_0x1d = uVar7;
  (pFVar2->Data).PackedClusterInfos.Data.field_0x1e = uVar8;
  (pFVar2->Data).PackedClusterInfos.Data.field_0x1f = uVar9;
  pFVar2 = &this->ClusterBulkData;
  uVar3 = FIoChunkId::InvalidChunkId.Id[9];
  uVar4 = FIoChunkId::InvalidChunkId.Id[10];
  uVar5 = FIoChunkId::InvalidChunkId.Id[0xb];
  (pFVar2->Data).PackedClusterInfos.Data.field_0x20 = FIoChunkId::InvalidChunkId.Id[8];
  (pFVar2->Data).PackedClusterInfos.Data.field_0x21 = uVar3;
  (pFVar2->Data).PackedClusterInfos.Data.field_0x22 = uVar4;
  (pFVar2->Data).PackedClusterInfos.Data.field_0x23 = uVar5;
  (this->ClusterBulkData).Data.PackedClusterInfos.ChunkRequest = (FChunk *)0x0;
  *(undefined8 *)&(this->ClusterBulkData).Data.CurveToClusterIds.Data = 0;
  (this->ClusterBulkData).Data.CurveToClusterIds.LoadedSize = 0;
  *(undefined8 *)&(this->ClusterBulkData).Data.CurveToClusterIds.Data.field_0x8 = 0;
  *(undefined8 *)&(this->ClusterBulkData).Data.CurveToClusterIds.Data.field_0x10 = 0;
  *(undefined4 *)&(this->ClusterBulkData).Data.CurveToClusterIds.Data.field_0xd = 0xffffffff;
  (this->ClusterBulkData).Data.CurveToClusterIds.Data.field_0x11 = 0xff;
  pFVar2 = &this->ClusterBulkData;
  uVar3 = FIoChunkId::InvalidChunkId.Id[1];
  uVar4 = FIoChunkId::InvalidChunkId.Id[2];
  uVar5 = FIoChunkId::InvalidChunkId.Id[3];
  uVar6 = FIoChunkId::InvalidChunkId.Id[4];
  uVar7 = FIoChunkId::InvalidChunkId.Id[5];
  uVar8 = FIoChunkId::InvalidChunkId.Id[6];
  uVar9 = FIoChunkId::InvalidChunkId.Id[7];
  (pFVar2->Data).CurveToClusterIds.Data.field_0x18 = FIoChunkId::InvalidChunkId.Id[0];
  (pFVar2->Data).CurveToClusterIds.Data.field_0x19 = uVar3;
  (pFVar2->Data).CurveToClusterIds.Data.field_0x1a = uVar4;
  (pFVar2->Data).CurveToClusterIds.Data.field_0x1b = uVar5;
  (pFVar2->Data).CurveToClusterIds.Data.field_0x1c = uVar6;
  (pFVar2->Data).CurveToClusterIds.Data.field_0x1d = uVar7;
  (pFVar2->Data).CurveToClusterIds.Data.field_0x1e = uVar8;
  (pFVar2->Data).CurveToClusterIds.Data.field_0x1f = uVar9;
  pFVar2 = &this->ClusterBulkData;
  uVar3 = FIoChunkId::InvalidChunkId.Id[9];
  uVar4 = FIoChunkId::InvalidChunkId.Id[10];
  uVar5 = FIoChunkId::InvalidChunkId.Id[0xb];
  (pFVar2->Data).CurveToClusterIds.Data.field_0x20 = FIoChunkId::InvalidChunkId.Id[8];
  (pFVar2->Data).CurveToClusterIds.Data.field_0x21 = uVar3;
  (pFVar2->Data).CurveToClusterIds.Data.field_0x22 = uVar4;
  (pFVar2->Data).CurveToClusterIds.Data.field_0x23 = uVar5;
  (this->ClusterBulkData).Data.CurveToClusterIds.ChunkRequest = (FChunk *)0x0;
  *(undefined8 *)&(this->ClusterBulkData).Data.PointLODs.Data = 0;
  (this->ClusterBulkData).Data.PointLODs.LoadedSize = 0;
  *(undefined8 *)&(this->ClusterBulkData).Data.PointLODs.Data.field_0x8 = 0;
  *(undefined8 *)&(this->ClusterBulkData).Data.PointLODs.Data.field_0x10 = 0;
  *(undefined4 *)&(this->ClusterBulkData).Data.PointLODs.Data.field_0xd = 0xffffffff;
  (this->ClusterBulkData).Data.PointLODs.Data.field_0x11 = 0xff;
  pFVar2 = &this->ClusterBulkData;
  uVar3 = FIoChunkId::InvalidChunkId.Id[1];
  uVar4 = FIoChunkId::InvalidChunkId.Id[2];
  uVar5 = FIoChunkId::InvalidChunkId.Id[3];
  uVar6 = FIoChunkId::InvalidChunkId.Id[4];
  uVar7 = FIoChunkId::InvalidChunkId.Id[5];
  uVar8 = FIoChunkId::InvalidChunkId.Id[6];
  uVar9 = FIoChunkId::InvalidChunkId.Id[7];
  (pFVar2->Data).PointLODs.Data.field_0x18 = FIoChunkId::InvalidChunkId.Id[0];
  (pFVar2->Data).PointLODs.Data.field_0x19 = uVar3;
  (pFVar2->Data).PointLODs.Data.field_0x1a = uVar4;
  (pFVar2->Data).PointLODs.Data.field_0x1b = uVar5;
  (pFVar2->Data).PointLODs.Data.field_0x1c = uVar6;
  (pFVar2->Data).PointLODs.Data.field_0x1d = uVar7;
  (pFVar2->Data).PointLODs.Data.field_0x1e = uVar8;
  (pFVar2->Data).PointLODs.Data.field_0x1f = uVar9;
  pFVar2 = &this->ClusterBulkData;
  uVar3 = FIoChunkId::InvalidChunkId.Id[9];
  uVar4 = FIoChunkId::InvalidChunkId.Id[10];
  uVar5 = FIoChunkId::InvalidChunkId.Id[0xb];
  (pFVar2->Data).PointLODs.Data.field_0x20 = FIoChunkId::InvalidChunkId.Id[8];
  (pFVar2->Data).PointLODs.Data.field_0x21 = uVar3;
  (pFVar2->Data).PointLODs.Data.field_0x22 = uVar4;
  (pFVar2->Data).PointLODs.Data.field_0x23 = uVar5;
  (this->ClusterBulkData).Data.PointLODs.ChunkRequest = (FChunk *)0x0;
  (this->CurveResourceData).Header.Id.A = 0;
  (this->CurveResourceData).Header.Id.B = 0;
  (this->CurveResourceData).Header.Id.C = 0;
  (this->CurveResourceData).Header.Id.D = 0;
  (this->CurveResourceData).Header.ClusterCount = 0;
  (this->CurveResourceData).Header.MaxClusterStrideInBytes = 0;
  *(undefined8 *)&(this->CurveResourceData).Data.BulkData = 0;
  *(undefined8 *)&(this->CurveResourceData).Data.BulkData.field_0x8 = 0;
  *(undefined8 *)&(this->CurveResourceData).Data.BulkData.field_0x10 = 0;
  *(undefined4 *)&(this->CurveResourceData).Data.BulkData.field_0xd = 0xffffffff;
  (this->CurveResourceData).Data.BulkData.field_0x11 = 0xff;
  uVar3 = FIoChunkId::InvalidChunkId.Id[1];
  uVar4 = FIoChunkId::InvalidChunkId.Id[2];
  uVar5 = FIoChunkId::InvalidChunkId.Id[3];
  uVar6 = FIoChunkId::InvalidChunkId.Id[4];
  uVar7 = FIoChunkId::InvalidChunkId.Id[5];
  uVar8 = FIoChunkId::InvalidChunkId.Id[6];
  uVar9 = FIoChunkId::InvalidChunkId.Id[7];
  (this->CurveResourceData).Data.BulkData.field_0x18 = FIoChunkId::InvalidChunkId.Id[0];
  (this->CurveResourceData).Data.BulkData.field_0x19 = uVar3;
  (this->CurveResourceData).Data.BulkData.field_0x1a = uVar4;
  (this->CurveResourceData).Data.BulkData.field_0x1b = uVar5;
  (this->CurveResourceData).Data.BulkData.field_0x1c = uVar6;
  (this->CurveResourceData).Data.BulkData.field_0x1d = uVar7;
  (this->CurveResourceData).Data.BulkData.field_0x1e = uVar8;
  (this->CurveResourceData).Data.BulkData.field_0x1f = uVar9;
  uVar3 = FIoChunkId::InvalidChunkId.Id[9];
  uVar4 = FIoChunkId::InvalidChunkId.Id[10];
  uVar5 = FIoChunkId::InvalidChunkId.Id[0xb];
  (this->CurveResourceData).Data.BulkData.field_0x20 = FIoChunkId::InvalidChunkId.Id[8];
  (this->CurveResourceData).Data.BulkData.field_0x21 = uVar3;
  (this->CurveResourceData).Data.BulkData.field_0x22 = uVar4;
  (this->CurveResourceData).Data.BulkData.field_0x23 = uVar5;
  this->bIsCookedOut = false;
  return this;
}

// ~FStrands @ 14dfb0920

void __thiscall FHairGroupPlatformData::FStrands::~FStrands(FStrands *this)

{
  FScriptContainerElement *pFVar1;
  
  FBulkData::~FBulkData((FBulkData *)&(this->CurveResourceData).Data);
  FBulkData::~FBulkData((FBulkData *)&(this->ClusterBulkData).Data.PointLODs.Data);
  FBulkData::~FBulkData((FBulkData *)&(this->ClusterBulkData).Data.CurveToClusterIds.Data);
  FBulkData::~FBulkData((FBulkData *)&(this->ClusterBulkData).Data.PackedClusterInfos.Data);
  pFVar1 = (this->ClusterBulkData).Header.LODInfos.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)&this->ClusterBulkData = &___7FHairStrandsBulkCommon__6B_;
  FBulkData::~FBulkData((FBulkData *)&(this->InterpolationBulkData).Data.PointInterpolation.Data);
  FBulkData::~FBulkData((FBulkData *)&(this->InterpolationBulkData).Data.CurveInterpolation.Data);
  (this->InterpolationBulkData)._padding_ = (longlong)&___7FHairStrandsBulkCommon__6B_;
  FHairStrandsBulkData::FData::~FData(&(this->BulkData).Data);
  pFVar1 = (this->BulkData).Header.CoverageScales.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BulkData).Header.CurveToPointCount.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->BulkData)._padding_ = (longlong)&___7FHairStrandsBulkCommon__6B_;
  return;
}

// GetDataSize @ 14dfc6820

uint __thiscall FHairGroupPlatformData::FStrands::GetDataSize(FStrands *this)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long64 lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = ::GetDataSize(&this->BulkData);
  uVar3 = ::GetDataSize(&this->InterpolationBulkData);
  bVar1 = FBulkData::IsBulkDataLoaded
                    ((FBulkData *)&(this->ClusterBulkData).Data.CurveToClusterIds.Data);
  iVar5 = 0;
  iVar6 = iVar5;
  if (bVar1) {
    lVar4 = FBulkData::GetBulkDataSize
                      ((FBulkData *)&(this->ClusterBulkData).Data.CurveToClusterIds.Data);
    iVar6 = (int)lVar4;
  }
  bVar1 = FBulkData::IsBulkDataLoaded
                    ((FBulkData *)&(this->ClusterBulkData).Data.PackedClusterInfos.Data);
  iVar7 = iVar5;
  if (bVar1) {
    lVar4 = FBulkData::GetBulkDataSize
                      ((FBulkData *)&(this->ClusterBulkData).Data.PackedClusterInfos.Data);
    iVar7 = (int)lVar4;
  }
  bVar1 = FBulkData::IsBulkDataLoaded((FBulkData *)&(this->ClusterBulkData).Data.PointLODs.Data);
  if (bVar1) {
    lVar4 = FBulkData::GetBulkDataSize((FBulkData *)&(this->ClusterBulkData).Data.PointLODs.Data);
    iVar5 = (int)lVar4;
  }
  return iVar6 + iVar7 + iVar5 + uVar2 + uVar3;
}

// GetResourcesSize @ 14dfc96c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FHairGroupResources::FStrands::GetResourcesSize(FStrands *this)

{
  FHairStrandsInterpolationResource *pFVar1;
  FRDGPooledBuffer *pFVar2;
  FHairStrandsClusterResource *pFVar3;
  FHairStrandsRaytracingResource *pFVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = 0;
  uVar5 = 0;
  if (this->RestResource != (FHairStrandsRestResource *)0x0) {
    uVar5 = FHairStrandsRestResource::GetResourcesSize(this->RestResource);
  }
  pFVar1 = this->InterpolationResource;
  if (pFVar1 != (FHairStrandsInterpolationResource *)0x0) {
    pFVar2 = (pFVar1->CurveInterpolationBuffer).Buffer.Reference;
    if (pFVar2 == (FRDGPooledBuffer *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement;
    }
    pFVar2 = (pFVar1->PointInterpolationBuffer).Buffer.Reference;
    if (pFVar2 == (FRDGPooledBuffer *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement;
    }
    uVar5 = uVar5 + iVar6 + iVar8;
  }
  pFVar3 = this->ClusterResource;
  if (pFVar3 != (FHairStrandsClusterResource *)0x0) {
    pFVar2 = (pFVar3->ClusterInfoBuffer).Buffer.Reference;
    if (pFVar2 == (FRDGPooledBuffer *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement;
    }
    pFVar2 = (pFVar3->CurveToClusterIdBuffer).Buffer.Reference;
    if (pFVar2 == (FRDGPooledBuffer *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement;
    }
    pFVar2 = (pFVar3->PointLODBuffer).Buffer.Reference;
    if (pFVar2 == (FRDGPooledBuffer *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement;
    }
    uVar5 = uVar5 + iVar7 + iVar6 + iVar8;
  }
  pFVar4 = this->RaytracingResource;
  if (pFVar4 != (FHairStrandsRaytracingResource *)0x0) {
    pFVar2 = (pFVar4->PositionBuffer).Buffer.Reference;
    if (pFVar2 == (FRDGPooledBuffer *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement;
    }
    pFVar2 = (pFVar4->IndexBuffer).Buffer.Reference;
    if (pFVar2 != (FRDGPooledBuffer *)0x0) {
      iVar9 = (pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement;
    }
    return iVar8 + iVar9 + uVar5;
  }
  return uVar5;
}

// ~FStrands @ 14dff27d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FHairGroupInstance::FStrands::~FStrands(FStrands *this)

{
  longlong *plVar1;
  FRHIUnorderedAccessView *this_00;
  FRHIShaderResourceView *this_01;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  
  if (this->UniformBuffer !=
      (TUniformBufferRef<FHairStrandsVertexFactoryUniformShaderParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->UniformBuffer);
  }
  this_00 = (this->DebugCurveAttributeBuffer).UAV.Reference;
  if (this_00 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->DebugCurveAttributeBuffer).SRV.Reference;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  pFVar2 = (this->DebugCurveAttributeBuffer).Buffer.Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014dff2833. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

// ~FStrands @ 14dff2850

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FHairGroupPublicData::FVertexFactoryInput::FStrands::~FStrands(FStrands *this)

{
  longlong *plVar1;
  FRHIShaderResourceView *pFVar2;
  FRHIUnorderedAccessView *pFVar3;
  FRDGPooledBuffer *pFVar4;
  longlong lVar5;
  
  pFVar2 = (this->PointMappingBufferRHISRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->CurveMappingBufferRHISRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->CurveBufferRHISRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->PrevPositionOffsetBufferRHISRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->PositionOffsetBufferRHISRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->PointToCurveBufferRHISRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->PointAttributeBufferRHISRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->CurveAttributeBufferRHISRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->TangentBufferRHISRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->PrevPositionBufferRHISRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->PositionBufferRHISRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->PointMappingBufferExternal).UAV.Reference;
  if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->PointMappingBufferExternal).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar4 = (this->PointMappingBufferExternal).Buffer.Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar3 = (this->CurveMappingBufferExternal).UAV.Reference;
  if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->CurveMappingBufferExternal).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar4 = (this->CurveMappingBufferExternal).Buffer.Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar3 = (this->CurveBufferExternal).UAV.Reference;
  if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->CurveBufferExternal).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar4 = (this->CurveBufferExternal).Buffer.Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar3 = (this->PrevPositionOffsetBufferExternal).UAV.Reference;
  if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->PrevPositionOffsetBufferExternal).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar4 = (this->PrevPositionOffsetBufferExternal).Buffer.Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar3 = (this->PositionOffsetBufferExternal).UAV.Reference;
  if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->PositionOffsetBufferExternal).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar4 = (this->PositionOffsetBufferExternal).Buffer.Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar3 = (this->PointToCurveBufferExternal).UAV.Reference;
  if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->PointToCurveBufferExternal).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar4 = (this->PointToCurveBufferExternal).Buffer.Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar3 = (this->PointAttributeBufferExternal).UAV.Reference;
  if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->PointAttributeBufferExternal).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar4 = (this->PointAttributeBufferExternal).Buffer.Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar3 = (this->CurveAttributeBufferExternal).UAV.Reference;
  if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->CurveAttributeBufferExternal).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar4 = (this->CurveAttributeBufferExternal).Buffer.Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar3 = (this->TangentBufferExternal).UAV.Reference;
  if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->TangentBufferExternal).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar4 = (this->TangentBufferExternal).Buffer.Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar3 = (this->PrevPositionBufferExternal).UAV.Reference;
  if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->PrevPositionBufferExternal).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar4 = (this->PrevPositionBufferExternal).Buffer.Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar3 = (this->PositionBufferExternal).UAV.Reference;
  if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->PositionBufferExternal).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar4 = (this->PositionBufferExternal).Buffer.Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  return;
}

// FStrands @ 14e03d9c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FStrands * __thiscall FHairGroupPublicData::FVertexFactoryInput::FStrands::FStrands(FStrands *this)

{
  (this->PositionBuffer).Buffer = (FRDGBuffer *)0x0;
  (this->PositionBuffer).SRV = (FRDGBufferSRV *)0x0;
  (this->PositionBuffer).UAV = (FRDGBufferUAV *)0x0;
  (this->PrevPositionBuffer).Buffer = (FRDGBuffer *)0x0;
  (this->PrevPositionBuffer).SRV = (FRDGBufferSRV *)0x0;
  (this->PrevPositionBuffer).UAV = (FRDGBufferUAV *)0x0;
  (this->TangentBuffer).Buffer = (FRDGBuffer *)0x0;
  (this->TangentBuffer).SRV = (FRDGBufferSRV *)0x0;
  (this->TangentBuffer).UAV = (FRDGBufferUAV *)0x0;
  (this->CurveAttributeBuffer).Buffer = (FRDGBuffer *)0x0;
  (this->CurveAttributeBuffer).SRV = (FRDGBufferSRV *)0x0;
  (this->CurveAttributeBuffer).UAV = (FRDGBufferUAV *)0x0;
  (this->PointAttributeBuffer).Buffer = (FRDGBuffer *)0x0;
  (this->PointAttributeBuffer).SRV = (FRDGBufferSRV *)0x0;
  (this->PointAttributeBuffer).UAV = (FRDGBufferUAV *)0x0;
  (this->PointToCurveBuffer).Buffer = (FRDGBuffer *)0x0;
  (this->PointToCurveBuffer).SRV = (FRDGBufferSRV *)0x0;
  (this->PointToCurveBuffer).UAV = (FRDGBufferUAV *)0x0;
  (this->PositionOffsetBuffer).Buffer = (FRDGBuffer *)0x0;
  (this->PositionOffsetBuffer).SRV = (FRDGBufferSRV *)0x0;
  (this->PositionOffsetBuffer).UAV = (FRDGBufferUAV *)0x0;
  (this->PrevPositionOffsetBuffer).Buffer = (FRDGBuffer *)0x0;
  (this->PrevPositionOffsetBuffer).SRV = (FRDGBufferSRV *)0x0;
  (this->PrevPositionOffsetBuffer).UAV = (FRDGBufferUAV *)0x0;
  (this->CurveBuffer).Buffer = (FRDGBuffer *)0x0;
  (this->CurveBuffer).SRV = (FRDGBufferSRV *)0x0;
  (this->CurveBuffer).UAV = (FRDGBufferUAV *)0x0;
  (this->CurveMappingBuffer).Buffer = (FRDGBuffer *)0x0;
  (this->CurveMappingBuffer).SRV = (FRDGBufferSRV *)0x0;
  (this->CurveMappingBuffer).UAV = (FRDGBufferUAV *)0x0;
  (this->PointMappingBuffer).Buffer = (FRDGBuffer *)0x0;
  (this->PointMappingBuffer).SRV = (FRDGBufferSRV *)0x0;
  (this->PointMappingBuffer).UAV = (FRDGBufferUAV *)0x0;
  (this->PositionBufferExternal).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PositionBufferExternal).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PositionBufferExternal).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->PositionBufferExternal).Format = PF_Unknown;
  (this->PrevPositionBufferExternal).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PrevPositionBufferExternal).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PrevPositionBufferExternal).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->PrevPositionBufferExternal).Format = PF_Unknown;
  (this->TangentBufferExternal).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->TangentBufferExternal).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->TangentBufferExternal).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->TangentBufferExternal).Format = PF_Unknown;
  (this->CurveAttributeBufferExternal).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->CurveAttributeBufferExternal).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->CurveAttributeBufferExternal).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->CurveAttributeBufferExternal).Format = PF_Unknown;
  (this->PointAttributeBufferExternal).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PointAttributeBufferExternal).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PointAttributeBufferExternal).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->PointAttributeBufferExternal).Format = PF_Unknown;
  (this->PointToCurveBufferExternal).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PointToCurveBufferExternal).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PointToCurveBufferExternal).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->PointToCurveBufferExternal).Format = PF_Unknown;
  (this->PositionOffsetBufferExternal).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PositionOffsetBufferExternal).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PositionOffsetBufferExternal).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->PositionOffsetBufferExternal).Format = PF_Unknown;
  (this->PrevPositionOffsetBufferExternal).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PrevPositionOffsetBufferExternal).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PrevPositionOffsetBufferExternal).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->PrevPositionOffsetBufferExternal).Format = PF_Unknown;
  (this->CurveBufferExternal).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->CurveBufferExternal).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->CurveBufferExternal).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->CurveBufferExternal).Format = PF_Unknown;
  (this->CurveMappingBufferExternal).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->CurveMappingBufferExternal).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->CurveMappingBufferExternal).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->CurveMappingBufferExternal).Format = PF_Unknown;
  (this->PointMappingBufferExternal).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PointMappingBufferExternal).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PointMappingBufferExternal).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->PointMappingBufferExternal).Format = PF_Unknown;
  (this->PositionBufferRHISRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->PrevPositionBufferRHISRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->TangentBufferRHISRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->CurveAttributeBufferRHISRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->PointAttributeBufferRHISRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->PointToCurveBufferRHISRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->PositionOffsetBufferRHISRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->PrevPositionOffsetBufferRHISRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->CurveBufferRHISRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->CurveMappingBufferRHISRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->PointMappingBufferRHISRV).Reference = (FRHIShaderResourceView *)0x0;
  return this;
}

// operator= @ 14e03f310

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FStrands * __thiscall
FHairGroupPublicData::FVertexFactoryInput::FStrands::operator=(FStrands *this,FStrands *param_1)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  FRHIShaderResourceView *pFVar3;
  FRDGBufferSRV *pFVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FHairStrandsInstanceCommonParameters *pFVar12;
  FHairStrandsInstanceCommonParameters *pFVar13;
  FHairStrandsInstanceCommonParameters *pFVar14;
  FHairStrandsInstanceCommonParameters *pFVar15;
  longlong lVar16;
  
  pFVar4 = (param_1->PositionBuffer).SRV;
  (this->PositionBuffer).Buffer = (param_1->PositionBuffer).Buffer;
  (this->PositionBuffer).SRV = pFVar4;
  (this->PositionBuffer).UAV = (param_1->PositionBuffer).UAV;
  pFVar4 = (param_1->PrevPositionBuffer).SRV;
  (this->PrevPositionBuffer).Buffer = (param_1->PrevPositionBuffer).Buffer;
  (this->PrevPositionBuffer).SRV = pFVar4;
  (this->PrevPositionBuffer).UAV = (param_1->PrevPositionBuffer).UAV;
  pFVar4 = (param_1->TangentBuffer).SRV;
  (this->TangentBuffer).Buffer = (param_1->TangentBuffer).Buffer;
  (this->TangentBuffer).SRV = pFVar4;
  (this->TangentBuffer).UAV = (param_1->TangentBuffer).UAV;
  pFVar4 = (param_1->CurveAttributeBuffer).SRV;
  (this->CurveAttributeBuffer).Buffer = (param_1->CurveAttributeBuffer).Buffer;
  (this->CurveAttributeBuffer).SRV = pFVar4;
  (this->CurveAttributeBuffer).UAV = (param_1->CurveAttributeBuffer).UAV;
  pFVar4 = (param_1->PointAttributeBuffer).SRV;
  (this->PointAttributeBuffer).Buffer = (param_1->PointAttributeBuffer).Buffer;
  (this->PointAttributeBuffer).SRV = pFVar4;
  (this->PointAttributeBuffer).UAV = (param_1->PointAttributeBuffer).UAV;
  pFVar4 = (param_1->PointToCurveBuffer).SRV;
  (this->PointToCurveBuffer).Buffer = (param_1->PointToCurveBuffer).Buffer;
  (this->PointToCurveBuffer).SRV = pFVar4;
  (this->PointToCurveBuffer).UAV = (param_1->PointToCurveBuffer).UAV;
  pFVar4 = (param_1->PositionOffsetBuffer).SRV;
  (this->PositionOffsetBuffer).Buffer = (param_1->PositionOffsetBuffer).Buffer;
  (this->PositionOffsetBuffer).SRV = pFVar4;
  (this->PositionOffsetBuffer).UAV = (param_1->PositionOffsetBuffer).UAV;
  pFVar4 = (param_1->PrevPositionOffsetBuffer).SRV;
  (this->PrevPositionOffsetBuffer).Buffer = (param_1->PrevPositionOffsetBuffer).Buffer;
  (this->PrevPositionOffsetBuffer).SRV = pFVar4;
  (this->PrevPositionOffsetBuffer).UAV = (param_1->PrevPositionOffsetBuffer).UAV;
  pFVar4 = (param_1->CurveBuffer).SRV;
  (this->CurveBuffer).Buffer = (param_1->CurveBuffer).Buffer;
  (this->CurveBuffer).SRV = pFVar4;
  (this->CurveBuffer).UAV = (param_1->CurveBuffer).UAV;
  pFVar4 = (param_1->CurveMappingBuffer).SRV;
  (this->CurveMappingBuffer).Buffer = (param_1->CurveMappingBuffer).Buffer;
  (this->CurveMappingBuffer).SRV = pFVar4;
  (this->CurveMappingBuffer).UAV = (param_1->CurveMappingBuffer).UAV;
  pFVar4 = (param_1->PointMappingBuffer).SRV;
  (this->PointMappingBuffer).Buffer = (param_1->PointMappingBuffer).Buffer;
  (this->PointMappingBuffer).SRV = pFVar4;
  (this->PointMappingBuffer).UAV = (param_1->PointMappingBuffer).UAV;
  FRDGExternalBuffer::operator=(&this->PositionBufferExternal,&param_1->PositionBufferExternal);
  FRDGExternalBuffer::operator=
            (&this->PrevPositionBufferExternal,&param_1->PrevPositionBufferExternal);
  FRDGExternalBuffer::operator=(&this->TangentBufferExternal,&param_1->TangentBufferExternal);
  FRDGExternalBuffer::operator=
            (&this->CurveAttributeBufferExternal,&param_1->CurveAttributeBufferExternal);
  FRDGExternalBuffer::operator=
            (&this->PointAttributeBufferExternal,&param_1->PointAttributeBufferExternal);
  FRDGExternalBuffer::operator=
            (&this->PointToCurveBufferExternal,&param_1->PointToCurveBufferExternal);
  FRDGExternalBuffer::operator=
            (&this->PositionOffsetBufferExternal,&param_1->PositionOffsetBufferExternal);
  FRDGExternalBuffer::operator=
            (&this->PrevPositionOffsetBufferExternal,&param_1->PrevPositionOffsetBufferExternal);
  FRDGExternalBuffer::operator=(&this->CurveBufferExternal,&param_1->CurveBufferExternal);
  FRDGExternalBuffer::operator=
            (&this->CurveMappingBufferExternal,&param_1->CurveMappingBufferExternal);
  FRDGExternalBuffer::operator=
            (&this->PointMappingBufferExternal,&param_1->PointMappingBufferExternal);
  pTVar1 = &param_1->PositionBufferRHISRV;
  pTVar2 = &this->PositionBufferRHISRV;
  if (pTVar2 != pTVar1) {
    pFVar3 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (FRHIShaderResourceView *)0x0;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  pTVar1 = &param_1->PrevPositionBufferRHISRV;
  pTVar2 = &this->PrevPositionBufferRHISRV;
  if (pTVar2 != pTVar1) {
    pFVar3 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (FRHIShaderResourceView *)0x0;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  pTVar1 = &param_1->TangentBufferRHISRV;
  pTVar2 = &this->TangentBufferRHISRV;
  if (pTVar2 != pTVar1) {
    pFVar3 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (FRHIShaderResourceView *)0x0;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  pTVar1 = &param_1->CurveAttributeBufferRHISRV;
  pTVar2 = &this->CurveAttributeBufferRHISRV;
  if (pTVar2 != pTVar1) {
    pFVar3 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (FRHIShaderResourceView *)0x0;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  pTVar1 = &param_1->PointAttributeBufferRHISRV;
  pTVar2 = &this->PointAttributeBufferRHISRV;
  if (pTVar2 != pTVar1) {
    pFVar3 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (FRHIShaderResourceView *)0x0;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  pTVar1 = &param_1->PointToCurveBufferRHISRV;
  pTVar2 = &this->PointToCurveBufferRHISRV;
  if (pTVar2 != pTVar1) {
    pFVar3 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (FRHIShaderResourceView *)0x0;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  pTVar1 = &param_1->PositionOffsetBufferRHISRV;
  pTVar2 = &this->PositionOffsetBufferRHISRV;
  if (pTVar2 != pTVar1) {
    pFVar3 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (FRHIShaderResourceView *)0x0;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  pTVar1 = &param_1->PrevPositionOffsetBufferRHISRV;
  pTVar2 = &this->PrevPositionOffsetBufferRHISRV;
  if (pTVar2 != pTVar1) {
    pFVar3 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (FRHIShaderResourceView *)0x0;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  pTVar1 = &param_1->CurveBufferRHISRV;
  pTVar2 = &this->CurveBufferRHISRV;
  if (pTVar2 != pTVar1) {
    pFVar3 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (FRHIShaderResourceView *)0x0;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  pTVar1 = &param_1->CurveMappingBufferRHISRV;
  pTVar2 = &this->CurveMappingBufferRHISRV;
  if (pTVar2 != pTVar1) {
    pFVar3 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (FRHIShaderResourceView *)0x0;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  pTVar1 = &param_1->PointMappingBufferRHISRV;
  pTVar2 = &this->PointMappingBufferRHISRV;
  if (pTVar2 != pTVar1) {
    pFVar3 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (FRHIShaderResourceView *)0x0;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  lVar16 = 2;
  pFVar12 = &param_1->Common;
  pFVar13 = &this->Common;
  do {
    pFVar15 = pFVar13;
    pFVar14 = pFVar12;
    pFVar13 = (FHairStrandsInstanceCommonParameters *)
              ((pFVar15->LocalToWorldPrimitiveTransform).M + 1);
    fVar6 = pFVar14->Radius;
    fVar7 = pFVar14->RootScale;
    fVar8 = pFVar14->TipScale;
    pFVar12 = (FHairStrandsInstanceCommonParameters *)
              ((pFVar14->LocalToWorldPrimitiveTransform).M + 1);
    pFVar15->Density = pFVar14->Density;
    pFVar15->Radius = fVar6;
    pFVar15->RootScale = fVar7;
    pFVar15->TipScale = fVar8;
    fVar6 = pFVar14->LengthScale;
    fVar7 = pFVar14->RaytracingRadiusScale;
    uVar9 = pFVar14->RegisteredIndex;
    pFVar15->Length = pFVar14->Length;
    pFVar15->LengthScale = fVar6;
    pFVar15->RaytracingRadiusScale = fVar7;
    pFVar15->RegisteredIndex = uVar9;
    uVar9 = pFVar14->GroupCount;
    uVar10 = pFVar14->PointCount;
    uVar11 = pFVar14->CurveCount;
    pFVar15->GroupIndex = pFVar14->GroupIndex;
    pFVar15->GroupCount = uVar9;
    pFVar15->PointCount = uVar10;
    pFVar15->CurveCount = uVar11;
    uVar9 = pFVar14->Flags;
    uVar10 = pFVar14->bSimulation;
    uVar11 = pFVar14->bSingleGuide;
    pFVar15->RaytracingProceduralSplits = pFVar14->RaytracingProceduralSplits;
    pFVar15->Flags = uVar9;
    pFVar15->bSimulation = uVar10;
    pFVar15->bSingleGuide = uVar11;
    uVar9 = pFVar14->bCurveRemapping;
    uVar10 = pFVar14->SourcePointCount;
    uVar11 = pFVar14->SourceCurveCount;
    pFVar15->bPointRemapping = pFVar14->bPointRemapping;
    pFVar15->bCurveRemapping = uVar9;
    pFVar15->SourcePointCount = uVar10;
    pFVar15->SourceCurveCount = uVar11;
    uVar5 = *(undefined8 *)((longlong)&(pFVar14->PositionOffset).field0_0x0 + 8);
    *(undefined8 *)&(pFVar15->PositionOffset).field0_0x0 =
         *(undefined8 *)&(pFVar14->PositionOffset).field0_0x0;
    *(undefined8 *)((longlong)&(pFVar15->PositionOffset).field0_0x0 + 8) = uVar5;
    uVar5 = *(undefined8 *)((longlong)&(pFVar14->PrevPositionOffset).field0_0x0 + 8);
    *(undefined8 *)&(pFVar15->PrevPositionOffset).field0_0x0 =
         *(undefined8 *)&(pFVar14->PrevPositionOffset).field0_0x0;
    *(undefined8 *)((longlong)&(pFVar15->PrevPositionOffset).field0_0x0 + 8) = uVar5;
    uVar5 = *(undefined8 *)((pFVar14->LocalToWorldPrimitiveTransform).M[0] + 2);
    *(undefined8 *)(pFVar15->LocalToWorldPrimitiveTransform).M[0] =
         *(undefined8 *)(pFVar14->LocalToWorldPrimitiveTransform).M[0];
    *(undefined8 *)((pFVar15->LocalToWorldPrimitiveTransform).M[0] + 2) = uVar5;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  fVar6 = pFVar12->Radius;
  uVar5 = *(undefined8 *)((pFVar14->LocalToWorldPrimitiveTransform).M[1] + 2);
  pFVar13->Density = pFVar12->Density;
  pFVar13->Radius = fVar6;
  *(undefined8 *)((pFVar15->LocalToWorldPrimitiveTransform).M[1] + 2) = uVar5;
  uVar5 = *(undefined8 *)((pFVar14->LocalToWorldPrimitiveTransform).M[2] + 2);
  *(undefined8 *)(pFVar15->LocalToWorldPrimitiveTransform).M[2] =
       *(undefined8 *)(pFVar14->LocalToWorldPrimitiveTransform).M[2];
  *(undefined8 *)((pFVar15->LocalToWorldPrimitiveTransform).M[2] + 2) = uVar5;
  uVar5 = *(undefined8 *)((pFVar14->LocalToWorldPrimitiveTransform).M[3] + 2);
  *(undefined8 *)(pFVar15->LocalToWorldPrimitiveTransform).M[3] =
       *(undefined8 *)(pFVar14->LocalToWorldPrimitiveTransform).M[3];
  *(undefined8 *)((pFVar15->LocalToWorldPrimitiveTransform).M[3] + 2) = uVar5;
  uVar5 = *(undefined8 *)((pFVar14->LocalToTranslatedWorldPrimitiveTransform).M[0] + 2);
  *(undefined8 *)(pFVar15->LocalToTranslatedWorldPrimitiveTransform).M[0] =
       *(undefined8 *)(pFVar14->LocalToTranslatedWorldPrimitiveTransform).M[0];
  *(undefined8 *)((pFVar15->LocalToTranslatedWorldPrimitiveTransform).M[0] + 2) = uVar5;
  return this;
}


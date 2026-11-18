// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// FHairGroupPlatformData @ 14dfac3d0

FHairGroupPlatformData * __thiscall
FHairGroupPlatformData::FHairGroupPlatformData
          (FHairGroupPlatformData *this,FHairGroupPlatformData *param_1)

{
  int *piVar1;
  FHeader *pFVar2;
  FCards *pFVar3;
  FMeshes *pFVar4;
  TArray<FHairStrandsDebugDatas::FOffsetAndCount,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FHairStrandsDebugDatas::FVoxel,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FLOD *pFVar9;
  FLOD *pFVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  FHairStrandsBulkData::FHairStrandsBulkData
            ((FHairStrandsBulkData *)this,(FHairStrandsBulkData *)param_1);
  FHairStrandsBulkData::FHairStrandsBulkData(&(this->Strands).BulkData,&(param_1->Strands).BulkData)
  ;
  FHairStrandsInterpolationBulkData::FHairStrandsInterpolationBulkData
            (&(this->Strands).InterpolationBulkData,&(param_1->Strands).InterpolationBulkData);
  pFVar2 = &(this->Strands).ClusterBulkData.Header;
  (pFVar2->LODInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined ***)&(this->Strands).ClusterBulkData = &___7FHairStrandsClusterBulkData__6B_;
  piVar1 = &(this->Strands).ClusterBulkData.Header.LODInfos.ArrayMax;
  iVar7 = (param_1->Strands).ClusterBulkData.Header.LODInfos.ArrayNum;
  pFVar8 = (param_1->Strands).ClusterBulkData.Header.LODInfos.AllocatorInstance.Data;
  (this->Strands).ClusterBulkData.Header.LODInfos.ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar7,0,(ForAnyElementType *)pFVar2,iVar7,piVar1);
    memcpy((pFVar2->LODInfos).AllocatorInstance.Data,pFVar8,(longlong)iVar7 * 0x14);
  }
  (this->Strands).ClusterBulkData.Header.ClusterCount =
       (param_1->Strands).ClusterBulkData.Header.ClusterCount;
  (this->Strands).ClusterBulkData.Header.ClusterScale =
       (param_1->Strands).ClusterBulkData.Header.ClusterScale;
  (this->Strands).ClusterBulkData.Header.PointCount =
       (param_1->Strands).ClusterBulkData.Header.PointCount;
  (this->Strands).ClusterBulkData.Header.CurveCount =
       (param_1->Strands).ClusterBulkData.Header.CurveCount;
  uVar11 = *(undefined8 *)
            ((longlong)&(param_1->Strands).ClusterBulkData.Header.ClusterInfoParameters.field0_0x0 +
            8);
  *(undefined8 *)&(this->Strands).ClusterBulkData.Header.ClusterInfoParameters.field0_0x0 =
       *(undefined8 *)&(param_1->Strands).ClusterBulkData.Header.ClusterInfoParameters.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->Strands).ClusterBulkData.Header.ClusterInfoParameters.field0_0x0 + 8) = uVar11
  ;
  uVar12 = (param_1->Strands).ClusterBulkData.Header.Strides.CurveToClusterIdStride;
  (this->Strands).ClusterBulkData.Header.Strides.PackedClusterInfoStride =
       (param_1->Strands).ClusterBulkData.Header.Strides.PackedClusterInfoStride;
  (this->Strands).ClusterBulkData.Header.Strides.CurveToClusterIdStride = uVar12;
  (this->Strands).ClusterBulkData.Header.Strides.PointLODStride =
       (param_1->Strands).ClusterBulkData.Header.Strides.PointLODStride;
  (this->Strands).ClusterBulkData.Data.PackedClusterInfos.LoadedSize =
       (param_1->Strands).ClusterBulkData.Data.PackedClusterInfos.LoadedSize;
  FBulkData::FBulkData
            ((FBulkData *)&(this->Strands).ClusterBulkData.Data.PackedClusterInfos.Data,
             (FBulkData *)&(param_1->Strands).ClusterBulkData.Data.PackedClusterInfos.Data);
  (this->Strands).ClusterBulkData.Data.PackedClusterInfos.ChunkRequest =
       (param_1->Strands).ClusterBulkData.Data.PackedClusterInfos.ChunkRequest;
  (this->Strands).ClusterBulkData.Data.CurveToClusterIds.LoadedSize =
       (param_1->Strands).ClusterBulkData.Data.CurveToClusterIds.LoadedSize;
  FBulkData::FBulkData
            ((FBulkData *)&(this->Strands).ClusterBulkData.Data.CurveToClusterIds.Data,
             (FBulkData *)&(param_1->Strands).ClusterBulkData.Data.CurveToClusterIds.Data);
  (this->Strands).ClusterBulkData.Data.CurveToClusterIds.ChunkRequest =
       (param_1->Strands).ClusterBulkData.Data.CurveToClusterIds.ChunkRequest;
  (this->Strands).ClusterBulkData.Data.PointLODs.LoadedSize =
       (param_1->Strands).ClusterBulkData.Data.PointLODs.LoadedSize;
  FBulkData::FBulkData
            ((FBulkData *)&(this->Strands).ClusterBulkData.Data.PointLODs.Data,
             (FBulkData *)&(param_1->Strands).ClusterBulkData.Data.PointLODs.Data);
  (this->Strands).ClusterBulkData.Data.PointLODs.ChunkRequest =
       (param_1->Strands).ClusterBulkData.Data.PointLODs.ChunkRequest;
  uVar12 = (param_1->Strands).CurveResourceData.Header.Id.B;
  uVar13 = (param_1->Strands).CurveResourceData.Header.Id.C;
  uVar14 = (param_1->Strands).CurveResourceData.Header.Id.D;
  (this->Strands).CurveResourceData.Header.Id.A = (param_1->Strands).CurveResourceData.Header.Id.A;
  (this->Strands).CurveResourceData.Header.Id.B = uVar12;
  (this->Strands).CurveResourceData.Header.Id.C = uVar13;
  (this->Strands).CurveResourceData.Header.Id.D = uVar14;
  uVar12 = (param_1->Strands).CurveResourceData.Header.MaxClusterStrideInBytes;
  (this->Strands).CurveResourceData.Header.ClusterCount =
       (param_1->Strands).CurveResourceData.Header.ClusterCount;
  (this->Strands).CurveResourceData.Header.MaxClusterStrideInBytes = uVar12;
  FBulkData::FBulkData
            ((FBulkData *)&(this->Strands).CurveResourceData.Data,
             (FBulkData *)&(param_1->Strands).CurveResourceData.Data);
  pFVar3 = &this->Cards;
  (this->Strands).bIsCookedOut = (param_1->Strands).bIsCookedOut;
  piVar1 = &(this->Cards).LODs.ArrayMax;
  (pFVar3->LODs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar7 = (param_1->Cards).LODs.ArrayNum;
  pFVar9 = (FLOD *)(param_1->Cards).LODs.AllocatorInstance.Data;
  (this->Cards).LODs.ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x428,8,iVar7,0,(ForAnyElementType *)pFVar3,iVar7,piVar1);
    ConstructItems<FHairGroupPlatformData::FCards::FLOD,FHairGroupPlatformData::FCards::FLOD,int>
              ((pFVar3->LODs).AllocatorInstance.Data,pFVar9,iVar7);
  }
  pFVar4 = &this->Meshes;
  (pFVar4->LODs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Meshes).LODs.ArrayMax;
  iVar7 = (param_1->Meshes).LODs.ArrayNum;
  pFVar10 = (FLOD *)(param_1->Meshes).LODs.AllocatorInstance.Data;
  (this->Meshes).LODs.ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,iVar7,0,(ForAnyElementType *)pFVar4,iVar7,piVar1);
    ConstructItems<FHairGroupPlatformData::FMeshes::FLOD,FHairGroupPlatformData::FMeshes::FLOD,int>
              ((pFVar4->LODs).AllocatorInstance.Data,pFVar10,iVar7);
  }
  uVar11 = *(undefined8 *)
            ((longlong)&(param_1->Debug).Data.VoxelDescription.VoxelMinBound.field0_0x0 + 8);
  pTVar5 = &(this->Debug).Data.VoxelOffsetAndCount;
  *(undefined8 *)&(this->Debug).Data.VoxelDescription.VoxelMinBound.field0_0x0 =
       *(undefined8 *)&(param_1->Debug).Data.VoxelDescription.VoxelMinBound.field0_0x0;
  *(undefined8 *)((longlong)&(this->Debug).Data.VoxelDescription.VoxelMinBound.field0_0x0 + 8) =
       uVar11;
  uVar11 = *(undefined8 *)&(param_1->Debug).Data.VoxelDescription.VoxelResolution.field0_0x0;
  *(undefined8 *)((longlong)&(this->Debug).Data.VoxelDescription.VoxelMaxBound.field0_0x0 + 4) =
       *(undefined8 *)
        ((longlong)&(param_1->Debug).Data.VoxelDescription.VoxelMaxBound.field0_0x0 + 4);
  *(undefined8 *)&(this->Debug).Data.VoxelDescription.VoxelResolution.field0_0x0 = uVar11;
  *(undefined8 *)((longlong)&(this->Debug).Data.VoxelDescription.VoxelResolution.field0_0x0 + 8) =
       *(undefined8 *)
        ((longlong)&(param_1->Debug).Data.VoxelDescription.VoxelResolution.field0_0x0 + 8);
  (this->Debug).Data.VoxelDescription.MaxSegmentPerVoxel =
       (param_1->Debug).Data.VoxelDescription.MaxSegmentPerVoxel;
  piVar1 = &(this->Debug).Data.VoxelOffsetAndCount.ArrayMax;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar7 = (param_1->Debug).Data.VoxelOffsetAndCount.ArrayNum;
  pFVar8 = (param_1->Debug).Data.VoxelOffsetAndCount.AllocatorInstance.Data;
  (this->Debug).Data.VoxelOffsetAndCount.ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar7,0,&pTVar5->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 3);
  }
  pTVar6 = &(this->Debug).Data.VoxelData;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Debug).Data.VoxelData.ArrayMax;
  iVar7 = (param_1->Debug).Data.VoxelData.ArrayNum;
  pFVar8 = (param_1->Debug).Data.VoxelData.AllocatorInstance.Data;
  (this->Debug).Data.VoxelData.ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar7,0,&pTVar6->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar6->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 3);
  }
  return this;
}

// FHairGroupPlatformData @ 14dfac780

/* WARNING: Type propagation algorithm not settling */

FHairGroupPlatformData * __thiscall
FHairGroupPlatformData::FHairGroupPlatformData(FHairGroupPlatformData *this)

{
  FHairStrandsBulkData::FHairStrandsBulkData((FHairStrandsBulkData *)this);
  FStrands::FStrands(&this->Strands);
  (this->Cards).LODs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Cards).LODs.ArrayNum = 0;
  (this->Cards).LODs.ArrayMax = 0;
  (this->Meshes).LODs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meshes).LODs.ArrayNum = 0;
  (this->Meshes).LODs.ArrayMax = 0;
  *(undefined8 *)&(this->Debug).Data.VoxelDescription.VoxelMinBound.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->Debug).Data.VoxelDescription.VoxelMinBound.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->Debug).Data.VoxelDescription.VoxelMaxBound.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->Debug).Data.VoxelDescription.VoxelMaxBound.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->Debug).Data.VoxelDescription.VoxelResolution.field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (this->Debug).Data.VoxelDescription.VoxelResolution.field0_0x0._s_0.Z =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  (this->Debug).Data.VoxelDescription.VoxelSize = 0.0;
  (this->Debug).Data.VoxelDescription.MaxSegmentPerVoxel = 0;
  (this->Debug).Data.VoxelOffsetAndCount.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Debug).Data.VoxelOffsetAndCount.ArrayNum = 0;
  (this->Debug).Data.VoxelOffsetAndCount.ArrayMax = 0;
  (this->Debug).Data.VoxelData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Debug).Data.VoxelData.ArrayNum = 0;
  (this->Debug).Data.VoxelData.ArrayMax = 0;
  return this;
}

// ~FHairGroupPlatformData @ 14dfb0590

void __thiscall FHairGroupPlatformData::~FHairGroupPlatformData(FHairGroupPlatformData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Debug).Data.VoxelData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Debug).Data.VoxelOffsetAndCount.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FHairGroupPlatformData::FMeshes::FLOD,int>
            ((FLOD *)(this->Meshes).LODs.AllocatorInstance.Data,(this->Meshes).LODs.ArrayNum);
  pFVar1 = (this->Meshes).LODs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FHairGroupPlatformData::FCards::FLOD,int>
            ((FLOD *)(this->Cards).LODs.AllocatorInstance.Data,(this->Cards).LODs.ArrayNum);
  pFVar1 = (this->Cards).LODs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FStrands::~FStrands(&this->Strands);
  FHairStrandsBulkData::FData::~FData(&(this->Guides).BulkData.Data);
  pFVar1 = (this->Guides).BulkData.Header.CoverageScales.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Guides).BulkData.Header.CurveToPointCount.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Guides).BulkData._padding_ = (longlong)&___7FHairStrandsBulkCommon__6B_;
  return;
}


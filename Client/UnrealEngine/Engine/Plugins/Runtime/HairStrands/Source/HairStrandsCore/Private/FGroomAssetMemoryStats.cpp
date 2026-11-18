// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 4

// Accumulate @ 14dfb6480

void __thiscall
FGroomAssetMemoryStats::Accumulate(FGroomAssetMemoryStats *this,FGroomAssetMemoryStats *param_1)

{
  uint *puVar1;
  
  (this->CPU).Guides = (this->CPU).Guides + (param_1->CPU).Guides;
  puVar1 = &(this->CPU).Strands;
  *puVar1 = *puVar1 + (param_1->CPU).Strands;
  puVar1 = &(this->CPU).Cards;
  *puVar1 = *puVar1 + (param_1->CPU).Cards;
  puVar1 = &(this->CPU).Meshes;
  *puVar1 = *puVar1 + (param_1->CPU).Meshes;
  (this->GPU).Guides = (this->GPU).Guides + (param_1->GPU).Guides;
  puVar1 = &(this->GPU).Strands;
  *puVar1 = *puVar1 + (param_1->GPU).Strands;
  puVar1 = &(this->GPU).Cards;
  *puVar1 = *puVar1 + (param_1->GPU).Cards;
  puVar1 = &(this->GPU).Meshes;
  *puVar1 = *puVar1 + (param_1->GPU).Meshes;
  return;
}

// Get @ 14dfc53c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FGroomAssetMemoryStats * __cdecl
FGroomAssetMemoryStats::Get
          (FGroomAssetMemoryStats *__return_storage_ptr__,FHairGroupPlatformData *param_1,
          FHairGroupResources *param_2)

{
  FHairStrandsRestResource *pFVar1;
  FHairStrandsInterpolationResource *pFVar2;
  FRDGPooledBuffer *pFVar3;
  FHairStrandsClusterResource *pFVar4;
  FHairStrandsRaytracingResource *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  (__return_storage_ptr__->CPU).Guides = 0;
  (__return_storage_ptr__->CPU).Strands = 0;
  (__return_storage_ptr__->CPU).Cards = 0;
  (__return_storage_ptr__->CPU).Meshes = 0;
  (__return_storage_ptr__->GPU).Guides = 0;
  (__return_storage_ptr__->GPU).Strands = 0;
  (__return_storage_ptr__->GPU).Cards = 0;
  (__return_storage_ptr__->GPU).Meshes = 0;
  (__return_storage_ptr__->Memory).Rest = 0;
  (__return_storage_ptr__->Memory).Interpolation = 0;
  (__return_storage_ptr__->Memory).Cluster = 0;
  (__return_storage_ptr__->Memory).Raytracing = 0;
  (__return_storage_ptr__->Curves).Rest = 0;
  (__return_storage_ptr__->Curves).Interpolation = 0;
  (__return_storage_ptr__->Curves).Cluster = 0;
  (__return_storage_ptr__->Curves).Raytracing = 0;
  uVar6 = ::GetDataSize((FHairStrandsBulkData *)param_1);
  (__return_storage_ptr__->CPU).Guides = uVar6;
  uVar6 = FHairGroupPlatformData::FStrands::GetDataSize(&param_1->Strands);
  (__return_storage_ptr__->CPU).Strands = uVar6;
  uVar6 = FHairGroupPlatformData::FCards::GetDataSize(&param_1->Cards);
  (__return_storage_ptr__->CPU).Cards = uVar6;
  uVar6 = FHairGroupPlatformData::FMeshes::GetDataSize(&param_1->Meshes);
  (__return_storage_ptr__->CPU).Meshes = uVar6;
  uVar9 = 0;
  pFVar1 = (param_2->Guides).RestResource;
  uVar6 = uVar9;
  if (pFVar1 != (FHairStrandsRestResource *)0x0) {
    uVar6 = FHairStrandsRestResource::GetResourcesSize(pFVar1);
  }
  (__return_storage_ptr__->GPU).Guides = uVar6;
  uVar6 = FHairGroupResources::FStrands::GetResourcesSize(&param_2->Strands);
  (__return_storage_ptr__->GPU).Strands = uVar6;
  uVar6 = FHairGroupResources::FCards::GetResourcesSize(&param_2->Cards);
  (__return_storage_ptr__->GPU).Cards = uVar6;
  uVar6 = FHairGroupResources::FMeshes::GetResourcesSize(&param_2->Meshes);
  (__return_storage_ptr__->GPU).Meshes = uVar6;
  pFVar1 = (param_2->Strands).RestResource;
  if (pFVar1 != (FHairStrandsRestResource *)0x0) {
    uVar6 = FHairStrandsRestResource::GetResourcesSize(pFVar1);
    (__return_storage_ptr__->Memory).Rest = uVar6;
  }
  pFVar2 = (param_2->Strands).InterpolationResource;
  if (pFVar2 != (FHairStrandsInterpolationResource *)0x0) {
    pFVar3 = (pFVar2->CurveInterpolationBuffer).Buffer.Reference;
    uVar6 = uVar9;
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      uVar6 = (pFVar3->Desc).NumElements * (pFVar3->Desc).BytesPerElement;
    }
    pFVar3 = (pFVar2->PointInterpolationBuffer).Buffer.Reference;
    uVar7 = uVar9;
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      uVar7 = (pFVar3->Desc).NumElements * (pFVar3->Desc).BytesPerElement;
    }
    (__return_storage_ptr__->Memory).Interpolation = uVar7 + uVar6;
  }
  pFVar4 = (param_2->Strands).ClusterResource;
  if (pFVar4 != (FHairStrandsClusterResource *)0x0) {
    pFVar3 = (pFVar4->ClusterInfoBuffer).Buffer.Reference;
    uVar6 = uVar9;
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      uVar6 = (pFVar3->Desc).NumElements * (pFVar3->Desc).BytesPerElement;
    }
    pFVar3 = (pFVar4->CurveToClusterIdBuffer).Buffer.Reference;
    uVar7 = uVar9;
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      uVar7 = (pFVar3->Desc).NumElements * (pFVar3->Desc).BytesPerElement;
    }
    pFVar3 = (pFVar4->PointLODBuffer).Buffer.Reference;
    uVar8 = uVar9;
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      uVar8 = (pFVar3->Desc).NumElements * (pFVar3->Desc).BytesPerElement;
    }
    (__return_storage_ptr__->Memory).Cluster = uVar8 + uVar7 + uVar6;
  }
  pFVar5 = (param_2->Strands).RaytracingResource;
  if (pFVar5 != (FHairStrandsRaytracingResource *)0x0) {
    pFVar3 = (pFVar5->PositionBuffer).Buffer.Reference;
    uVar6 = uVar9;
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      uVar6 = (pFVar3->Desc).NumElements * (pFVar3->Desc).BytesPerElement;
    }
    pFVar3 = (pFVar5->IndexBuffer).Buffer.Reference;
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      uVar9 = (pFVar3->Desc).NumElements * (pFVar3->Desc).BytesPerElement;
    }
    (__return_storage_ptr__->Memory).Raytracing = uVar6 + uVar9;
  }
  pFVar1 = (param_2->Strands).RestResource;
  if (pFVar1 != (FHairStrandsRestResource *)0x0) {
    (__return_storage_ptr__->Curves).Rest = (uint)pFVar1->_padding_;
  }
  pFVar2 = (param_2->Strands).InterpolationResource;
  if (pFVar2 != (FHairStrandsInterpolationResource *)0x0) {
    (__return_storage_ptr__->Curves).Interpolation = (uint)pFVar2->_padding_;
  }
  pFVar4 = (param_2->Strands).ClusterResource;
  if (pFVar4 != (FHairStrandsClusterResource *)0x0) {
    (__return_storage_ptr__->Curves).Cluster = (uint)pFVar4->_padding_;
  }
  pFVar5 = (param_2->Strands).RaytracingResource;
  if (pFVar5 != (FHairStrandsRaytracingResource *)0x0) {
    (__return_storage_ptr__->Curves).Raytracing = (uint)pFVar5->_padding_;
  }
  return __return_storage_ptr__;
}

// GetTotalCPUSize @ 14dfca2d0

uint __thiscall FGroomAssetMemoryStats::GetTotalCPUSize(FGroomAssetMemoryStats *this)

{
  return (this->GPU).Meshes + (this->GPU).Cards + (this->GPU).Strands + (this->GPU).Guides;
}

// GetTotalGPUSize @ 14dfca300

uint __thiscall FGroomAssetMemoryStats::GetTotalGPUSize(FGroomAssetMemoryStats *this)

{
  return (this->CPU).Meshes + (this->CPU).Cards + (this->CPU).Strands + (this->CPU).Guides;
}


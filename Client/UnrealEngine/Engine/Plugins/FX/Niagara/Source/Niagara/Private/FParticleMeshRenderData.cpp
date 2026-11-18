// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FParticleMeshRenderData @ 149334d90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParticleMeshRenderData * __thiscall
FNiagaraRendererMeshes::FParticleMeshRenderData::FParticleMeshRenderData
          (FParticleMeshRenderData *this)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)&(this->VertexFetch_Parameters).field0_0x0 + 4) = 0xffffffffffffffff;
  (this->VertexFetch_Parameters).field0_0x0._s_0.W = -1;
  (this->MeshUsed).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  this->Collector = (FMeshElementCollector *)0x0;
  this->DynamicDataMesh = (FNiagaraDynamicDataMesh *)0x0;
  this->SourceParticleData = (FNiagaraDataBuffer *)0x0;
  this->bUseGPUScene = false;
  this->bHasTranslucentMaterials = false;
  this->bAllTranslucentMaterials = false;
  this->bSortCullOnGpu = false;
  this->bNeedsSort = false;
  this->bNeedsCull = false;
  this->bAllowPerParticleMeshLODs = false;
  this->bIsGpuLowLatencyTranslucency = false;
  this->RendererLayout = (FNiagaraRendererLayout *)0x0;
  this->ParticleFloatSRV = (FRHIShaderResourceView *)0x0;
  this->ParticleHalfSRV = (FRHIShaderResourceView *)0x0;
  this->ParticleIntSRV = (FRHIShaderResourceView *)0x0;
  this->ParticleFloatDataStride = 0;
  this->ParticleHalfDataStride = 0;
  this->ParticleIntDataStride = 0;
  this->ParticleSortedIndicesSRV = (FRHIShaderResourceView *)0x0;
  this->TexCoordBufferSrv = (FRHIShaderResourceView *)0x0;
  this->PackedTangentsBufferSrv = (FRHIShaderResourceView *)0x0;
  this->ColorComponentsBufferSrv = (FRHIShaderResourceView *)0x0;
  this->SortVariable = ~Position;
  *(undefined8 *)&this->ParticleSortedIndicesOffset = 0xffffffffffffffff;
  this->RendererVisTagOffset = 0xffffffff;
  this->MeshIndexOffset = 0xffffffff;
  (this->MeshUsed).NumBits = 0;
  (this->MeshUsed).MaxBits = 0x40;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorldSpacePivotOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WorldSpacePivotOffset).field0_0x0._s_0.Y = (double)uVar1;
  (this->WorldSpacePivotOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CullingSphere).Center.field0_0x0._s_0.X = 0.0;
  (this->CullingSphere).Center.field0_0x0._s_0.Y = 0.0;
  (this->CullingSphere).Center.field0_0x0._s_0.Z = 0.0;
  (this->CullingSphere).W = 0.0;
  this->ResolutionMaxAxis = 0;
  *(undefined8 *)&(this->WorldSpaceSize).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->WorldSpaceSize).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}


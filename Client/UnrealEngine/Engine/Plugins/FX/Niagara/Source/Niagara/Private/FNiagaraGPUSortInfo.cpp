// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FNiagaraGPUSortInfo @ 1492d04a0

FNiagaraGPUSortInfo * __thiscall
FNiagaraGPUSortInfo::FNiagaraGPUSortInfo(FNiagaraGPUSortInfo *this,FNiagaraGPUSortInfo *param_1)

{
  int *piVar1;
  int iVar2;
  FRHIShaderResourceView *pFVar3;
  double dVar4;
  undefined8 uVar5;
  
  this->OwnerName = param_1->OwnerName;
  this->ParticleCount = param_1->ParticleCount;
  this->SortMode = param_1->SortMode;
  this->SortAttributeOffset = param_1->SortAttributeOffset;
  (this->ParticleDataFloatSRV).Reference = (FRHIShaderResourceView *)0x0;
  pFVar3 = (param_1->ParticleDataFloatSRV).Reference;
  (this->ParticleDataFloatSRV).Reference = pFVar3;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar3);
  }
  (this->ParticleDataHalfSRV).Reference = (FRHIShaderResourceView *)0x0;
  pFVar3 = (param_1->ParticleDataHalfSRV).Reference;
  (this->ParticleDataHalfSRV).Reference = pFVar3;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar3);
  }
  (this->ParticleDataIntSRV).Reference = (FRHIShaderResourceView *)0x0;
  pFVar3 = (param_1->ParticleDataIntSRV).Reference;
  (this->ParticleDataIntSRV).Reference = pFVar3;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar3);
  }
  this->FloatDataStride = param_1->FloatDataStride;
  this->HalfDataStride = param_1->HalfDataStride;
  this->IntDataStride = param_1->IntDataStride;
  (this->GPUParticleCountSRV).Reference = (FRHIShaderResourceView *)0x0;
  pFVar3 = (param_1->GPUParticleCountSRV).Reference;
  (this->GPUParticleCountSRV).Reference = pFVar3;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar3);
  }
  this->GPUParticleCountOffset = param_1->GPUParticleCountOffset;
  this->CulledGPUParticleCountOffset = param_1->CulledGPUParticleCountOffset;
  dVar4 = (param_1->ViewOrigin).field0_0x0._s_0.Y;
  (this->ViewOrigin).field0_0x0._s_0.X = (param_1->ViewOrigin).field0_0x0._s_0.X;
  (this->ViewOrigin).field0_0x0._s_0.Y = dVar4;
  (this->ViewOrigin).field0_0x0._s_0.Z = (param_1->ViewOrigin).field0_0x0._s_0.Z;
  dVar4 = (param_1->ViewDirection).field0_0x0._s_0.Y;
  (this->ViewDirection).field0_0x0._s_0.X = (param_1->ViewDirection).field0_0x0._s_0.X;
  (this->ViewDirection).field0_0x0._s_0.Y = dVar4;
  (this->ViewDirection).field0_0x0._s_0.Z = (param_1->ViewDirection).field0_0x0._s_0.Z;
  this->bEnableCulling = param_1->bEnableCulling;
  this->CullPositionAttributeOffset = param_1->CullPositionAttributeOffset;
  this->CullOrientationAttributeOffset = param_1->CullOrientationAttributeOffset;
  this->CullScaleAttributeOffset = param_1->CullScaleAttributeOffset;
  this->RendererVisTagAttributeOffset = param_1->RendererVisTagAttributeOffset;
  this->RendererVisibility = param_1->RendererVisibility;
  this->MeshIndexAttributeOffset = param_1->MeshIndexAttributeOffset;
  this->MeshIndex = param_1->MeshIndex;
  dVar4 = (param_1->LocalBSphere).Center.field0_0x0._s_0.Y;
  (this->LocalBSphere).Center.field0_0x0._s_0.X = (param_1->LocalBSphere).Center.field0_0x0._s_0.X;
  (this->LocalBSphere).Center.field0_0x0._s_0.Y = dVar4;
  dVar4 = (param_1->LocalBSphere).W;
  (this->LocalBSphere).Center.field0_0x0._s_0.Z = (param_1->LocalBSphere).Center.field0_0x0._s_0.Z;
  (this->LocalBSphere).W = dVar4;
  dVar4 = (param_1->CullingWorldSpaceOffset).field0_0x0._s_0.Y;
  (this->CullingWorldSpaceOffset).field0_0x0._s_0.X =
       (param_1->CullingWorldSpaceOffset).field0_0x0._s_0.X;
  (this->CullingWorldSpaceOffset).field0_0x0._s_0.Y = dVar4;
  (this->CullingWorldSpaceOffset).field0_0x0._s_0.Z =
       (param_1->CullingWorldSpaceOffset).field0_0x0._s_0.Z;
  (this->DistanceCullRange).field0_0x0 = (param_1->DistanceCullRange).field0_0x0;
  piVar1 = &(this->CullPlanes).ArrayMax;
  uVar5 = *(undefined8 *)((longlong)&(param_1->LODScreenSize).field0_0x0 + 8);
  *(undefined8 *)&(this->LODScreenSize).field0_0x0 =
       *(undefined8 *)&(param_1->LODScreenSize).field0_0x0;
  *(undefined8 *)((longlong)&(this->LODScreenSize).field0_0x0 + 8) = uVar5;
  iVar2 = (param_1->CullPlanes).ArrayNum;
  (this->CullPlanes).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0xc;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<0,TFixedAllocator<12>::ForElementType<UE::Math::TPlane<double>_>_>
              (0x20,0x10,iVar2,0,&(this->CullPlanes).AllocatorInstance,iVar2,piVar1);
    memcpy(&this->CullPlanes,&param_1->CullPlanes,(longlong)iVar2 << 5);
  }
  (this->AllocationInfo).BufferSRV.Reference = (FRHIShaderResourceView *)0x0;
  pFVar3 = (param_1->AllocationInfo).BufferSRV.Reference;
  (this->AllocationInfo).BufferSRV.Reference = pFVar3;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar3);
  }
  (this->AllocationInfo).BufferOffset = (param_1->AllocationInfo).BufferOffset;
  (this->AllocationInfo).SortBatchId = (param_1->AllocationInfo).SortBatchId;
  (this->AllocationInfo).ElementIndex = (param_1->AllocationInfo).ElementIndex;
  this->SortFlags = param_1->SortFlags;
  return this;
}

// FNiagaraGPUSortInfo @ 149332c60

FNiagaraGPUSortInfo * __thiscall FNiagaraGPUSortInfo::FNiagaraGPUSortInfo(FNiagaraGPUSortInfo *this)

{
  this->SortAttributeOffset = -1;
  (this->OwnerName).ComparisonIndex = 0;
  (this->OwnerName).Number = 0;
  (this->ViewDirection).field0_0x0._s_0.Z = 1.0;
  this->ParticleCount = 0;
  this->SortMode = None;
  (this->ParticleDataFloatSRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->ParticleDataHalfSRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->ParticleDataIntSRV).Reference = (FRHIShaderResourceView *)0x0;
  this->FloatDataStride = 0;
  this->HalfDataStride = 0;
  this->IntDataStride = 0;
  (this->GPUParticleCountSRV).Reference = (FRHIShaderResourceView *)0x0;
  this->GPUParticleCountOffset = 0xffffffff;
  this->CulledGPUParticleCountOffset = 0xffffffff;
  (this->ViewOrigin).field0_0x0._s_0.X = 0.0;
  (this->ViewOrigin).field0_0x0._s_0.Y = 0.0;
  (this->ViewOrigin).field0_0x0._s_0.Z = 0.0;
  (this->ViewDirection).field0_0x0._s_0.X = 0.0;
  (this->ViewDirection).field0_0x0._s_0.Y = 0.0;
  this->bEnableCulling = false;
  this->CullPositionAttributeOffset = -1;
  this->CullOrientationAttributeOffset = -1;
  this->CullScaleAttributeOffset = -1;
  this->RendererVisTagAttributeOffset = -1;
  this->RendererVisibility = 0;
  this->MeshIndexAttributeOffset = -1;
  this->MeshIndex = 0;
  (this->LocalBSphere).Center.field0_0x0._s_0.X = 0.0;
  (this->LocalBSphere).Center.field0_0x0._s_0.Y = 0.0;
  (this->LocalBSphere).Center.field0_0x0._s_0.Z = 0.0;
  (this->LocalBSphere).W = 0.0;
  (this->CullingWorldSpaceOffset).field0_0x0._s_0.X = 0.0;
  (this->CullingWorldSpaceOffset).field0_0x0._s_0.Y = 0.0;
  (this->CullingWorldSpaceOffset).field0_0x0._s_0.Z = 0.0;
  (this->DistanceCullRange).field0_0x0._s_0.X = 0.0;
  *(undefined8 *)((longlong)&(this->DistanceCullRange).field0_0x0 + 4) = 0x7f7fffff;
  (this->LODScreenSize).field0_0x0._s_0.Y = 2.0;
  *(undefined8 *)((longlong)&(this->LODScreenSize).field0_0x0 + 8) = 0x3f800000;
  (this->CullPlanes).ArrayNum = 0;
  (this->CullPlanes).ArrayMax = 0xc;
  (this->AllocationInfo).BufferSRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->AllocationInfo).BufferOffset = 0xffffffff;
  (this->AllocationInfo).SortBatchId = -1;
  (this->AllocationInfo).ElementIndex = -1;
  this->SortFlags = None;
  return this;
}


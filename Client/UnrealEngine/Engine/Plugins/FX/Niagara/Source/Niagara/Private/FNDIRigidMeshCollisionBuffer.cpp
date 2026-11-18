// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// GetFriendlyName @ 1491c8230

FString * __thiscall
FNDIRigidMeshCollisionBuffer::GetFriendlyName
          (FNDIRigidMeshCollisionBuffer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FNDIRigidMeshCollisionBuffer");
  return __return_storage_ptr__;
}

// InitRHI @ 1491d3b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNDIRigidMeshCollisionBuffer::InitRHI
          (FNDIRigidMeshCollisionBuffer *this,FRHICommandListBase *param_1)

{
  uint uVar1;
  
  uVar1 = this->MaxNumTransforms * 3;
  if (uVar1 != 0) {
    FReadBuffer::Initialize
              (&this->WorldTransformBuffer,param_1,L"FNDIRigidMeshCollisionBuffer",0x10,uVar1,
               PF_A32B32G32R32F,Static,(FResourceArrayUploadInterface *)0x0);
  }
  uVar1 = this->MaxNumTransforms * 3;
  if (uVar1 != 0) {
    FReadBuffer::Initialize
              (&this->InverseTransformBuffer,param_1,L"FNDIRigidMeshCollisionBuffer",0x10,uVar1,
               PF_A32B32G32R32F,Static,(FResourceArrayUploadInterface *)0x0);
  }
  if (this->MaxNumPrimitives != 0) {
    FReadBuffer::Initialize
              (&this->ElementExtentBuffer,param_1,L"FNDIRigidMeshCollisionBuffer",0x10,
               this->MaxNumPrimitives,PF_A32B32G32R32F,Static,(FResourceArrayUploadInterface *)0x0);
  }
  if (this->MaxNumPrimitives != 0) {
    FReadBuffer::Initialize
              (&this->MeshScaleBuffer,param_1,L"FNDIRigidMeshCollisionBuffer",0x10,
               this->MaxNumPrimitives,PF_A32B32G32R32F,Static,(FResourceArrayUploadInterface *)0x0);
  }
  if (this->MaxNumPrimitives != 0) {
    FReadBuffer::Initialize
              (&this->PhysicsTypeBuffer,param_1,L"FNDIRigidMeshCollisionBuffer",4,
               this->MaxNumPrimitives,PF_R32_UINT,Static,(FResourceArrayUploadInterface *)0x0);
  }
  if (this->MaxNumPrimitives != 0) {
    FReadBuffer::Initialize
              (&this->DFIndexBuffer,param_1,L"FNDIRigidMeshCollisionBuffer",4,this->MaxNumPrimitives
               ,PF_R32_UINT,Static,(FResourceArrayUploadInterface *)0x0);
  }
  return;
}

// ReleaseRHI @ 1491de970

void __thiscall FNDIRigidMeshCollisionBuffer::ReleaseRHI(FNDIRigidMeshCollisionBuffer *this)

{
  FRHIBuffer *pFVar1;
  FRHIShaderResourceView *pFVar2;
  
  (this->WorldTransformBuffer).NumBytes = 0;
  pFVar1 = (this->WorldTransformBuffer).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->WorldTransformBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->WorldTransformBuffer).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->WorldTransformBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  (this->InverseTransformBuffer).NumBytes = 0;
  pFVar1 = (this->InverseTransformBuffer).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->InverseTransformBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->InverseTransformBuffer).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->InverseTransformBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  (this->ElementExtentBuffer).NumBytes = 0;
  pFVar1 = (this->ElementExtentBuffer).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->ElementExtentBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->ElementExtentBuffer).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->ElementExtentBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  (this->MeshScaleBuffer).NumBytes = 0;
  pFVar1 = (this->MeshScaleBuffer).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->MeshScaleBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->MeshScaleBuffer).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->MeshScaleBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  (this->PhysicsTypeBuffer).NumBytes = 0;
  pFVar1 = (this->PhysicsTypeBuffer).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->PhysicsTypeBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->PhysicsTypeBuffer).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->PhysicsTypeBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  (this->DFIndexBuffer).NumBytes = 0;
  pFVar1 = (this->DFIndexBuffer).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->DFIndexBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->DFIndexBuffer).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->DFIndexBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  return;
}


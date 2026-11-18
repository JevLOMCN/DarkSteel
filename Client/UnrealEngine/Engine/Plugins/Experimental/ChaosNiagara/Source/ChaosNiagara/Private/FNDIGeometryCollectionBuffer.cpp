// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 4

// FNDIGeometryCollectionBuffer @ 14e981ce0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FNDIGeometryCollectionBuffer * __thiscall
FNDIGeometryCollectionBuffer::FNDIGeometryCollectionBuffer(FNDIGeometryCollectionBuffer *this)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FNDIGeometryCollectionBuffer__6B_;
  (this->WorldTransformBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->WorldTransformBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->WorldTransformBuffer).NumBytes = 0;
  (this->PrevWorldTransformBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->PrevWorldTransformBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PrevWorldTransformBuffer).NumBytes = 0;
  (this->WorldInverseTransformBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->WorldInverseTransformBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->WorldInverseTransformBuffer).NumBytes = 0;
  (this->PrevWorldInverseTransformBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->PrevWorldInverseTransformBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PrevWorldInverseTransformBuffer).NumBytes = 0;
  (this->BoundsBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->BoundsBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->BoundsBuffer).NumBytes = 0;
  (this->ComponentRestTransformBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->DataToUpload).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataToUpload).ArrayNum = 0;
  (this->DataToUpload).ArrayMax = 0;
  return this;
}

// GetFriendlyName @ 14e99cf80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
FNDIGeometryCollectionBuffer::GetFriendlyName
          (FNDIGeometryCollectionBuffer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FNDIGeometryCollectionBuffer");
  return __return_storage_ptr__;
}

// InitRHI @ 14e9a1f10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNDIGeometryCollectionBuffer::InitRHI
          (FNDIGeometryCollectionBuffer *this,FRHICommandListBase *param_1)

{
  uint uVar1;
  
  uVar1 = this->NumPieces * 3;
  if (uVar1 != 0) {
    FReadBuffer::Initialize
              (&this->WorldTransformBuffer,param_1,L"FNDIGeometryCollectionBuffer",0x10,uVar1,
               PF_A32B32G32R32F,Static,(FResourceArrayUploadInterface *)0x0);
  }
  uVar1 = this->NumPieces * 3;
  if (uVar1 != 0) {
    FReadBuffer::Initialize
              (&this->PrevWorldTransformBuffer,param_1,L"FNDIGeometryCollectionBuffer",0x10,uVar1,
               PF_A32B32G32R32F,Static,(FResourceArrayUploadInterface *)0x0);
  }
  uVar1 = this->NumPieces * 3;
  if (uVar1 != 0) {
    FReadBuffer::Initialize
              (&this->WorldInverseTransformBuffer,param_1,L"FNDIGeometryCollectionBuffer",0x10,uVar1
               ,PF_A32B32G32R32F,Static,(FResourceArrayUploadInterface *)0x0);
  }
  uVar1 = this->NumPieces * 3;
  if (uVar1 != 0) {
    FReadBuffer::Initialize
              (&this->PrevWorldInverseTransformBuffer,param_1,L"FNDIGeometryCollectionBuffer",0x10,
               uVar1,PF_A32B32G32R32F,Static,(FResourceArrayUploadInterface *)0x0);
  }
  if (this->NumPieces != 0) {
    FReadBuffer::Initialize
              (&this->BoundsBuffer,param_1,L"FNDIGeometryCollectionBuffer",0x10,this->NumPieces,
               PF_A32B32G32R32F,Static,(FResourceArrayUploadInterface *)0x0);
  }
  return;
}

// ReleaseRHI @ 14e9a5470

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FNDIGeometryCollectionBuffer::ReleaseRHI(FNDIGeometryCollectionBuffer *this)

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
  (this->PrevWorldTransformBuffer).NumBytes = 0;
  pFVar1 = (this->PrevWorldTransformBuffer).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->PrevWorldTransformBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->PrevWorldTransformBuffer).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->PrevWorldTransformBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  (this->WorldInverseTransformBuffer).NumBytes = 0;
  pFVar1 = (this->WorldInverseTransformBuffer).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->WorldInverseTransformBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->WorldInverseTransformBuffer).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->WorldInverseTransformBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  (this->PrevWorldInverseTransformBuffer).NumBytes = 0;
  pFVar1 = (this->PrevWorldInverseTransformBuffer).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->PrevWorldInverseTransformBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->PrevWorldInverseTransformBuffer).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->PrevWorldInverseTransformBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  (this->BoundsBuffer).NumBytes = 0;
  pFVar1 = (this->BoundsBuffer).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->BoundsBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->BoundsBuffer).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->BoundsBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  return;
}


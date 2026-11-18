// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// GetFriendlyName @ 148ebd2f0

FString * __thiscall
FNDIPhysicsAssetBuffer::GetFriendlyName
          (FNDIPhysicsAssetBuffer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FNDIPhysicsAssetBuffer");
  return __return_storage_ptr__;
}

// InitRHI @ 148ec8510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNDIPhysicsAssetBuffer::InitRHI(FNDIPhysicsAssetBuffer *this,FRHICommandListBase *param_1)

{
  FReadBuffer::Initialize
            (&this->WorldTransformBuffer,param_1,L"FNDIPhysicsAssetBuffer",0x10,900,PF_A32B32G32R32F
             ,Static,(FResourceArrayUploadInterface *)0x0);
  FReadBuffer::Initialize
            (&this->InverseTransformBuffer,param_1,L"FNDIPhysicsAssetBuffer",0x10,900,
             PF_A32B32G32R32F,Static,(FResourceArrayUploadInterface *)0x0);
  FReadBuffer::Initialize
            (&this->ElementExtentBuffer,param_1,L"FNDIPhysicsAssetBuffer",0x10,100,PF_A32B32G32R32F,
             Static,(FResourceArrayUploadInterface *)0x0);
  FReadBuffer::Initialize
            (&this->PhysicsTypeBuffer,param_1,L"FNDIPhysicsAssetBuffer",4,100,PF_R32_UINT,Static,
             (FResourceArrayUploadInterface *)0x0);
  return;
}

// ReleaseRHI @ 148ece780

void __thiscall FNDIPhysicsAssetBuffer::ReleaseRHI(FNDIPhysicsAssetBuffer *this)

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
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// InitRHI @ 147f8f370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDummyPrevTransformBuffer::InitRHI(FDummyPrevTransformBuffer *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIBuffer> *pTVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  TRefCountPtr<FRHIBuffer> TVar3;
  TRefCountPtr<FRHIShaderResourceView> TVar4;
  FRHIResource *local_res8;
  
  RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
  TVar3 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  pTVar1 = &this->VB;
  if ((FRHIBuffer *)pTVar1 != TVar3.Reference) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = (FRHIBuffer *)(TVar3.Reference)->_padding_;
    (TVar3.Reference)->_padding_ = 0;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar4 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res8,(FInitializer *)pTVar1->Reference);
  pTVar2 = &this->SRV;
  if ((FRHIShaderResourceView *)pTVar2 != TVar4.Reference) {
    this_01 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar2->Reference = *TVar4.Reference;
    *(undefined8 *)TVar4.Reference = 0;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return;
}

// ReleaseRHI @ 147f8f4b0

void __thiscall FDummyPrevTransformBuffer::ReleaseRHI(FDummyPrevTransformBuffer *this)

{
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  
  this_00 = (this->VB).Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    (this->VB).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->SRV).Reference;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    (this->SRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
    return;
  }
  return;
}

// GetFriendlyName @ 147f8f500

FString * __thiscall
FDummyPrevTransformBuffer::GetFriendlyName
          (FDummyPrevTransformBuffer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FDummyPrevTransformBuffer");
  return __return_storage_ptr__;
}

// ~FDummyPrevTransformBuffer @ 147fa8d90

void __thiscall
FDummyPrevTransformBuffer::~FDummyPrevTransformBuffer(FDummyPrevTransformBuffer *this)

{
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  
  this->_padding_ = (longlong)&___7FDummyPrevTransformBuffer__6B_;
  this_00 = (this->SRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->VB).Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}


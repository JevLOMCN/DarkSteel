// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// InitRHI @ 14e06df10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDummyCulledDispatchVertexIdsBuffer::InitRHI
          (FDummyCulledDispatchVertexIdsBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  TRefCountPtr<FRHIBuffer> *pTVar2;
  TRefCountPtr<FRHIShaderResourceView> *pTVar3;
  FRHIResource *this_00;
  FRHIBuffer *this_01;
  FRHIShaderResourceView *pFVar4;
  TRefCountPtr<FRHIBuffer> TVar5;
  TRefCountPtr<FRHIShaderResourceView> TVar6;
  FRHIResource *local_res8;
  
  FLazyName::Resolve(&`public:_virtual_void___cdecl_FDummyCulledDispatchVertexIdsBuffer::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::ClassName);
  TVar5 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  plVar1 = &this->_padding_;
  if ((FRHIBuffer *)plVar1 != TVar5.Reference) {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = (TVar5.Reference)->_padding_;
    (TVar5.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  FLazyName::Resolve(&`public:_virtual_void___cdecl_FDummyCulledDispatchVertexIdsBuffer::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::ClassName);
  TVar5 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  pTVar2 = &this->ByteAddressBufferRHI;
  if ((FRHIBuffer *)pTVar2 != TVar5.Reference) {
    this_01 = pTVar2->Reference;
    pTVar2->Reference = (FRHIBuffer *)(TVar5.Reference)->_padding_;
    (TVar5.Reference)->_padding_ = 0;
    if (this_01 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar6 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res8,(FInitializer *)*plVar1);
  pTVar3 = &this->SRVUint;
  if ((FRHIShaderResourceView *)pTVar3 != TVar6.Reference) {
    pFVar4 = pTVar3->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar3->Reference = *TVar6.Reference;
    *(undefined8 *)TVar6.Reference = 0;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar6 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res8,(FInitializer *)*plVar1);
  pTVar3 = &this->SRVFloat;
  if ((FRHIShaderResourceView *)pTVar3 != TVar6.Reference) {
    pFVar4 = pTVar3->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar3->Reference = *TVar6.Reference;
    *(undefined8 *)TVar6.Reference = 0;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar6 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res8,(FInitializer *)*plVar1);
  pTVar3 = &this->SRVRGBA;
  if ((FRHIShaderResourceView *)pTVar3 != TVar6.Reference) {
    pFVar4 = pTVar3->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar3->Reference = *TVar6.Reference;
    *(undefined8 *)TVar6.Reference = 0;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar6 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res8,(FInitializer *)*plVar1);
  pTVar3 = &this->SRVRGBA_Uint;
  if ((FRHIShaderResourceView *)pTVar3 != TVar6.Reference) {
    pFVar4 = pTVar3->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar3->Reference = *TVar6.Reference;
    *(undefined8 *)TVar6.Reference = 0;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar6 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res8,(FInitializer *)pTVar2->Reference);
  pTVar3 = &this->SRVByteAddress;
  if ((FRHIShaderResourceView *)pTVar3 != TVar6.Reference) {
    pFVar4 = pTVar3->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar3->Reference = *TVar6.Reference;
    *(undefined8 *)TVar6.Reference = 0;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return;
}

// ReleaseRHI @ 14e06e250

void __thiscall
FDummyCulledDispatchVertexIdsBuffer::ReleaseRHI(FDummyCulledDispatchVertexIdsBuffer *this)

{
  FRHIBuffer *this_00;
  FRHIShaderResourceView *pFVar1;
  FRHIResource *this_01;
  
  this_00 = (this->ByteAddressBufferRHI).Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    (this->ByteAddressBufferRHI).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  pFVar1 = (this->SRVByteAddress).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->SRVByteAddress).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  this_01 = (FRHIResource *)this->_padding_;
  if (this_01 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(this_01);
  }
  pFVar1 = (this->SRVUint).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->SRVUint).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->SRVFloat).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->SRVFloat).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->SRVRGBA).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->SRVRGBA).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->SRVRGBA_Uint).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    (this->SRVRGBA_Uint).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  return;
}

// ~FDummyCulledDispatchVertexIdsBuffer @ 14e07d0a0

void __thiscall
FDummyCulledDispatchVertexIdsBuffer::~FDummyCulledDispatchVertexIdsBuffer
          (FDummyCulledDispatchVertexIdsBuffer *this)

{
  FRHIBuffer *this_00;
  FRHIShaderResourceView *pFVar1;
  
  this_00 = (this->ByteAddressBufferRHI).Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  pFVar1 = (this->SRVByteAddress).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->SRVRGBA_Uint).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->SRVRGBA).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->SRVFloat).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->SRVUint).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}


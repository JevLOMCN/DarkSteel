// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// InitRHI @ 148120f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FParticleTileVertexBuffer::InitRHI(FParticleTileVertexBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  FRHIResource *this_00;
  FRHIShaderResourceView *this_01;
  TRefCountPtr<FRHIBuffer> TVar2;
  TRefCountPtr<FRHIShaderResourceView> TVar3;
  TRefCountPtr<FRHIShaderResourceView> *pTVar4;
  FRHIResource *local_res8;
  
  if (0 < this->AlignedTileCount) {
    RHIGetDefaultResourceState(VertexBuffer|KeepCPUAccessible|ShaderResource|Static,false);
    TVar2 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
    plVar1 = &this->_padding_;
    if ((FRHIBuffer *)plVar1 != TVar2.Reference) {
      this_00 = (FRHIResource *)*plVar1;
      *plVar1 = (TVar2.Reference)->_padding_;
      (TVar2.Reference)->_padding_ = 0;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_00);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    TVar3 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)&local_res8,(FInitializer *)*plVar1);
    pTVar4 = &this->VertexBufferSRV;
    if ((FRHIShaderResourceView *)pTVar4 != TVar3.Reference) {
      this_01 = pTVar4->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar4->Reference = *TVar3.Reference;
      *(undefined8 *)TVar3.Reference = 0;
      if (this_01 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
  }
  return;
}

// ReleaseRHI @ 148128ff0

void __thiscall FParticleTileVertexBuffer::ReleaseRHI(FParticleTileVertexBuffer *this)

{
  FRHIShaderResourceView *this_00;
  
  this->TileCount = 0;
  this->AlignedTileCount = 0;
  this_00 = (this->VertexBufferSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->VertexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::ReleaseRHI((FVertexBuffer *)this);
  return;
}


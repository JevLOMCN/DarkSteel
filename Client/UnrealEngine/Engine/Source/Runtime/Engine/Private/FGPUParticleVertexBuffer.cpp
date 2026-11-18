// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// InitRHI @ 148120510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGPUParticleVertexBuffer::InitRHI(FGPUParticleVertexBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  FRHIResource *this_00;
  FRHIShaderResourceView *this_01;
  TRefCountPtr<FRHIBuffer> TVar3;
  TRefCountPtr<FRHIShaderResourceView> TVar4;
  FRHIResource *local_res18;
  
  if ((((FXConsoleVariables::bAllowGPUParticles != 0) && (GRHIGlobals.SupportsWideMRT)) &&
      (ZPULL(GPixelFormats[0x11],0,1) != 0)) && (GRHIGlobals.SupportsTexture3D)) {
    RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
    TVar3 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res18);
    plVar1 = &this->_padding_;
    if ((FRHIBuffer *)plVar1 != TVar3.Reference) {
      this_00 = (FRHIResource *)*plVar1;
      *plVar1 = (TVar3.Reference)->_padding_;
      (TVar3.Reference)->_padding_ = 0;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_00);
      }
    }
    if (local_res18 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res18);
    }
    TVar4 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)&local_res18,(FInitializer *)*plVar1);
    pTVar2 = &this->VertexBufferSRV;
    if ((FRHIShaderResourceView *)pTVar2 != TVar4.Reference) {
      this_01 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar2->Reference = *TVar4.Reference;
      *(undefined8 *)TVar4.Reference = 0;
      if (this_01 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
      }
    }
    if (local_res18 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res18);
    }
  }
  return;
}

// ReleaseRHI @ 148128ef0

void __thiscall FGPUParticleVertexBuffer::ReleaseRHI(FGPUParticleVertexBuffer *this)

{
  FRHIShaderResourceView *this_00;
  
  this_00 = (this->VertexBufferSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->VertexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::ReleaseRHI((FVertexBuffer *)this);
  return;
}


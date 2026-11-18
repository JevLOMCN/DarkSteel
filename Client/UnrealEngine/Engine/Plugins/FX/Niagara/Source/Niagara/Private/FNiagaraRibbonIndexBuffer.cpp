// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// ~FNiagaraRibbonIndexBuffer @ 149336a80

void __thiscall
FNiagaraRibbonIndexBuffer::~FNiagaraRibbonIndexBuffer(FNiagaraRibbonIndexBuffer *this)

{
  FRHIUnorderedAccessView *this_00;
  FRHIShaderResourceView *this_01;
  
  this->_padding_ = (longlong)&___7FNiagaraRibbonIndexBuffer__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  this_00 = (this->UAV).Reference;
  if (this_00 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->SRV).Reference;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  return;
}

// Initialize @ 149358470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraRibbonIndexBuffer::Initialize
          (FNiagaraRibbonIndexBuffer *this,FRHICommandListBase *param_1,
          FGlobalDynamicIndexBufferAllocationEx *param_2)

{
  FRHIResource *this_00;
  FRHIResource *this_01;
  FRHIShaderResourceView *this_02;
  bool bVar1;
  TRefCountPtr<FRHIShaderResourceView> TVar2;
  TRefCountPtr<FRHIShaderResourceView> *pTVar3;
  FRHIResource *local_res8;
  
  FRenderResource::InitResource((FRenderResource *)this,param_1);
  this_00 = (FRHIResource *)this->_padding_;
  this_01 = *(FRHIResource **)(param_2->_padding_ + 0x20);
  if (this_00 != this_01) {
    this->_padding_ = (longlong)this_01;
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_01);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  this->FirstIndex = (uint)param_2->_padding_;
  bVar1 = IsRayTracingAllowed();
  if (bVar1) {
    TVar2 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)&local_res8,(FInitializer *)this->_padding_);
    pTVar3 = &this->SRV;
    if ((FRHIShaderResourceView *)pTVar3 != TVar2.Reference) {
      this_02 = pTVar3->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar3->Reference = *TVar2.Reference;
      *(undefined8 *)TVar2.Reference = 0;
      if (this_02 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_02);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
  }
  return;
}

// ReleaseRHI @ 1493655d0

void __thiscall FNiagaraRibbonIndexBuffer::ReleaseRHI(FNiagaraRibbonIndexBuffer *this)

{
  FRHIUnorderedAccessView *this_00;
  FRHIShaderResourceView *this_01;
  
  this_00 = (this->UAV).Reference;
  if (this_00 != (FRHIUnorderedAccessView *)0x0) {
    (this->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->SRV).Reference;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    (this->SRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
  }
  FIndexBuffer::ReleaseRHI((FIndexBuffer *)this);
  return;
}


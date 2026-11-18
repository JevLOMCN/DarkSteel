// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// InitRHI @ 149313b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraEmptyByteAddressBufferSRV::InitRHI
          (FNiagaraEmptyByteAddressBufferSRV *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIBuffer> *pTVar1;
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  TRefCountPtr<FRHIBuffer> TVar2;
  TRefCountPtr<FRHIShaderResourceView> TVar3;
  TRefCountPtr<FRHIShaderResourceView> *pTVar4;
  FRHIResource *local_res8;
  
  TVar2 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  pTVar1 = &this->Buffer;
  if ((FRHIBuffer *)pTVar1 != TVar2.Reference) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = (FRHIBuffer *)(TVar2.Reference)->_padding_;
    (TVar2.Reference)->_padding_ = 0;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar3 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res8,(FInitializer *)pTVar1->Reference);
  pTVar4 = &this->SRV;
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
  return;
}

// ReleaseRHI @ 149313c80

void __thiscall
FNiagaraEmptyByteAddressBufferSRV::ReleaseRHI(FNiagaraEmptyByteAddressBufferSRV *this)

{
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  
  this_00 = (this->SRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->SRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->Buffer).Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    (this->Buffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
    return;
  }
  return;
}


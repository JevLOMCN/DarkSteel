// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// InitRHI @ 145cf7610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FEmptyVertexBuffer::InitRHI(FEmptyVertexBuffer *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FRHIResource *pFVar3;
  TRefCountPtr<FRHIBuffer> TVar4;
  TRefCountPtr<FRHIShaderResourceView> TVar5;
  TRefCountPtr<FRHIUnorderedAccessView> TVar6;
  FRHIResource *local_res8;
  
  RHIGetDefaultResourceState(VertexBuffer|ShaderResource|UnorderedAccess|Static,false);
  TVar4 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  puVar1 = &this->field_0x20;
  if ((FRHIBuffer *)puVar1 != TVar4.Reference) {
    pFVar3 = *(FRHIResource **)puVar1;
    *(longlong *)puVar1 = (TVar4.Reference)->_padding_;
    (TVar4.Reference)->_padding_ = 0;
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar3);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar5 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res8,*(FInitializer **)puVar1);
  puVar2 = &this->field_0x28;
  if ((FRHIShaderResourceView *)puVar2 != TVar5.Reference) {
    pFVar3 = *(FRHIResource **)puVar2;
    *(undefined8 *)puVar2 = *(undefined8 *)TVar5.Reference;
    *(undefined8 *)TVar5.Reference = 0;
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar3);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar6 = FRHICommandListBase::CreateUnorderedAccessView
                    (param_1,(FRHIBuffer *)&local_res8,*(FInitializer **)puVar1);
  puVar1 = &this->field_0x30;
  if ((FRHIUnorderedAccessView *)puVar1 != TVar6.Reference) {
    pFVar3 = *(FRHIResource **)puVar1;
    *(undefined8 *)puVar1 = *(undefined8 *)TVar6.Reference;
    *(undefined8 *)TVar6.Reference = 0;
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar3);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return;
}


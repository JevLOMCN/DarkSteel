// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CableComponent
// Functions: 1

// InitRHI @ 14f019a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FCableIndexBuffer::InitRHI(FCableIndexBuffer *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  TRefCountPtr<FRHIBuffer> TVar1;
  longlong *plVar2;
  FRHIResource *local_res8;
  
  RHIGetDefaultResourceState(IndexBuffer|ShaderResource|Dynamic,false);
  TVar1 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  plVar2 = &this->_padding_;
  if ((FRHIBuffer *)plVar2 != TVar1.Reference) {
    this_00 = (FRHIResource *)*plVar2;
    *plVar2 = (TVar1.Reference)->_padding_;
    (TVar1.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return;
}


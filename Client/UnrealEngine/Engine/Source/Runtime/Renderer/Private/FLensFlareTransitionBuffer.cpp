// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// InitRHI @ 145187af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLensFlareTransitionBuffer::InitRHI(FLensFlareTransitionBuffer *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  TRefCountPtr<FRHIBuffer> TVar1;
  undefined1 *puVar2;
  FRHIResource *local_res8;
  
  RHIGetDefaultResourceState(StructuredBuffer|ShaderResource|UnorderedAccess|Static,false);
  TVar1 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  puVar2 = &this->field_0x20;
  if ((FRHIBuffer *)puVar2 != TVar1.Reference) {
    this_00 = *(FRHIResource **)puVar2;
    *(longlong *)puVar2 = (TVar1.Reference)->_padding_;
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


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// ~FNiagaraRibbonRenderingFrameViewResources @ 149336ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraRibbonRenderingFrameViewResources::~FNiagaraRibbonRenderingFrameViewResources
          (FNiagaraRibbonRenderingFrameViewResources *this)

{
  TUniformBufferRef<FNiagaraRibbonUniformParameters> TVar1;
  FRHIUniformBuffer *this_00;
  
  TVar1 = this->UniformBuffer;
  if (TVar1 != (TUniformBufferRef<FNiagaraRibbonUniformParameters>)0x0) {
    this->UniformBuffer = (TUniformBufferRef<FNiagaraRibbonUniformParameters>)0x0;
    FRHIResource::Release((FRHIResource *)TVar1);
  }
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->IndirectDrawBuffer).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->IndexBuffer).SharedReferenceCount.ReferenceController);
  if (this->UniformBuffer != (TUniformBufferRef<FNiagaraRibbonUniformParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->UniformBuffer);
  }
  TVar1 = (this->VertexFactory).NiagaraRibbonUniformBuffer;
  if (TVar1 != (TUniformBufferRef<FNiagaraRibbonUniformParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)TVar1);
  }
  this_00 = (this->VertexFactory).LooseParameterUniformBuffer.Reference;
  if (this_00 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexFactory::~FVertexFactory((FVertexFactory *)this);
  return;
}


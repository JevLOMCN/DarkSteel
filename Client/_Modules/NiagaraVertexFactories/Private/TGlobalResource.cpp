// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraVertexFactories
// Functions: 4

// ~TGlobalResource<FNiagaraCutoutVertexBuffer,1> @ 148dcd960

void __thiscall
TGlobalResource<FNiagaraCutoutVertexBuffer,1>::~TGlobalResource<FNiagaraCutoutVertexBuffer,1>
          (TGlobalResource<FNiagaraCutoutVertexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFNiagaraCutoutVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FNiagaraNullSortedIndicesVertexBuffer,1> @ 148dcd9b0

void __thiscall
TGlobalResource<FNiagaraNullSortedIndicesVertexBuffer,1>::
~TGlobalResource<FNiagaraNullSortedIndicesVertexBuffer,1>
          (TGlobalResource<FNiagaraNullSortedIndicesVertexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFNiagaraNullSortedIndicesVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FNiagaraRibbonVertexDeclaration,1> @ 148dcd9f0

void __thiscall
TGlobalResource<FNiagaraRibbonVertexDeclaration,1>::
~TGlobalResource<FNiagaraRibbonVertexDeclaration,1>
          (TGlobalResource<FNiagaraRibbonVertexDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFNiagaraRibbonVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FNiagaraRibbonVertexDeclaration__6B_;
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FNiagaraSpriteVertexDeclaration,1> @ 148dcda40

void __thiscall
TGlobalResource<FNiagaraSpriteVertexDeclaration,1>::
~TGlobalResource<FNiagaraSpriteVertexDeclaration,1>
          (TGlobalResource<FNiagaraSpriteVertexDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFNiagaraSpriteVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FNiagaraSpriteVertexDeclaration__6B_;
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 4

// ~TGlobalResource<FSlateInstancedVertexDeclaration,1> @ 145fe94f0

void __thiscall
TGlobalResource<FSlateInstancedVertexDeclaration,1>::
~TGlobalResource<FSlateInstancedVertexDeclaration,1>
          (TGlobalResource<FSlateInstancedVertexDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFSlateInstancedVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FSlateVertexDeclaration__6B_;
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FSlateMaskingVertexDeclaration,1> @ 145fe9540

void __thiscall
TGlobalResource<FSlateMaskingVertexDeclaration,1>::
~TGlobalResource<FSlateMaskingVertexDeclaration,1>
          (TGlobalResource<FSlateMaskingVertexDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFSlateMaskingVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FSlateMaskingVertexDeclaration__6B_;
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FSlateStencilClipVertexBuffer,1> @ 145fe9590

void __thiscall
TGlobalResource<FSlateStencilClipVertexBuffer,1>::~TGlobalResource<FSlateStencilClipVertexBuffer,1>
          (TGlobalResource<FSlateStencilClipVertexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFSlateStencilClipVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FSlateStencilClipVertexBuffer__6B_;
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FSlateVertexDeclaration,1> @ 145fe95d0

void __thiscall
TGlobalResource<FSlateVertexDeclaration,1>::~TGlobalResource<FSlateVertexDeclaration,1>
          (TGlobalResource<FSlateVertexDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFSlateVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FSlateVertexDeclaration__6B_;
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}


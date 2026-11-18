// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// ~FMeshCollectorResources @ 149336060

void __thiscall
FNiagaraRendererMeshes::FMeshCollectorResources::~FMeshCollectorResources
          (FMeshCollectorResources *this)

{
  this->_padding_ = (longlong)&___7FMeshCollectorResources_FNiagaraRendererMeshes__6B_;
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  if (this->UniformBuffer != (TUniformBufferRef<FNiagaraMeshUniformParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->UniformBuffer);
  }
  FVertexFactory::~FVertexFactory((FVertexFactory *)&this->VertexFactory);
  this->_padding_ = (longlong)&___7FOneFrameResource__6B_;
  return;
}

// ~FMeshCollectorResources @ 149389f10

void __thiscall
FNiagaraRendererSprites::FMeshCollectorResources::~FMeshCollectorResources
          (FMeshCollectorResources *this)

{
  FRHIShaderResourceView *pFVar1;
  FRHIUniformBuffer *pFVar2;
  
  this->_padding_ = (longlong)&___7FMeshCollectorResources_FNiagaraRendererSprites__6B_;
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  if (this->UniformBuffer != (TUniformBufferRef<FNiagaraSpriteUniformParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->UniformBuffer);
  }
  pFVar1 = (this->VertexFactory).SortedIndicesSRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->VertexFactory).CutoutGeometrySRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->VertexFactory).SpriteUniformBuffer.Reference;
  if (pFVar2 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->VertexFactory).LooseParameterUniformBuffer.Reference;
  if (pFVar2 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  FVertexFactory::~FVertexFactory((FVertexFactory *)&this->VertexFactory);
  this->_padding_ = (longlong)&___7FOneFrameResource__6B_;
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// ~IPooledRenderTarget @ 145d915a0

void __thiscall IPooledRenderTarget::~IPooledRenderTarget(IPooledRenderTarget *this)

{
  FRHIUnorderedAccessView *this_00;
  FRHITexture *pFVar1;
  
  this->_padding_ = (longlong)&___7IPooledRenderTarget__6B_;
  this_00 = (this->RenderTargetItem).UAV.Reference;
  if (this_00 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  pFVar1 = (this->RenderTargetItem).ShaderResourceTexture.Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->RenderTargetItem).TargetableTexture.Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
    return;
  }
  return;
}

// GetTransientTexture @ 145dbbce0

FRHITransientTexture * __thiscall
IPooledRenderTarget::GetTransientTexture(IPooledRenderTarget *this)

{
  return (FRHITransientTexture *)0x0;
}


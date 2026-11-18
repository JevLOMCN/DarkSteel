// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// FVertexBufferWithSRV @ 145defde0

FVertexBufferWithSRV * __thiscall
FVertexBufferWithSRV::FVertexBufferWithSRV(FVertexBufferWithSRV *this)

{
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FVertexBufferWithSRV__6B_;
  this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x105;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
  this->_padding_ = 0;
  (this->ShaderResourceViewRHI).Reference = (FRHIShaderResourceView *)0x0;
  (this->UnorderedAccessViewRHI).Reference = (FRHIUnorderedAccessView *)0x0;
  return this;
}

// ~FVertexBufferWithSRV @ 145df21d0

void __thiscall FVertexBufferWithSRV::~FVertexBufferWithSRV(FVertexBufferWithSRV *this)

{
  FRHIUnorderedAccessView *this_00;
  FRHIShaderResourceView *this_01;
  
  this->_padding_ = (longlong)&___7FVertexBufferWithSRV__6B_;
  this_00 = (this->UnorderedAccessViewRHI).Reference;
  if (this_00 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->ShaderResourceViewRHI).Reference;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  this->_padding_ = (longlong)&___7FVertexBuffer__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ReleaseRHI @ 145e21640

void __thiscall FVertexBufferWithSRV::ReleaseRHI(FVertexBufferWithSRV *this)

{
  FRHIShaderResourceView *this_00;
  FRHIUnorderedAccessView *this_01;
  FRHIResource *this_02;
  
  this_00 = (this->ShaderResourceViewRHI).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->ShaderResourceViewRHI).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->UnorderedAccessViewRHI).Reference;
  if (this_01 != (FRHIUnorderedAccessView *)0x0) {
    (this->UnorderedAccessViewRHI).Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
  }
  this_02 = (FRHIResource *)this->_padding_;
  if (this_02 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(this_02);
    return;
  }
  return;
}


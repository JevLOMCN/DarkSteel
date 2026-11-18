// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// FTextureWithSRV @ 145defcc0

FTextureWithSRV * __thiscall FTextureWithSRV::FTextureWithSRV(FTextureWithSRV *this)

{
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = -0x3810000020000000;
  this->_padding_ = (longlong)&___7FTextureWithSRV__6B_;
  this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x105;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
  (this->ShaderResourceViewRHI).Reference = (FRHIShaderResourceView *)0x0;
  return this;
}

// ~FTextureWithSRV @ 145df2120

void __thiscall FTextureWithSRV::~FTextureWithSRV(FTextureWithSRV *this)

{
  FRHIShaderResourceView *this_00;
  
  this->_padding_ = (longlong)&___7FTextureWithSRV__6B_;
  this_00 = (this->ShaderResourceViewRHI).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)&___7FTexture__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ReleaseRHI @ 145e215d0

void __thiscall FTextureWithSRV::ReleaseRHI(FTextureWithSRV *this)

{
  FRHIShaderResourceView *this_00;
  FRHIResource *pFVar1;
  
  this_00 = (this->ShaderResourceViewRHI).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->ShaderResourceViewRHI).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  pFVar1 = (FRHIResource *)this->_padding_;
  if (pFVar1 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(pFVar1);
  }
  pFVar1 = (FRHIResource *)this->_padding_;
  if (pFVar1 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(pFVar1);
  }
  pFVar1 = (FRHIResource *)this->_padding_;
  if (pFVar1 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(pFVar1);
  }
  return;
}


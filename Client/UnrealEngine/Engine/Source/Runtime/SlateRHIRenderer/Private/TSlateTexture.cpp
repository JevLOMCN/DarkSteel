// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 2

// ~TSlateTexture<TRefCountPtr<FRHITexture>_> @ 145fe9620

void __thiscall
TSlateTexture<TRefCountPtr<FRHITexture>_>::~TSlateTexture<TRefCountPtr<FRHITexture>_>
          (TSlateTexture<TRefCountPtr<FRHITexture>_> *this)

{
  FRHITexture *this_00;
  
  this->_padding_ = (longlong)&___7__TSlateTexture_V__TRefCountPtr_VFRHITexture______6B_;
  this_00 = (this->ShaderResource).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  *(undefined1 *)&this->_padding_ = 0x84;
  this->_padding_ = (longlong)&___7FSlateShaderResource__6B_;
  return;
}

// GetType @ 146018fc0

Type __thiscall
TSlateTexture<TRefCountPtr<FRHITexture>_>::GetType(TSlateTexture<TRefCountPtr<FRHITexture>_> *this)

{
  return NativeTexture;
}


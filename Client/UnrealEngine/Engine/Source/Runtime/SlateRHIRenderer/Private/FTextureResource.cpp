// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 12

// ~FTextureResource @ 145feb3d0

void __thiscall FTextureResource::~FTextureResource(FTextureResource *this)

{
  FRHITextureReference *this_00;
  
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  this_00 = (this->TextureReferenceRHI).Reference;
  if (this_00 != (FRHITextureReference *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FTexture::~FTexture((FTexture *)this);
  return;
}

// GetStreamableTextureResource @ 146016200

FStreamableTextureResource * __thiscall
FTextureResource::GetStreamableTextureResource(FTextureResource *this)

{
  return (FStreamableTextureResource *)0x0;
}

// GetStreamableTextureResource @ 146016210

FStreamableTextureResource * __thiscall
FTextureResource::GetStreamableTextureResource(FTextureResource *this)

{
  return (FStreamableTextureResource *)0x0;
}

// GetTexture2DArrayResource @ 146017510

FTexture2DArrayResource * __thiscall
FTextureResource::GetTexture2DArrayResource(FTextureResource *this)

{
  return (FTexture2DArrayResource *)0x0;
}

// GetTexture2DArrayResource @ 146017520

FTexture2DArrayResource * __thiscall
FTextureResource::GetTexture2DArrayResource(FTextureResource *this)

{
  return (FTexture2DArrayResource *)0x0;
}

// GetTexture2DResource @ 146017530

FTexture2DResource * __thiscall FTextureResource::GetTexture2DResource(FTextureResource *this)

{
  return (FTexture2DResource *)0x0;
}

// GetTexture2DResource @ 146017540

FTexture2DResource * __thiscall FTextureResource::GetTexture2DResource(FTextureResource *this)

{
  return (FTexture2DResource *)0x0;
}

// GetTexture3DResource @ 146017550

FTexture3DResource * __thiscall FTextureResource::GetTexture3DResource(FTextureResource *this)

{
  return (FTexture3DResource *)0x0;
}

// GetTexture3DResource @ 146017560

FTexture3DResource * __thiscall FTextureResource::GetTexture3DResource(FTextureResource *this)

{
  return (FTexture3DResource *)0x0;
}

// GetVirtualTexture2DResource @ 146019aa0

FVirtualTexture2DResource * __thiscall
FTextureResource::GetVirtualTexture2DResource(FTextureResource *this)

{
  return (FVirtualTexture2DResource *)0x0;
}

// GetVirtualTexture2DResource @ 146019ab0

FVirtualTexture2DResource * __thiscall
FTextureResource::GetVirtualTexture2DResource(FTextureResource *this)

{
  return (FVirtualTexture2DResource *)0x0;
}

// IsProxy @ 14601b700

bool __thiscall FTextureResource::IsProxy(FTextureResource *this)

{
  return false;
}


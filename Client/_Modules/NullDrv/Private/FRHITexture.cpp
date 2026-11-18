// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 8

// GetDefaultBindlessHandle @ 1446c5db0

FRHIDescriptorHandle __thiscall FRHITexture::GetDefaultBindlessHandle(FRHITexture *this)

{
  FRHIDescriptorHandle in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  *(undefined4 *)in_RDX = 0xffffffff;
  *(undefined1 *)((longlong)in_RDX + 4) = 9;
  return in_RDX;
}

// GetDesc @ 1446c5dd0

FRHITextureDesc * __thiscall FRHITexture::GetDesc(FRHITexture *this)

{
  return &this->TextureDesc;
}

// GetNativeResource @ 1446c5eb0

void * __thiscall FRHITexture::GetNativeResource(FRHITexture *this)

{
  return (void *)0x0;
}

// GetNativeShaderResourceView @ 1446c5ec0

void * __thiscall FRHITexture::GetNativeShaderResourceView(FRHITexture *this)

{
  return (void *)0x0;
}

// GetTextureBaseRHI @ 1446c6030

void * __thiscall FRHITexture::GetTextureBaseRHI(FRHITexture *this)

{
  return (void *)0x0;
}

// GetTextureReference @ 1446c6040

FRHITextureReference * __thiscall FRHITexture::GetTextureReference(FRHITexture *this)

{
  return (FRHITextureReference *)0x0;
}

// GetValidationTrackerResource @ 1446c6080

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FResource * __thiscall FRHITexture::GetValidationTrackerResource(FRHITexture *this)

{
  FResource *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001446c6088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FResource *)(**(code **)(this->_padding_ + 8))(&this->_padding_);
  return pFVar1;
}

// GetWriteMaskProperties @ 1446c60a0

void __thiscall FRHITexture::GetWriteMaskProperties(FRHITexture *this,void **param_1,uint *param_2)

{
  *param_1 = (void *)0x0;
  *param_2 = 0;
  return;
}


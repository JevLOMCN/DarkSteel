// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 4

// ~FTextureMipDataProvider @ 145fb6930

void __thiscall FTextureMipDataProvider::~FTextureMipDataProvider(FTextureMipDataProvider *this)

{
  this->_padding_ = (longlong)&___7FTextureMipDataProvider__6B_;
  return;
}

// AbortPollMips @ 145fb9960

void __thiscall FTextureMipDataProvider::AbortPollMips(FTextureMipDataProvider *this)

{
  return;
}

// AbortPostprocessGPUMipData @ 145fb9970

void __thiscall FTextureMipDataProvider::AbortPostprocessGPUMipData(FTextureMipDataProvider *this)

{
  return;
}

// PostprocessGPUMipData @ 145fc6300

bool __thiscall
FTextureMipDataProvider::PostprocessGPUMipData
          (FTextureMipDataProvider *this,FTextureUpdateContext *param_1,
          TRefCountPtr<FRHITexture> *param_2,FTextureUpdateSyncOptions *param_3)

{
  return true;
}


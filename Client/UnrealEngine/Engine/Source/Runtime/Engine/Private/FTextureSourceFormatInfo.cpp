// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FTextureSourceFormatInfo @ 148444440

FTextureSourceFormatInfo * __thiscall
FTextureSourceFormatInfo::FTextureSourceFormatInfo
          (FTextureSourceFormatInfo *this,ETextureSourceFormat param_1,EPixelFormat param_2,
          wchar_t *param_3,int param_4,int param_5)

{
  this->NumComponents = param_4;
  this->BytesPerPixel = param_5;
  this->TextureSourceFormat = param_1;
  this->PixelFormat = param_2;
  this->Name = param_3;
  return this;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// SetDimension @ 145cbec30

FInitializer * __thiscall
FRHIViewDesc::FTextureSRV::FInitializer::SetDimension(FInitializer *this,ETextureDimension param_1)

{
  code *pcVar1;
  bool bVar2;
  FInitializer *pFVar3;
  
  if (param_1 == Texture2D) {
    this->field_0x2 = this->field_0x2 & 0x9f;
    this->field_0x2 = this->field_0x2 | 0x10;
  }
  else {
    if (param_1 == Texture2DArray) {
      this->field_0x2 = this->field_0x2 & 0xaf;
      this->field_0x2 = this->field_0x2 | 0x20;
      return this;
    }
    if (param_1 == Texture3D) {
      this->field_0x2 = this->field_0x2 & 0xdf;
      this->field_0x2 = this->field_0x2 | 0x50;
      return this;
    }
    if (param_1 == TextureCube) {
      this->field_0x2 = this->field_0x2 & 0xbf;
      this->field_0x2 = this->field_0x2 | 0x30;
      return this;
    }
    if (param_1 == TextureCubeArray) {
      this->field_0x2 = this->field_0x2 & 0xcf;
      this->field_0x2 = this->field_0x2 | 0x40;
      return this;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xba1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FInitializer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// SetDimension @ 145cbecf0

FInitializer * __thiscall
FRHIViewDesc::FTextureUAV::FInitializer::SetDimension(FInitializer *this,ETextureDimension param_1)

{
  code *pcVar1;
  bool bVar2;
  FInitializer *pFVar3;
  
  if (param_1 == Texture2D) {
    this->field_0x2 = this->field_0x2 & 0x9f;
    this->field_0x2 = this->field_0x2 | 0x10;
  }
  else {
    if (param_1 == Texture2DArray) {
      this->field_0x2 = this->field_0x2 & 0xaf;
      this->field_0x2 = this->field_0x2 | 0x20;
      return this;
    }
    if (param_1 == Texture3D) {
      this->field_0x2 = this->field_0x2 & 0xdf;
      this->field_0x2 = this->field_0x2 | 0x50;
      return this;
    }
    if (param_1 == TextureCube) {
      this->field_0x2 = this->field_0x2 & 0xbf;
      this->field_0x2 = this->field_0x2 | 0x30;
      return this;
    }
    if (param_1 == TextureCubeArray) {
      this->field_0x2 = this->field_0x2 & 0xcf;
      this->field_0x2 = this->field_0x2 | 0x40;
      return this;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xbfb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FInitializer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}


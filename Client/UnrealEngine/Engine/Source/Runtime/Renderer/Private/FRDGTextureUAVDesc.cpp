// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FRDGTextureUAVDesc @ 144c1e520

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTextureUAVDesc * __thiscall
FRDGTextureUAVDesc::FRDGTextureUAVDesc
          (FRDGTextureUAVDesc *this,FRDGTexture *param_1,uchar param_2,EPixelFormat param_3,
          ushort param_4,ushort param_5)

{
  if (param_3 == PF_Unknown) {
    param_3 = (param_1->Desc).field_0x34;
  }
  *(ushort *)((longlong)&this->_padding_ + 2) = param_4;
  *(ushort *)((longlong)&this->_padding_ + 4) = param_5;
  *(EPixelFormat *)&this->_padding_ = param_3;
  *(uchar *)((longlong)&this->_padding_ + 1) = param_2;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->Texture = param_1;
  return this;
}


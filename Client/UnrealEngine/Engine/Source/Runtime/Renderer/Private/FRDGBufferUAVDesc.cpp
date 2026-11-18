// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FRDGBufferUAVDesc @ 144b98240

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBufferUAVDesc * __thiscall
FRDGBufferUAVDesc::FRDGBufferUAVDesc(FRDGBufferUAVDesc *this,FRDGBuffer *param_1)

{
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->Buffer = param_1;
  if (((param_1->Desc).Usage & DrawIndirect) != None) {
    *(undefined1 *)&this->_padding_ = 0x1c;
  }
  return this;
}

// FRDGBufferUAVDesc @ 144c1e500

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBufferUAVDesc * __thiscall
FRDGBufferUAVDesc::FRDGBufferUAVDesc
          (FRDGBufferUAVDesc *this,FRDGBuffer *param_1,EPixelFormat param_2)

{
  *(EPixelFormat *)&this->_padding_ = param_2;
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0;
  this->Buffer = param_1;
  return this;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FRDGBufferSRVDesc @ 1448ed810

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBufferSRVDesc * __thiscall
FRDGBufferSRVDesc::FRDGBufferSRVDesc(FRDGBufferSRVDesc *this,FRDGBuffer *param_1)

{
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->Buffer = param_1;
  if (((param_1->Desc).Usage & DrawIndirect) != None) {
    *(undefined1 *)&this->_padding_ = 0x1c;
  }
  return this;
}

// FRDGBufferSRVDesc @ 144c1e4d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBufferSRVDesc * __thiscall
FRDGBufferSRVDesc::FRDGBufferSRVDesc
          (FRDGBufferSRVDesc *this,FRDGBuffer *param_1,EPixelFormat param_2)

{
  *(EPixelFormat *)&this->_padding_ = param_2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->Buffer = param_1;
  return this;
}


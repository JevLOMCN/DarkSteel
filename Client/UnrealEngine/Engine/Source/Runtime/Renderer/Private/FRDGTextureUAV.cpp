// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FRDGTextureUAV @ 14472e330

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTextureUAV * __thiscall
FRDGTextureUAV::FRDGTextureUAV
          (FRDGTextureUAV *this,wchar_t *param_1,FRDGTextureUAVDesc *param_2,
          ERDGUnorderedAccessViewFlags param_3)

{
  undefined1 uVar1;
  char cVar2;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0xffffffffffffffff;
  *(ERDGUnorderedAccessViewFlags *)&this->_padding_ = param_3;
  *(char *)&(this->Desc)._padding_ = (char)param_2->_padding_;
  *(undefined1 *)((longlong)&(this->Desc)._padding_ + 1) =
       *(undefined1 *)((longlong)&param_2->_padding_ + 1);
  *(undefined2 *)((longlong)&(this->Desc)._padding_ + 2) =
       *(undefined2 *)((longlong)&param_2->_padding_ + 2);
  *(undefined2 *)((longlong)&(this->Desc)._padding_ + 4) =
       *(undefined2 *)((longlong)&param_2->_padding_ + 4);
  uVar1 = *(undefined1 *)((longlong)&param_2->_padding_ + 6);
  *(undefined1 *)&(this->Desc)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Desc)._padding_ + 6) = uVar1;
  cVar2 = (char)param_2->_padding_;
  *(char *)&(this->Desc)._padding_ = cVar2;
  if (cVar2 != '\0') {
    *(undefined1 *)((longlong)&(this->Desc)._padding_ + 7) =
         *(undefined1 *)((longlong)&param_2->_padding_ + 7);
  }
  (this->Desc).Texture = param_2->Texture;
  return this;
}

// GetParent @ 14475eb40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTexture * __thiscall FRDGTextureUAV::GetParent(FRDGTextureUAV *this)

{
  return (this->Desc).Texture;
}


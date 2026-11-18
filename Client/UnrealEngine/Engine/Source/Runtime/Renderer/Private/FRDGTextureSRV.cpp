// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FRDGTextureSRV @ 14472e2a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTextureSRV * __thiscall
FRDGTextureSRV::FRDGTextureSRV(FRDGTextureSRV *this,wchar_t *param_1,FRDGTextureSRVDesc *param_2)

{
  char cVar1;
  longlong lVar2;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGTextureSRV__6B_;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0xffffffffffffffff;
  *(char *)&(this->Desc)._padding_ = (char)param_2->_padding_;
  *(undefined1 *)((longlong)&(this->Desc)._padding_ + 1) =
       *(undefined1 *)((longlong)&param_2->_padding_ + 1);
  *(undefined1 *)((longlong)&(this->Desc)._padding_ + 2) =
       *(undefined1 *)((longlong)&param_2->_padding_ + 2);
  *(undefined1 *)((longlong)&(this->Desc)._padding_ + 3) =
       *(undefined1 *)((longlong)&param_2->_padding_ + 3);
  *(undefined2 *)((longlong)&(this->Desc)._padding_ + 4) =
       *(undefined2 *)((longlong)&param_2->_padding_ + 4);
  *(undefined2 *)((longlong)&(this->Desc)._padding_ + 6) =
       *(undefined2 *)((longlong)&param_2->_padding_ + 6);
  lVar2 = param_2->_padding_;
  *(undefined1 *)((longlong)&(this->Desc)._padding_ + 2) = 0;
  *(char *)&(this->Desc)._padding_ = (char)lVar2;
  cVar1 = *(char *)((longlong)&param_2->_padding_ + 2);
  *(char *)((longlong)&(this->Desc)._padding_ + 2) = cVar1;
  if (cVar1 != '\0') {
    *(undefined1 *)((longlong)&(this->Desc)._padding_ + 1) =
         *(undefined1 *)((longlong)&param_2->_padding_ + 1);
  }
  (this->Desc).Texture = param_2->Texture;
  return this;
}

// GetParent @ 14475eb30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTexture * __thiscall FRDGTextureSRV::GetParent(FRDGTextureSRV *this)

{
  return (this->Desc).Texture;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// FRDGTextureSRVDesc @ 145d0ae50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTextureSRVDesc * __thiscall
FRDGTextureSRVDesc::FRDGTextureSRVDesc(FRDGTextureSRVDesc *this,FRDGTextureSRVDesc *param_1)

{
  char cVar1;
  longlong lVar2;
  
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  *(undefined1 *)((longlong)&this->_padding_ + 3) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 3);
  *(undefined2 *)((longlong)&this->_padding_ + 4) =
       *(undefined2 *)((longlong)&param_1->_padding_ + 4);
  *(undefined2 *)((longlong)&this->_padding_ + 6) =
       *(undefined2 *)((longlong)&param_1->_padding_ + 6);
  lVar2 = param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(char *)&this->_padding_ = (char)lVar2;
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 2);
  *(char *)((longlong)&this->_padding_ + 2) = cVar1;
  if (cVar1 != '\0') {
    *(undefined1 *)((longlong)&this->_padding_ + 1) =
         *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  }
  this->Texture = param_1->Texture;
  return this;
}


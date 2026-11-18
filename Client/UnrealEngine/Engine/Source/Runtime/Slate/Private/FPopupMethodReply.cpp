// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// operator= @ 1428c6120

FPopupMethodReply * __thiscall
FPopupMethodReply::operator=(FPopupMethodReply *this,FPopupMethodReply *param_1)

{
  longlong *plVar1;
  
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  plVar1 = &param_1->_padding_;
  if (&this->_padding_ != plVar1) {
    this->_padding_ = *plVar1;
    *plVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,(FSharedReferencer<1> *)&param_1->_padding_)
    ;
  }
  this->PopupMethod = param_1->PopupMethod;
  this->ShouldThrottle = param_1->ShouldThrottle;
  return this;
}

